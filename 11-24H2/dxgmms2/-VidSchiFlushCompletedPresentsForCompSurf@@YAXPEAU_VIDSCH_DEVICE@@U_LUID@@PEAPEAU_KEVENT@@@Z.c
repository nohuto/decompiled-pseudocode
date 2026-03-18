/*
 * XREFs of ?VidSchiFlushCompletedPresentsForCompSurf@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@PEAPEAU_KEVENT@@@Z @ 0x14005433C
 * Callers:
 *     VidSchCancelPresentAtFlips @ 0x140048750 (VidSchCancelPresentAtFlips.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1400122B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x14003EEEC (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x140054454 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 */

void __fastcall VidSchiFlushCompletedPresentsForCompSurf(
        struct _VIDSCH_DEVICE *a1,
        struct _LUID a2,
        struct _KEVENT **a3)
{
  __int64 v3; // rdi
  DWORD LowPart; // ebx
  int v6; // r10d
  LONG HighPart; // r11d
  __int64 v8; // r9
  __int64 v9; // rdx
  _BYTE v10[4]; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-15h]
  unsigned int v12; // [rsp+38h] [rbp-11h]
  __int64 v13; // [rsp+40h] [rbp-9h]
  __int64 v14; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp+7h] BYREF
  char v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+64h] [rbp+1Bh]
  _BYTE v18[56]; // [rsp+68h] [rbp+1Fh] BYREF
  bool v19; // [rsp+B0h] [rbp+67h] BYREF
  struct _LUID v20; // [rsp+B8h] [rbp+6Fh]

  v20 = a2;
  v3 = *((_QWORD *)a1 + 4);
  LowPart = a2.LowPart;
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v18, (unsigned __int64 *)(v3 + 1984), 1, 0);
  v6 = 0;
  if ( *(int *)(v3 + 3744) >= 0 )
  {
    HighPart = v20.HighPart;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = v8 + *(_QWORD *)(v3 + 3560);
      if ( *(_DWORD *)v9 == LowPart && *(_DWORD *)(v9 + 4) == HighPart && (unsigned int)(*(_DWORD *)(v9 + 112) - 1) <= 1 )
      {
        VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
          (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v10,
          (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v9);
        if ( *(_QWORD *)(*(_QWORD *)(v3 + 8LL * v11 + 3432) + 8LL * *(unsigned int *)(v13 + 4LL * v12) + 40) )
          break;
      }
      ++v6;
      v8 += 160LL;
      if ( v6 > *(_DWORD *)(v3 + 3744) )
        goto LABEL_10;
    }
    v14 = v3;
    v16 = 0;
    v15[1] = v15;
    v17 = 2;
    v15[0] = v15;
    v19 = 0;
    VidSchiObserveHwFlipQueueUpdates((struct HwQueueStagingList *)&v14, (struct _VIDSCH_GLOBAL *)v3, v11, a3, &v19);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v14);
  }
LABEL_10:
  AcquireSpinLock::Release((AcquireSpinLock *)v18);
}
