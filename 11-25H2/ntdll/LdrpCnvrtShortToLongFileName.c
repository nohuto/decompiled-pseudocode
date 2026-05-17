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

__int64 __fastcall LdrpCnvrtShortToLongFileName(const wchar_t *a1, const WCHAR *a2, _QWORD *a3)
{
  __int64 v5; // rdi
  int v6; // ebx
  size_t v7; // rax
  __int64 v8; // r9
  __int64 Heap; // rdi
  __int64 v10; // r9
  unsigned int v11; // eax
  _WORD *v12; // rax
  _WORD *v13; // rsi
  __int128 v15; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  __int128 v18; // [rsp+98h] [rbp-9h] BYREF
  __int128 v19; // [rsp+A8h] [rbp+7h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+67h] BYREF

  FileHandle = 0LL;
  v5 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v15 = 0LL;
  DestinationString = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( *a1 == 92 )
  {
    DWORD1(v15) = 0;
    *((_QWORD *)&v15 + 1) = a1;
    v7 = 2 * wcslen(a1);
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    LOWORD(v15) = v7;
    WORD1(v15) = v7 + 2;
    goto LABEL_12;
  }
  v6 = RtlpDosPathNameToRelativeNtPathName_U(2, a1, (unsigned __int16 *)&v15, 0LL, (__int64)&v18);
  if ( v6 >= 0 )
  {
    v5 = *((_QWORD *)&v15 + 1);
    if ( (_WORD)v18 )
      v15 = v18;
    else
      *(_QWORD *)&v19 = 0LL;
LABEL_12:
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( v5 )
    {
      RtlReleaseRelativeName((__int64)&v18);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, v8);
    }
    if ( v6 >= 0 )
    {
      Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x410uLL);
      if ( Heap )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        v6 = NtQueryDirectoryFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Heap, 1040, 3, 1, &DestinationString, 0);
        if ( v6 >= 0 )
        {
          v11 = *(_DWORD *)(Heap + 60);
          if ( v11 <= 0x104 )
          {
            v12 = (_WORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v11 + 4);
            v13 = v12;
            if ( v12 )
            {
              memmove(v12, (const void *)(Heap + 94), *(unsigned int *)(Heap + 60));
              v13[(unsigned __int64)*(unsigned int *)(Heap + 60) >> 1] = 0;
              *a3 = v13;
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
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v10);
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
