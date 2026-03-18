/*
 * XREFs of SdbpGetIndex @ 0x140A7BCE8
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14095B554 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14095FB48 (SdbpFindFirstIndexedWildCardTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x14095FA14 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x14095FF20 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9

  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, a2, v6, v7) / 0xC;
    return SdbpGetMappedTagData(a1, a2);
  }
  else
  {
    AslLogCallPrintf(
      1LL,
      (__int64)"SdbpGetIndex",
      1375LL,
      (__int64)"Index tagid 0x%lx is not referring to the index bits");
    return 0LL;
  }
}
