/*
 * XREFs of XilRegister_GetContextSize @ 0x140034A14
 * Callers:
 *     Endpoint_Create @ 0x140080B84 (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilRegister_GetContextSize(__int64 a1)
{
  return (*(_DWORD *)(a1 + 104) >> 2) & 1;
}
