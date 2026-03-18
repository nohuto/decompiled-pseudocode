/*
 * XREFs of PerfDiagpRequestState @ 0x140A8F8CC
 * Callers:
 *     PerfDiagpBootSystemProxyCallback @ 0x1407A0640 (PerfDiagpBootSystemProxyCallback.c)
 *     PerfDiagpSecondaryLogonProxyCallback @ 0x1407A0920 (PerfDiagpSecondaryLogonProxyCallback.c)
 *     PerfDiagpShutdownProxyCallback @ 0x1407A0950 (PerfDiagpShutdownProxyCallback.c)
 *     PerfDiagpBootUserProxyCallback @ 0x140A8F8A0 (PerfDiagpBootUserProxyCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void __fastcall PerfDiagpRequestState(int a1)
{
  __int64 Pool2; // rax

  if ( a1 < 8 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = 0LL;
      *(_QWORD *)(Pool2 + 16) = PerfDiagpProxyWorker;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_DWORD *)(Pool2 + 32) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
  }
}
