/*
 * XREFs of ShimExceptionHandler @ 0x18009BD2C
 * Callers:
 *     SdbReleaseDatabase @ 0x180092888 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseEx @ 0x180094584 (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall ShimExceptionHandler(_DWORD **a1)
{
  AslLogCallPrintf(1LL);
  return **a1 != -1073741571;
}
