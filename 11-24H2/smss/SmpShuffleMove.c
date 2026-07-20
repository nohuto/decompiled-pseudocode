/*
 * XREFs of SmpShuffleMove @ 0x140018644
 * Callers:
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 * Callees:
 *     SmpCreateTempFile @ 0x1400120D4 (SmpCreateTempFile.c)
 *     SmpCheckDirectoryWritable @ 0x140013868 (SmpCheckDirectoryWritable.c)
 *     SmpCheckFolderForRedirections @ 0x140013900 (SmpCheckFolderForRedirections.c)
 *     SmpOpenTargetFile @ 0x1400174CC (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140017B28 (SmpRenameTargetFile.c)
 */

__int64 __fastcall SmpShuffleMove(struct _UNICODE_STRING *a1, void *a2, char a3)
{
  __int64 v3; // rdi
  char v7; // al
  int v8; // ebx
  unsigned __int16 v9; // cx
  HANDLE v11; // [rsp+38h] [rbp-29h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-21h] BYREF
  struct _UNICODE_STRING v13; // [rsp+50h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES v15; // [rsp+70h] [rbp+Fh] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+7Fh] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  Handle = 0LL;
  UnicodeString.Buffer = 0LL;
  v3 = -1LL;
  v11 = (HANDLE)-1LL;
  DestinationString = 0LL;
  v13 = 0LL;
  memset(&v15, 0, 44);
  if ( a3 != 1 || (v7 = SmpCheckFolderForRedirections(&a1->Length, &v11), v3 = (__int64)v11, v7) )
  {
    v9 = a1->Length >> 1;
    if ( v9 )
    {
      while ( a1->Buffer[v9] != 92 )
      {
        if ( !--v9 )
          goto LABEL_7;
      }
      v13.Buffer = a1->Buffer;
      v13.Length = 2 * v9;
      v13.MaximumLength = 2 * v9;
      v8 = SmpCheckDirectoryWritable(&v13);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, (PCWSTR)SmpTempFilesDir.Buffer + 4);
        v8 = SmpCreateTempFile((__int64)&DestinationString, (__int64)L"SMSS-PFRO", &UnicodeString);
        if ( v8 >= 0 )
        {
          v15.RootDirectory = 0LL;
          v15.Length = 48;
          v15.Attributes = 64;
          v15.ObjectName = a1;
          *(_OWORD *)&v15.SecurityDescriptor = 0LL;
          v8 = SmpOpenTargetFile(&Handle, 0x110000u, &v15, 1, 3u);
          if ( v8 >= 0 )
          {
            v8 = SmpRenameTargetFile((const void **)&UnicodeString, Handle, 1, a3);
            if ( v8 >= 0 )
            {
              v8 = SmpRenameTargetFile((const void **)a1, a2, 1, a3);
              if ( v8 >= 0 )
                v8 = 0;
              else
                SmpRenameTargetFile((const void **)a1, Handle, 1, a3);
            }
          }
        }
      }
    }
    else
    {
LABEL_7:
      v8 = -1073741811;
    }
  }
  else
  {
    v8 = -1073740533;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    NtClose(Handle);
  if ( v3 != -1 )
    NtClose((HANDLE)v3);
  return (unsigned int)v8;
}
