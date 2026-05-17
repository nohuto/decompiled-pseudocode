/*
 * XREFs of RtlpMUIEnumerateFolder @ 0x18010DBCC
 * Callers:
 *     RtlGetFileMUIPath @ 0x1800A9A40 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x1801638C0 (NtQueryDirectoryFile.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpMUIEnumerateFolder(const wchar_t *a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  char v5; // r15
  char v6; // r12
  unsigned int v7; // r13d
  unsigned int *Heap; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // rax
  NTSTATUS v12; // r14d
  __int64 v13; // r14
  int v14; // eax
  unsigned int *i; // rbx
  bool v16; // zf
  __int64 v17; // r10
  unsigned int v18; // r15d
  unsigned int v19; // edx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  int v24; // [rsp+40h] [rbp-99h]
  int v25; // [rsp+50h] [rbp-89h]
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  __int128 v27; // [rsp+68h] [rbp-71h] BYREF
  __int128 v28; // [rsp+78h] [rbp-61h] BYREF
  __int128 v29; // [rsp+88h] [rbp-51h] BYREF
  __int128 v30; // [rsp+98h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E8h] [rbp+Fh] BYREF
  int v34; // [rsp+140h] [rbp+67h]
  int v36; // [rsp+158h] [rbp+7Fh] BYREF

  v36 = 0;
  v34 = 0;
  FileHandle = 0LL;
  v5 = 1;
  v6 = 0;
  v7 = 0;
  Heap = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v29 = 0LL;
  v30 = 0LL;
  if ( !a1 )
    goto LABEL_49;
  if ( !a3 )
    return v6;
  if ( !a2 )
    goto LABEL_50;
  v9 = -1LL;
  do
    ++v9;
  while ( a1[v9] );
  if ( v9 >= 0x104 )
    goto LABEL_50;
  *a3 = 0LL;
  v32 = 0LL;
  if ( (int)RtlInitUnicodeStringEx((__int64)&v32, a1) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              (unsigned __int16 *)&v32,
              0LL,
              (unsigned __int16 *)&v27,
              0LL,
              0LL,
              (__int64)&v29) >= 0 )
  {
    v10 = *((_QWORD *)&v27 + 1);
    if ( (_WORD)v29 )
    {
      v11 = (void *)v30;
      v27 = v29;
    }
    else
    {
      v11 = 0LL;
      *(_QWORD *)&v30 = 0LL;
    }
    ObjectAttributes.RootDirectory = v11;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v27;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName((__int64)&v29);
    if ( v10 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10, a4);
    if ( v12 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = (unsigned int *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x1000uLL);
        if ( !Heap )
          goto LABEL_31;
        v13 = 0LL;
LABEL_17:
        LOBYTE(v25) = v5;
        LOBYTE(v24) = 0;
        v14 = NtQueryDirectoryFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Heap, 4096, 1, v24, 0LL, v25);
        if ( v14 < 0 )
        {
          if ( v14 != -2147483642 )
            goto LABEL_31;
        }
        else if ( Heap[15] || *Heap )
        {
          for ( i = Heap; ; i = (unsigned int *)((char *)i + *i) )
          {
            v16 = (i[14] & 0x10) == 0;
            WORD1(v28) = *((_WORD *)i + 30);
            LOWORD(v28) = WORD1(v28);
            *((_QWORD *)&v28 + 1) = i + 16;
            if ( !v16 && RtlCultureNameToLCID((unsigned __int16 *)&v28, &v36) )
            {
              v17 = *a3;
              ++v13;
              if ( *a3 )
              {
                v18 = v34;
              }
              else
              {
                v21 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
                *a3 = v21;
                v17 = v21;
                if ( !v21 )
                  goto LABEL_31;
                v18 = 0;
                v7 = 520;
                v34 = 0;
              }
              v19 = i[15];
              if ( (unsigned __int64)(v19 + v18) + 2 > v7 )
              {
                if ( v19 > 0x208 )
                  v7 += v19 + 2;
                else
                  v7 += 520;
                v22 = v17;
                v23 = RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v17, v7);
                *a3 = v23;
                v17 = v23;
                if ( !v23 )
                {
                  *a3 = v22;
                  goto LABEL_31;
                }
                v18 = v34;
              }
              memmove((void *)(v17 + v18), i + 16, i[15]);
              v34 = i[15] + v18 + 2;
            }
            if ( !*i )
            {
              memset_thunk_772440563353939046(Heap, 0, 0x1000uLL);
              v5 = 0;
              goto LABEL_17;
            }
          }
        }
        v6 = 1;
        *a2 = v13;
        goto LABEL_31;
      }
LABEL_50:
      if ( *a3 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a3, a4);
        *a3 = 0LL;
      }
      return v6;
    }
  }
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, a4);
  if ( !v6 )
  {
LABEL_49:
    if ( !a3 )
      return v6;
    goto LABEL_50;
  }
  return v6;
}
