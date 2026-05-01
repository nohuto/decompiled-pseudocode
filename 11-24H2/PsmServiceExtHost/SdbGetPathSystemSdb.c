/*
 * XREFs of SdbGetPathSystemSdb @ 0x180096004
 * Callers:
 *     SdbInitDatabaseEx @ 0x1800949E4 (SdbInitDatabaseEx.c)
 *     SdbResolveDatabaseEx @ 0x18009602C (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbpGetSystemSdbFilePath @ 0x180096D34 (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathSystemSdb(int a1, int a2, int a3, __int64 a4)
{
  return (int)SdbpGetSystemSdbFilePath(a1, a2, a3, a4, 0LL, a4) >= 0;
}
