/*
 * XREFs of RtlCallEnclave @ 0x1801673C0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D8B40 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800D8C50 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x180164470 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
