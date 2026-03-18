/*
 * XREFs of MiConvertSmallPageRangeToLarge @ 0x1402C541C
 * Callers:
 *     MiFreeLargePageMemory @ 0x14038C050 (MiFreeLargePageMemory.c)
 *     MiFreeMdlPageRun @ 0x14038C69C (MiFreeMdlPageRun.c)
 *     MiRebuildLargePage @ 0x1403BC60C (MiRebuildLargePage.c)
 *     MiInitializeMdlBatchPages @ 0x140416570 (MiInitializeMdlBatchPages.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CAC68 (MiDeleteSubsectionLargePages.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1402C4D20 (MiConvertLockedSmallPageToLarge.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAnyPagesRemovalPending @ 0x140472790 (MiAnyPagesRemovalPending.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertSmallPageRangeToLarge(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  BOOL v5; // r13d
  unsigned __int64 v6; // r14
  char v7; // r15
  unsigned __int8 CurrentIrql; // bp
  __int64 v9; // rcx
  volatile signed __int32 *v10; // rdi
  unsigned int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v15; // rdx

  v3 = a1;
  v4 = 48 * a1 - 0x220000000000LL;
  v5 = (*(_BYTE *)(v4 + 34) & 7) != 6;
  v6 = v4 + 48 * MiPageSizes[a2];
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9);
  }
  if ( v4 < v6 )
  {
    v10 = (volatile signed __int32 *)(v4 + 24);
    do
    {
      v11 = 0;
      while ( _interlockedbittestandset64(v10, 0x3FuLL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
          {
            HvlNotifyLongSpinWait(v11);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)v10 < 0 );
      }
      MiConvertLockedSmallPageToLarge((__int64)(v10 - 6), v4, a2, v5);
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v7 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v15) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        v9 = 2LL;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v9) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v9);
        }
      }
      v10 += 12;
      ++v7;
    }
    while ( (unsigned __int64)(v10 - 6) < v6 );
    v3 = a1;
  }
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v12 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
      {
        HvlNotifyLongSpinWait(v12);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  if ( (unsigned int)MiAnyPagesRemovalPending(v3, a2) )
    *(_QWORD *)(v4 + 40) |= 0x20000000000uLL;
  LOBYTE(v13) = CurrentIrql;
  return MiUnlockPage(v4, v13);
}
