/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x140943014
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140944EEC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AslStringUpcaseToMultiByteN @ 0x14094276C (AslStringUpcaseToMultiByteN.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchExA @ 0x140947850 (AslStringPatternMatchExA.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 *     SdbpKeyToAnsiString @ 0x140A19B08 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x140A75FE8 (SdbpGetIndex.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(__int64 a1, unsigned int *a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rdx
  __int64 Index; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v15; // [rsp+30h] [rbp-D0h]
  _BYTE v16[272]; // [rsp+40h] [rbp-C0h] BYREF

  v13 = 0;
  memset_0(v16, 0, 0x104uLL);
  v4 = (const WCHAR *)*((_QWORD *)a2 + 4);
  v14 = 0LL;
  v15 = 0;
  if ( (int)AslStringUpcaseToMultiByteN((__int64)v16, v5, v4) >= 0 )
  {
    Index = SdbpGetIndex(a1, *a2, &v13);
    if ( Index )
    {
      LODWORD(v7) = a2[4];
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v13 )
          break;
        v8 = *(_QWORD *)(Index + 12 * v7);
        if ( (a2[5] & 2) != 0 )
        {
          SdbpKeyToAnsiString(v8, (char *)&v14 + 1);
          LOBYTE(v14) = 42;
        }
        else
        {
          SdbpKeyToAnsiString(v8, &v14);
          LOBYTE(v15) = 42;
        }
        if ( (unsigned int)AslStringPatternMatchExA(&v14, v16) )
        {
          v9 = *(_DWORD *)(Index + 12 * v7 + 8);
          FirstTag = SdbFindFirstTag(a1, v9, *((unsigned __int16 *)a2 + 6));
          if ( FirstTag )
          {
            StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_QWORD *)a2 + 4)) )
              {
                a2[4] = v7;
                return v9;
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
