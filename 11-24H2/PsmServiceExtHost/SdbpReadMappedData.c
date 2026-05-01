/*
 * XREFs of SdbpReadMappedData @ 0x180094234
 * Callers:
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x1800929B0 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x1800940CC (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateRootTagSizes @ 0x180094600 (SdbpValidateRootTagSizes.c)
 *     SdbGetTagDataSize @ 0x180098284 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1800989C8 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x180098B50 (SdbpReadTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 || *(_DWORD *)(a1 + 20) < a2 + a4 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  else
  {
    memcpy_0(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
    return 1LL;
  }
}
