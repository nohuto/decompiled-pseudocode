/*
 * XREFs of CmpGenerateAppHiveSecurityDescriptor @ 0x1407CD7FC
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     RtlAddMandatoryAce @ 0x14092AE40 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A061E0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void *__fastcall CmpGenerateAppHiveSecurityDescriptor(__int64 a1)
{
  void *v1; // rbx
  void *v2; // rdi
  void *v3; // rbx
  void *Pool2; // rax
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+68h] [rbp-98h]
  ACL Sacl; // [rsp+70h] [rbp-90h] BYREF
  ACL Acl; // [rsp+D0h] [rbp-30h] BYREF

  v1 = *(void **)(a1 + 16);
  memset_0(&Acl, 0, 0xECuLL);
  v10 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset_0(&Sacl, 0, 0x54uLL);
  P = 0LL;
  v2 = 0LL;
  TokenInformation = 0LL;
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( SeQueryInformationToken(v1, TokenOwner, &TokenInformation) >= 0
    && SeQueryInformationToken(v1, TokenPrimaryGroup, &P) >= 0 )
  {
    v3 = *(void **)P;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, *(PSID *)TokenInformation, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, v3, 0);
    RtlCreateAcl(&Acl, 0xECu, 2u);
    RtlpAddKnownAce((int)&Acl, 2, 2, 983103, SeWorldSid, 0);
    RtlpAddKnownAce((int)&Acl, 2, 2, 983103, SeAllAppPackagesSid, 0);
    RtlpAddKnownAce((int)&Acl, 2, 2, 983103, SeRestrictedSid, 0);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    RtlCreateAcl(&Sacl, 0x54u, 2u);
    RtlAddMandatoryAce(&Sacl, 2u, 0, SeLowMandatorySid, 0x11u, 1u);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Sacl, 0);
    BufferLength = 0;
    RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v2 = Pool2;
    if ( Pool2 )
      RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Pool2, &BufferLength);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v2;
}
