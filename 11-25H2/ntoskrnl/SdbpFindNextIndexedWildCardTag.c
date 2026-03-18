/*
 * XREFs of SdbpFindNextIndexedWildCardTag @ 0x14082BC3C
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14082AEDC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchExA @ 0x140825620 (AslStringPatternMatchExA.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     AslStringPatternMatchExW @ 0x140825DC0 (AslStringPatternMatchExW.c)
 *     AslStringUpcaseToMultiByteN @ 0x140828E8C (AslStringUpcaseToMultiByteN.c)
 *     SdbpKeyToAnsiString @ 0x140A1A838 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x140A7B9C8 (SdbpGetIndex.c)
 */

__int64 __fastcall SdbpFindNextIndexedWildCardTag(void *a1, unsigned int *a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rdx
  __int64 Index; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int FirstTag; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  WCHAR *StringTagPtr; // rax
  unsigned int v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v17; // [rsp+30h] [rbp-D0h]
  _BYTE v18[272]; // [rsp+40h] [rbp-C0h] BYREF

  v15 = 0;
  memset_0(v18, 0, 0x104uLL);
  v4 = (const WCHAR *)*((_QWORD *)a2 + 4);
  v16 = 0LL;
  v17 = 0;
  if ( (int)AslStringUpcaseToMultiByteN((__int64)v18, v5, v4) >= 0 )
  {
    Index = SdbpGetIndex(a1, *a2, &v15);
    if ( Index )
    {
      LODWORD(v7) = a2[4];
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v15 )
          break;
        v8 = *(_QWORD *)(Index + 12 * v7);
        if ( (a2[5] & 2) != 0 )
        {
          SdbpKeyToAnsiString(v8, (char *)&v16 + 1);
          LOBYTE(v16) = 42;
        }
        else
        {
          SdbpKeyToAnsiString(v8, &v16);
          LOBYTE(v17) = 42;
        }
        if ( (unsigned int)AslStringPatternMatchExA((char *)&v16, v18) )
        {
          v9 = *(_DWORD *)(Index + 12 * v7 + 8);
          FirstTag = SdbFindFirstTag((__int64)a1, v9, *((_WORD *)a2 + 6));
          if ( FirstTag )
          {
            StringTagPtr = (WCHAR *)SdbGetStringTagPtr(a1, FirstTag, v11, v12);
            if ( StringTagPtr )
            {
              if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((WCHAR **)a2 + 4)) )
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
