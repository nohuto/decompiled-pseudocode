/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1406F994C
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140C32408 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1016) = a2;
}
