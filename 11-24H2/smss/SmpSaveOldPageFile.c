/*
 * XREFs of SmpSaveOldPageFile @ 0x140012C9C
 * Callers:
 *     SmpSaveOldPageFiles @ 0x140009FD0 (SmpSaveOldPageFiles.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x140011950 (RtlUnicodeStringPrintf.c)
 *     SmpSavePageFile @ 0x140012E7C (SmpSavePageFile.c)
 */

__int64 __fastcall SmpSaveOldPageFile(UNICODE_STRING *SourceString, _WORD *a2, unsigned int *a3)
{
  bool v5; // cf
  NTSTATUS v8; // ebx
  USHORT v9; // cx
  NTSTATUS appended; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+C0h] [rbp+40h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = *a3 < 0x10;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( !v5 )
    return 3221225623LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = SourceString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtOpenFile(&FileHandle, 0x80150100, &ObjectAttributes, &IoStatusBlock, 1u, 0x68u);
  if ( v8 >= 0 )
  {
    v9 = a2 ? *a2 + 20 : SourceString->Length + 10;
    DestinationString.MaximumLength = v9;
    DestinationString.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9);
    if ( DestinationString.Buffer )
    {
      if ( a2 )
      {
        appended = RtlUnicodeStringPrintf(&DestinationString, L"%wZ\\pf%02u.dmp", a2, *a3);
      }
      else
      {
        RtlCopyUnicodeString(&DestinationString, SourceString);
        appended = RtlAppendUnicodeToString(&DestinationString, L".dmp");
      }
      v8 = appended;
      if ( appended >= 0 )
      {
        v8 = SmpSavePageFile(FileHandle);
        if ( v8 >= 0 )
        {
          *(struct _UNICODE_STRING *)&a3[4 * *a3 + 2] = DestinationString;
          a3[1] += DestinationString.Length;
          ++*a3;
        }
      }
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( v8 < 0 )
  {
    if ( DestinationString.Buffer )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  }
  return (unsigned int)v8;
}
