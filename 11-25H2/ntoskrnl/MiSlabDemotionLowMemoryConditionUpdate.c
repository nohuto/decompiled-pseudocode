/*
 * XREFs of MiSlabDemotionLowMemoryConditionUpdate @ 0x1403BF540
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x14021A1F0 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiUnlinkStandbyPage @ 0x14024E2D0 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140343510 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140344B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeUnusedSlabPages @ 0x1403B5490 (MiFreeUnusedSlabPages.c)
 *     MiIncreaseAvailablePages @ 0x1403BCD40 (MiIncreaseAvailablePages.c)
 *     MiDecreaseAvailablePages @ 0x1403BF2D0 (MiDecreaseAvailablePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSlabCurrentTime @ 0x14045CB68 (MiGetSlabCurrentTime.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiSlabDemotionLowMemoryConditionUpdate(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  v2 = a1;
  CurrentIrql = 17;
  if ( !a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 16192));
  v7 = *(_QWORD *)(v2 + 18688);
  if ( v7 >= 0x120 )
  {
    *(_QWORD *)(v2 + 18384) = 0LL;
  }
  else if ( v7 < 0xA0 && !*(_QWORD *)(v2 + 18384) )
  {
    *(_QWORD *)(v2 + 18384) = MiGetSlabCurrentTime(v5, v4, v6);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 16192));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    __writecr8(CurrentIrql);
  }
}
