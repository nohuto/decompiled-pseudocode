/*
 * XREFs of RtlpCheckRelativeDrive @ 0x1800AEF70
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlpResetDriveEnvironment @ 0x1800AB008 (RtlpResetDriveEnvironment.c)
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpCheckRelativeDrive(wchar_t a1)
{
  size_t v2; // rax
  NTSTATUS v3; // eax
  struct _TEB *v4; // rcx
  __int64 WowTebOffset; // rax
  unsigned int HardErrorMode; // ebx
  NTSTATUS v7; // eax
  struct _TEB *v8; // rcx
  __int64 v9; // rdx
  __int16 v11; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+3Ah] [rbp-CEh]
  int v13; // [rsp+3Ch] [rbp-CCh]
  WCHAR *v14; // [rsp+40h] [rbp-C8h]
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE FileHandle; // [rsp+50h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  wchar_t String[2]; // [rsp+98h] [rbp-70h] BYREF
  int v20; // [rsp+9Ch] [rbp-6Ch]
  __int64 v21; // [rsp+A8h] [rbp-60h] BYREF
  WCHAR Value[268]; // [rsp+B0h] [rbp-58h] BYREF

  String[1] = a1;
  v13 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  String[0] = 61;
  v20 = 58;
  IoStatusBlock = 0LL;
  v2 = 2 * wcslen(String);
  ReturnLength = 0LL;
  if ( v2 >= 0xFFFE )
    LOWORD(v2) = -4;
  v21 = 0x5C003F003F005CLL;
  v12 = 520;
  v14 = Value;
  v3 = RtlQueryEnvironmentVariable(
         0LL,
         String,
         (unsigned __int64)(unsigned __int16)v2 >> 1,
         Value,
         0x104uLL,
         &ReturnLength);
  if ( ReturnLength > 0x7FFF || v3 == -1073741789 || (v11 = 2 * ReturnLength, v3 < 0) )
  {
    *v14 = a1;
    v14[1] = 58;
    v14[2] = 92;
    v14[3] = 0;
    v11 = 6;
    return RtlpResetDriveEnvironment(a1);
  }
  ObjectAttributes.Length = 48;
  v11 = 2 * ReturnLength + 8;
  v12 = 544;
  ObjectAttributes.RootDirectory = 0LL;
  v14 = (WCHAR *)&v21;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = NtCurrentTeb();
  WowTebOffset = v4->WowTebOffset;
  if ( (int)WowTebOffset < 0 )
    v4 = (struct _TEB *)((char *)v4 + WowTebOffset);
  if ( (_DWORD)v4 == LODWORD(v4->NtTib.SubSystemTib) )
  {
    HardErrorMode = (unsigned int)v4->glDispatchTable[167];
    LODWORD(v4->glDispatchTable[167]) = 16;
  }
  else
  {
    HardErrorMode = v4->HardErrorMode;
    v4->HardErrorMode = 16;
  }
  v7 = NtOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  if ( (HardErrorMode & 0xFFFFFF8F) == 0 )
  {
    v8 = NtCurrentTeb();
    v9 = v8->WowTebOffset;
    if ( (int)v9 < 0 )
      v8 = (struct _TEB *)((char *)v8 + v9);
    if ( (_DWORD)v8 == LODWORD(v8->NtTib.SubSystemTib) )
      LODWORD(v8->glDispatchTable[167]) = HardErrorMode;
    else
      v8->HardErrorMode = HardErrorMode;
  }
  if ( v7 < 0 )
    return RtlpResetDriveEnvironment(a1);
  return NtClose(FileHandle);
}
