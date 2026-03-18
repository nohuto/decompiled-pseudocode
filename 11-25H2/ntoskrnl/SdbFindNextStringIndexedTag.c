/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140ABEF6C
 * Callers:
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x14082C2B0 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x14082C3B0 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(void *a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord((__int64)a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
