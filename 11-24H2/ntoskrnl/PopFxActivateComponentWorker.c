/*
 * XREFs of PopFxActivateComponentWorker @ 0x1402AE658
 * Callers:
 *     PopFxActivateComponent @ 0x1402AE4EC (PopFxActivateComponent.c)
 *     PopFxIdleWorkerTail @ 0x1404E22FC (PopFxIdleWorkerTail.c)
 * Callees:
 *     PopFxActivateComponentDependencies @ 0x1402AE240 (PopFxActivateComponentDependencies.c)
 *     PopFxCompleteComponentActivation @ 0x1402BFDF0 (PopFxCompleteComponentActivation.c)
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopPluginComponentActive @ 0x1402C0850 (PopPluginComponentActive.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     PopFxDeviceCriticalRegionEnter @ 0x1405CE580 (PopFxDeviceCriticalRegionEnter.c)
 *     PopFxDeviceCriticalRegionLeave @ 0x1405CE5B0 (PopFxDeviceCriticalRegionLeave.c)
 */

__int64 __fastcall PopFxActivateComponentWorker(ULONG_PTR a1, __int64 a2, unsigned __int8 a3, void *a4)
{
  ULONG_PTR v8; // rcx
  bool v9; // al
  __int64 v10; // r8

  PopFxDeviceCriticalRegionEnter();
  PopFxReferenceDevice(v8);
  v9 = PopFxActivateComponentDependencies(a2, a3);
  if ( a3 )
  {
    PopFxCompleteComponentActivation(a1);
  }
  else if ( v9 )
  {
    LOBYTE(v10) = 1;
    if ( (unsigned __int8)PopPluginComponentActive(a1, *(unsigned int *)(a2 + 16), v10, a4) == 1 )
      PopFxProcessWork(0LL, a4);
  }
  return PopFxDeviceCriticalRegionLeave(a1);
}
