/*
 * XREFs of SmpSetDumpSecurityAndAttributes @ 0x14001300C
 * Callers:
 *     SmpCopyFile @ 0x140011D40 (SmpCopyFile.c)
 *     SmpSavePageFile @ 0x140012E7C (SmpSavePageFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpSetDumpSecurityAndAttributes(HANDLE FileHandle)
{
  NTSTATUS InformationFile; // ebx
  PSID Owner; // [rsp+68h] [rbp-A0h] BYREF
  PSID Sid; // [rsp+70h] [rbp-98h] BYREF
  PSID BaseAddress[3]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v8; // [rsp+B0h] [rbp-58h]
  struct _SID_IDENTIFIER_AUTHORITY v9; // [rsp+B8h] [rbp-50h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+C0h] [rbp-48h] BYREF
  _OWORD FileInformation[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+E8h] [rbp-20h]
  struct _ACL Acl; // [rsp+F8h] [rbp-10h] BYREF

  *(_WORD *)&v9.Value[4] = 1280;
  *(_DWORD *)v9.Value = 0;
  v8 = 0LL;
  v12 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  memset(BaseAddress, 0, sizeof(BaseAddress));
  Sid = 0LL;
  Owner = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(FileInformation, 0, sizeof(FileInformation));
  InformationFile = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, BaseAddress);
  if ( InformationFile >= 0 )
  {
    InformationFile = RtlAllocateAndInitializeSid(&v9, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &Sid);
    if ( InformationFile >= 0 )
    {
      InformationFile = RtlAllocateAndInitializeSid(&v9, 2u, 0x20u, 0x220u, 0, 0, 0, 0, 0, 0, &Owner);
      if ( InformationFile >= 0 )
      {
        RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        RtlCreateAcl(&Acl, 0x400u, 2u);
        RtlAddAccessAllowedAce(&Acl, 2u, 0x100D0000u, Owner);
        RtlAddAccessAllowedAce(&Acl, 2u, 0x100D0000u, Sid);
        RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
        RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 0);
        InformationFile = NtSetSecurityObject(FileHandle, 4u, SecurityDescriptor);
        if ( InformationFile >= 0 )
        {
          InformationFile = NtQueryInformationFile(
                              FileHandle,
                              (PIO_STATUS_BLOCK)&BaseAddress[1],
                              FileInformation,
                              0x28u,
                              FileBasicInformation);
          if ( InformationFile >= 0 )
          {
            LODWORD(v12) = v12 & 0xFFFFFFF9;
            InformationFile = NtSetInformationFile(
                                FileHandle,
                                (PIO_STATUS_BLOCK)&BaseAddress[1],
                                FileInformation,
                                0x28u,
                                FileBasicInformation);
          }
        }
      }
    }
  }
  if ( BaseAddress[0] )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress[0]);
  if ( Sid )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Sid);
  if ( Owner )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Owner);
  return (unsigned int)InformationFile;
}
