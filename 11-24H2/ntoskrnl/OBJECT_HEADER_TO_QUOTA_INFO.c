/*
 * XREFs of OBJECT_HEADER_TO_QUOTA_INFO @ 0x140402A00
 * Callers:
 *     NtQueryObject @ 0x140951400 (NtQueryObject.c)
 *     ObGetObjectInformation @ 0x1409C5D80 (ObGetObjectInformation.c)
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
