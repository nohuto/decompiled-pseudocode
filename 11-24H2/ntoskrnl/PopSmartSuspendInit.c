/*
 * XREFs of PopSmartSuspendInit @ 0x140C33FE0
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopSmartSuspendResetData @ 0x1406F99A0 (PopSmartSuspendResetData.c)
 */

__int64 PopSmartSuspendInit()
{
  __int64 v0; // rdi
  _QWORD *v1; // rbx
  __int64 result; // rax

  v0 = 16LL;
  v1 = &PopSmartSuspendDecisionQueue;
  do
  {
    result = PopSmartSuspendResetData(v1);
    v1 += 12;
    --v0;
  }
  while ( v0 );
  PopSmartSuspendQueueHead = 0;
  PopSmartSuspendDecision = (__int64)&PopSmartSuspendDecisionQueue;
  return result;
}
