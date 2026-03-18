/*
 * XREFs of PiAuCheckTokenMembership @ 0x14071BF68
 * Callers:
 *     PiAuCheckClientInteractive @ 0x14071BEA4 (PiAuCheckClientInteractive.c)
 * Callees:
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCheckTokenMembership(void *Src, BOOLEAN *a2)
{
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rdi
  NTSTATUS Acl; // ebx
  ACL *v8; // rsi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-9h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-5h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-1h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+78h] [rbp+1Fh] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericAll = 2031617;
  *a2 = 0;
  v4 = 3 * (RtlLengthSid(Src) + 20);
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v8 = Pool2 + 5;
    RtlCreateSecurityDescriptor(Pool2, 1u);
    RtlSetOwnerSecurityDescriptor(v6, Src, 0);
    RtlSetGroupSecurityDescriptor(v6, Src, 0);
    Acl = RtlCreateAcl(v8, v4 - 40, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce((int)v8, 2, 0, 1, Src, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(v6, 1u, v8, 0);
        if ( Acl >= 0 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          *a2 = SeAccessCheck(
                  v6,
                  &SubjectContext,
                  0,
                  1u,
                  0,
                  0LL,
                  &GenericMapping,
                  KeGetCurrentThread()->PreviousMode,
                  &GrantedAccess,
                  &AccessStatus);
          SeReleaseSubjectContext(&SubjectContext);
          Acl = 0;
        }
      }
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
