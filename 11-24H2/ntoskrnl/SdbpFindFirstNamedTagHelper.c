/*
 * XREFs of SdbpFindFirstNamedTagHelper @ 0x140AB6FE4
 * Callers:
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140804A50 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140804B08 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbGetNextChild @ 0x140947CD0 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140947DC0 (SdbGetFirstChild.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpFindFirstNamedTagHelper(
        void *a1,
        unsigned int a2,
        __int16 a3,
        __int16 a4,
        wchar_t *Str1,
        int a6)
{
  unsigned int v6; // ebx
  unsigned int i; // eax
  unsigned int v12; // edi
  __int64 v13; // r9
  unsigned int FirstTag; // eax
  __int64 v15; // r8
  WCHAR *StringTagPtr; // rax

  v6 = 0;
  for ( i = SdbGetFirstChild((__int64)a1, a2); ; i = SdbGetNextChild((__int64)a1, a2, v12, v13) )
  {
    v12 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID((__int64)a1, i) == a3 )
    {
      FirstTag = SdbFindFirstTag((__int64)a1, v12, a4);
      if ( FirstTag )
      {
        StringTagPtr = (WCHAR *)SdbGetStringTagPtr(a1, FirstTag, v15, v13);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(1LL, (__int64)"SdbpFindFirstNamedTagHelper");
          return v6;
        }
        if ( a6 )
        {
          if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, Str1) )
            return v12;
        }
        else if ( !wcsicmp(Str1, StringTagPtr) )
        {
          return v12;
        }
      }
    }
  }
  return v6;
}
