/*
 * XREFs of SdbGetPathSystemSdb @ 0x1407F6A2C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1407F6A54 (SdbResolveDatabaseEx.c)
 * Callees:
 *     SdbpGetSystemSdbFilePath @ 0x1407F73F4 (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathSystemSdb(int a1, int a2, int a3, __int64 a4)
{
  return (int)SdbpGetSystemSdbFilePath(a1, a2, a3, a4, 0LL, a4) >= 0;
}
