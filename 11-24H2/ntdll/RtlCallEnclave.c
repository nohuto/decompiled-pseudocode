/*
 * XREFs of RtlCallEnclave @ 0x180165E30
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D8BA0 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8CB0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x180162EE0 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
