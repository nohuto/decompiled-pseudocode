/*
 * XREFs of MiWakeModifiedPageWriter @ 0x140261468
 * Callers:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 *     MiFlushAllStoreSwapPages @ 0x1402611E0 (MiFlushAllStoreSwapPages.c)
 *     MiObtainFreePages @ 0x1402616B4 (MiObtainFreePages.c)
 *     MiFlushAllPagesWorker @ 0x140263A34 (MiFlushAllPagesWorker.c)
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiAdjustModifiedPageLoad @ 0x140353ADC (MiAdjustModifiedPageLoad.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 */

LONG __fastcall MiWakeModifiedPageWriter(__int64 a1, __int64 a2)
{
  if ( a2 == -1 )
  {
    if ( *(_DWORD *)(a1 + 740) )
      KeSetEvent((PRKEVENT)(a1 + 744), 0, 0);
    if ( *(_DWORD *)(a1 + 768) != 18 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000)) )
    {
      KeSetActualBasePriorityThread(*(_QWORD *)(a1 + 992));
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1000));
    }
  }
  else
  {
    *(_QWORD *)(a1 + 776) = a2;
  }
  return KeSetEvent((PRKEVENT)(a1 + 784), 0, 0);
}
