/*
 * XREFs of MiConvertSmallPageRangeToLarge @ 0x14034F90C
 * Callers:
 *     MiFreeMdlPageRun @ 0x1402189BC (MiFreeMdlPageRun.c)
 *     MiFreeLargePageMemory @ 0x14021B56C (MiFreeLargePageMemory.c)
 *     MiInitializeMdlBatchPages @ 0x140393678 (MiInitializeMdlBatchPages.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiConvertLockedSmallPageToLarge @ 0x14034ED10 (MiConvertLockedSmallPageToLarge.c)
 *     MiAnyPagesRemovalPending @ 0x14046B54C (MiAnyPagesRemovalPending.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertSmallPageRangeToLarge(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
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
  __int64 v14; // rdx
  __int64 v15; // rcx

  v2 = a2;
  v3 = a1;
  v4 = 48 * a1 - 0x220000000000LL;
  v5 = (*(_BYTE *)(v4 + 34) & 7) != 6;
  v6 = v4 + 48 * MiPageSizes[(unsigned int)a2];
  v7 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9, a2);
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
            && KiCheckVpBackingLongSpinWaitHypercall() )
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
      MiConvertLockedSmallPageToLarge((__int64)(v10 - 6), v4, v2, v5);
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v7 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          LOBYTE(v14) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        v15 = 2LL;
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v14) = 2;
          LOBYTE(v15) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v15, v14);
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
        && KiCheckVpBackingLongSpinWaitHypercall() )
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
  if ( (unsigned int)MiAnyPagesRemovalPending(v3, v2) )
    *(_QWORD *)(v4 + 40) |= 0x20000000000uLL;
  return MiUnlockPage(v4, CurrentIrql);
}
