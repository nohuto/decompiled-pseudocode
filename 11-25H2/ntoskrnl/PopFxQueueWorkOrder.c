/*
 * XREFs of PopFxQueueWorkOrder @ 0x1402812E8
 * Callers:
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140498E30 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1404B75D8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopFxIssueDirectedPowerTransition @ 0x1405CCEDC (PopFxIssueDirectedPowerTransition.c)
 * Callees:
 *     PopFxReferenceDevice @ 0x140281350 (PopFxReferenceDevice.c)
 *     PopFxQueueWorkItem @ 0x1402813BC (PopFxQueueWorkItem.c)
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
