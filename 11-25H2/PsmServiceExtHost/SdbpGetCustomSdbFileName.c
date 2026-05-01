/*
 * XREFs of SdbpGetCustomSdbFileName @ 0x180095F6C
 * Callers:
 *     SdbGetPathCustomSdb @ 0x180095AA8 (SdbGetPathCustomSdb.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x180091B18 (RtlStringCchCatW.c)
 *     AslGuidToString @ 0x18009DE80 (AslGuidToString.c)
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
