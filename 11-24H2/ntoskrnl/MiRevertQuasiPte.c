/*
 * XREFs of MiRevertQuasiPte @ 0x140411510
 * Callers:
 *     MiUpdateUserMappings @ 0x140B6BB5C (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
