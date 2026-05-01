/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x180098304
 * Callers:
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1800983F0 (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(__int64 a1, __int64 a2)
{
  unsigned int v3; // [rsp+40h] [rbp+18h] BYREF
  __int64 v4; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( (unsigned int)SdbpGetStringTableItemFromStringRef(a1, a2, &v3, &v4) && v3 && v4 )
    return SdbpGetMappedTagData(v4, v3);
  AslLogCallPrintf(1LL);
  return 0LL;
}
