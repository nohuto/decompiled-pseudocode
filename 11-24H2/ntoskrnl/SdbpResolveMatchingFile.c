/*
 * XREFs of SdbpResolveMatchingFile @ 0x140805CD0
 * Callers:
 *     SdbpCheckMatchingDir @ 0x140803330 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1408034C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x140803EB0 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlULongLongMult @ 0x14042A2B0 (RtlULongLongMult.c)
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AslPathClean @ 0x140809E4C (AslPathClean.c)
 *     AslPathToNetworkPathNt @ 0x14080A554 (AslPathToNetworkPathNt.c)
 *     AslEnvExpandStrings2 @ 0x14080C17C (AslEnvExpandStrings2.c)
 *     AslEnvGetProcessWowInfo @ 0x14080C358 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x14080C880 (AslImageFileToArchitecture.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r12
  unsigned int v7; // edi
  const char *v12; // r9
  int v13; // r8d
  __int64 v14; // r15
  __int16 v15; // ax
  int v16; // ecx
  ULONGLONG v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  ULONGLONG v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  const char *v24; // r9
  int v25; // r8d
  __int16 v26; // ax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v31; // [rsp+28h] [rbp-28h]
  int v32; // [rsp+30h] [rbp-20h]
  ULONGLONG pullResult; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v34; // [rsp+48h] [rbp-8h] BYREF
  __int16 v37; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a6;
  v7 = 0;
  pullResult = 0LL;
  v34 = 0LL;
  *a6 = 0LL;
  v37 = -1;
  LOWORD(a6) = -1;
  if ( !a4 )
  {
    v12 = "Invalid match file length";
    v13 = 798;
LABEL_44:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v13, (_DWORD)v12);
    return v7;
  }
  v14 = a5;
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvGetProcessWowInfo(&a6, &v37) < 0 )
    {
      v12 = "AslEnvGetProcessWowInfo failed [%x]";
      v13 = 819;
      goto LABEL_44;
    }
    v15 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
    if ( v15 == -1 )
      v15 = v37;
    v16 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, &pullResult, (_WORD)a6, v15);
    if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741789 )
    {
      v12 = "AslEnvExpandStrings2 failed [%x]";
      v13 = 836;
      goto LABEL_44;
    }
    v17 = 2 * pullResult;
  }
  else
  {
    v18 = *(unsigned int *)(a5 + 8);
    v19 = v18 + a4;
    if ( v19 < v18 )
    {
      v13 = 849;
      goto LABEL_43;
    }
    v17 = v19 + 1;
    if ( v19 + 1 < v19 )
    {
      v13 = 854;
      goto LABEL_43;
    }
  }
  if ( v17 + 20 < v17 )
  {
    v13 = 860;
LABEL_43:
    v12 = "Invalid path size";
    goto LABEL_44;
  }
  pullResult = v17 + 20;
  if ( RtlULongLongMult(v17 + 20, 2uLL, &pullResult) < 0 )
  {
    v12 = "Invalid buffer size";
    v13 = 865;
    goto LABEL_44;
  }
  v21 = pullResult;
  if ( pullResult < 0x208 )
    v21 = 520LL;
  v22 = (_QWORD *)AslAlloc(v20, v21);
  v23 = v22;
  if ( !v22 )
  {
    v12 = "Out of memory";
    v13 = 873;
    goto LABEL_44;
  }
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvGetProcessWowInfo(&a6, &v37) < 0 )
    {
      v24 = "AslEnvGetProcessWowInfo failed [%x]";
      v25 = 885;
LABEL_31:
      AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v25, (_DWORD)v24);
      goto LABEL_32;
    }
    v26 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
    if ( v26 == -1 )
      v26 = v37;
    LOWORD(v32) = v26;
    LOWORD(v31) = (_WORD)a6;
    if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v23, v21 >> 1, &pullResult, v31, v32) < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpResolveMatchingFile",
        902,
        (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]");
LABEL_32:
      AslFree(v27);
      return v7;
    }
  }
  else
  {
    memmove(v22, *(const void **)v14, 2LL * *(unsigned int *)(v14 + 8));
    memmove((char *)v23 + 2 * *(unsigned int *)(v14 + 8), a3, 2LL * (a4 + 1));
  }
  if ( (int)AslPathClean(v23, v23) < 0 )
  {
    v24 = "AslPathClean failed [%x]";
    v25 = 927;
    goto LABEL_31;
  }
  if ( (int)AslPathToNetworkPathNt(&v34, v23) < 0 )
  {
    if ( wcsnicmp((const wchar_t *)v23, L"\\??\\", 4uLL) )
    {
      v29 = -1LL;
      do
        ++v29;
      while ( *((_WORD *)v23 + v29) );
      memmove(v23 + 1, v23, 2 * v29 + 2);
      *v23 = *(_QWORD *)L"\\??\\";
    }
  }
  else
  {
    AslFree(v28);
    v23 = v34;
  }
  *v6 = v23;
  return 1;
}
