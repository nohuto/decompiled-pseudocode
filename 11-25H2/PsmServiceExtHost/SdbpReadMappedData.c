/*
 * XREFs of SdbpReadMappedData @ 0x180093DD4
 * Callers:
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 *     SdbpOpenDatabaseInMemory @ 0x180093C6C (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateRootTagSizes @ 0x1800941A0 (SdbpValidateRootTagSizes.c)
 *     SdbGetTagDataSize @ 0x180097E24 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180098568 (SdbpGetTagHeadSize.c)
 *     SdbpReadTagData @ 0x1800986F0 (SdbpReadTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
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
