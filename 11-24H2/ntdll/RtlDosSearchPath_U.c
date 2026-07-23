/*
 * XREFs of RtlDosSearchPath_U @ 0x180004710
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_U @ 0x180002200 (RtlGetFullPathName_U.c)
 *     RtlInitUnicodeStringEx @ 0x1800044C0 (RtlInitUnicodeStringEx.c)
 *     RtlDetermineDosPathNameType_U @ 0x180005BA0 (RtlDetermineDosPathNameType_U.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x1800935F0 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1801657C0 (memmove.c)
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
  WCHAR *Heap; // rbp
  size_t v16; // r13
  WCHAR *j; // rdi
  WCHAR v18; // ax
  ULONG FullPathName_U; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  DestinationString = 0LL;
  if ( RtlDetermineDosPathNameType_U(FileName) != RtlPathTypeRelative )
  {
    LOBYTE(v10) = 1;
    if ( (unsigned __int8)RtlDoesFileExists_UEx(FileName, v10) )
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
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length + DestinationString.Length + v13 + 6LL);
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
      *(WCHAR *)((char *)j + v16) = 0;
    if ( (unsigned __int8)RtlDoesFileExists_UEx(Heap, 0LL) )
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
