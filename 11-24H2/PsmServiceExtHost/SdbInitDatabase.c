/*
 * XREFs of SdbInitDatabase @ 0x18009499C
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x18003F648 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 */

__int64 SdbInitDatabase()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  AslLogCallPrintf(3LL);
  return SdbInitDatabaseEx(v1, v0, 34404LL);
}
