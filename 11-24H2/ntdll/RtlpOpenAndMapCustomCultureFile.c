/*
 * XREFs of RtlpOpenAndMapCustomCultureFile @ 0x180110C68
 * Callers:
 *     RtlpGetCustomCultureData @ 0x180110BE4 (RtlpGetCustomCultureData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     RtlStringCchCatW @ 0x18013D25C (RtlStringCchCatW.c)
 *     RtlpGetFileSize @ 0x180144B0C (RtlpGetFileSize.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtOpenFile @ 0x1801606B0 (NtOpenFile.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpOpenAndMapCustomCultureFile(__int64 a1, PVOID *a2, _QWORD *a3)
{
  __int64 v6; // r8
  WCHAR *v7; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  NTSTATUS v10; // ebx
  HANDLE v11; // rcx
  HANDLE FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  ViewSize = 0LL;
  v14 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  v6 = 256LL;
  v7 = SourceString;
  DestinationString = 0LL;
  do
  {
    if ( v6 == -2147483390 )
      break;
    v8 = *(WCHAR *)((char *)v7 + (char *)L"\\SystemRoot\\Globalization\\" - (char *)SourceString);
    if ( !v8 )
      break;
    *v7++ = v8;
    --v6;
  }
  while ( v6 );
  v9 = v7 - 1;
  if ( v6 )
    v9 = v7;
  *v9 = 0;
  if ( !v6
    || (int)RtlStringCchCatW(SourceString, 256LL, a1) < 0
    || (int)RtlStringCchCatW(SourceString, 256LL, L".nlp") < 0 )
  {
    return 3221225473LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( v10 >= 0 )
  {
    if ( (int)RtlpGetFileSize(FileHandle, &v14) < 0 || HIDWORD(v14) )
    {
      v10 = -1073741823;
    }
    else
    {
      *a3 = (unsigned int)v14;
      v10 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
      if ( v10 >= 0 )
      {
        v11 = SectionHandle;
        *a2 = 0LL;
        v10 = ZwMapViewOfSection(v11, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
        NtClose(SectionHandle);
      }
    }
    NtClose(FileHandle);
  }
  return (unsigned int)v10;
}
