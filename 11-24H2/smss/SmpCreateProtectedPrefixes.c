/*
 * XREFs of SmpCreateProtectedPrefixes @ 0x14000AC10
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 SmpCreateProtectedPrefixes()
{
  char v0; // di
  NTSTATUS v1; // ebx
  NTSTATUS v2; // eax
  void *FileAttributes; // [rsp+28h] [rbp-D8h]
  unsigned __int8 OldValue[8]; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  void *FileHandle; // [rsp+B0h] [rbp-50h] BYREF
  PSID v10; // [rsp+B8h] [rbp-48h] BYREF
  PSID Sid; // [rsp+C0h] [rbp-40h] BYREF
  PSID v12; // [rsp+C8h] [rbp-38h] BYREF
  PSID v13; // [rsp+D0h] [rbp-30h] BYREF
  PSID v14; // [rsp+D8h] [rbp-28h] BYREF
  PSID v15; // [rsp+E0h] [rbp-20h] BYREF
  PSID v16; // [rsp+E8h] [rbp-18h] BYREF
  PSID v17; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v18[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v19[2]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v20[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v21[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v22[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v23[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v24[2]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v25[2]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v26[2]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v27[2]; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v28[2]; // [rsp+198h] [rbp+98h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v30; // [rsp+1C8h] [rbp+C8h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v32; // [rsp+1D8h] [rbp+D8h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v33; // [rsp+1E0h] [rbp+E0h] BYREF
  _ACL Acl; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _ACL Sacl; // [rsp+600h] [rbp+500h] BYREF

  *(_WORD *)&v32.Value[4] = 256;
  v30 = 0LL;
  *(_DWORD *)v32.Value = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = 1;
  *(_DWORD *)v33.Value = 0;
  Handle = 0LL;
  v26[1] = L"\\Device\\NamedPipe\\";
  FileHandle = 0LL;
  v27[1] = L"\\Device\\mailslot\\";
  v18[1] = L"\\Device\\NamedPipe\\ProtectedPrefix";
  v19[1] = L"\\Device\\mailslot\\ProtectedPrefix";
  v20[1] = L"\\Device\\NamedPipe\\ProtectedPrefix\\Administrators";
  v21[1] = L"\\Device\\mailslot\\ProtectedPrefix\\Administrators";
  v22[1] = L"\\Device\\NamedPipe\\ProtectedPrefix\\LocalService";
  v23[1] = L"\\Device\\mailslot\\ProtectedPrefix\\LocalService";
  v24[1] = L"\\Device\\NamedPipe\\ProtectedPrefix\\NetWorkService";
  v25[1] = L"\\Device\\mailslot\\ProtectedPrefix\\NetWorkService";
  v28[1] = L"\\Device\\NamedPipe\\Sessions";
  memset(&ObjectAttributes, 0, 44);
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_WORD *)&v33.Value[4] = 4096;
  IoStatusBlock = 0LL;
  Sid = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v10 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  OldValue[0] = 1;
  v26[0] = 2490404LL;
  v27[0] = 2359330LL;
  v18[0] = 4456514LL;
  v19[0] = 4325440LL;
  v20[0] = 6422624LL;
  v21[0] = 6291550LL;
  v22[0] = 6160476LL;
  v23[0] = 6029402LL;
  v24[0] = 6422624LL;
  v25[0] = 6291550LL;
  v28[0] = 3538996LL;
  v1 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v1 >= 0 )
  {
    v1 = RtlCreateAcl(&Acl, 0x408u, 2u);
    if ( v1 >= 0 )
    {
      v1 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
      if ( v1 >= 0 )
      {
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v1 = NtCreateFile(&PipePrefix1, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 2u, 1u, 0LL, 0);
        if ( v1 >= 0 )
        {
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
          v2 = NtCreateFile(&MailPrefix1, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 2u, 1u, 0LL, 0);
          v1 = v2;
          if ( v2 == -1073741766 )
          {
            v0 = 0;
          }
          else if ( v2 < 0 )
          {
            goto LABEL_46;
          }
          v1 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &Sid);
          if ( v1 >= 0 )
          {
            v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, Sid);
            if ( v1 >= 0 )
            {
              v1 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &v12);
              if ( v1 >= 0 )
              {
                v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v12);
                if ( v1 >= 0 )
                {
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)v20;
                  v1 = NtCreateFile(
                         &PipePrefix2,
                         0x1F01FFu,
                         &ObjectAttributes,
                         &IoStatusBlock,
                         0LL,
                         0x80u,
                         3u,
                         2u,
                         1u,
                         0LL,
                         0);
                  if ( v1 >= 0 )
                  {
                    if ( v0 )
                    {
                      ObjectAttributes.ObjectName = (PUNICODE_STRING)v21;
                      NtCreateFile(
                        &MailPrefix2,
                        0x1F01FFu,
                        &ObjectAttributes,
                        &IoStatusBlock,
                        0LL,
                        0x80u,
                        3u,
                        2u,
                        1u,
                        0LL,
                        0);
                    }
                    v1 = RtlCreateAcl(&Acl, 0x408u, 2u);
                    if ( v1 >= 0 )
                    {
                      v1 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x13u, 0, 0, 0, 0, 0, 0, 0, &v13);
                      if ( v1 >= 0 )
                      {
                        v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v13);
                        if ( v1 >= 0 )
                        {
                          ObjectAttributes.ObjectName = (PUNICODE_STRING)v22;
                          v1 = NtCreateFile(
                                 &PipePrefix3,
                                 0x1F01FFu,
                                 &ObjectAttributes,
                                 &IoStatusBlock,
                                 0LL,
                                 0x80u,
                                 3u,
                                 2u,
                                 1u,
                                 0LL,
                                 0);
                          if ( v1 >= 0 )
                          {
                            if ( !v0
                              || (ObjectAttributes.ObjectName = (PUNICODE_STRING)v23,
                                  v1 = NtCreateFile(
                                         &MailPrefix3,
                                         0x1F01FFu,
                                         &ObjectAttributes,
                                         &IoStatusBlock,
                                         0LL,
                                         0x80u,
                                         3u,
                                         2u,
                                         1u,
                                         0LL,
                                         0),
                                  v1 >= 0) )
                            {
                              v1 = RtlCreateAcl(&Acl, 0x408u, 2u);
                              if ( v1 >= 0 )
                              {
                                v1 = RtlAllocateAndInitializeSid(
                                       &IdentifierAuthority,
                                       1u,
                                       0x14u,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       0,
                                       &v14);
                                if ( v1 >= 0 )
                                {
                                  v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v14);
                                  if ( v1 >= 0 )
                                  {
                                    ObjectAttributes.ObjectName = (PUNICODE_STRING)v24;
                                    v1 = NtCreateFile(
                                           &PipePrefix4,
                                           0x1F01FFu,
                                           &ObjectAttributes,
                                           &IoStatusBlock,
                                           0LL,
                                           0x80u,
                                           3u,
                                           2u,
                                           1u,
                                           0LL,
                                           0);
                                    if ( v1 >= 0 )
                                    {
                                      if ( !v0
                                        || (ObjectAttributes.ObjectName = (PUNICODE_STRING)v25,
                                            v1 = NtCreateFile(
                                                   &MailPrefix4,
                                                   0x1F01FFu,
                                                   &ObjectAttributes,
                                                   &IoStatusBlock,
                                                   0LL,
                                                   0x80u,
                                                   3u,
                                                   2u,
                                                   1u,
                                                   0LL,
                                                   0),
                                            v1 >= 0) )
                                      {
                                        v1 = RtlCreateAcl(&Acl, 0x408u, 2u);
                                        if ( v1 >= 0 )
                                        {
                                          v1 = RtlAllocateAndInitializeSid(&v32, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v10);
                                          if ( v1 >= 0 )
                                          {
                                            v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v10);
                                            if ( v1 >= 0 )
                                            {
                                              v1 = RtlAllocateAndInitializeSid(
                                                     &IdentifierAuthority,
                                                     1u,
                                                     0xCu,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     0,
                                                     &v17);
                                              if ( v1 >= 0 )
                                              {
                                                v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v17);
                                                if ( v1 >= 0 )
                                                {
                                                  v1 = RtlAllocateAndInitializeSid(
                                                         &IdentifierAuthority,
                                                         1u,
                                                         7u,
                                                         0,
                                                         0,
                                                         0,
                                                         0,
                                                         0,
                                                         0,
                                                         0,
                                                         &v16);
                                                  if ( v1 >= 0 )
                                                  {
                                                    v1 = RtlAddAccessAllowedAce(&Acl, 2u, 2u, v16);
                                                    if ( v1 >= 0 )
                                                    {
                                                      v1 = RtlCreateAcl(&Sacl, 0x408u, 2u);
                                                      if ( v1 >= 0 )
                                                      {
                                                        v1 = RtlAllocateAndInitializeSid(
                                                               &v33,
                                                               1u,
                                                               0x1000u,
                                                               0,
                                                               0,
                                                               0,
                                                               0,
                                                               0,
                                                               0,
                                                               0,
                                                               &v15);
                                                        if ( v1 >= 0 )
                                                        {
                                                          LODWORD(FileAttributes) = 1;
                                                          v1 = RtlAddMandatoryAce(
                                                                 &Sacl,
                                                                 2u,
                                                                 0,
                                                                 (ULONG)v15,
                                                                 0x11u,
                                                                 FileAttributes);
                                                          if ( v1 >= 0 )
                                                          {
                                                            v1 = RtlSetSaclSecurityDescriptor(
                                                                   SecurityDescriptor,
                                                                   1u,
                                                                   &Sacl,
                                                                   0);
                                                            if ( v1 >= 0 )
                                                            {
                                                              if ( RtlAdjustPrivilege(8u, 1u, 0, OldValue) < 0 )
                                                                OldValue[0] = 1;
                                                              ObjectAttributes.ObjectName = (PUNICODE_STRING)v26;
                                                              ObjectAttributes.Length = 48;
                                                              ObjectAttributes.RootDirectory = 0LL;
                                                              ObjectAttributes.Attributes = 64;
                                                              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                                                              v1 = NtOpenFile(
                                                                     &FileHandle,
                                                                     0x11E0000u,
                                                                     &ObjectAttributes,
                                                                     &IoStatusBlock,
                                                                     3u,
                                                                     0x20u);
                                                              if ( v1 >= 0 )
                                                              {
                                                                v1 = NtSetSecurityObject(
                                                                       FileHandle,
                                                                       0x1Cu,
                                                                       SecurityDescriptor);
                                                                if ( v1 >= 0 )
                                                                {
                                                                  if ( v0 )
                                                                  {
                                                                    ObjectAttributes.ObjectName = (PUNICODE_STRING)v27;
                                                                    v1 = NtOpenFile(
                                                                           &Handle,
                                                                           0x11E0000u,
                                                                           &ObjectAttributes,
                                                                           &IoStatusBlock,
                                                                           3u,
                                                                           0x20u);
                                                                    if ( v1 < 0 )
                                                                      goto LABEL_46;
                                                                    NtSetSecurityObject(
                                                                      Handle,
                                                                      0x1Cu,
                                                                      SecurityDescriptor);
                                                                  }
                                                                  ObjectAttributes.ObjectName = (PUNICODE_STRING)v28;
                                                                  ObjectAttributes.Length = 48;
                                                                  ObjectAttributes.RootDirectory = 0LL;
                                                                  ObjectAttributes.Attributes = 64;
                                                                  ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
                                                                  ObjectAttributes.SecurityQualityOfService = 0LL;
                                                                  v1 = NtCreateFile(
                                                                         &SmpPipeSessionsPrefix,
                                                                         0x1F01FFu,
                                                                         &ObjectAttributes,
                                                                         &IoStatusBlock,
                                                                         0LL,
                                                                         0x80u,
                                                                         3u,
                                                                         2u,
                                                                         1u,
                                                                         0LL,
                                                                         0);
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_46:
  if ( Handle )
    NtClose(Handle);
  if ( FileHandle )
    NtClose(FileHandle);
  if ( !OldValue[0] )
    RtlAdjustPrivilege(8u, 0, 0, OldValue);
  if ( v10 )
    RtlFreeSid(v10);
  if ( Sid )
    RtlFreeSid(Sid);
  if ( v12 )
    RtlFreeSid(v12);
  if ( v13 )
    RtlFreeSid(v13);
  if ( v14 )
    RtlFreeSid(v14);
  if ( v15 )
    RtlFreeSid(v15);
  if ( v16 )
    RtlFreeSid(v16);
  if ( v17 )
    RtlFreeSid(v17);
  return (unsigned int)v1;
}
