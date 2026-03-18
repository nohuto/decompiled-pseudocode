/*
 * XREFs of MiWakeModifiedPageWriter @ 0x1402D0460
 * Callers:
 *     MiInsertPageInList @ 0x14022CB10 (MiInsertPageInList.c)
 *     MiInsertPagesInList @ 0x140271500 (MiInsertPagesInList.c)
 *     MiFlushAllPagesWorker @ 0x1402CF240 (MiFlushAllPagesWorker.c)
 *     MiFlushAllStoreSwapPages @ 0x1402D01D8 (MiFlushAllStoreSwapPages.c)
 *     MiObtainFreePages @ 0x1402D17D4 (MiObtainFreePages.c)
 *     MiAdjustModifiedPageLoad @ 0x1402D2864 (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  __int64 v4; // r8

  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 740) )
      KeSetEvent((PRKEVENT)(a1 + 744), 0, 0);
    if ( *(_DWORD *)(a1 + 768) != 18 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1000)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 992), 18, v4);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 776) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 784), 0, 0);
}
