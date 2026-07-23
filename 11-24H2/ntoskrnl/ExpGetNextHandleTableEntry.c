/*
 * XREFs of ExpGetNextHandleTableEntry @ 0x1409C6940
 * Callers:
 *     ExQueryProcessHandleInformation @ 0x1409C6748 (ExQueryProcessHandleInformation.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 */

__int64 __fastcall ExpGetNextHandleTableEntry(unsigned int *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r9
  __int64 result; // rax
  _QWORD *v5; // r10
  __int64 v6; // r9
  _QWORD *v7; // r10

  if ( a2 )
  {
    v3 = *a3 + 4;
    if ( (v3 ^ (unsigned __int64)*a3) >= 0x400 )
    {
      result = ExpLookupHandleTableEntry(a1, *a3 + 8);
      *v7 = v6;
    }
    else
    {
      result = a2 + 16;
      *a3 = v3;
    }
  }
  else
  {
    result = ExpLookupHandleTableEntry(a1, 4LL);
    *v5 = 4LL;
  }
  return result;
}
