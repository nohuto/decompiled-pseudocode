/*
 * XREFs of LdrpCnvrtShortToLongFileName @ 0x180116698
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x180077830 (RtlReleaseRelativeName.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800DBE30 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenFile @ 0x1801622F0 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x180162330 (NtQueryDirectoryFile.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpCnvrtShortToLongFileName(const wchar_t *a1, const WCHAR *a2, _QWORD *a3)
{
  unsigned __int64 v5; // rdi
  int v6; // ebx
  size_t v7; // rax
  unsigned __int64 Heap; // rdi
  unsigned int v9; // eax
  _WORD *v10; // rax
  _WORD *v11; // rsi
  __int128 v13; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-19h] BYREF
  __int128 v16; // [rsp+98h] [rbp-9h] BYREF
  __int128 v17; // [rsp+A8h] [rbp+7h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+108h] [rbp+67h] BYREF

  FileHandle = 0LL;
  v5 = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v13 = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  if ( *a1 == 92 )
  {
    DWORD1(v13) = 0;
    *((_QWORD *)&v13 + 1) = a1;
    v7 = 2 * wcslen(a1);
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    LOWORD(v13) = v7;
    WORD1(v13) = v7 + 2;
    goto LABEL_12;
  }
  v6 = RtlpDosPathNameToRelativeNtPathName_U(2, a1, (unsigned __int16 *)&v13, 0LL, (__int64)&v16);
  if ( v6 >= 0 )
  {
    v5 = *((_QWORD *)&v13 + 1);
    if ( (_WORD)v16 )
      v13 = v16;
    else
      *(_QWORD *)&v17 = 0LL;
LABEL_12:
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
    if ( v5 )
    {
      RtlReleaseRelativeName((__int64)&v16);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    }
    if ( v6 >= 0 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x410uLL);
      if ( Heap )
      {
        RtlInitUnicodeString(&DestinationString, a2);
        v6 = NtQueryDirectoryFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Heap, 1040, 3, 1, &DestinationString, 0);
        if ( v6 >= 0 )
        {
          v9 = *(_DWORD *)(Heap + 60);
          if ( v9 <= 0x104 )
          {
            v10 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v9 + 4);
            v11 = v10;
            if ( v10 )
            {
              memmove(v10, (const void *)(Heap + 94), *(unsigned int *)(Heap + 60));
              v11[(unsigned __int64)*(unsigned int *)(Heap + 60) >> 1] = 0;
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
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
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
