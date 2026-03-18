/*
 * XREFs of MiSlabDemotionLowMemoryConditionUpdate @ 0x1402D1890
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140211CD0 (MiUnlinkPageFromListEx.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiUnlinkStandbyPage @ 0x140270760 (MiUnlinkStandbyPage.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiDecreaseAvailablePages @ 0x1402D1620 (MiDecreaseAvailablePages.c)
 *     MiFreeUnusedSlabPages @ 0x1402D398C (MiFreeUnusedSlabPages.c)
 *     MiIncreaseAvailablePages @ 0x1403F66D0 (MiIncreaseAvailablePages.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSlabCurrentTime @ 0x14048ED80 (MiGetSlabCurrentTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiSlabDemotionLowMemoryConditionUpdate(__int64 a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v4; // rax
  __int64 v5; // rdx

  v2 = a1;
  CurrentIrql = 17;
  if ( !a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 16192));
  v4 = *(_QWORD *)(v2 + 18688);
  if ( v4 >= 0x120 )
  {
    *(_QWORD *)(v2 + 18384) = 0LL;
  }
  else if ( v4 < 0xA0 && !*(_QWORD *)(v2 + 18384) )
  {
    *(_QWORD *)(v2 + 18384) = MiGetSlabCurrentTime();
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 16192));
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    __writecr8(CurrentIrql);
  }
}
