/*
 * XREFs of AslPathWildcardFindNext @ 0x1800A4854
 * Callers:
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A530 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x1800A4220 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     ULongLongMult @ 0x180091D08 (ULongLongMult.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     RtlStringCbCopyNW @ 0x18009EA14 (RtlStringCbCopyNW.c)
 *     RtlUShortAdd @ 0x18009EAF0 (RtlUShortAdd.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1800A5734 (AslpPathWildcardAllocMatchNode.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A5AC4 (AslpPathWildcardFreeMatchNode.c)
 *     memmove_0 @ 0x1800A780E (memmove_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall AslPathWildcardFindNext(_WORD *a1, __int64 a2, __int64 a3)
{
  char *FileInformation; // r13
  int v7; // ebx
  __int64 v8; // rax
  ULONGLONG v9; // rcx
  unsigned __int16 *v10; // rbx
  __int64 v11; // rcx
  ULONGLONG v12; // rdx
  ULONGLONG v13; // rcx
  ULONGLONG v14; // rax
  __int64 v15; // r11
  ULONGLONG v16; // rcx
  __int64 v17; // r10
  char *v18; // rsi
  __int64 v19; // rbx
  ULONGLONG v20; // r11
  ULONGLONG v21; // rcx
  const void *v22; // rdx
  unsigned __int64 v23; // r8
  ULONGLONG v24; // rcx
  ULONGLONG v25; // rdx
  unsigned __int64 v26; // rax
  ULONGLONG v27; // rsi
  void *v28; // r8
  void *v29; // rcx
  PVOID v30; // rax
  PVOID v31; // rbx
  NTSTATUS v32; // eax
  __int64 v33; // rcx
  ULONGLONG v34; // rdx
  ULONGLONG v35; // rcx
  ULONGLONG v36; // rax
  __int64 v37; // r11
  ULONGLONG v38; // rcx
  __int64 v39; // r10
  char *v40; // rsi
  __int64 v41; // rbx
  ULONGLONG v42; // r11
  ULONGLONG v43; // rcx
  const void *v44; // rdx
  bool v45; // zf
  int matched; // eax
  ULONGLONG v47; // r14
  ULONGLONG v48; // rcx
  __int64 v49; // rsi
  ULONGLONG v50; // rax
  ULONGLONG v51; // rdx
  ULONGLONG v52; // rcx
  ULONGLONG v53; // rsi
  void *v54; // r8
  void *v55; // rcx
  PVOID v56; // rax
  PVOID Heap; // rbx
  ULONGLONG v58; // rcx
  _OWORD *v59; // rdx
  SIZE_T v60; // rdx
  WCHAR *p_ReservedForAllocatedSize; // rcx
  SIZE_T v62; // r8
  USHORT Length; // r9
  SIZE_T v64; // r8
  USHORT v65; // cx
  unsigned __int64 v66; // r8
  USHORT v67; // ax
  USHORT v68; // r10
  PWSTR Buffer; // r9
  USHORT v70; // dx
  unsigned __int64 v71; // r8
  PUCHAR StaticBuffer; // rax
  ULONGLONG pullResult; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v74; // [rsp+68h] [rbp-98h] BYREF
  ULONGLONG Size; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  __int128 v78; // [rsp+98h] [rbp-68h] BYREF
  __int128 v79; // [rsp+A8h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-48h] BYREF
  _RTL_UNICODE_STRING_BUFFER Path; // [rsp+C8h] [rbp-38h] BYREF

  if ( a3 == -1 )
    return 2147483654LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a3 )
    return 3221225713LL;
  v74 = 0;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  memset(&Path, 0, 56);
  FileInformation = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x268uLL);
  if ( !FileInformation )
  {
    v7 = -1073741801;
    goto LABEL_126;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(a3 + 32);
    if ( !v8 )
      break;
    v9 = *(_QWORD *)(a3 + 24);
    pullResult = 0LL;
    if ( ULongLongMult(v9, v8 - 1, &pullResult) < 0
      || (v10 = (unsigned __int16 *)(*(_QWORD *)(a3 + 56) + pullResult), (unsigned __int64)v10 < *(_QWORD *)(a3 + 56))
      || !v10 )
    {
      AslLogCallPrintf(1LL);
      v7 = -1073741595;
      goto LABEL_123;
    }
    if ( *((_QWORD *)v10 + 3) )
    {
      RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 2));
      v32 = ZwQueryDirectoryFile(
              *((HANDLE *)v10 + 3),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              FileInformation,
              0x268u,
              FileBothDirectoryInformation,
              1u,
              &DestinationString,
              0);
      if ( v32 >= 0 )
      {
        if ( *((_DWORD *)FileInformation + 15) == 4 )
        {
          if ( *((_WORD *)FileInformation + 47) != 46 )
            goto LABEL_64;
          v45 = *((_WORD *)FileInformation + 48) == 46;
LABEL_63:
          if ( !v45 )
            goto LABEL_64;
        }
        else
        {
          if ( *((_DWORD *)FileInformation + 15) == 2 )
          {
            v45 = *((_WORD *)FileInformation + 47) == 46;
            goto LABEL_63;
          }
LABEL_64:
          matched = AslpPathWildcardAllocMatchNode(
                      (unsigned int)&v78,
                      (_DWORD)v10,
                      *((_QWORD *)v10 + 2),
                      (*((_DWORD *)FileInformation + 14) >> 4) & 1,
                      (__int64)(FileInformation + 94),
                      *((_WORD *)FileInformation + 30));
          if ( matched == -1073741197 )
          {
            if ( (int)RtlUShortAdd(*v10, *((_WORD *)FileInformation + 30), (__int16 *)&v74) >= 0
              && (int)RtlUShortAdd(v74, 2, (__int16 *)&v74) >= 0 )
            {
              v60 = 2LL;
              Path.ByteBuffer.StaticSize = 2LL;
              Path.ByteBuffer.StaticBuffer = (PUCHAR)&Path.ByteBuffer.ReservedForAllocatedSize;
              p_ReservedForAllocatedSize = (WCHAR *)&Path.ByteBuffer.ReservedForAllocatedSize;
              v62 = v74 + 2LL;
              Path.ByteBuffer.Buffer = (PUCHAR)&Path.ByteBuffer.ReservedForAllocatedSize;
              Path.ByteBuffer.Size = 2LL;
              LOWORD(Path.ByteBuffer.ReservedForAllocatedSize) = 0;
              Path.String.Buffer = (PWSTR)&Path.ByteBuffer.ReservedForAllocatedSize;
              *(_DWORD *)&Path.String.Length = 0x20000;
              if ( v62 <= 0xFFFE )
              {
                if ( v62 > 2 )
                {
                  if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v62) < 0 )
                  {
                    v7 = -1073741801;
                    goto LABEL_123;
                  }
                  v60 = Path.ByteBuffer.Size;
                  p_ReservedForAllocatedSize = (WCHAR *)Path.ByteBuffer.Buffer;
                }
                Path.String.Buffer = p_ReservedForAllocatedSize;
                Length = 0;
                Path.String.MaximumLength = v60;
                Path.String.Length = 0;
                v64 = *v10 + 2LL;
                if ( v64 <= 0xFFFE )
                {
                  if ( v64 > v60 )
                  {
                    if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v64) < 0 )
                    {
                      v7 = -1073741801;
                      goto LABEL_123;
                    }
                    p_ReservedForAllocatedSize = (WCHAR *)Path.ByteBuffer.Buffer;
                    Length = Path.String.Length;
                  }
                  Path.String.Buffer = p_ReservedForAllocatedSize;
                  memmove_0(&p_ReservedForAllocatedSize[(unsigned __int64)Length >> 1], *((const void **)v10 + 1), *v10);
                  Path.String.MaximumLength = *v10 + Path.String.Length + 2;
                  Path.String.Length += *v10;
                  Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
                  if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 2 * ((unsigned __int64)*v10 >> 1) - 2) != 92 )
                  {
                    v65 = Path.String.Length;
                    v66 = (unsigned int)Path.String.Length + 2 + 2LL;
                    if ( v66 > 0xFFFE )
                    {
                      v7 = -1073741562;
                      goto LABEL_123;
                    }
                    if ( v66 > Path.ByteBuffer.Size )
                    {
                      if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v66) < 0 )
                      {
                        v7 = -1073741801;
                        goto LABEL_123;
                      }
                      v65 = Path.String.Length;
                    }
                    Path.String.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
                    *(_WORD *)&Path.ByteBuffer.Buffer[2 * ((unsigned __int64)v65 >> 1)] = asc_1800C2B38[0];
                    v67 = Path.String.Length + 4;
                    Path.String.Length += 2;
                    Path.String.MaximumLength = v67;
                    Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
                  }
                  v68 = Path.String.Length;
                  Buffer = (PWSTR)(FileInformation + 94);
                  DestinationString.Buffer = (PWSTR)(FileInformation + 94);
                  DestinationString.Length = *((_WORD *)FileInformation + 30);
                  v70 = DestinationString.Length;
                  DestinationString.MaximumLength = *((_WORD *)FileInformation + 30);
                  v71 = Path.String.Length + (unsigned int)DestinationString.Length + 2LL;
                  if ( v71 <= 0xFFFE )
                  {
                    if ( v71 > Path.ByteBuffer.Size )
                    {
                      if ( RtlpEnsureBufferSize(0, &Path.ByteBuffer, v71) < 0 )
                      {
                        v7 = -1073741801;
                        goto LABEL_123;
                      }
                      Buffer = DestinationString.Buffer;
                      v70 = DestinationString.Length;
                      v68 = Path.String.Length;
                    }
                    Path.String.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
                    memmove_0(&Path.ByteBuffer.Buffer[2 * ((unsigned __int64)v68 >> 1)], Buffer, v70);
                    Path.String.Length += DestinationString.Length;
                    Path.String.MaximumLength = Path.String.Length + 2;
                    Path.String.Buffer[(unsigned __int64)Path.String.Length >> 1] = 0;
                    if ( !*(_DWORD *)a3 || (v7 = RtlNtPathNameToDosPathName(0, &Path, 0LL, 0LL), v7 >= 0) )
                    {
                      v7 = RtlStringCbCopyNW(a1, 0x208uLL, (__int64)Path.String.Buffer, Path.String.Length);
                      if ( v7 >= 0 )
                      {
                        v7 = 0;
                        goto LABEL_125;
                      }
                    }
                    goto LABEL_123;
                  }
                  v7 = -1073741562;
                }
                else
                {
                  v7 = -1073741562;
                }
              }
              else
              {
                v7 = -1073741562;
              }
LABEL_123:
              AslLogCallPrintf(1LL);
              goto LABEL_125;
            }
LABEL_88:
            AslLogCallPrintf(1LL);
          }
          else if ( matched != -1073741565 && matched != -1073741638 )
          {
            if ( matched < 0 )
              goto LABEL_88;
            v47 = *(_QWORD *)(a3 + 32);
            if ( v47 >= *(_QWORD *)(a3 + 40) )
            {
              v48 = v47 + 1;
              if ( v47 + 1 <= *(_QWORD *)(a3 + 40) )
              {
                v7 = -1073741811;
                goto LABEL_123;
              }
              v49 = *(_QWORD *)(a3 + 48) - 1LL;
              v50 = v49 + v48;
              if ( v49 + v48 < v48 )
              {
                v7 = -1073741675;
                goto LABEL_123;
              }
              v51 = *(_QWORD *)(a3 + 24);
              v52 = *(_QWORD *)(a3 + 40);
              pullResult = 0LL;
              v53 = v50 & ~v49;
              if ( ULongLongMult(v52, v51, &Size) < 0 || ULongLongMult(v53, *(_QWORD *)(a3 + 24), &pullResult) < 0 )
              {
                v7 = -1073741675;
              }
              else
              {
                v54 = *(void **)(a3 + 56);
                v55 = *(void **)(a3 + 16);
                if ( v54 )
                {
                  Heap = RtlReAllocateHeap(v55, 0, v54, pullResult);
                }
                else
                {
                  v56 = RtlAllocateHeap(v55, 0, pullResult);
                  Heap = v56;
                  if ( v56 )
                    memset_0(v56, 0, pullResult);
                }
                if ( Heap )
                {
                  *(_QWORD *)(a3 + 56) = Heap;
                  v7 = 0;
                  *(_QWORD *)(a3 + 40) = v53;
                }
                else
                {
                  v7 = -1073741801;
                }
              }
              if ( v7 )
                goto LABEL_123;
            }
            v58 = *(_QWORD *)(a3 + 24);
            Size = 0LL;
            if ( ULongLongMult(v58, v47, &Size) < 0
              || (v59 = (_OWORD *)(*(_QWORD *)(a3 + 56) + Size), (unsigned __int64)v59 < *(_QWORD *)(a3 + 56)) )
            {
              v7 = -1073741675;
              goto LABEL_123;
            }
            *v59 = v78;
            v59[1] = v79;
            ++*(_QWORD *)(a3 + 32);
          }
        }
      }
      else
      {
        if ( v32 != -2147483642 && v32 != -1073741809 )
        {
          AslLogCallPrintf(1LL);
          AslLogCallPrintf(2LL);
        }
        v33 = *(_QWORD *)(a3 + 32);
        if ( !v33 )
          goto LABEL_88;
        v34 = v33 - 1;
        v35 = *(_QWORD *)(a3 + 24);
        Size = 0LL;
        if ( ULongLongMult(v35, v34, &Size) < 0
          || (v36 = *(_QWORD *)(a3 + 56) + Size, v36 < *(_QWORD *)(a3 + 56))
          || !v36 )
        {
LABEL_19:
          AslLogCallPrintf(1LL);
          goto LABEL_88;
        }
        AslpPathWildcardFreeMatchNode(*(_QWORD *)(a3 + 56) + Size);
        v37 = *(_QWORD *)(a3 + 32);
        if ( v37 )
        {
          v38 = *(_QWORD *)(a3 + 24);
          Size = 0LL;
          if ( ULongLongMult(v38, v37 - 1, &Size) >= 0 )
          {
            v40 = (char *)(*(_QWORD *)(a3 + 56) + Size);
            if ( (unsigned __int64)v40 >= *(_QWORD *)(a3 + 56) )
            {
              v41 = *(_QWORD *)(a3 + 32) - v39 - 1;
              pullResult = v41;
              if ( v41 )
              {
                if ( ULongLongMult(v41, *(_QWORD *)(a3 + 24), &pullResult) >= 0 )
                {
                  v43 = *(_QWORD *)(a3 + 24);
                  Size = 0LL;
                  if ( ULongLongMult(v43, v42, &Size) >= 0 )
                  {
                    v44 = (const void *)(*(_QWORD *)(a3 + 56) + Size);
                    if ( (unsigned __int64)v44 >= *(_QWORD *)(a3 + 56) )
                    {
                      v41 = pullResult;
                      memmove_0(v40, v44, pullResult);
                      goto LABEL_56;
                    }
                  }
                }
              }
              else
              {
LABEL_56:
                memset_0(&v40[v41], 0, *(_QWORD *)(a3 + 24));
                v23 = *(_QWORD *)(a3 + 32) - 1LL;
                *(_QWORD *)(a3 + 32) = v23;
                if ( v23 > 0x10 )
                {
                  v25 = *(_QWORD *)(a3 + 24);
                  v24 = *(_QWORD *)(a3 + 40);
                  v26 = v24 * v25;
LABEL_30:
                  if ( v26 >= 0x400 && v23 < v24 >> 2 )
                  {
                    pullResult = 0LL;
                    v27 = v24 >> 1;
                    if ( ULongLongMult(v24, v25, &Size) >= 0
                      && ULongLongMult(v27, *(_QWORD *)(a3 + 24), &pullResult) >= 0 )
                    {
                      v28 = *(void **)(a3 + 56);
                      v29 = *(void **)(a3 + 16);
                      if ( v28 )
                      {
                        v31 = RtlReAllocateHeap(v29, 0, v28, pullResult);
                      }
                      else
                      {
                        v30 = RtlAllocateHeap(v29, 0, pullResult);
                        v31 = v30;
                        if ( v30 )
                          memset_0(v30, 0, pullResult);
                      }
                      if ( v31 )
                      {
                        *(_QWORD *)(a3 + 56) = v31;
                        *(_QWORD *)(a3 + 40) = v27;
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
    else
    {
      AslLogCallPrintf(1LL);
      v11 = *(_QWORD *)(a3 + 32);
      if ( !v11 )
        goto LABEL_88;
      v12 = v11 - 1;
      v13 = *(_QWORD *)(a3 + 24);
      pullResult = 0LL;
      if ( ULongLongMult(v13, v12, &pullResult) < 0 )
        goto LABEL_19;
      v14 = *(_QWORD *)(a3 + 56) + pullResult;
      if ( v14 < *(_QWORD *)(a3 + 56) || !v14 )
        goto LABEL_19;
      AslpPathWildcardFreeMatchNode(*(_QWORD *)(a3 + 56) + pullResult);
      v15 = *(_QWORD *)(a3 + 32);
      if ( v15 )
      {
        v16 = *(_QWORD *)(a3 + 24);
        pullResult = 0LL;
        if ( ULongLongMult(v16, v15 - 1, &pullResult) >= 0 )
        {
          v18 = (char *)(*(_QWORD *)(a3 + 56) + pullResult);
          if ( (unsigned __int64)v18 >= *(_QWORD *)(a3 + 56) )
          {
            v19 = *(_QWORD *)(a3 + 32) - v17 - 1;
            Size = v19;
            if ( v19 )
            {
              if ( ULongLongMult(v19, *(_QWORD *)(a3 + 24), &Size) >= 0 )
              {
                v21 = *(_QWORD *)(a3 + 24);
                pullResult = 0LL;
                if ( ULongLongMult(v21, v20, &pullResult) >= 0 )
                {
                  v22 = (const void *)(*(_QWORD *)(a3 + 56) + pullResult);
                  if ( (unsigned __int64)v22 >= *(_QWORD *)(a3 + 56) )
                  {
                    v19 = Size;
                    memmove_0(v18, v22, Size);
                    goto LABEL_28;
                  }
                }
              }
            }
            else
            {
LABEL_28:
              memset_0(&v18[v19], 0, *(_QWORD *)(a3 + 24));
              v23 = *(_QWORD *)(a3 + 32) - 1LL;
              *(_QWORD *)(a3 + 32) = v23;
              if ( v23 > 0x10 )
              {
                v24 = *(_QWORD *)(a3 + 40);
                v25 = *(_QWORD *)(a3 + 24);
                v26 = v25 * v24;
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
  }
  v7 = -2147483642;
LABEL_125:
  AslFree(NtCurrentPeb()->ProcessHeap, FileInformation);
LABEL_126:
  StaticBuffer = Path.ByteBuffer.StaticBuffer;
  if ( Path.ByteBuffer.Buffer && Path.ByteBuffer.Buffer != Path.ByteBuffer.StaticBuffer )
  {
    UnicodeString.Buffer = (PWSTR)Path.ByteBuffer.Buffer;
    *(_QWORD *)&UnicodeString.Length = 0LL;
    RtlFreeUnicodeString(&UnicodeString);
    StaticBuffer = Path.ByteBuffer.StaticBuffer;
  }
  if ( StaticBuffer )
    *(_WORD *)StaticBuffer = 0;
  return (unsigned int)v7;
}
