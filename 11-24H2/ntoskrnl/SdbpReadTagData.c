/*
 * XREFs of SdbpReadTagData @ 0x14095FE60
 * Callers:
 *     SdbReadQWORDTag @ 0x140805BDC (SdbReadQWORDTag.c)
 *     SdbReadDWORDTag @ 0x14095F0F8 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x14095F588 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x140960490 (SdbpReadStringRef.c)
 *     SdbReadBinaryTag @ 0x140A67758 (SdbReadBinaryTag.c)
 * Callees:
 *     SdbGetTagDataSize @ 0x14095FF20 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x140960150 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1409603A0 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 439, (unsigned int)"Buffer too small. Avail: %d, Need: %d");
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 446, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
