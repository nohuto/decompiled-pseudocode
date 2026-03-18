/*
 * XREFs of SdbReadBinaryTag @ 0x140A65D78
 * Callers:
 *     SdbReadEntryInformation @ 0x1407F2948 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407F4AAC (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407F4BE4 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x1407F6000 (SdbReadGUIDTag.c)
 *     SdbGetDatabaseID @ 0x140A65C70 (SdbGetDatabaseID.c)
 * Callees:
 *     SdbpReadTagData @ 0x1408256F0 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
