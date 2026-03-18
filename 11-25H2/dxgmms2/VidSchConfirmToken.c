/*
 * XREFs of VidSchConfirmToken @ 0x14002F410
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     VidSchiFlushPendingTokenList @ 0x14002906C (VidSchiFlushPendingTokenList.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x14002A1D8 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 */

void __fastcall VidSchConfirmToken(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _VIDSCH_GLOBAL *v13; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  char v15; // [rsp+40h] [rbp-30h]
  int v16; // [rsp+44h] [rbp-2Ch]
  _QWORD v17[4]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v18; // [rsp+68h] [rbp-8h]

  if ( a2 != -1 )
  {
    v6 = *a4;
    v18 = 0;
    v17[0] = (char *)a1 + 1984;
    v8 = a3;
    v9 = a2;
    AcquireSpinLock::Acquire((Acquire *)v17);
    v13 = a1;
    v14[1] = v14;
    v14[0] = v14;
    v10 = *((_QWORD *)a1 + v9 + 429);
    v15 = 0;
    v16 = 2;
    v11 = *(int *)(v10 + 304 * v8 + 188);
    if ( (int)v11 <= -1 )
      goto LABEL_13;
    v12 = *((_QWORD *)a1 + 445) + 160 * v11;
    if ( !v12
      || *(_DWORD *)(v12 + 112) != 1
      || !*(_BYTE *)(v12 + 97)
      || *(_QWORD *)v12 != v6
      || *(_QWORD *)(v12 + 8) != a5
      || *(_QWORD *)(v12 + 88) != a6 )
    {
      goto LABEL_13;
    }
    *(_BYTE *)(v12 + 98) = 1;
    if ( VidSchiCheckPlaneIndependentFlipCondition(a1, v9, v8) )
      VidSchiFlushPendingTokenList((struct HwQueueStagingList *)&v13, a1, v9, v8);
    if ( !v15 && v16 )
LABEL_13:
      HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v13, 0LL);
    AcquireSpinLock::Release((AcquireSpinLock *)v17);
  }
}
