/*
 * XREFs of RtlCheckTokenCapability @ 0x1403B5260
 * Callers:
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1406A77D0 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x1406A7BF0 (ZwDuplicateToken.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1408588A0 (RtlSetOwnerSecurityDescriptor.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     RtlAddAccessAllowedAce @ 0x140911600 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A18380 (RtlSetGroupSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x140A41A18 (RtlIsCapabilitySid.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  char v6; // si
  int v7; // ebx
  PACCESS_TOKEN PrimaryToken; // rcx
  ULONG ReturnLength; // [rsp+64h] [rbp-9Ch] BYREF
  int v11; // [rsp+68h] [rbp-98h]
  HANDLE TokenHandlea; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h] BYREF
  PVOID v14; // [rsp+80h] [rbp-80h] BYREF
  char *v15; // [rsp+88h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v19; // [rsp+100h] [rbp+0h]
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v21; // [rsp+170h] [rbp+70h] BYREF
  int v22; // [rsp+178h] [rbp+78h]
  ACL Acl; // [rsp+180h] [rbp+80h] BYREF
  char v24; // [rsp+220h] [rbp+120h] BYREF

  v11 = 0;
  memset_0(&Acl, 0, 0xA0uLL);
  TokenHandlea = 0LL;
  v21 = 0LL;
  v22 = 0;
  memset(&ObjectAttributes, 0, 44);
  v19 = 0LL;
  v15 = 0LL;
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
      ObjectAttributes.SecurityQualityOfService = &v21;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v21 = 0x20000000CLL;
      LOWORD(v22) = 1;
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
    v15 = &v24;
    if ( v6
      || (v14 = 0LL,
          SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
          v7 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &v14, 0LL),
          SubjectContext.PrimaryToken = v14,
          v7 >= 0) )
    {
      v7 = 0;
      if ( !(unsigned __int8)SeAccessCheckWithHint(SecurityDescriptor, 0LL, &SubjectContext) )
        v7 = -1073741790;
      if ( !v6 )
        ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
      if ( v7 >= 0 )
      {
        if ( v11 == 65537 )
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
