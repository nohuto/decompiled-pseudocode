/*
 * XREFs of SdbGetPathResourceDll @ 0x180095B78
 * Callers:
 *     SdbOpenApphelpResourceFile @ 0x180095034 (SdbOpenApphelpResourceFile.c)
 * Callees:
 *     SdbpGetSystemSdbFilePath @ 0x1800968D4 (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathResourceDll(int a1, int a2, __int64 a3, int a4)
{
  return (int)SdbpGetSystemSdbFilePath(a1, a2, 11, a4, 0LL, 0LL) >= 0;
}
