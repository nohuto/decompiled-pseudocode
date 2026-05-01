/*
 * XREFs of SdbReadBinaryTag @ 0x1800984CC
 * Callers:
 *     SdbGetDatabaseID @ 0x1800923C0 (SdbGetDatabaseID.c)
 *     SdbpApphelpExeInfo @ 0x180095564 (SdbpApphelpExeInfo.c)
 *     SdbpGetMatchingTextAttributes @ 0x18009B0A8 (SdbpGetMatchingTextAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x180098B50 (SdbpReadTagData.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) != 0x9000 )
  {
    SdbGetTagFromTagID(a1, v6);
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  if ( !(unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  return 1LL;
}
