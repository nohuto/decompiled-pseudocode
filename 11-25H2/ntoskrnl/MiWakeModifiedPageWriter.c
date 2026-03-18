/*
 * XREFs of MiWakeModifiedPageWriter @ 0x1403C1310
 * Callers:
 *     MiInsertPageInList @ 0x14021AFB0 (MiInsertPageInList.c)
 *     MiInsertPagesInList @ 0x14024F050 (MiInsertPagesInList.c)
 *     MiFlushAllPagesWorker @ 0x1403A75B4 (MiFlushAllPagesWorker.c)
 *     MiObtainFreePages @ 0x1403BF484 (MiObtainFreePages.c)
 *     MiFlushAllStoreSwapPages @ 0x1403C1088 (MiFlushAllStoreSwapPages.c)
 *     MiAdjustModifiedPageLoad @ 0x14049364C (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020E620 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 740) )
      KeSetEvent((PRKEVENT)(a1 + 744), 0, 0);
    if ( *(_DWORD *)(a1 + 768) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 992), 18);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 776) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 784), 0, 0);
}
