/*
 * XREFs of SdbpReadTagData @ 0x180098B50
 * Callers:
 *     SdbReadBinaryTag @ 0x1800984CC (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180098588 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x180098624 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x1800986C4 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x180098AA4 (SdbpReadStringRef.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x180094234 (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x180098284 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1800989C8 (SdbpGetTagHeadSize.c)
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
