/*
 * XREFs of SdbpReadTagData @ 0x1800986F0
 * Callers:
 *     SdbReadBinaryTag @ 0x18009806C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180098128 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800981C4 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x180098264 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x180098644 (SdbpReadStringRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x180093DD4 (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x180097E24 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180098568 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize <= a4 )
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
