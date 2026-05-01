/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x1800963CC
 * Callers:
 *     SdbGetPathCustomSdb @ 0x180095F08 (SdbGetPathCustomSdb.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x180091F78 (RtlStringCchCatW.c)
 *     AslGuidToString @ 0x18009E170 (AslGuidToString.c)
 */

__int64 __fastcall SdbpGetCustomSdbFileName(_WORD *a1)
{
  int v2; // ebx

  *a1 = 0;
  v2 = AslGuidToString();
  if ( v2 < 0 || (v2 = RtlStringCchCatW(a1, 43LL, (__int64)L".sdb"), v2 < 0) )
    AslLogCallPrintf(1LL);
  else
    return 0;
  return (unsigned int)v2;
}
