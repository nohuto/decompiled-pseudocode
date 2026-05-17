/*
 * XREFs of RtlpSysVolTakeOwnership @ 0x1801459E0
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800665D0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlSetOwnerSecurityDescriptor @ 0x1800662F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1800EA010 (RtlCreateSecurityDescriptor.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x180163820 (NtOpenProcessTokenEx.c)
 *     NtOpenFile @ 0x180163880 (NtOpenFile.c)
 *     NtAdjustPrivilegesToken @ 0x180163A40 (NtAdjustPrivilegesToken.c)
 *     NtSetSecurityObject @ 0x180166930 (NtSetSecurityObject.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlpSysVolTakeOwnership(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  int v3; // eax
  HANDLE v4; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  HANDLE FileHandle[2]; // [rsp+38h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-41h] BYREF
  _OWORD v8[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 v9; // [rsp+98h] [rbp+Fh]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+17h] BYREF
  int v11; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v12; // [rsp+B4h] [rbp+2Bh]
  int v13; // [rsp+BCh] [rbp+33h]
  __int16 v14; // [rsp+C0h] [rbp+37h] BYREF
  int v15; // [rsp+C2h] [rbp+39h]
  __int16 v16; // [rsp+C6h] [rbp+3Dh]
  int v17; // [rsp+C8h] [rbp+3Fh]
  int v18; // [rsp+CCh] [rbp+43h]

  Handle = 0LL;
  FileHandle[0] = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  v9 = 0LL;
  IoStatusBlock = 0LL;
  memset(v8, 0, sizeof(v8));
  result = NtOpenProcessTokenEx(-1LL, 40LL, 512LL, &Handle);
  if ( result >= 0 )
  {
    FileHandle[1] = (HANDLE)9;
    v12 = 9LL;
    v11 = 1;
    v13 = 2;
    if ( (int)NtAdjustPrivilegesToken(Handle, 0LL, &v11) >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a1;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(FileHandle, 0x180000u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u) >= 0 )
      {
        RtlCreateSecurityDescriptor((__int64)v8, 1);
        v15 = 0;
        v16 = 1280;
        v14 = 513;
        v17 = 32;
        v18 = 544;
        v3 = RtlSetOwnerSecurityDescriptor((__int64)v8, (__int64)&v14, 0);
        v4 = FileHandle[0];
        if ( v3 >= 0 )
        {
          NtSetSecurityObject(FileHandle[0], 1LL, v8);
          v4 = FileHandle[0];
        }
        NtClose(v4);
      }
    }
    return NtClose(Handle);
  }
  return result;
}
