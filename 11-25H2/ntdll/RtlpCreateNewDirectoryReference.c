/*
 * XREFs of RtlpCreateNewDirectoryReference @ 0x1800A1A30
 * Callers:
 *     RtlSetCurrentDirectory_U @ 0x1800A11C0 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x1800A1730 (RtlpReferenceCurrentDirectory.c)
 *     RtlpInitCurrentDir @ 0x1800A1C48 (RtlpInitCurrentDir.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800158A0 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x180163B40 (ZwQueryVolumeInformationFile.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpCreateNewDirectoryReference(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  int v7; // r15d
  NTSTATUS v8; // ebx
  __int64 v9; // r9
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // edx
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-49h]
  __int64 v16; // [rsp+40h] [rbp-29h] BYREF
  __int128 v17; // [rsp+48h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a2;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  IoStatusBlock = 0LL;
  result = RtlpDosPathNameToRelativeNtPathName(0, a1, 0LL, (unsigned __int16 *)&v17, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v7 = MEMORY[0x7FFE02DC];
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = NtOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((__int64 *)&v17 + 1), v9);
    if ( v8 >= 0 )
    {
      ShareAccess[0] = 4;
      v8 = ZwQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &v16, 8LL, *(_QWORD *)ShareAccess);
      if ( v8 >= 0 )
      {
        Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v3 + 48);
        v11 = Heap;
        if ( Heap )
        {
          v12 = HIDWORD(v16);
          *(_QWORD *)(Heap + 8) = FileHandle;
          *(_QWORD *)(Heap + 32) = Heap + 48;
          *(_DWORD *)Heap = 1;
          *(_WORD *)(Heap + 26) = v3;
          *(_DWORD *)(Heap + 16) = v7;
          *(_DWORD *)(Heap + 40) = v12;
          memmove((void *)(Heap + 48), *((const void **)a1 + 1), *a1);
          *(_WORD *)(*(_QWORD *)(v11 + 32) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
          *(_WORD *)(v11 + 24) = *a1;
          v13 = (unsigned __int64)*a1 >> 1;
          if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * v13 - 2) != 92 )
          {
            if ( (unsigned __int64)*a1 + 4 > *(unsigned __int16 *)(v11 + 26) )
            {
              NtClose(FileHandle);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11, v14);
              return 3221225734LL;
            }
            *(_WORD *)(*(_QWORD *)(v11 + 32) + 2 * v13) = 92;
            *(_WORD *)(*(_QWORD *)(v11 + 32) + 2 * ((unsigned __int64)*a1 >> 1) + 2) = 0;
            *(_WORD *)(v11 + 24) += 2;
          }
          *a3 = v11;
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
