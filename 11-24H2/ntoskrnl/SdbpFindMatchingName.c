/*
 * XREFs of SdbpFindMatchingName @ 0x140A79168
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14095D42C (SdbGetDatabaseMatchEx.c)
 *     SdbFindFirstStringIndexedTag @ 0x14095D844 (SdbFindFirstStringIndexedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x140A79128 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbpGetNextIndexedRecord @ 0x140A79268 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbpFindMatchingName(void *a1, unsigned int NextIndexedRecord, unsigned int *a3)
{
  unsigned int FirstTag; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  const wchar_t *StringTagPtr; // rcx
  bool v10; // zf
  int v12; // eax

  while ( 1 )
  {
    if ( !NextIndexedRecord )
      return NextIndexedRecord;
    FirstTag = SdbFindFirstTag((__int64)a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
      break;
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag, v7, v8);
    if ( !StringTagPtr )
    {
      AslLogCallPrintf(1LL, (__int64)"SdbpFindMatchingName", 632LL, (__int64)"Can't get the name string for tagid 0x%x");
      return 0LL;
    }
    if ( (a3[5] & 1) != 0 )
    {
      v12 = wcsicmp(*((const wchar_t **)a3 + 4), StringTagPtr);
      v10 = v12 == 0;
      if ( v12 < 0 )
        return 0LL;
    }
    else
    {
      v10 = wcsicmp(StringTagPtr, *((const wchar_t **)a3 + 4)) == 0;
    }
    if ( v10 )
      return NextIndexedRecord;
    NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, a3);
  }
  AslLogCallPrintf(1LL, (__int64)"SdbpFindMatchingName", 622LL, (__int64)"The tag 0x%x was not found under tag 0x%x");
  return 0LL;
}
