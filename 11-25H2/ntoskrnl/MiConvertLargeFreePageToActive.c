/*
 * XREFs of MiConvertLargeFreePageToActive @ 0x14049FCE4
 * Callers:
 *     MiLargeFreePageToMdl @ 0x14049FBFC (MiLargeFreePageToMdl.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiConvertLargePfnToSmall @ 0x14038A700 (MiConvertLargePfnToSmall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertLargeFreePageToActive(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v8; // rdi
  int v9; // r14d
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rcx

  v2 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  v3 = 0xAAAAAAAAAAAAAAABuLL;
  v4 = 3;
  v5 = v2 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  v6 = a1 + 48 * v2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3);
  }
  v8 = (volatile signed __int32 *)(v6 + 24);
  do
  {
    v6 -= 48LL;
    v8 -= 12;
    LOBYTE(v5) = v5 - 1;
    if ( v6 == a1 )
      v4 = v4 & 0xFFFFFFFA | 4;
    v9 = 0;
    while ( _interlockedbittestandset64(v8, 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)v8 < 0 );
    }
    MiConvertLargePfnToSmall(a1, v6, v4);
    _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v5 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v12);
      }
    }
  }
  while ( v6 != a1 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
