/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x18010B52C
 * Callers:
 *     RtlGetFileMUIPath @ 0x18007E370 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlReleaseRelativeName @ 0x180077830 (RtlReleaseRelativeName.c)
 *     RtlInitUnicodeStringEx @ 0x180082640 (RtlInitUnicodeStringEx.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenFile @ 0x1801622F0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x180162330 (NtQueryDirectoryFile.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpMUIEnumerateFolder(const wchar_t *a1, _QWORD *a2, unsigned __int64 *a3)
{
  char v4; // r15
  char v5; // r12
  unsigned int v6; // r13d
  unsigned int *Heap; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  void *v10; // rax
  NTSTATUS v11; // r14d
  __int64 v12; // r14
  int v13; // eax
  unsigned int *i; // rbx
  bool v15; // zf
  __int64 v16; // r10
  unsigned int v17; // r15d
  unsigned int v18; // edx
  __int64 v20; // rax
  unsigned __int64 v21; // r15
  __int64 v22; // rax
  int v23; // [rsp+40h] [rbp-99h]
  int v24; // [rsp+50h] [rbp-89h]
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  __int128 v26; // [rsp+68h] [rbp-71h] BYREF
  __int128 v27; // [rsp+78h] [rbp-61h] BYREF
  __int128 v28; // [rsp+88h] [rbp-51h] BYREF
  __int128 v29; // [rsp+98h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E8h] [rbp+Fh] BYREF
  int v33; // [rsp+140h] [rbp+67h]
  int v35; // [rsp+158h] [rbp+7Fh] BYREF

  v35 = 0;
  v33 = 0;
  FileHandle = 0LL;
  v4 = 1;
  v5 = 0;
  v6 = 0;
  Heap = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v28 = 0LL;
  v29 = 0LL;
  if ( !a1 )
    goto LABEL_49;
  if ( !a3 )
    return v5;
  if ( !a2 )
    goto LABEL_50;
  v8 = -1LL;
  do
    ++v8;
  while ( a1[v8] );
  if ( v8 >= 0x104 )
    goto LABEL_50;
  *a3 = 0LL;
  v31 = 0LL;
  if ( (int)RtlInitUnicodeStringEx((__int64)&v31, a1) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              (unsigned __int16 *)&v31,
              0LL,
              (unsigned __int16 *)&v26,
              0LL,
              0LL,
              (__int64)&v28) >= 0 )
  {
    v9 = *((_QWORD *)&v26 + 1);
    if ( (_WORD)v28 )
    {
      v10 = (void *)v29;
      v26 = v28;
    }
    else
    {
      v10 = 0LL;
      *(_QWORD *)&v29 = 0LL;
    }
    ObjectAttributes.RootDirectory = v10;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v26;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName((__int64)&v28);
    if ( v9 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
    if ( v11 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = (unsigned int *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x1000uLL);
        if ( !Heap )
          goto LABEL_31;
        v12 = 0LL;
LABEL_17:
        LOBYTE(v24) = v4;
        LOBYTE(v23) = 0;
        v13 = NtQueryDirectoryFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Heap, 4096, 1, v23, 0LL, v24);
        if ( v13 < 0 )
        {
          if ( v13 != -2147483642 )
            goto LABEL_31;
        }
        else if ( Heap[15] || *Heap )
        {
          for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
          {
            v15 = (i[14] & 0x10) == 0;
            WORD1(v27) = *((_WORD *)i + 30);
            LOWORD(v27) = WORD1(v27);
            *((_QWORD *)&v27 + 1) = i + 16;
            if ( !v15 && RtlCultureNameToLCID((unsigned __int16 *)&v27, &v35) )
            {
              v16 = *a3;
              ++v12;
              if ( *a3 )
              {
                v17 = v33;
              }
              else
              {
                v20 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
                *a3 = v20;
                v16 = v20;
                if ( !v20 )
                  goto LABEL_31;
                v17 = 0;
                v6 = 520;
                v33 = 0;
              }
              v18 = i[15];
              if ( (unsigned __int64)(v18 + v17) + 2 > v6 )
              {
                if ( v18 > 0x208 )
                  v6 += v18 + 2;
                else
                  v6 += 520;
                v21 = v16;
                v22 = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v16, v6);
                *a3 = v22;
                v16 = v22;
                if ( !v22 )
                {
                  *a3 = v21;
                  goto LABEL_31;
                }
                v17 = v33;
              }
              memmove((void *)(v16 + v17), i + 16, i[15]);
              v33 = i[15] + v17 + 2;
            }
            if ( !*i )
            {
              memset_thunk_772440563353939046(Heap, 0, 0x1000uLL);
              v4 = 0;
              goto LABEL_17;
            }
          }
        }
        v5 = 1;
        *a2 = v12;
        goto LABEL_31;
      }
LABEL_50:
      if ( *a3 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3);
        *a3 = 0LL;
      }
      return v5;
    }
  }
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( !v5 )
  {
LABEL_49:
    if ( !a3 )
      return v5;
    goto LABEL_50;
  }
  return v5;
}
