/*
 * XREFs of RtlDosSearchPath_U @ 0x1800AAC20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlInitUnicodeStringEx @ 0x18006CCF0 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x1800A24A0 (RtlDoesFileExists_UEx.c)
 *     RtlGetFullPathName_U @ 0x1800AA590 (RtlGetFullPathName_U.c)
 *     RtlDetermineDosPathNameType_U @ 0x1800AC080 (RtlDetermineDosPathNameType_U.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

ULONG __cdecl RtlDosSearchPath_U(
        PCWSTR Path,
        PCWSTR FileName,
        PCWSTR Extension,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart)
{
  __int64 v10; // rdx
  PCWSTR i; // rax
  unsigned int Length; // r15d
  int v13; // ebp
  unsigned int v14; // edi
  wchar_t *Heap; // rbp
  size_t v16; // r13
  wchar_t *j; // rdi
  WCHAR v18; // ax
  ULONG FullPathName_U; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  DestinationString = 0LL;
  if ( RtlDetermineDosPathNameType_U(FileName) != RtlPathTypeRelative )
  {
    LOBYTE(v10) = 1;
    if ( RtlDoesFileExists_UEx(FileName, v10) )
      return RtlGetFullPathName_U(FileName, BufferLength, Buffer, FilePart);
    return 0;
  }
  for ( i = FileName; *i; ++i )
  {
    if ( *i == 46 )
      goto LABEL_30;
  }
  if ( !Extension )
  {
LABEL_30:
    Length = 0;
    goto LABEL_7;
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, Extension) < 0 )
    return 0;
  Length = DestinationString.Length;
LABEL_7:
  if ( RtlInitUnicodeStringEx(&DestinationString, Path) < 0 )
    return 0;
  v13 = DestinationString.Length;
  if ( RtlInitUnicodeStringEx(&DestinationString, FileName) < 0 )
    return 0;
  v14 = DestinationString.Length;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length + DestinationString.Length + v13 + 6LL);
  if ( !Heap )
    return 0;
  v16 = v14;
  while ( 1 )
  {
    for ( j = Heap; ; ++j )
    {
      v18 = *Path;
      if ( !*Path )
        break;
      ++Path;
      if ( v18 == 59 )
        break;
      *j = v18;
    }
    if ( j != Heap && *(j - 1) != 92 )
      *j++ = 92;
    Path = (PCWSTR)(-(__int64)(*Path != 0) & (unsigned __int64)Path);
    memmove(j, FileName, v16);
    if ( Length )
      memmove((char *)j + v16, Extension, Length + 2LL);
    else
      *(wchar_t *)((char *)j + v16) = 0;
    if ( RtlDoesFileExists_UEx(Heap, 0LL) )
      break;
    if ( !Path )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 0;
    }
  }
  FullPathName_U = RtlGetFullPathName_U(Heap, BufferLength, Buffer, FilePart);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return FullPathName_U;
}
