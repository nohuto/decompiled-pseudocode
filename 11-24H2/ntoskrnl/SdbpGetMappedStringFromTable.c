/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1409471BC
 * Callers:
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetStringTableItemFromStringRef @ 0x140947224 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x1409474D4 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
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
