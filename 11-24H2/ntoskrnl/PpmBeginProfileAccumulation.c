/*
 * XREFs of PpmBeginProfileAccumulation @ 0x1406FBD0C
 * Callers:
 *     PpmInitPolicyConfiguration @ 0x140C302E8 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmBeginProfileAccumulation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1016) = a2;
}
