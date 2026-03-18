/*
 * XREFs of SdbReadBinaryTag @ 0x140A67758
 * Callers:
 *     SdbReadEntryInformation @ 0x1408027F8 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x140804700 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804838 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x140805B70 (SdbReadGUIDTag.c)
 *     SdbGetDatabaseID @ 0x140A67650 (SdbGetDatabaseID.c)
 * Callees:
 *     SdbpReadTagData @ 0x14095FE60 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL, (__int64)"SdbReadBinaryTag", 1010LL, (__int64)"Error reading buffer");
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL, (__int64)"SdbReadBinaryTag", 1005LL, (__int64)"TagID 0x%08X, Tag %04X not BINARY type");
  }
  return 0LL;
}
