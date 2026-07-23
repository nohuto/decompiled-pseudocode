/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x140947608
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140944EEC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AslStringUpcaseToMultiByteN @ 0x14094276C (AslStringUpcaseToMultiByteN.c)
 *     SdbGetIndex @ 0x1409453D4 (SdbGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchExA @ 0x140947850 (AslStringPatternMatchExA.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 *     SdbpKeyToAnsiString @ 0x140A19B08 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x140A75FE8 (SdbpGetIndex.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(
        _RTL_RUN_ONCE *Parameter,
        __int16 a2,
        __int16 a3,
        const WCHAR *a4,
        unsigned int *a5)
{
  unsigned int Index; // eax
  char v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 i; // rdi
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned int FirstTag; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 StringTagPtr; // rax
  const char *v20; // r9
  int v21; // r8d
  unsigned int v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v25; // [rsp+40h] [rbp-C0h]
  _BYTE v26[272]; // [rsp+50h] [rbp-B0h] BYREF

  v23 = 0;
  v22 = 0;
  if ( !a5 )
  {
    v20 = "SdbpFindFirstIndexedWildCardTag passed a null pointer for pFindInfo.";
    v21 = 918;
LABEL_21:
    AslLogCallPrintf(1, (unsigned int)"SdbpFindFirstIndexedWildCardTag", v21, (_DWORD)v20);
    return 0LL;
  }
  *(_OWORD *)a5 = 0LL;
  *((_OWORD *)a5 + 1) = 0LL;
  *((_QWORD *)a5 + 4) = 0LL;
  if ( (((a3 & 0xF000) - 24576) & 0xDFFF) != 0 )
  {
    v20 = "Wildcard searches only allowed for string tags";
    v21 = 932;
    goto LABEL_21;
  }
  Index = SdbGetIndex(Parameter, a2, a3, &v22);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      939,
      (unsigned int)"Failed to get an index for tag 0x%lx key 0x%lx");
    return 0LL;
  }
  v9 = v22;
  a5[5] = v22;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  memset_0(v26, 0, 0x104uLL);
  v24 = 0LL;
  v25 = 0;
  if ( (int)AslStringUpcaseToMultiByteN((__int64)v26, v10, a4) < 0 )
  {
    v20 = "Failed to convert name to multi-byte";
    v21 = 956;
    goto LABEL_21;
  }
  v11 = SdbpGetIndex(Parameter, *a5, &v23);
  if ( v11 )
  {
    for ( i = 0LL; (unsigned int)i < v23; i = (unsigned int)(i + 1) )
    {
      v13 = *(_QWORD *)(v11 + 12 * i);
      if ( (v9 & 2) != 0 )
      {
        SdbpKeyToAnsiString(v13, (char *)&v24 + 1);
        LOBYTE(v24) = 42;
      }
      else
      {
        SdbpKeyToAnsiString(v13, &v24);
        LOBYTE(v25) = 42;
      }
      if ( (unsigned int)AslStringPatternMatchExA(&v24, v26) )
      {
        v14 = *(_DWORD *)(v11 + 12 * i + 8);
        FirstTag = SdbFindFirstTag(Parameter, v14, *((unsigned __int16 *)a5 + 6));
        if ( FirstTag )
        {
          StringTagPtr = SdbGetStringTagPtr(Parameter, FirstTag, v16, v17);
          if ( StringTagPtr )
          {
            if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_QWORD *)a5 + 4)) )
            {
              a5[4] = i;
              return v14;
            }
          }
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpFindFirstIndexedWildCardTag",
      966,
      (unsigned int)"Failed to get index by tag id 0x%lx");
  }
  return 0LL;
}
