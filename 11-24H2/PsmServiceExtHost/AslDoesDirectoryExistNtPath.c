/*
 * XREFs of AslDoesDirectoryExistNtPath @ 0x18009D5CC
 * Callers:
 *     SdbpCheckMatchingDir @ 0x180099880 (SdbpCheckMatchingDir.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslDoesDirectoryExistNtPath(PCWSTR SourceString)
{
  unsigned int v2; // esi
  NTSTATUS v3; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+90h] [rbp+10h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  FileHandle = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = 0;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  if ( _wcsnicmp(SourceString, L"\\SystemRoot\\", 0xCuLL) )
  {
    if ( (int)RtlDosPathNameToNtPathName_U_WithStatus(SourceString, &DestinationString, 0LL, 0LL) < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_10;
    }
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 1u);
  if ( v3 >= 0 )
  {
    ZwClose(FileHandle);
LABEL_9:
    v2 = 1;
    goto LABEL_10;
  }
  if ( v3 == -1073741790 || v3 == -1073741757 )
    goto LABEL_9;
LABEL_10:
  if ( DestinationString.Buffer != SourceString && DestinationString.Buffer )
    RtlFreeUnicodeString(&DestinationString);
  return v2;
}
