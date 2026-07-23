/*
 * XREFs of MiChangePageAttributeBatch @ 0x1403A8860
 * Callers:
 *     MiChangePageAttributeAndZeroBatch @ 0x1402708E0 (MiChangePageAttributeAndZeroBatch.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiConvertContiguousPages @ 0x1403932BC (MiConvertContiguousPages.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 *     MiPerformFinalZeroing @ 0x1404F5E44 (MiPerformFinalZeroing.c)
 *     MiChangeAwePageAttributes @ 0x140682958 (MiChangeAwePageAttributes.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14039D220 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x14039D290 (KeInvalidateAllCaches.c)
 *     MiGetPteLink @ 0x1403A7E10 (MiGetPteLink.c)
 *     MiAbortCombineScan @ 0x1403A9DB0 (MiAbortCombineScan.c)
 */

void __fastcall MiChangePageAttributeBatch(unsigned __int64 *a1, int a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  char i; // r12
  unsigned __int64 PteLink; // r14
  unsigned __int64 v7; // r15
  int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  unsigned __int64 v14; // r12
  __int64 v15; // r14
  unsigned int v16; // ebp
  __int64 v17; // rbp
  __int64 v18; // r9
  int v19; // r11d
  int v20; // r8d
  char v21; // dl
  int v22; // r10d
  int v23; // r8d
  unsigned __int64 v24; // rdi
  int v25; // [rsp+28h] [rbp-60h]
  unsigned __int64 v26; // [rsp+30h] [rbp-58h]
  unsigned __int8 v27; // [rsp+90h] [rbp+8h]

  v4 = *a1;
  v26 = *a1;
  for ( i = 17; v4 != 0x7FFFFFFFFFLL; i = v27 )
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
        v16 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v16 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v16);
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
        i = MiLockPageInline(v9, v10, v11, v12);
      }
      if ( (HIWORD(*(_DWORD *)(v9 + 32)) & 0xC0) != 0xC0 )
        v8 = 0;
      MiAbortCombineScan(v9);
      ++v7;
    }
    while ( ((unsigned __int8)i >= 2u || (v7 & 0x3F) != 0 || !KeShouldYieldProcessor()) && PteLink != 0x7FFFFFFFFFLL );
    v4 = v26;
    v27 = i;
    if ( v8 )
    {
      v13 = a2;
    }
    else
    {
      MiFlushEntireTbDueToAttributeChange();
      v13 = a2;
      if ( v7 >= (unsigned int)dword_140E2DC9C && a2 != 1 )
      {
        ++dword_140E2DC94;
        KeInvalidateAllCaches();
        v15 = 0LL;
        v14 = v26;
        goto LABEL_18;
      }
    }
    v14 = v26;
    v15 = 0LL;
    if ( v26 == 0x7FFFFFFFFFLL )
      break;
    while ( 1 )
    {
LABEL_18:
      v26 = v4;
      v17 = 48 * v14 - 0x220000000000LL;
      v14 = MiGetPteLink(*(_QWORD *)(v17 + 16));
      v25 = *(_DWORD *)(v17 + 32);
      v20 = BYTE2(v25) >> 6;
      BYTE2(v25) = v21 | BYTE2(v25) & 0x3F;
      *(_DWORD *)(v17 + 32) = v25;
      if ( !v22 && !v8 && v20 == 1 && v13 != 1 )
      {
        ++dword_140E2DC98;
        v23 = 2;
        if ( v13 != 2 )
          v23 = v19;
        v24 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * (v18 >> 4), 0LL, v23 | 0xC0000000);
        KeInvalidateRangeAllCachesNoIpi(v24, 0x1000u);
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
        v13 = a2;
        if ( a2 == 3 )
          MiFlushEntireTbDueToAttributeChange();
      }
      *(_QWORD *)(v17 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
      if ( a3 != -1 )
        *(_QWORD *)(v17 + 16) = a3;
      if ( ++v15 == v7 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v14 == 0x7FFFFFFFFFLL )
        goto LABEL_30;
    }
    MiUnlockPage(v17, v27);
    v4 = v14;
    v26 = v14;
LABEL_30:
    ;
  }
}
