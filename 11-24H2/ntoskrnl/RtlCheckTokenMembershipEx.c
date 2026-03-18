/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x140471840
 * Callers:
 *     RtlCheckTokenMembership @ 0x140471820 (RtlCheckTokenMembership.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140A62BCC (RtlpCapabilityCheckSystemCapability.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140AA0B18 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     RtlInitializeSidEx @ 0x140471BB0 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwDuplicateToken @ 0x1406A6C50 (ZwDuplicateToken.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14085CB30 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409A7460 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A23FB0 (RtlSetGroupSecurityDescriptor.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(HANDLE ExistingTokenHandle, PSID Group, int a3, _BYTE *a4)
{
  NTSTATUS v4; // ebx
  char v9; // si
  NTSTATUS v11; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v12; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  char *v15; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v19; // [rsp+F0h] [rbp-10h]
  __int64 v20; // [rsp+F8h] [rbp-8h] BYREF
  int v21; // [rsp+100h] [rbp+0h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl; // [rsp+160h] [rbp+60h] BYREF
  char v24; // [rsp+250h] [rbp+150h] BYREF

  v4 = 0;
  v12 = 0;
  v11 = 0;
  memset_0(Sid, 0, 0x44uLL);
  memset_0(&Acl, 0, 0xECuLL);
  Handle = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v20 = 0LL;
  v21 = 0;
  v19 = 0LL;
  *a4 = 0;
  memset(&ObjectAttributes, 0, 32);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    v9 = 0;
    if ( ExistingTokenHandle )
    {
      ObjectAttributes.SecurityQualityOfService = &v20;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v20 = 0x20000000CLL;
      LOWORD(v21) = 1;
      v4 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v4 < 0 )
        return (unsigned int)v4;
      v4 = 0;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v9 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Group, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, Group, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 1u, Group);
    if ( (a3 & 3) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    if ( (a3 & 2) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 2);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v15 = &v24;
    if ( !v9 )
    {
      Object = 0LL;
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v4 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v4 < 0 )
      {
LABEL_16:
        if ( Handle )
          ZwClose(Handle);
        return (unsigned int)v4;
      }
      v4 = 0;
    }
    SeAccessCheckWithHint(
      (__int64)SecurityDescriptor,
      0,
      (int *)&SubjectContext,
      0,
      1u,
      0,
      &v15,
      RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      &v12,
      &v11);
    if ( !v9 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    if ( v11 )
    {
      if ( v11 == -1073741790 )
        goto LABEL_14;
    }
    else if ( v12 == 1 )
    {
      *a4 = 1;
      goto LABEL_14;
    }
    v4 = v11;
LABEL_14:
    if ( v9 )
      SeReleaseSubjectContext(&SubjectContext);
    goto LABEL_16;
  }
  return 3221225485LL;
}
