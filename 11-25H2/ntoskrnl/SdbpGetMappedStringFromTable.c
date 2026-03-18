/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x140824F88
 * Callers:
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetStringTableItemFromStringRef @ 0x140824FF0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x1408252A4 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
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
