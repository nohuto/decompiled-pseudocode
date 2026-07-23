/*
 * XREFs of ApiSetQuerySchema @ 0x18015C710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetQuerySchema(_DWORD *a1, _DWORD *a2)
{
  return ApiSetQuerySchemaInfo2((__int64)NtCurrentPeb()->ApiSetMap, a1, a2);
}
