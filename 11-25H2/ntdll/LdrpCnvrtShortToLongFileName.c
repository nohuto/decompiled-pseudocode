/*
 * XREFs of LdrpCnvrtShortToLongFileName @ 0x180119888
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800A2FC0 (RtlReleaseRelativeName.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800DB3A0 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x1801638C0 (NtQueryDirectoryFile.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall LdrpCnvrtShortToLongFileName(_WORD *a1, const WCHAR *a2, _QWORD *a3)
{
  PVOID v5; // rdi
  int v6; // ebx
  size_t v7; // rax
  _DWORD *Heap; // rdi
  unsigned int v9; // eax
  _WORD *v10; // rax
  _WORD *v11; // rsi
  PVOID BaseAddress[2]; // [rsp+68h] [rbp-39h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+98h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+67h] BYREF

  FileHandle = 0LL;
  v5 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  *(_OWORD *)BaseAddress = 0LL;
  DestinationString = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( *a1 == 92 )
  {
    HIDWORD(BaseAddress[0]) = 0;
    BaseAddress[1] = a1;
    v7 = 2 * wcslen(a1);
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    LOWORD(BaseAddress[0]) = v7;
    WORD1(BaseAddress[0]) = v7 + 2;
    goto LABEL_12;
  }
  v6 = RtlpDosPathNameToRelativeNtPathName_U(2, a1, (unsigned __int16 *)BaseAddress, 0LL, (__int64)&RelativeName);
  if ( v6 >= 0 )
  {
    v5 = BaseAddress[1];
    if ( RelativeName.RelativeName.Length )
      *(UNICODE_STRING *)BaseAddress = RelativeName.RelativeName;
    else
      RelativeName.ContainingDirectory = 0LL;
LABEL_12:
    ObjectAttributes.ObjectName = (PUNICODE_STRING)BaseAddress;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( v5 )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    if ( v6 >= 0 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x410uLL);
      if ( Heap )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        v6 = NtQueryDirectoryFile(
               FileHandle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               Heap,
               0x410u,
               FileBothDirectoryInformation,
               1u,
               &DestinationString,
               0);
        if ( v6 >= 0 )
        {
          v9 = Heap[15];
          if ( v9 <= 0x104 )
          {
            v10 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9 + 4);
            v11 = v10;
            if ( v10 )
            {
              memmove(v10, (char *)Heap + 94, (unsigned int)Heap[15]);
              v11[(unsigned __int64)(unsigned int)Heap[15] >> 1] = 0;
              *a3 = v11;
            }
            else
            {
              v6 = -1073741801;
            }
          }
          else
          {
            v6 = -1073741562;
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        v6 = -1073741801;
      }
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)v6;
}
