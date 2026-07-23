/*
 * XREFs of AslPathWildcardFindNext @ 0x14080ADDC
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x14080A7E4 (AslPathWildcardFindFirst.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ULongLongMult @ 0x140437FD0 (ULongLongMult.c)
 *     RtlStringCbCatNW @ 0x140697990 (RtlStringCbCatNW.c)
 *     ZwQueryDirectoryFile @ 0x1406A7A50 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14080B8D0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x14080BBC8 (AslpPathWildcardFreeMatchNode.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslPathWildcardFindNext(wchar_t *a1, ULONGLONG a2, ULONGLONG *a3)
{
  ULONGLONG v5; // rcx
  __int64 FileInformation; // r12
  NTSTATUS v7; // ebx
  ULONGLONG v8; // rax
  ULONGLONG v9; // rcx
  ULONGLONG v10; // rcx
  unsigned __int16 *v11; // rsi
  ULONGLONG v12; // rdx
  ULONGLONG v13; // rcx
  ULONGLONG v14; // rcx
  ULONGLONG v15; // rax
  const char *v16; // rdx
  int v17; // r8d
  const char *v18; // r9
  ULONGLONG v19; // r10
  ULONGLONG v20; // rcx
  __int64 v21; // r9
  char *v22; // rsi
  __int64 v23; // rbx
  ULONGLONG v24; // r10
  ULONGLONG v25; // rcx
  unsigned __int64 v26; // r8
  ULONGLONG v27; // rdx
  ULONGLONG v28; // rsi
  void *v29; // r15
  PVOID v30; // rax
  void *v31; // rbx
  size_t v32; // r14
  PVOID v33; // rax
  NTSTATUS v34; // eax
  ULONGLONG v35; // rcx
  int v36; // eax
  bool v37; // zf
  int matched; // eax
  ULONGLONG v39; // r13
  ULONGLONG v40; // r9
  ULONGLONG v41; // rcx
  __int64 v42; // rsi
  ULONGLONG v43; // rdx
  ULONGLONG v44; // rsi
  void *v45; // r15
  PVOID v46; // rax
  void *v47; // rbx
  size_t v48; // r14
  PVOID PoolWithTag; // rax
  ULONGLONG v50; // rcx
  ULONGLONG v51; // rdx
  const char *v52; // r9
  int v53; // r8d
  size_t v54; // rdx
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-9h] BYREF
  UNICODE_STRING v57; // [rsp+88h] [rbp+7h] BYREF
  __int128 v58; // [rsp+98h] [rbp+17h]
  ULONGLONG pullResult; // [rsp+F0h] [rbp+6Fh] BYREF
  ULONGLONG Size; // [rsp+F8h] [rbp+77h] BYREF

  pullResult = a2;
  if ( a3 == (ULONGLONG *)-1LL )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  FileInformation = AslAlloc(a1, 616LL);
  if ( !FileInformation )
    return (unsigned int)-1073741801;
  while ( 1 )
  {
    v8 = a3[4];
    if ( !v8 )
      break;
    v9 = a3[3];
    pullResult = 0LL;
    if ( ULongLongMult(v9, v8 - 1, &pullResult) < 0
      || (v10 = a3[7], v11 = (unsigned __int16 *)(v10 + pullResult), v10 + pullResult < v10)
      || !v11 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslpPathWildcardPeekNode",
        2079,
        (unsigned int)"RtlArrayGet failed to get the next node");
      v7 = -1073741595;
      v52 = "AslpPathWildcardPeekNode failed [%x]";
      v53 = 2498;
      goto LABEL_95;
    }
    if ( *((_QWORD *)v11 + 3) )
    {
      RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v11 + 2));
      v34 = ZwQueryDirectoryFile(
              *((HANDLE *)v11 + 3),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              (PVOID)FileInformation,
              0x268u,
              FileBothDirectoryInformation,
              1u,
              &DestinationString,
              0);
      if ( v34 < 0 )
      {
        if ( v34 != -2147483642 && v34 != -1073741809 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslPathWildcardFindNext",
            2527,
            (unsigned int)"NtQueryDirectoryFile failed to query next file [%x]");
          AslLogCallPrintf(
            2,
            (unsigned int)"AslPathWildcardFindNext",
            2528,
            (unsigned int)"FilePath: '%ws'  Pattern: '%ws'");
        }
        goto LABEL_48;
      }
      v36 = *(_DWORD *)(FileInformation + 60);
      if ( v36 == 4 )
      {
        if ( *(_WORD *)(FileInformation + 94) != 46 )
          goto LABEL_56;
        v37 = *(_WORD *)(FileInformation + 96) == 46;
LABEL_55:
        if ( !v37 )
          goto LABEL_56;
      }
      else
      {
        if ( v36 == 2 )
        {
          v37 = *(_WORD *)(FileInformation + 94) == 46;
          goto LABEL_55;
        }
LABEL_56:
        matched = AslpPathWildcardAllocMatchNode(
                    &v57,
                    (PCUNICODE_STRING)v11,
                    (NTSTRSAFE_PCWSTR)(FileInformation + 94),
                    *(_WORD *)(FileInformation + 60));
        if ( matched == -1073741197 )
        {
          v7 = RtlStringCbCopyNW(a1, 0x208uLL, *((STRSAFE_PCNZWCH *)v11 + 1), *v11);
          if ( v7 >= 0 )
          {
            if ( *(_WORD *)(*((_QWORD *)v11 + 1) + 2 * ((unsigned __int64)*v11 >> 1) - 2) == 92
              || (v7 = RtlStringCbCatNW(a1, v54, L"\\", 2uLL), v7 >= 0) )
            {
              v7 = RtlStringCbCatNW(
                     a1,
                     v54,
                     (STRSAFE_PCNZWCH)(FileInformation + 94),
                     *(unsigned int *)(FileInformation + 60));
              if ( v7 >= 0 )
              {
                v7 = 0;
                goto LABEL_97;
              }
              v52 = "RtlStringCbCatNW failed [%x]";
              v53 = 2615;
            }
            else
            {
              v52 = "RtlStringCbCatNW failed [%x]";
              v53 = 2608;
            }
          }
          else
          {
            v52 = "RtlStringCbCopyNW failed [%x]";
            v53 = 2601;
          }
          goto LABEL_95;
        }
        if ( matched != -1073741565 && matched != -1073741638 )
        {
          if ( matched < 0 )
          {
            v18 = "AslpPathWildcardAllocMatchNode failed [%x]";
            v17 = 2585;
            v16 = "AslPathWildcardFindNext";
LABEL_82:
            AslLogCallPrintf(1, (_DWORD)v16, v17, (_DWORD)v18);
          }
          else
          {
            v39 = a3[4];
            v40 = a3[5];
            if ( v39 < v40 )
              goto LABEL_78;
            v41 = v39 + 1;
            if ( v39 + 1 <= v40 )
            {
              v7 = -1073741811;
LABEL_85:
              v52 = "AslpPathWildcardPushNode failed [%x]";
              v53 = 2577;
LABEL_95:
              AslLogCallPrintf(1, (unsigned int)"AslPathWildcardFindNext", v53, (_DWORD)v52);
              goto LABEL_97;
            }
            v42 = a3[6] - 1;
            if ( v42 + v41 < v41 )
              goto LABEL_84;
            v43 = a3[3];
            Size = 0LL;
            pullResult = 0LL;
            v44 = (v42 + v41) & ~v42;
            if ( ULongLongMult(v40, v43, &Size) < 0 || ULongLongMult(v44, a3[3], &pullResult) < 0 )
            {
              v7 = -1073741675;
              goto LABEL_71;
            }
            v45 = (void *)a3[7];
            if ( v45 )
            {
              v48 = pullResult;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, pullResult, 0x72615452u);
              v47 = PoolWithTag;
              if ( !PoolWithTag )
                goto LABEL_70;
              memset_0(PoolWithTag, 0, v48);
              if ( Size < v48 )
                v48 = Size;
              memmove(v47, v45, v48);
              ExFreePoolWithTag(v45, 0x72615452u);
            }
            else
            {
              v46 = ExAllocatePoolWithTag(PagedPool, pullResult, 0x72615452u);
              v47 = v46;
              if ( v46 )
                memset_0(v46, 0, pullResult);
              if ( !v47 )
              {
LABEL_70:
                v7 = -1073741801;
                goto LABEL_71;
              }
            }
            a3[7] = (ULONGLONG)v47;
            v7 = 0;
            a3[5] = v44;
LABEL_71:
            if ( v7 )
              goto LABEL_85;
LABEL_78:
            v50 = a3[3];
            pullResult = 0LL;
            if ( ULongLongMult(v50, v39, &pullResult) < 0 || (v5 = a3[7], v51 = v5 + pullResult, v5 + pullResult < v5) )
            {
LABEL_84:
              v7 = -1073741675;
              goto LABEL_85;
            }
            *(UNICODE_STRING *)v51 = v57;
            *(_OWORD *)(v51 + 16) = v58;
            ++a3[4];
          }
        }
      }
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslPathWildcardFindNext",
        2503,
        (unsigned int)"Node on the stack with invalid handle.");
LABEL_48:
      v35 = a3[4];
      if ( !v35 )
        goto LABEL_20;
      v12 = v35 - 1;
      v13 = a3[3];
      pullResult = 0LL;
      if ( ULongLongMult(v13, v12, &pullResult) < 0
        || (v14 = a3[7], v15 = v14 + pullResult, v14 + pullResult < v14)
        || !v15 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"AslpPathWildcardPeekNode",
          2079,
          (unsigned int)"RtlArrayGet failed to get the next node");
LABEL_20:
        v16 = "AslpPathWildcardPopNode";
        v17 = 2106;
        v18 = "AslpPathWildcardPeekNode failed [%x]";
        goto LABEL_82;
      }
      AslpPathWildcardFreeMatchNode(v15);
      v19 = a3[4];
      if ( v19 )
      {
        v20 = a3[3];
        pullResult = 0LL;
        if ( ULongLongMult(v20, v19 - 1, &pullResult) >= 0 )
        {
          v5 = a3[7];
          v22 = (char *)(v5 + pullResult);
          if ( v5 + pullResult >= v5 )
          {
            v23 = a3[4] - v21 - 1;
            Size = v23;
            if ( !v23 )
              goto LABEL_29;
            if ( ULongLongMult(v23, a3[3], &Size) >= 0 )
            {
              v25 = a3[3];
              pullResult = 0LL;
              if ( ULongLongMult(v25, v24, &pullResult) >= 0 )
              {
                v5 = a3[7];
                if ( v5 + pullResult >= v5 )
                {
                  v23 = Size;
                  memmove(v22, (const void *)(v5 + pullResult), Size);
LABEL_29:
                  memset_0(&v22[v23], 0, a3[3]);
                  v26 = a3[4] - 1;
                  a3[4] = v26;
                  if ( v26 > 0x10 )
                  {
                    v5 = a3[5];
                    v27 = a3[3];
                    if ( v27 * v5 >= 0x400 && v26 < v5 >> 2 )
                    {
                      pullResult = 0LL;
                      Size = 0LL;
                      v28 = v5 >> 1;
                      if ( ULongLongMult(v5, v27, &Size) >= 0 && ULongLongMult(v28, a3[3], &pullResult) >= 0 )
                      {
                        v29 = (void *)a3[7];
                        if ( v29 )
                        {
                          v32 = pullResult;
                          v33 = ExAllocatePoolWithTag(PagedPool, pullResult, 0x72615452u);
                          v31 = v33;
                          if ( v33 )
                          {
                            memset_0(v33, 0, v32);
                            if ( Size < v32 )
                              v32 = Size;
                            memmove(v31, v29, v32);
                            ExFreePoolWithTag(v29, 0x72615452u);
LABEL_43:
                            a3[7] = (ULONGLONG)v31;
                            a3[5] = v28;
                          }
                        }
                        else
                        {
                          v30 = ExAllocatePoolWithTag(PagedPool, pullResult, 0x72615452u);
                          v31 = v30;
                          if ( v30 )
                            memset_0(v30, 0, pullResult);
                          if ( v31 )
                            goto LABEL_43;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v7 = -2147483642;
LABEL_97:
  AslFree(v5);
  return (unsigned int)v7;
}
