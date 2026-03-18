/*
 * XREFs of SdbpFindNextNamedTagHelper @ 0x140805968
 * Callers:
 *     SdbpFindNextTagWithoutIndex @ 0x140804484 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140804500 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpSearchDB @ 0x140A08258 (SdbpSearchDB.c)
 * Callees:
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbGetNextChild @ 0x140960210 (SdbGetNextChild.c)
 *     AslStringPatternMatchExW @ 0x140960540 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpFindNextNamedTagHelper(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        wchar_t *Str1,
        int a6)
{
  unsigned __int16 v7; // r12
  unsigned int v8; // edi
  unsigned int v10; // ebx
  __int16 TagFromTagID; // r15
  unsigned int NextChild; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax

  v7 = a4;
  v8 = a3;
  v10 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, (unsigned int)a3, a3, a4);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v8);
      v8 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild, v14, v15) == TagFromTagID )
      {
        FirstTag = SdbFindFirstTag(a1, v8, v7);
        if ( FirstTag )
        {
          StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
          if ( !StringTagPtr )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpFindNextNamedTagHelper",
              573,
              (unsigned int)"Can't get the name string tagid 0x%lx");
            return v10;
          }
          if ( a6 )
          {
            if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, Str1) )
              return v8;
          }
          else if ( !wcsicmp(Str1, StringTagPtr) )
          {
            return v8;
          }
        }
      }
    }
    return v10;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpFindNextNamedTagHelper", 556, (unsigned int)"Invalid tagid 0x%lx");
    return 0LL;
  }
}
