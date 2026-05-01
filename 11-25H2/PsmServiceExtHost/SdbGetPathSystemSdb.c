/*
 * XREFs of SdbGetPathSystemSdb @ 0x180095BA4
 * Callers:
 *     SdbInitDatabaseEx @ 0x180094584 (SdbInitDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x180095BCC (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbpGetSystemSdbFilePath @ 0x1800968D4 (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathSystemSdb(int a1, int a2, int a3, __int64 a4)
{
  return (int)SdbpGetSystemSdbFilePath(a1, a2, a3, a4, 0LL, a4) >= 0;
}
