/*
 * XREFs of CmpFreeParseContext @ 0x1406F30D8
 * Callers:
 *     CmCreateKey @ 0x140A1B2F4 (CmCreateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 */

void __fastcall CmpFreeParseContext(PPRIVILEGE_SET Privileges)
{
  CmpCleanupParseContext(Privileges, 0LL);
  CmSiFreeMemory(Privileges);
}
