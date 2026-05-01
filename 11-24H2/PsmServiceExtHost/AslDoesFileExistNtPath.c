/*
 * XREFs of AslDoesFileExistNtPath @ 0x18009D734
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1800A4510 (AslPathWildcardFindFirst.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 */

__int64 __fastcall AslDoesFileExistNtPath(PWSTR FileName)
{
  unsigned int v2; // ebx
  WCHAR *Heap; // rdi
  char v4; // r14
  RTL_PATH_TYPE v5; // esi
  RTL_PATH_TYPE v6; // eax
  NTSTATUS v7; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+B0h] [rbp+30h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+38h] BYREF

  FileHandle = 0LL;
  InputPathType = RtlPathTypeUnknown;
  memset(&ObjectAttributes, 0, 44);
  v2 = 0;
  Heap = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, FileName);
  if ( DestinationString.Length <= 8u
    || *DestinationString.Buffer != 92
    || DestinationString.Buffer[1] != 92 && DestinationString.Buffer[1] != 63
    || DestinationString.Buffer[2] != 63
    || DestinationString.Buffer[3] != 92 )
  {
    v5 = 520;
    do
    {
      Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v5);
      if ( !Heap || RtlGetFullPathName_UEx(FileName, v5, Heap, 0LL, &InputPathType) < 0 )
        goto LABEL_23;
      v6 = InputPathType;
      if ( InputPathType > (unsigned int)v5 )
      {
        if ( v4 )
          goto LABEL_23;
        AslFree(NtCurrentPeb()->ProcessHeap, Heap);
        v6 = InputPathType;
        Heap = 0LL;
        v5 = InputPathType;
      }
      v4 = 1;
    }
    while ( v6 >= (unsigned int)v5 );
    if ( _wcsnicmp(Heap, L"\\SystemRoot\\", 0xCuLL)
      && (int)RtlDosPathNameToNtPathName_U_WithStatus(Heap, &DestinationString, 0LL, 0LL) < 0 )
    {
LABEL_23:
      AslLogCallPrintf(1LL);
      goto LABEL_24;
    }
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v7 >= 0 )
  {
    v2 = 1;
    ZwClose(FileHandle);
  }
  else if ( v7 == -1073741757 || v7 == -1073741790 )
  {
    v2 = 1;
  }
LABEL_24:
  if ( DestinationString.Buffer != FileName )
    RtlFreeUnicodeString(&DestinationString);
  if ( Heap )
    AslFree(NtCurrentPeb()->ProcessHeap, Heap);
  return v2;
}
