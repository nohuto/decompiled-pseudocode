/*
 * XREFs of VidSchExitIndependentFlip @ 0x1400214E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14001FB70 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchExitIndependentFlipInternal @ 0x1400215F8 (VidSchExitIndependentFlipInternal.c)
 */

__int64 __fastcall VidSchExitIndependentFlip(
        __int64 a1,
        __int64 a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7,
        _DWORD *a8,
        _LUID DestinationLuid)
{
  _DWORD *v9; // rbx
  _QWORD *v11; // rdi
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-29h] BYREF
  char v16; // [rsp+58h] [rbp-19h]
  int v17; // [rsp+5Ch] [rbp-15h]
  _QWORD v18[4]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v19; // [rsp+80h] [rbp+Fh]
  __int64 v20; // [rsp+B0h] [rbp+3Fh] BYREF

  v9 = a8;
  v11 = (_QWORD *)DestinationLuid;
  *a8 = 0;
  *v11 = 0LL;
  if ( *(_BYTE *)(a1 + 47) )
  {
    DestinationLuid = 0LL;
    RtlCopyLuid(&DestinationLuid, a3);
    v20 = 0LL;
    v19 = 0;
    v18[0] = a1 + 1984;
    LOBYTE(a8) = 0;
    AcquireSpinLock::Acquire((Acquire *)v18);
    v14 = a1;
    v16 = 0;
    v15[1] = v15;
    v17 = 2;
    v15[0] = v15;
    ((void (__fastcall *)(__int64 *, __int64, _LUID *, __int64, int, char, _DWORD **, __int64 *))VidSchExitIndependentFlipInternal)(
      &v14,
      a1,
      &DestinationLuid,
      a4,
      a6,
      a7,
      &a8,
      &v20);
    if ( !v16 )
    {
      if ( v17 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v14, 0LL);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v18);
    *v9 = (unsigned __int8)a8;
    result = v20;
    *v11 = v20;
  }
  return result;
}
