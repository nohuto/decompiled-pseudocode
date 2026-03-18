/*
 * XREFs of MiConvertActiveLargePageToSmall @ 0x14041F5E8
 * Callers:
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiInitializeFoundLargeNodePage @ 0x1404F869C (MiInitializeFoundLargeNodePage.c)
 *     MiUpdateLargePageSectionPfns @ 0x140673088 (MiUpdateLargePageSectionPfns.c)
 *     MiInitializeNonPagedPool @ 0x140C53CA4 (MiInitializeNonPagedPool.c)
 *     MiCreateKernelHalSlabRange @ 0x140C59210 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiConvertLargePfnToSmall @ 0x14041F790 (MiConvertLargePfnToSmall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiConvertActiveLargePageToSmall(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rcx
  __int64 v8; // r14
  unsigned int v9; // r12d
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v11; // rdi
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rcx

  v4 = MiPageSizes[(unsigned int)MiGetPfnPageSizeIndex(a1)];
  v6 = a1 + 48 * v4;
  v7 = 0xAAAAAAAAAAAAAAABuLL;
  v8 = v4 - 0x5555555555555555LL * ((a1 + 0x220000000000LL) >> 4);
  v9 = (a2 != 0) + 2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = 2;
    LOBYTE(v7) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v7, v5);
  }
  v11 = (volatile signed __int32 *)(v6 + 24);
  do
  {
    v6 -= 48LL;
    v11 -= 12;
    LOBYTE(v8) = v8 - 1;
    v12 = 0;
    while ( _interlockedbittestandset64(v11, 0x3FuLL) )
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
      while ( *(__int64 *)v11 < 0 );
    }
    MiConvertLargePfnToSmall(a1, v6, v9);
    _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v8 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = 2;
        LOBYTE(v15) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v15, v13);
      }
    }
  }
  while ( v6 != a1 );
  if ( KiIrqlFlags )
  {
    LOBYTE(v13) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
