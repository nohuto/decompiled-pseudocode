/*
 * XREFs of MiConvertActiveLargePageToSmall @ 0x14038A558
 * Callers:
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F5EE8 (MiInitializeFoundLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x1406675D8 (MiUpdateLargePageSectionPfns.c)
 *     MiInitializeNonPagedPool @ 0x140C42A74 (MiInitializeNonPagedPool.c)
 *     MiCreateKernelHalSlabRange @ 0x140C47F30 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     MiGetPfnPageSizeIndex @ 0x140220DD0 (MiGetPfnPageSizeIndex.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiConvertLargePfnToSmall @ 0x14038A700 (MiConvertLargePfnToSmall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertActiveLargePageToSmall(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  unsigned int v8; // r12d
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v10; // rdi
  int v11; // ebp
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rcx

  v4 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  v5 = a1 + 48 * v4;
  v6 = 0xAAAAAAAAAAAAAAABuLL;
  v7 = v4 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  v8 = (a2 != 0) + 2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6);
  }
  v10 = (volatile signed __int32 *)(v5 + 24);
  do
  {
    v5 -= 48LL;
    v10 -= 12;
    LOBYTE(v7) = v7 - 1;
    v11 = 0;
    while ( _interlockedbittestandset64(v10, 0x3FuLL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
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
      while ( *(__int64 *)v10 < 0 );
    }
    MiConvertLargePfnToSmall(a1, v5, v8);
    _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v7 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v14) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v14);
      }
    }
  }
  while ( v5 != a1 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v12) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
