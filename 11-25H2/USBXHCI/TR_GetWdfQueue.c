/*
 * XREFs of TR_GetWdfQueue @ 0x140035838
 * Callers:
 *     Endpoint_Create @ 0x140080B84 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_GetWdfQueue(__int64 a1)
{
  return *(_QWORD *)(a1 + 72);
}
