/*
 * XREFs of SdbpReadMappedData @ 0x1408259D4
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407F10C4 (SdbOpenDatabaseEx.c)
 *     SdbpValidateRootTagSizes @ 0x1407F21B0 (SdbpValidateRootTagSizes.c)
 *     SdbpOpenCompressedDatabase @ 0x1407F7524 (SdbpOpenCompressedDatabase.c)
 *     SdbpReadTagData @ 0x1408256F0 (SdbpReadTagData.c)
 *     SdbGetTagDataSize @ 0x1408257B0 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x140825C24 (SdbpGetTagHeadSize.c)
 *     SdbpOpenDatabaseInMemory @ 0x14082BA08 (SdbpOpenDatabaseInMemory.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      832,
      (unsigned int)"Offset and region size add up to cause an integer overflow or underflow");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) >= a2 + a4 )
    {
      memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
      return 1LL;
    }
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      837,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)");
  }
  return 0LL;
}
