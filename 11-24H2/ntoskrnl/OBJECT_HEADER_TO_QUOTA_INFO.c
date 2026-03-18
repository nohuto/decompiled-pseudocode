/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x14040A520
 * Callers:
 *     NtQueryObject @ 0x140968970 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x1409D5F50 (ObGetObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OBJECT_HEADER_TO_QUOTA_INFO(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0xF];
  else
    return 0LL;
}
