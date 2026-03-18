/*
 * XREFs of SdbpFindFirstIndexedWildCardTag @ 0x1408253D8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14082AEDC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchExA @ 0x140825620 (AslStringPatternMatchExA.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x140825DC0 (AslStringPatternMatchExW.c)
 *     AslStringUpcaseToMultiByteN @ 0x140828E8C (AslStringUpcaseToMultiByteN.c)
 *     SdbGetIndex @ 0x14082B1C4 (SdbGetIndex.c)
 *     SdbpKeyToAnsiString @ 0x140A1A838 (SdbpKeyToAnsiString.c)
 *     SdbpGetIndex @ 0x140A7B9C8 (SdbpGetIndex.c)
 */

__int64 __fastcall SdbpFindFirstIndexedWildCardTag(
        PVOID Parameter,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 i; // rdi
  unsigned int v12; // esi
  unsigned int FirstTag; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 StringTagPtr; // rax
  const char *v18; // r9
  int v19; // r8d
  unsigned int v20; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v22; // [rsp+40h] [rbp-C0h]
  _BYTE v23[272]; // [rsp+50h] [rbp-B0h] BYREF

  v20 = 0;
  if ( !a5 )
  {
    v18 = "SdbpFindFirstIndexedWildCardTag passed a null pointer for pFindInfo.";
    v19 = 918;
LABEL_18:
    AslLogCallPrintf(1, (unsigned int)"SdbpFindFirstIndexedWildCardTag", v19, (_DWORD)v18);
    return 0LL;
  }
  *(_OWORD *)a5 = 0LL;
  *((_OWORD *)a5 + 1) = 0LL;
  *((_QWORD *)a5 + 4) = 0LL;
  if ( (((a3 & 0xF000) - 24576) & 0xDFFF) != 0 )
  {
    v18 = "Wildcard searches only allowed for string tags";
    v19 = 932;
    goto LABEL_18;
  }
  Index = SdbGetIndex(Parameter);
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
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  memset_0(v23, 0, 0x104uLL);
  v21 = 0LL;
  v22 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v23, v9, a4) < 0 )
  {
    v18 = "Failed to convert name to multi-byte";
    v19 = 956;
    goto LABEL_18;
  }
  v10 = SdbpGetIndex(Parameter, *a5, &v20);
  if ( v10 )
  {
    for ( i = 0LL; (unsigned int)i < v20; i = (unsigned int)(i + 1) )
    {
      SdbpKeyToAnsiString(*(_QWORD *)(v10 + 12 * i), &v21);
      LOBYTE(v22) = 42;
      if ( (unsigned int)AslStringPatternMatchExA(&v21, v23) )
      {
        v12 = *(_DWORD *)(v10 + 12 * i + 8);
        FirstTag = SdbFindFirstTag(Parameter, v12, *((unsigned __int16 *)a5 + 6));
        if ( FirstTag )
        {
          StringTagPtr = SdbGetStringTagPtr(Parameter, FirstTag, v14, v15);
          if ( StringTagPtr )
          {
            if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_QWORD *)a5 + 4)) )
            {
              a5[4] = i;
              return v12;
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
