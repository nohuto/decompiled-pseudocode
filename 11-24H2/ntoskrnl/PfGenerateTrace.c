/*
 * XREFs of PfGenerateTrace @ 0x14074466C
 * Callers:
 *     PfpLogScenarioEventCallback @ 0x140743E00 (PfpLogScenarioEventCallback.c)
 *     PfSetSuperfetchInformation @ 0x1408F573C (PfSetSuperfetchInformation.c)
 *     PfpLogEventRequest @ 0x140AA3778 (PfpLogEventRequest.c)
 *     PfpPowerActionSleepSystemPhaseCallback @ 0x140B5CEA0 (PfpPowerActionSleepSystemPhaseCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     PfpPartitionAccessTraceLockAcquire @ 0x140B5D7F4 (PfpPartitionAccessTraceLockAcquire.c)
 *     PfpPartitionAccessTraceLockRelease @ 0x140B5D810 (PfpPartitionAccessTraceLockRelease.c)
 */

__int64 __fastcall PfGenerateTrace(__int64 a1, int a2)
{
  unsigned int v4; // ebp
  void *v5; // rdi
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  PfpPartitionAccessTraceLockAcquire();
  v4 = 0;
  if ( *(_QWORD *)(a1 + 168) )
  {
    if ( !a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
    KeResetEvent((PRKEVENT)(a1 + 224));
    KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
    v5 = *(void **)(a1 + 168);
    PsReferenceSiloContext(v5);
    PfpPartitionAccessTraceLockRelease(a1);
    Object[0] = (PVOID)(a1 + 224);
    Object[1] = v5;
    KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    ObfDereferenceObject(v5);
    if ( !a2 )
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
  }
  else
  {
    v4 = -1073741177;
    PfpPartitionAccessTraceLockRelease(a1);
  }
  return v4;
}
