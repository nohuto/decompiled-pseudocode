/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x14095F6FC
 * Callers:
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetStringTableItemFromStringRef @ 0x14095F764 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x14095FA14 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpGetMappedStringFromTable",
    977,
    (unsigned int)"SdbpGetStringTableItemFromStringRef failed to get tagid for string ref");
  return 0LL;
}
