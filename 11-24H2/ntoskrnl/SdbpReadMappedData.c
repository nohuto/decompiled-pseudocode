/*
 * XREFs of SdbpReadMappedData @ 0x140960150
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140800F84 (SdbOpenDatabaseEx.c)
 *     SdbpValidateRootTagSizes @ 0x140802070 (SdbpValidateRootTagSizes.c)
 *     SdbpOpenCompressedDatabase @ 0x140807094 (SdbpOpenCompressedDatabase.c)
 *     SdbpOpenDatabaseInMemory @ 0x14095BC48 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x14095FE60 (SdbpReadTagData.c)
 *     SdbGetTagDataSize @ 0x14095FF20 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1409603A0 (SdbpGetTagHeadSize.c)
 * Callees:
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
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
