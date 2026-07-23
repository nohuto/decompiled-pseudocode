/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x1403B5770
 * Callers:
 *     RtlCheckTokenMembership @ 0x1403B5750 (RtlCheckTokenMembership.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A5B4CC (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140A9BEA8 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlInitializeSidEx @ 0x1403B5060 (RtlInitializeSidEx.c)
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwDuplicateToken @ 0x1406A7BF0 (ZwDuplicateToken.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1408588A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140911600 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A18380 (RtlSetGroupSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  char v8; // si
  int v10; // ebx
  PVOID *Object; // [rsp+20h] [rbp-E0h]
  PVOID v12; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v17; // [rsp+F0h] [rbp-10h]
  __int64 v18; // [rsp+F8h] [rbp-8h] BYREF
  int v19; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl; // [rsp+160h] [rbp+60h] BYREF
  char v22; // [rsp+250h] [rbp+150h] BYREF

  memset_0(Sid, 0, 0x44uLL);
  memset_0(&Acl, 0, 0xECuLL);
  Handle[0] = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v18 = 0LL;
  v19 = 0;
  v17 = 0LL;
  *IsMember = 0;
  memset(&ObjectAttributes, 0, 32);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (Flags & 0xFFFFFFFC) == 0 )
  {
    v8 = 0;
    if ( TokenHandle )
    {
      ObjectAttributes.SecurityQualityOfService = &v18;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = 0x20000000CLL;
      LOWORD(v19) = 1;
      v10 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, Handle);
      if ( v10 < 0 )
        return v10;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v8 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 1u, SidToCheck);
    if ( (Flags & 3) != 0 )
    {
      LODWORD(Object) = 1;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, Object);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    if ( (Flags & 2) != 0 )
    {
      LODWORD(Object) = 2;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, Object);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    Handle[1] = &v22;
    if ( v8
      || (v12 = 0LL,
          SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
          v10 = ObReferenceObjectByHandle(Handle[0], 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &v12, 0LL),
          SubjectContext.PrimaryToken = v12,
          v10 >= 0) )
    {
      SeAccessCheckWithHint(SecurityDescriptor, 0LL, &SubjectContext);
      if ( !v8 )
        ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
      v10 = 0;
      if ( v8 )
        SeReleaseSubjectContext(&SubjectContext);
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
    return v10;
  }
  return -1073741811;
}
