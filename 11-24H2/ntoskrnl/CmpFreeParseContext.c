/*
 * XREFs of CmpFreeParseContext @ 0x1406F50D8
 * Callers:
 *     CmCreateKey @ 0x140A26874 (CmCreateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 */

void __fastcall CmpFreeParseContext(PPRIVILEGE_SET Privileges)
{
  CmpCleanupParseContext(Privileges, 0LL);
  CmSiFreeMemory(Privileges);
}
