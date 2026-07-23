/*
 * XREFs of ApiSetGetImplementationHost @ 0x18015F7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ApiSetGetImplementationHost(const CHAR *a1, char *a2, _OWORD *a3)
{
  return ApiSetResolveToHost2((__int64)NtCurrentPeb()->ApiSetMap, a1, a2, a3);
}
