/*
 * XREFs of SdbpGetIndex @ 0x140A7B9C8
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1408253D8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14082BC3C (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1408252A4 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1408257B0 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
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
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
