/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140A79128
 * Callers:
 *     SdbpSearchDB @ 0x140A08258 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140A79168 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140A79268 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, (unsigned int)result, a2);
  return result;
}
