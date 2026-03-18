/*
 * XREFs of Simulator_AllocAndInitTestData @ 0x140052074
 * Callers:
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     Simulator_Pre_RegEventHandler @ 0x140051FD0 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_NotifyNamespaceCollision @ 0x14006B25C (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_RefreshTree @ 0x14006B4BC (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400C82BC (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     memset @ 0x140070F40 (memset.c)
 */

void *Simulator_AllocAndInitTestData()
{
  void *Pool2; // rax
  void *v1; // rbx

  Pool2 = (void *)ExAllocatePool2(64LL, 80LL, 1145131841LL);
  v1 = Pool2;
  if ( Pool2 )
    memset(Pool2, 0, 0x50uLL);
  return v1;
}
