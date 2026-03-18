/*
 * XREFs of XilRegister_GetContextSize @ 0x140032E84
 * Callers:
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilRegister_GetContextSize(__int64 a1)
{
  return (*(_DWORD *)(a1 + 104) >> 2) & 1;
}
