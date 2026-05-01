/*
 * XREFs of ShimExceptionHandler @ 0x18009C01C
 * Callers:
 *     SdbReleaseDatabase @ 0x180092CE8 (SdbReleaseDatabase.c)
 *     SdbInitDatabaseEx @ 0x1800949E4 (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall ShimExceptionHandler(_DWORD **a1)
{
  AslLogCallPrintf(1LL);
  return **a1 != -1073741571;
}
