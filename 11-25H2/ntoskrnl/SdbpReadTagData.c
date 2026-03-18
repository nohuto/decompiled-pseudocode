/*
 * XREFs of SdbpReadTagData @ 0x1408256F0
 * Callers:
 *     SdbReadQWORDTag @ 0x1407F606C (SdbReadQWORDTag.c)
 *     SdbReadDWORDTag @ 0x140824978 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x140824E14 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x140825D14 (SdbpReadStringRef.c)
 *     SdbReadBinaryTag @ 0x140A65D78 (SdbReadBinaryTag.c)
 * Callees:
 *     SdbGetTagDataSize @ 0x1408257B0 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x1408259D4 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140825C24 (SdbpGetTagHeadSize.c)
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
