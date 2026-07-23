/*
 * XREFs of MiConvertLargeFreePageToActive @ 0x1402EDE58
 * Callers:
 *     MiLargeFreePageToMdl @ 0x1402EF600 (MiLargeFreePageToMdl.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiConvertLargePfnToSmall @ 0x1402EE180 (MiConvertLargePfnToSmall.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertLargeFreePageToActive(__int64 a1)
{
  __int64 PfnPageSizeIndex; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v9; // rdi
  unsigned int v10; // r14d
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rcx

  PfnPageSizeIndex = (unsigned int)MiGetPfnPageSizeIndex(a1);
  v3 = MiPageSizes[PfnPageSizeIndex];
  v4 = 0xAAAAAAAAAAAAAAABuLL;
  v5 = 3;
  v6 = v3 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  v7 = a1 + 48 * v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(PfnPageSizeIndex) = 2;
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4, PfnPageSizeIndex);
  }
  v9 = (volatile signed __int32 *)(v7 + 24);
  do
  {
    v7 -= 48LL;
    v9 -= 12;
    LOBYTE(v6) = v6 - 1;
    if ( v7 == a1 )
      v5 = v5 & 0xFFFFFFFA | 4;
    v10 = 0;
    while ( _interlockedbittestandset64(v9, 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v9 < 0 );
    }
    MiConvertLargePfnToSmall(a1, v7, v5);
    _InterlockedAnd64((volatile signed __int64 *)v9, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v6 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        LOBYTE(v13) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v13, v11);
      }
    }
  }
  while ( v7 != a1 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
