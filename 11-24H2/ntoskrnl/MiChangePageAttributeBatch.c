/*
 * XREFs of MiChangePageAttributeBatch @ 0x1402668E4
 * Callers:
 *     MiConvertContiguousPages @ 0x140268C24 (MiConvertContiguousPages.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140414984 (MiChangePageAttributeAndZeroBatch.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiPerformFinalZeroing @ 0x1404F8564 (MiPerformFinalZeroing.c)
 *     MiChangeAwePageAttributes @ 0x140681768 (MiChangeAwePageAttributes.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14021F1A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiAbortCombineScan @ 0x140265104 (MiAbortCombineScan.c)
 *     MiGetPteLink @ 0x140268350 (MiGetPteLink.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1403AE894 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1403AEA10 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 *a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  char i; // r12
  __int64 PteLink; // r14
  unsigned __int64 v7; // r15
  int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  __int64 v15; // r12
  __int64 v16; // r14
  unsigned int v17; // ebp
  __int64 v18; // rbp
  _QWORD *MmInternal; // rdx
  __int64 v20; // r9
  int v21; // r11d
  int v22; // r8d
  int v23; // r10d
  int v24; // r8d
  unsigned __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  int v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  char v31; // [rsp+90h] [rbp+8h]

  v4 = *a1;
  v30 = *a1;
  for ( i = 17; v4 != 0x7FFFFFFFFFLL; i = v31 )
  {
    PteLink = v4;
    v7 = 0LL;
    v8 = 1;
    do
    {
      v9 = 48 * PteLink - 0x220000000000LL;
      PteLink = MiGetPteLink(*(_QWORD *)(v9 + 16));
      if ( v7 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
          break;
      }
      else if ( a4 )
      {
        v17 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v17 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v11) )
            {
              HvlNotifyLongSpinWait(v17);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v9 + 24) < 0 );
        }
      }
      else
      {
        i = MiLockPageInline(v9);
      }
      if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) != 0xC0 )
        v8 = 0;
      MiAbortCombineScan(v9);
      ++v7;
      if ( (unsigned __int8)i < 2u && (v7 & 0x3F) == 0 && KeShouldYieldProcessor() )
        break;
      v11 = 0xFFFFDE0000000000uLL;
    }
    while ( PteLink != 0x7FFFFFFFFFLL );
    v4 = v30;
    v31 = i;
    if ( v8 )
    {
      v14 = a2;
    }
    else
    {
      MiFlushEntireTbDueToAttributeChange(v11, v10, v12, v13);
      v14 = a2;
      if ( v7 >= (unsigned int)dword_140E2DB5C && a2 != 1 )
      {
        ++dword_140E2DB54;
        KeInvalidateAllCaches();
        v16 = 0LL;
        v15 = v30;
        goto LABEL_18;
      }
    }
    v15 = v30;
    v16 = 0LL;
    if ( v30 == 0x7FFFFFFFFFLL )
      break;
    while ( 1 )
    {
LABEL_18:
      v30 = v4;
      v18 = 48 * v15 - 0x220000000000LL;
      v15 = MiGetPteLink(*(_QWORD *)(v18 + 16));
      v29 = *(_DWORD *)(v18 + 32);
      v22 = BYTE2(v29) >> 6;
      BYTE2(v29) = (unsigned __int8)MmInternal | BYTE2(v29) & 0x3F;
      *(_DWORD *)(v18 + 32) = v29;
      if ( !v23 && !v8 && v22 == 1 && v14 != 1 )
      {
        ++dword_140E2DB58;
        v24 = 2;
        if ( v14 != 2 )
          v24 = v21;
        v25 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * (v20 >> 4), 0LL, v24 | 0xC0000000);
        KeInvalidateRangeAllCachesNoIpi(v25, 4096LL);
        CurrentPrcb = KeGetCurrentPrcb();
        MmInternal = CurrentPrcb->MmInternal;
        *MmInternal = 0LL;
        *(_QWORD *)(((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
        v14 = a2;
        if ( a2 == 3 )
          MiFlushEntireTbDueToAttributeChange(CurrentPrcb, MmInternal, v26, v27);
      }
      *(_QWORD *)(v18 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
      if ( a3 != -1 )
        *(_QWORD *)(v18 + 16) = a3;
      if ( ++v16 == v7 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v15 == 0x7FFFFFFFFFLL )
        goto LABEL_30;
    }
    LOBYTE(MmInternal) = v31;
    MiUnlockPage(v18, MmInternal);
    v4 = v15;
    v30 = v15;
LABEL_30:
    ;
  }
}
