/*
 * XREFs of SdbReadBinaryTag @ 0x140A60C50
 * Callers:
 *     SdbReadEntryInformation @ 0x140802F38 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x140804E40 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804F78 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x1408062B0 (SdbReadGUIDTag.c)
 *     SdbGetDatabaseID @ 0x140A60B48 (SdbGetDatabaseID.c)
 * Callees:
 *     SdbpReadTagData @ 0x140947920 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL, (__int64)"SdbReadBinaryTag");
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL, (__int64)"SdbReadBinaryTag");
  }
  return 0LL;
}
