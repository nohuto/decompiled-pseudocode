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

char __fastcall RtlpMUIEnumerateFolder(PCWSTR SourceString, _QWORD *a2, PVOID *a3)
{
  BOOLEAN RestartScan; // r15
  char v5; // r12
  unsigned int v6; // r13d
  _DWORD *Heap; // rsi
  unsigned __int64 v8; // rax
  PVOID v9; // rbx
  HANDLE ContainingDirectory; // rax
  NTSTATUS v11; // r14d
  __int64 v12; // r14
  NTSTATUS v13; // eax
  unsigned int *i; // rbx
  bool v15; // zf
  char *v16; // r10
  unsigned int v17; // r15d
  unsigned int v18; // edx
  char *v20; // rax
  void *v21; // r15
  char *v22; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  PVOID BaseAddress[2]; // [rsp+68h] [rbp-71h] BYREF
  _UNICODE_STRING String; // [rsp+78h] [rbp-61h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+88h] [rbp-51h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-1h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E8h] [rbp+Fh] BYREF
  int v30; // [rsp+140h] [rbp+67h]
  DWORD Lcid; // [rsp+158h] [rbp+7Fh] BYREF

  Lcid = 0;
  v30 = 0;
  FileHandle = 0LL;
  RestartScan = 1;
  v5 = 0;
  v6 = 0;
  Heap = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  String = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&RelativeName, 0, sizeof(RelativeName));
  if ( !SourceString )
    goto LABEL_49;
  if ( !a3 )
    return v5;
  if ( !a2 )
    goto LABEL_50;
  v8 = -1LL;
  do
    ++v8;
  while ( SourceString[v8] );
  if ( v8 >= 0x104 )
    goto LABEL_50;
  *a3 = 0LL;
  DestinationString = 0LL;
  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (int)RtlpDosPathNameToRelativeNtPathName(
              2,
              &DestinationString.Length,
              0LL,
              (unsigned __int16 *)BaseAddress,
              0LL,
              0LL,
              (__int64)&RelativeName) >= 0 )
  {
    v9 = BaseAddress[1];
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = RelativeName.ContainingDirectory;
      *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.RootDirectory = ContainingDirectory;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v11 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x21u);
    RtlReleaseRelativeName(&RelativeName);
    if ( v9 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    if ( v11 >= 0 )
    {
      if ( FileHandle )
      {
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1000uLL);
        if ( !Heap )
          goto LABEL_31;
        v12 = 0LL;
LABEL_17:
        v13 = NtQueryDirectoryFile(
                FileHandle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                Heap,
                0x1000u,
                FileDirectoryInformation,
                0,
                0LL,
                RestartScan);
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
            String.MaximumLength = *((_WORD *)i + 30);
            String.Length = String.MaximumLength;
            String.Buffer = (wchar_t *)(i + 16);
            if ( !v15 && RtlCultureNameToLCID(&String, &Lcid) )
            {
              v16 = (char *)*a3;
              ++v12;
              if ( *a3 )
              {
                v17 = v30;
              }
              else
              {
                v20 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
                *a3 = v20;
                v16 = v20;
                if ( !v20 )
                  goto LABEL_31;
                v17 = 0;
                v6 = 520;
                v30 = 0;
              }
              v18 = i[15];
              if ( (unsigned __int64)(v18 + v17) + 2 > v6 )
              {
                if ( v18 > 0x208 )
                  v6 += v18 + 2;
                else
                  v6 += 520;
                v21 = v16;
                v22 = (char *)RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v16, v6);
                *a3 = v22;
                v16 = v22;
                if ( !v22 )
                {
                  *a3 = v21;
                  goto LABEL_31;
                }
                v17 = v30;
              }
              memmove(&v16[v17], i + 16, i[15]);
              v30 = i[15] + v17 + 2;
            }
            if ( !*i )
            {
              memset_thunk_772440563353939046(Heap, 0, 0x1000uLL);
              RestartScan = 0;
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
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a3);
        *a3 = 0LL;
      }
      return v5;
    }
  }
LABEL_31:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !v5 )
  {
LABEL_49:
    if ( !a3 )
      return v5;
    goto LABEL_50;
  }
  return v5;
}
