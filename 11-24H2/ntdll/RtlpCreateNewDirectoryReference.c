/*
 * XREFs of RtlpCreateNewDirectoryReference @ 0x180078610
 * Callers:
 *     RtlpInitCurrentDir @ 0x180077FA8 (RtlpInitCurrentDir.c)
 *     RtlpReferenceCurrentDirectory @ 0x180078310 (RtlpReferenceCurrentDirectory.c)
 *     RtlSetCurrentDirectory_U @ 0x1800FAB90 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180059C40 (RtlpDosPathNameToRelativeNtPathName.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenFile @ 0x1801622F0 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1801625B0 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpCreateNewDirectoryReference(unsigned __int16 *a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  int v7; // r15d
  NTSTATUS v8; // ebx
  __int64 Heap; // rax
  unsigned __int64 v10; // rbx
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  __int128 v14; // [rsp+48h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  IoStatusBlock = 0LL;
  result = RtlpDosPathNameToRelativeNtPathName(0, a1, 0LL, (unsigned __int16 *)&v14, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = MEMORY[0x7FFE02DC];
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v14;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&v14 + 1));
    if ( v8 >= 0 )
    {
      v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &v13, 8LL, 4);
      if ( v8 >= 0 )
      {
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3 + 48);
        v10 = Heap;
        if ( Heap )
        {
          v11 = HIDWORD(v13);
          *(_QWORD *)(Heap + 8) = FileHandle;
          *(_QWORD *)(Heap + 32) = Heap + 48;
          *(_DWORD *)Heap = 1;
          *(_WORD *)(Heap + 26) = v3;
          *(_DWORD *)(Heap + 16) = v7;
          *(_DWORD *)(Heap + 40) = v11;
          memmove((void *)(Heap + 48), *((const void **)a1 + 1), *a1);
          *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
          *(_WORD *)(v10 + 24) = *a1;
          v12 = (unsigned __int64)*a1 >> 1;
          if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v12 - 2) != 92 )
          {
            if ( (unsigned __int64)*a1 + 4 > *(unsigned __int16 *)(v10 + 26) )
            {
              NtClose(FileHandle);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
              return 3221225734LL;
            }
            *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * v12) = 92;
            *(_WORD *)(*(_QWORD *)(v10 + 32) + 2 * ((unsigned __int64)*a1 >> 1) + 2) = 0;
            *(_WORD *)(v10 + 24) += 2;
          }
          *a3 = v10;
          return 0LL;
        }
        v8 = -1073741801;
      }
      NtClose(FileHandle);
    }
    return (unsigned int)v8;
  }
  return result;
}
