/*
 * XREFs of MiChangePageAttributeBatch @ 0x1403B70F4
 * Callers:
 *     MiConvertContiguousPages @ 0x140224560 (MiConvertContiguousPages.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiChangePageAttributeAndZeroBatch @ 0x140417430 (MiChangePageAttributeAndZeroBatch.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiPerformFinalZeroing @ 0x1404F5DB0 (MiPerformFinalZeroing.c)
 *     MiChangeAwePageAttributes @ 0x140675F48 (MiChangeAwePageAttributes.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026F550 (MiFlushEntireTbDueToAttributeChange.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14026F580 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAbortCombineScan @ 0x1403B7B64 (MiAbortCombineScan.c)
 *     MiGetPteLink @ 0x1403B7C30 (MiGetPteLink.c)
 */

void __fastcall MiChangePageAttributeBatch(__int64 *a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  char i; // r12
  __int64 PteLink; // r14
  unsigned __int64 v7; // r15
  int v8; // r13d
  __int64 v9; // rdi
  int v10; // edi
  __int64 v11; // r12
  __int64 v12; // r14
  int v13; // ebp
  __int64 v14; // rbp
  __int64 v15; // r9
  int v16; // r11d
  int v17; // r8d
  char v18; // dl
  int v19; // r10d
  int v20; // r8d
  unsigned __int64 v21; // rdi
  int v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  unsigned __int8 v24; // [rsp+90h] [rbp+8h]

  v4 = *a1;
  v23 = *a1;
  for ( i = 17; v4 != 0x7FFFFFFFFFLL; i = v24 )
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
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait();
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
    }
    while ( ((unsigned __int8)i >= 2u || (v7 & 0x3F) != 0 || !KeShouldYieldProcessor()) && PteLink != 0x7FFFFFFFFFLL );
    v4 = v23;
    v24 = i;
    if ( v8 )
    {
      v10 = a2;
    }
    else
    {
      MiFlushEntireTbDueToAttributeChange();
      v10 = a2;
      if ( v7 >= (unsigned int)dword_140E2D91C && a2 != 1 )
      {
        ++dword_140E2D914;
        KeInvalidateAllCaches();
        v12 = 0LL;
        v11 = v23;
        goto LABEL_21;
      }
    }
    v11 = v23;
    v12 = 0LL;
    if ( v23 == 0x7FFFFFFFFFLL )
      break;
    while ( 1 )
    {
LABEL_21:
      v23 = v4;
      v14 = 48 * v11 - 0x220000000000LL;
      v11 = MiGetPteLink(*(_QWORD *)(v14 + 16));
      v22 = *(_DWORD *)(v14 + 32);
      v17 = BYTE2(v22) >> 6;
      BYTE2(v22) = v18 | BYTE2(v22) & 0x3F;
      *(_DWORD *)(v14 + 32) = v22;
      if ( !v19 && !v8 && v17 == 1 && v10 != 1 )
      {
        ++dword_140E2D918;
        v20 = 2;
        if ( v10 != 2 )
          v20 = v16;
        v21 = MiMapPageInHyperSpaceWorker(0xAAAAAAAAAAAAAAABuLL * (v15 >> 4), 0LL, v20 | 0xC0000000);
        KeInvalidateRangeAllCachesNoIpi(v21, 0x1000u);
        *(_QWORD *)KeGetCurrentPrcb()->MmInternal = 0LL;
        *(_QWORD *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = CLFS_LSN_NULL_EXT;
        v10 = a2;
        if ( a2 == 3 )
          MiFlushEntireTbDueToAttributeChange();
      }
      *(_QWORD *)(v14 + 24) &= 0xC7FFFFFFFFFFFFFFuLL;
      if ( a3 != -1 )
        *(_QWORD *)(v14 + 16) = a3;
      if ( ++v12 == v7 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v11 == 0x7FFFFFFFFFLL )
        goto LABEL_33;
    }
    MiUnlockPage(v14, v24);
    v4 = v11;
    v23 = v11;
LABEL_33:
    ;
  }
}
