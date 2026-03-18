/*
 * XREFs of ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x14039B6A8
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140428678 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 DpiIndirectEscapeAccessCheck(void)
{
  ULONG v0; // eax
  void *Pool2; // r14
  ULONG v2; // eax
  void *v3; // rdi
  ULONG v4; // eax
  __int64 v5; // rax
  void *v6; // rsi
  NTSTATUS Acl; // r15d
  ULONG v9; // r15d
  ULONG v10; // r15d
  ULONG v11; // r15d
  struct _ACL *v12; // rax
  struct _ACL *v13; // rbx
  BOOLEAN v14; // al
  int AccessStatus; // [rsp+58h] [rbp-39h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-35h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-11h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+Fh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+1Fh] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v19 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = RtlLengthRequiredSid(2u);
  Pool2 = (void *)ExAllocatePool2(257LL, v0, 1953656900LL);
  v2 = RtlLengthRequiredSid(1u);
  v3 = (void *)ExAllocatePool2(257LL, v2, 1953656900LL);
  v4 = RtlLengthRequiredSid(6u);
  v5 = ExAllocatePool2(257LL, v4, 1953656900LL);
  v6 = (void *)v5;
  if ( Pool2 && v3 && v5 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(Pool2, &IdentifierAuthority, 2u);
    *RtlSubAuthoritySid(Pool2, 0) = 32;
    *RtlSubAuthoritySid(Pool2, 1u) = 544;
    RtlInitializeSid(v3, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v3, 0) = 18;
    RtlInitializeSidEx(v6, &IdentifierAuthority, 6LL, 84LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    v9 = RtlLengthSid(v6);
    v10 = RtlLengthSid(v3) + v9;
    v11 = RtlLengthSid(Pool2) + 44 + v10;
    v12 = (struct _ACL *)ExAllocatePool2(257LL, v11, 1953656900LL);
    v13 = v12;
    if ( v12 )
    {
      Acl = RtlCreateAcl(v12, v11, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v13, 2u, 0x1F0000u, v3);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v13, 2u, 0x1F0000u, Pool2);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v13, 2u, 0x1F0000u, v6);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v13, 0);
              if ( Acl >= 0 )
              {
                GenericMapping.GenericAll = 2031616;
                GenericMapping.GenericRead = 0x20000;
                GenericMapping.GenericWrite = 0x20000;
                GenericMapping.GenericExecute = 0x20000;
                GrantedAccess = 0;
                AccessStatus = 0;
                v14 = SeAccessCheck(
                        SecurityDescriptor,
                        &SubjectContext,
                        0,
                        0x1F0000u,
                        0,
                        0LL,
                        &GenericMapping,
                        1,
                        &GrantedAccess,
                        &AccessStatus);
                Acl = AccessStatus;
                if ( v14 )
                  Acl = 0;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      Acl = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 1202;
    }
  }
  else
  {
    Acl = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1211;
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Acl;
}
