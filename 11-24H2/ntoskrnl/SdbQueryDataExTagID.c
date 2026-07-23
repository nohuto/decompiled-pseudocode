/*
 * XREFs of SdbQueryDataExTagID @ 0x140802B2C
 * Callers:
 *     SdbQueryDataEx @ 0x140802A88 (SdbQueryDataEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x14045EEEC (RtlStringCchCopyNW.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SdbReadQWORDTag @ 0x14080631C (SdbReadQWORDTag.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     SdbpGetMappedTagData @ 0x1409474D4 (SdbpGetMappedTagData.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409479E0 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB6FE4 (SdbpFindFirstNamedTagHelper.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  unsigned int *v7; // r13
  const wchar_t *v8; // rbx
  __int64 *StringTagPtr; // r14
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // rax
  size_t v15; // rsi
  __int64 v16; // rax
  wchar_t *Str1; // rdi
  wchar_t *v18; // rax
  void *v19; // rcx
  size_t v20; // rdi
  __int64 v21; // r11
  unsigned int FirstNamedTagHelper; // eax
  int DWORDTag; // edi
  unsigned int FirstTag; // eax
  unsigned int TagDataSize; // esi
  __int64 v26; // r8
  unsigned int v27; // ebx
  const char *v28; // r9
  int v29; // r8d
  wchar_t *pszDest; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  int v33; // [rsp+90h] [rbp+18h] BYREF
  int v34; // [rsp+94h] [rbp+1Ch]
  _DWORD *v35; // [rsp+98h] [rbp+20h]

  v35 = a4;
  v34 = HIDWORD(a3);
  v7 = a6;
  v8 = L"Policy";
  StringTagPtr = 0LL;
  v33 = 0;
  QWORDTag = 0LL;
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      7053,
      (unsigned int)"One of lpBuffer or lpcbBufferSize should not be null");
    return 87;
  }
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( aPolicy[v14] );
  v15 = (int)v14 + 1;
  v16 = AslAlloc(a1, 2 * v15);
  pszDest = (wchar_t *)v16;
  if ( !v16 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      7065,
      (unsigned int)"Cannot allocate temporary buffer for parsing the name \"%ws\"");
    return 8;
  }
  Str1 = (wchar_t *)v16;
  while ( 1 )
  {
    v18 = wcschr(v8, 0x5Cu);
    if ( v18 )
    {
      v20 = v18 - v8;
      if ( RtlStringCchCopyNW(pszDest, v15, v8, v20) < 0 )
      {
LABEL_61:
        v12 = 122;
        goto LABEL_62;
      }
      pszDest[v20] = 0;
      v8 = (const wchar_t *)(v21 + 2);
      Str1 = pszDest;
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v15, v8) < 0 )
        goto LABEL_61;
      v8 = 0LL;
    }
    FirstNamedTagHelper = SdbpFindFirstNamedTagHelper(a1, a2, 28687, 24577, Str1, 0);
    a2 = FirstNamedTagHelper;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTagHelper )
      goto LABEL_19;
  }
  if ( !FirstNamedTagHelper )
  {
LABEL_19:
    v12 = 1168;
    goto LABEL_62;
  }
  DWORDTag = 0;
  FirstTag = SdbFindFirstTag(a1, FirstNamedTagHelper, 16408LL);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      7114,
      (unsigned int)"The entry 0x%x does not have valuetype information");
    TagDataSize = 0;
    v12 = 0;
    goto LABEL_55;
  }
  DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0LL);
  TagDataSize = 0;
  switch ( DWORDTag )
  {
    case 0:
      goto LABEL_37;
    case 1:
      v26 = 24606LL;
      break;
    case 3:
      v26 = 36869LL;
      break;
    case 4:
      v26 = 16409LL;
      break;
    case 11:
      v26 = 20487LL;
      break;
    default:
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbQueryDataExTagID",
        7151,
        (unsigned int)"The entry 0x%x contains bad valuetype information 0x%x");
      v12 = 1358;
      goto LABEL_62;
  }
  v27 = SdbFindFirstTag(a1, a2, v26);
  if ( !v27 )
  {
    if ( DWORDTag != 1 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbQueryDataExTagID", 7214, (unsigned int)"The entry 0x%x contains no value");
      goto LABEL_19;
    }
    TagDataSize = 2;
    StringTagPtr = (__int64 *)&cchOriginalDestLength;
    goto LABEL_43;
  }
  if ( DWORDTag == 1 )
  {
    StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v27);
    if ( !StringTagPtr )
    {
      v28 = "The entry 0x%x contains bad string value 0x%x";
      v29 = 7173;
      goto LABEL_48;
    }
    do
      ++v13;
    while ( *((_WORD *)StringTagPtr + v13) );
    TagDataSize = 2 * v13 + 2;
LABEL_37:
    v12 = 0;
    if ( TagDataSize )
      goto LABEL_38;
    goto LABEL_55;
  }
  if ( DWORDTag == 3 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v27);
    StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v27);
    if ( !StringTagPtr )
    {
      v28 = "The entry 0x%x contains bad binary value 0x%x";
      v29 = 7187;
LABEL_48:
      AslLogCallPrintf(1, (unsigned int)"SdbQueryDataExTagID", v29, (_DWORD)v28);
      goto LABEL_19;
    }
    goto LABEL_37;
  }
  if ( DWORDTag != 4 )
  {
    QWORDTag = SdbReadQWORDTag(a1, v27, 0LL);
    StringTagPtr = &QWORDTag;
    TagDataSize = 8;
    goto LABEL_37;
  }
  v33 = SdbReadDWORDTag(a1, v27, 0LL);
  StringTagPtr = (__int64 *)&v33;
  TagDataSize = 4;
LABEL_43:
  v12 = 0;
LABEL_38:
  v19 = a5;
  if ( a5 && v7 && *v7 >= TagDataSize )
  {
    memmove(a5, StringTagPtr, *v7);
    goto LABEL_56;
  }
  v12 = 122;
LABEL_55:
  if ( v7 )
LABEL_56:
    *v7 = TagDataSize;
  if ( v35 )
    *v35 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_62:
  AslFree(v19);
  return v12;
}
