/*
 * XREFs of SmpForceDeleteTargetFile @ 0x140014C44
 * Callers:
 *     SmpClearTemporaryFiles @ 0x14000E0F8 (SmpClearTemporaryFiles.c)
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 * Callees:
 *     SmpDeleteTargetFile @ 0x140014A9C (SmpDeleteTargetFile.c)
 *     SmpOpenTargetFile @ 0x1400174CC (SmpOpenTargetFile.c)
 *     SmpPathCanBeTrustedIsNotARedirection @ 0x140017580 (SmpPathCanBeTrustedIsNotARedirection.c)
 *     SmpSetTargetAttributes @ 0x14001859C (SmpSetTargetAttributes.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpForceDeleteTargetFile(struct _UNICODE_STRING *a1, char a2)
{
  int v3; // edi
  NTSTATUS v4; // ebx
  HANDLE v5; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-21h] BYREF
  _FILE_BASIC_INFORMATION FileInformation; // [rsp+68h] [rbp+Fh] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  Handle = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.Attributes = 64;
  memset(&FileInformation, 0, sizeof(FileInformation));
  v3 = 0;
  v4 = SmpOpenTargetFile((int)&Handle, 1114368, (int)&ObjectAttributes, 0, 3u);
  if ( v4 >= 0 )
  {
    if ( a2 != 1 || (unsigned __int8)SmpPathCanBeTrustedIsNotARedirection(Handle) )
    {
      v4 = SmpDeleteTargetFile(Handle);
      if ( v4 < 0
        && NtQueryAttributesFile(&ObjectAttributes, &FileInformation) >= 0
        && (FileInformation.FileAttributes & 1) != 0 )
      {
        v4 = SmpSetTargetAttributes(Handle, FileInformation.FileAttributes & 0xFFFFFFFE);
        if ( v4 >= 0 )
        {
          v3 = 1;
          v4 = SmpDeleteTargetFile(Handle);
          if ( v4 >= 0 )
          {
            v3 = 0;
            v4 = 0;
          }
        }
      }
    }
    else
    {
      v4 = -1073740533;
    }
  }
  v5 = Handle;
  if ( Handle )
  {
    if ( v3 )
    {
      SmpSetTargetAttributes(Handle, FileInformation.FileAttributes);
      v5 = Handle;
    }
    NtClose(v5);
  }
  return (unsigned int)v4;
}
