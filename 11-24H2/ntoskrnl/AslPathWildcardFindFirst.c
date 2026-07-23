/*
 * XREFs of AslPathWildcardFindFirst @ 0x14080A7E4
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     ULongLongMult @ 0x140437FD0 (ULongLongMult.c)
 *     RtlUShortAdd @ 0x140463CC0 (RtlUShortAdd.c)
 *     wcsncmp @ 0x1404FD890 (wcsncmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AslDoesFileExistNtPath @ 0x140808EA4 (AslDoesFileExistNtPath.c)
 *     AslPathCleanUstr @ 0x14080A0BC (AslPathCleanUstr.c)
 *     AslPathWildcardFindNext @ 0x14080ADDC (AslPathWildcardFindNext.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B8D0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeFindContext @ 0x14080BAF4 (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x14080BBC8 (AslpPathWildcardFreeMatchNode.c)
 *     AslpPathWildcardMakeLeaves @ 0x14080BC10 (AslpPathWildcardMakeLeaves.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     RtlCreateUnicodeString @ 0x1409D2A00 (RtlCreateUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindFirst(NTSTRSAFE_PWSTR pszDest, ULONGLONG a2, const wchar_t *a3, _QWORD *a4)
{
  _QWORD *v4; // rdi
  const WCHAR *v8; // r15
  int matched; // ebx
  const char *v10; // r9
  int v11; // r8d
  __int64 v12; // rcx
  size_t v13; // rbx
  wchar_t *v14; // rax
  int Leaves; // eax
  __int64 v16; // rcx
  wchar_t *Buffer; // rcx
  _DWORD *v18; // rdi
  int v19; // eax
  int v20; // esi
  ULONGLONG v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rax
  ULONGLONG v25; // r14
  void *v26; // r13
  PVOID v27; // rax
  void *v28; // rbx
  size_t v29; // r12
  PVOID PoolWithTag; // rax
  const char *v31; // r9
  int v32; // r8d
  void *v33; // rcx
  ULONGLONG v34; // r13
  ULONGLONG v35; // r9
  ULONGLONG v36; // rcx
  __int64 v37; // rsi
  ULONGLONG v38; // rdx
  ULONGLONG v39; // rsi
  void *v40; // r12
  PVOID v41; // rax
  void *v42; // rbx
  size_t v43; // r14
  PVOID v44; // rax
  ULONGLONG v45; // rcx
  ULONGLONG v46; // rcx
  ULONGLONG v47; // rdx
  __int64 v48; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp-50h] BYREF
  _DWORD *v50; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING SourceString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING v53; // [rsp+60h] [rbp-20h] BYREF
  __int128 v54; // [rsp+70h] [rbp-10h]
  ULONGLONG pusResult; // [rsp+C8h] [rbp+48h] BYREF
  _QWORD *v57; // [rsp+D8h] [rbp+58h]

  v57 = a4;
  pusResult = a2;
  v4 = a4;
  if ( !pszDest )
    return 3221225711LL;
  if ( !a3 || !*a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  *pszDest = 0;
  v50 = 0LL;
  LOWORD(pusResult) = 0;
  *a4 = 0LL;
  DestinationString = 0LL;
  v8 = 0LL;
  SourceString = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  if ( RtlCreateUnicodeString(&DestinationString, a3) )
  {
    matched = AslPathCleanUstr(&DestinationString.Length);
    if ( matched < 0 )
    {
      v10 = "AslPathCleanUstr failed [%x]";
      v11 = 2257;
      goto LABEL_9;
    }
    matched = RtlUShortAdd(DestinationString.Length, 4u, (USHORT *)&pusResult);
    if ( matched < 0 )
    {
      v10 = "RtlUShortAdd failed [%x]";
      v11 = 2263;
      goto LABEL_9;
    }
    v13 = (unsigned __int16)pusResult;
    v14 = (wchar_t *)AslAlloc(v12, (unsigned __int16)pusResult);
    v8 = v14;
    if ( !v14 )
    {
      matched = -1073741801;
      goto LABEL_78;
    }
    matched = RtlStringCbCopyNW(v14, v13, DestinationString.Buffer, DestinationString.Length);
    if ( matched < 0 )
    {
      v10 = "RtlStringCbCopyNW failed [%x]";
      v11 = 2275;
      goto LABEL_9;
    }
    Leaves = AslpPathWildcardMakeLeaves(v8);
    if ( !Leaves )
    {
      matched = -1073741767;
      v10 = "Failed to split the wildcard path";
      v11 = 2293;
      goto LABEL_9;
    }
    if ( Leaves == 1 )
    {
      Buffer = DestinationString.Buffer;
      *v4 = -1LL;
      if ( !(unsigned int)AslDoesFileExistNtPath(Buffer) )
      {
        matched = -2147483642;
        goto LABEL_78;
      }
      matched = RtlStringCchCopyW(pszDest, 0x104uLL, a3);
      if ( matched >= 0 )
      {
        matched = 0;
        goto LABEL_78;
      }
      v10 = "RtlStringCbCopyNW failed [%x]";
      v11 = 2311;
      goto LABEL_9;
    }
    v50 = (_DWORD *)AslAlloc(v16, 64LL);
    v18 = v50;
    if ( !v50 )
    {
      matched = -1073741801;
LABEL_77:
      v4 = v57;
      goto LABEL_78;
    }
    v19 = wcsncmp(a3, L"\\??\\", 4uLL);
    v20 = -1073741811;
    *v50 = v19 != 0;
    *((_QWORD *)v18 + 1) = v8;
    v8 = 0LL;
    *((_OWORD *)v18 + 1) = 0LL;
    *((_OWORD *)v18 + 2) = 0LL;
    *((_OWORD *)v18 + 3) = 0LL;
    *((_QWORD *)v18 + 5) = 0LL;
    *((_QWORD *)v18 + 6) = 16LL;
    *((_QWORD *)v18 + 4) = 0LL;
    *((_QWORD *)v18 + 7) = 0LL;
    *((_QWORD *)v18 + 3) = 32LL;
    v21 = *((_QWORD *)v18 + 5);
    if ( v21 >= 8 )
    {
      matched = -1073741811;
LABEL_49:
      v33 = (void *)*((_QWORD *)v18 + 7);
      if ( v33 )
        ExFreePoolWithTag(v33, 0x72615452u);
      *((_OWORD *)v18 + 1) = 0LL;
      *((_OWORD *)v18 + 2) = 0LL;
      *((_OWORD *)v18 + 3) = 0LL;
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpPathWildcardInitStack",
        2148,
        (unsigned int)"RtlArrayInitialize failed [%x]");
      v31 = "AslpPathWildcardInitStack failed [%x]";
      v32 = 2349;
      goto LABEL_76;
    }
    v22 = *((_QWORD *)v18 + 6);
    v23 = v22 - 1;
    v24 = v22 + 7;
    if ( v24 < 8 )
    {
      matched = -1073741675;
      goto LABEL_49;
    }
    pullResult = 0LL;
    pusResult = 0LL;
    v25 = v24 & ~v23;
    if ( ULongLongMult(v21, 0x20uLL, &pullResult) < 0 || ULongLongMult(v25, *((_QWORD *)v18 + 3), &pusResult) < 0 )
    {
      matched = -1073741675;
      goto LABEL_45;
    }
    v26 = (void *)*((_QWORD *)v18 + 7);
    if ( v26 )
    {
      v29 = pusResult;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
      v28 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_44:
        matched = -1073741801;
LABEL_45:
        if ( matched )
          goto LABEL_49;
        RtlInitUnicodeString(&SourceString, *((PCWSTR *)v18 + 1));
        matched = AslpPathWildcardAllocMatchNode(&v53, &SourceString, 0LL, 0);
        if ( matched < 0 )
        {
          v31 = "AslpPathWildcardAllocMatchNode failed to create root of path [%x]";
          v32 = 2362;
LABEL_76:
          AslLogCallPrintf(1, (unsigned int)"AslPathWildcardFindFirst", v32, (_DWORD)v31);
          goto LABEL_77;
        }
        v34 = *((_QWORD *)v18 + 4);
        v35 = *((_QWORD *)v18 + 5);
        if ( v34 < v35 )
        {
LABEL_70:
          v45 = *((_QWORD *)v18 + 3);
          pusResult = 0LL;
          if ( ULongLongMult(v45, v34, &pusResult) >= 0 )
          {
            v46 = *((_QWORD *)v18 + 7);
            v47 = v46 + pusResult;
            if ( v46 + pusResult >= v46 )
            {
              *(UNICODE_STRING *)v47 = v53;
              *(_OWORD *)(v47 + 16) = v54;
              ++*((_QWORD *)v18 + 4);
              v53 = 0LL;
              *v57 = v18;
              v54 = 0LL;
              matched = AslPathWildcardFindNext(pszDest, v47, v18);
              goto LABEL_77;
            }
          }
          goto LABEL_73;
        }
        v36 = v34 + 1;
        if ( v34 + 1 <= v35 )
        {
LABEL_74:
          matched = v20;
          goto LABEL_75;
        }
        v37 = *((_QWORD *)v18 + 6) - 1LL;
        if ( v37 + v36 < v36 )
        {
LABEL_73:
          v20 = -1073741675;
          goto LABEL_74;
        }
        v38 = *((_QWORD *)v18 + 3);
        pullResult = 0LL;
        pusResult = 0LL;
        v39 = (v37 + v36) & ~v37;
        if ( ULongLongMult(v35, v38, &pullResult) < 0 || ULongLongMult(v39, *((_QWORD *)v18 + 3), &pusResult) < 0 )
        {
          matched = -1073741675;
          goto LABEL_69;
        }
        v40 = (void *)*((_QWORD *)v18 + 7);
        if ( v40 )
        {
          v43 = pusResult;
          v44 = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
          v42 = v44;
          if ( !v44 )
          {
LABEL_68:
            matched = -1073741801;
LABEL_69:
            if ( matched )
            {
LABEL_75:
              v31 = "AslpPathWildcardPushNode failed [%x]";
              v32 = 2368;
              goto LABEL_76;
            }
            goto LABEL_70;
          }
          memset_0(v44, 0, v43);
          if ( pullResult < v43 )
            v43 = pullResult;
          memmove(v42, v40, v43);
          ExFreePoolWithTag(v40, 0x72615452u);
        }
        else
        {
          v41 = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
          v42 = v41;
          if ( v41 )
            memset_0(v41, 0, pusResult);
          if ( !v42 )
            goto LABEL_68;
        }
        *((_QWORD *)v18 + 7) = v42;
        matched = 0;
        *((_QWORD *)v18 + 5) = v39;
        goto LABEL_69;
      }
      memset_0(PoolWithTag, 0, v29);
      if ( pullResult < v29 )
        v29 = pullResult;
      memmove(v28, v26, v29);
      ExFreePoolWithTag(v26, 0x72615452u);
    }
    else
    {
      v27 = ExAllocatePoolWithTag(PagedPool, pusResult, 0x72615452u);
      v28 = v27;
      if ( v27 )
        memset_0(v27, 0, pusResult);
      if ( !v28 )
        goto LABEL_44;
    }
    *((_QWORD *)v18 + 7) = v28;
    matched = 0;
    *((_QWORD *)v18 + 5) = v25;
    goto LABEL_45;
  }
  matched = -1073741801;
  v10 = "RtlCreateUnicodeString failed";
  v11 = 2236;
LABEL_9:
  AslLogCallPrintf(1, (unsigned int)"AslPathWildcardFindFirst", v11, (_DWORD)v10);
LABEL_78:
  RtlFreeAnsiString(&DestinationString);
  if ( v8 )
    AslFree(v48);
  if ( matched < 0 )
  {
    AslpPathWildcardFreeFindContext(&v50);
    AslpPathWildcardFreeMatchNode(&v53);
    *v4 = 0LL;
  }
  return (unsigned int)matched;
}
