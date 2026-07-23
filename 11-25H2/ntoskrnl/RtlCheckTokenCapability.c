/*
 * XREFs of RtlCheckTokenCapability @ 0x14048E220
 * Callers:
 *     RtlCapabilityCheck @ 0x140A09AE0 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x14069B560 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x14069B980 (ZwDuplicateToken.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x140998B5C (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x1409A6F20 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  char v6; // si
  int v7; // ebx
  bool v8; // al
  int v9; // ecx
  PACCESS_TOKEN PrimaryToken; // rcx
  int v12; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v14; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandlea; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PVOID v17; // [rsp+80h] [rbp-80h] BYREF
  char *v18; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v22; // [rsp+100h] [rbp+0h]
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v24; // [rsp+170h] [rbp+70h] BYREF
  int v25; // [rsp+178h] [rbp+78h]
  ACL Acl; // [rsp+180h] [rbp+80h] BYREF
  char v27; // [rsp+220h] [rbp+120h] BYREF

  v14 = 0;
  v12 = 0;
  memset_0(&Acl, 0, 0xA0uLL);
  TokenHandlea = 0LL;
  v24 = 0LL;
  v25 = 0;
  memset(&ObjectAttributes, 0, 44);
  v22 = 0LL;
  v18 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset_0(TokenInformation, 0, 0x58uLL);
  ReturnLength = 0;
  P = 0LL;
  *(_OWORD *)&SubjectContext.ClientToken = 0LL;
  v6 = 0;
  *HasCapability = 0;
  *(_OWORD *)&SubjectContext.PrimaryToken = 0LL;
  if ( RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    if ( TokenHandle )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityQualityOfService = &v24;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v24 = 0x20000000CLL;
      LOWORD(v25) = 1;
      v7 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
      if ( v7 < 0 )
        goto LABEL_13;
      ReturnLength = 88;
      TokenHandle = 0LL;
      ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = SubjectContext.PrimaryToken;
      v6 = 1;
      if ( SubjectContext.ClientToken )
        PrimaryToken = SubjectContext.ClientToken;
      SeQueryInformationToken(PrimaryToken, TokenUser, &P);
      *(_OWORD *)TokenInformation = *(_OWORD *)P;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, TokenInformation[0]);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, CapabilitySidToCheck);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v18 = &v27;
    if ( v6
      || (v17 = 0LL,
          SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
          v7 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &v17, 0LL),
          SubjectContext.PrimaryToken = v17,
          v7 >= 0) )
    {
      v8 = SeAccessCheckWithHint(
             (__int64)SecurityDescriptor,
             0,
             (int *)&SubjectContext,
             0,
             0x10001u,
             0,
             &v18,
             RtlpCheckTokenCapabilityGenericMapping,
             KeGetCurrentThread()->PreviousMode,
             &v14,
             &v12);
      v9 = v12;
      v7 = v12;
      if ( !v8 )
        v7 = -1073741790;
      if ( !v6 )
      {
        ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
        v9 = v12;
      }
      if ( v7 >= 0 )
      {
        if ( !v9 && v14 == 65537 )
          *HasCapability = 1;
        v7 = 0;
      }
      if ( v6 )
        SeReleaseSubjectContext(&SubjectContext);
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_13:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( !TokenHandle && TokenHandlea )
    ZwClose(TokenHandlea);
  return v7;
}
