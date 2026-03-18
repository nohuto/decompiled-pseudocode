/*
 * XREFs of ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1403A4BE8
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x140428970 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 DpiIndirectEscapeAccessCheck(void)
{
  ULONG v0; // eax
  __int64 v1; // r9
  void *Pool2; // r14
  ULONG v3; // eax
  __int64 v4; // r9
  void *v5; // rdi
  ULONG v6; // eax
  __int64 v7; // r9
  __int64 v8; // rax
  void *v9; // rsi
  NTSTATUS Acl; // r15d
  ULONG v12; // r15d
  ULONG v13; // r15d
  ULONG v14; // r15d
  __int64 v15; // r9
  struct _ACL *v16; // rax
  struct _ACL *v17; // rbx
  BOOLEAN v18; // al
  int AccessStatus; // [rsp+58h] [rbp-39h] BYREF
  DWORD GrantedAccess; // [rsp+5Ch] [rbp-35h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-31h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+80h] [rbp-11h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+Fh]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A8h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B0h] [rbp+1Fh] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  v23 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v0 = RtlLengthRequiredSid(2u);
  Pool2 = (void *)ExAllocatePool2(257LL, v0, 1953656900LL, v1);
  v3 = RtlLengthRequiredSid(1u);
  v5 = (void *)ExAllocatePool2(257LL, v3, 1953656900LL, v4);
  v6 = RtlLengthRequiredSid(6u);
  v8 = ExAllocatePool2(257LL, v6, 1953656900LL, v7);
  v9 = (void *)v8;
  if ( Pool2 && v5 && v8 )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(Pool2, &IdentifierAuthority, 2u);
    *RtlSubAuthoritySid(Pool2, 0) = 32;
    *RtlSubAuthoritySid(Pool2, 1u) = 544;
    RtlInitializeSid(v5, &IdentifierAuthority, 1u);
    *RtlSubAuthoritySid(v5, 0) = 18;
    RtlInitializeSidEx(v9, &IdentifierAuthority, 6LL, 84LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    v12 = RtlLengthSid(v9);
    v13 = RtlLengthSid(v5) + v12;
    v14 = RtlLengthSid(Pool2) + 44 + v13;
    v16 = (struct _ACL *)ExAllocatePool2(257LL, v14, 1953656900LL, v15);
    v17 = v16;
    if ( v16 )
    {
      Acl = RtlCreateAcl(v16, v14, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v17, 2u, 0x1F0000u, v5);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v17, 2u, 0x1F0000u, Pool2);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v17, 2u, 0x1F0000u, v9);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v17, 0);
              if ( Acl >= 0 )
              {
                GenericMapping.GenericAll = 2031616;
                GenericMapping.GenericRead = 0x20000;
                GenericMapping.GenericWrite = 0x20000;
                GenericMapping.GenericExecute = 0x20000;
                GrantedAccess = 0;
                AccessStatus = 0;
                v18 = SeAccessCheck(
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
                if ( v18 )
                  Acl = 0;
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v17, 0);
    }
    else
    {
      Acl = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 1187;
    }
  }
  else
  {
    Acl = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1196;
  }
  SeReleaseSubjectContext(&SubjectContext);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)Acl;
}
