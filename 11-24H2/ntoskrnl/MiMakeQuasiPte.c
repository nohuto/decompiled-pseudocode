/*
 * XREFs of MiMakeQuasiPte @ 0x1404114F0
 * Callers:
 *     MiUpdateUserMappings @ 0x140B6BB5C (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
