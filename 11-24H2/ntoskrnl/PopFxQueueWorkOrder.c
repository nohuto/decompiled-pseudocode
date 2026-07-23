/*
 * XREFs of PopFxQueueWorkOrder @ 0x1403AA1E0
 * Callers:
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140493330 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B168C (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CEDAC (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 *     PopFxQueueWorkItem @ 0x1403AA2B4 (PopFxQueueWorkItem.c)
 */

__int64 __fastcall PopFxQueueWorkOrder(__int64 a1, ULONG_PTR a2)
{
  void *v2; // rdi
  __int64 result; // rax

  v2 = &PopFxSystemWorkPool;
  if ( (*(_DWORD *)(a2 + 864) & 0x1000) != 0 )
    v2 = &PopFxNoFaultSystemWorkPool;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 32));
  if ( (_DWORD)result == 1 )
  {
    PopFxReferenceDevice(a2);
    return PopFxQueueWorkItem(v2, a1, 0LL);
  }
  return result;
}
