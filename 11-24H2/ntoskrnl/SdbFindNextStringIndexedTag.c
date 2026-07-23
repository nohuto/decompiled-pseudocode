/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140A73428
 * Callers:
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140A73468 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140A73568 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, (unsigned int)result, a2);
  return result;
}
