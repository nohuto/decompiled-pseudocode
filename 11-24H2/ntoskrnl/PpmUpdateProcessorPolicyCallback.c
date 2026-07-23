/*
 * XREFs of PpmUpdateProcessorPolicyCallback @ 0x1404A2750
 * Callers:
 *     <none>
 * Callees:
 *     PpmUpdateTargetProcessorPolicy @ 0x1404A277C (PpmUpdateTargetProcessorPolicy.c)
 */

__int64 __fastcall PpmUpdateProcessorPolicyCallback(__int64 a1, __int64 a2, __int64 a3)
{
  PpmUpdateTargetProcessorPolicy(*(_QWORD *)(a1 + 35248), *(_QWORD *)(a1 + 35256), a2, a3);
  return 0LL;
}
