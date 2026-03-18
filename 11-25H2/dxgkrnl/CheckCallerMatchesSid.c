/*
 * XREFs of CheckCallerMatchesSid @ 0x140265D20
 * Callers:
 *     DxgkHandleCcdDatabaseRequests @ 0x1402664B4 (DxgkHandleCcdDatabaseRequests.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006487C (--1-$unique_storage@U-$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1-FreePoolWithTag@-$pool_helper.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_SECURITY_SUBJECT_CONTEXT@@$$A6AXPEAU1@@Z$1?SeReleaseSubjectContext@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14008FC5C (--1-$unique_storage@U-$resource_policy@PEAU_SECURITY_SUBJECT_CONTEXT@@$$A6AXPEAU1@@Z$1-SeRelease.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCallerMatchesSid(PSID Sid)
{
  NTSTATUS v2; // eax
  unsigned int v3; // ebx
  ULONG v4; // esi
  __int64 v5; // r9
  struct _ACL *Pool2; // rax
  struct _ACL *v7; // rbx
  NTSTATUS Acl; // eax
  NTSTATUS v9; // esi
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  struct _ACL *v13; // [rsp+58h] [rbp-29h] BYREF
  int AccessStatus; // [rsp+60h] [rbp-21h] BYREF
  DWORD GrantedAccess; // [rsp+64h] [rbp-1Dh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // [rsp+68h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v18; // [rsp+90h] [rbp+Fh]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp+17h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+B8h] [rbp+37h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  p_SubjectContext = &SubjectContext;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v18 = 0LL;
  v2 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = RtlLengthSid(Sid) + 20;
    Pool2 = (struct _ACL *)ExAllocatePool2(256LL, v4, 1265072196LL, v5);
    v13 = Pool2;
    v7 = Pool2;
    if ( !Pool2 )
    {
      v3 = -1073741670;
      WdLogSingleEntry1(2LL, -1073741670LL);
      WdLogGlobalForLineNumber = 2733;
LABEL_5:
      __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v13);
      goto LABEL_19;
    }
    Acl = RtlCreateAcl(Pool2, v4, 2u);
    v9 = Acl;
    if ( Acl >= 0 )
    {
      v10 = RtlAddAccessAllowedAce(v7, 2u, 0x1F0000u, Sid);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v11 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
        v3 = v11;
        if ( v11 >= 0 )
        {
          if ( !RtlValidSecurityDescriptor(SecurityDescriptor) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2740;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"RtlValidSecurityDescriptor(&SecurityDescriptor)",
              2740LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          GrantedAccess = 0;
          AccessStatus = 0;
          GenericMapping.GenericAll = 2031616;
          GenericMapping.GenericRead = 0x20000;
          GenericMapping.GenericWrite = 0x20000;
          GenericMapping.GenericExecute = 0x20000;
          if ( SeAccessCheck(
                 SecurityDescriptor,
                 &SubjectContext,
                 0,
                 0x1F0000u,
                 0,
                 0LL,
                 &GenericMapping,
                 1,
                 &GrantedAccess,
                 &AccessStatus)
            || g_OSTestSigningEnabled )
          {
            __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v13);
            v3 = 0;
            goto LABEL_19;
          }
          v3 = AccessStatus;
        }
        else
        {
          WdLogSingleEntry1(2LL, v11);
          WdLogGlobalForLineNumber = 2739;
        }
        goto LABEL_5;
      }
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 2738;
    }
    else
    {
      WdLogSingleEntry1(2LL, Acl);
      WdLogGlobalForLineNumber = 2737;
    }
    __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v13);
    v3 = v9;
    goto LABEL_19;
  }
  WdLogSingleEntry1(2LL, v2);
  WdLogGlobalForLineNumber = 2727;
LABEL_19:
  wil::details::unique_storage<wil::details::resource_policy<_SECURITY_SUBJECT_CONTEXT *,void (_SECURITY_SUBJECT_CONTEXT *),&void SeReleaseSubjectContext(_SECURITY_SUBJECT_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,_SECURITY_SUBJECT_CONTEXT *,_SECURITY_SUBJECT_CONTEXT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_SECURITY_SUBJECT_CONTEXT *,void (_SECURITY_SUBJECT_CONTEXT *),&void SeReleaseSubjectContext(_SECURITY_SUBJECT_CONTEXT *),wistd::integral_constant<unsigned __int64,0>,_SECURITY_SUBJECT_CONTEXT *,_SECURITY_SUBJECT_CONTEXT *,0,std::nullptr_t>>(&p_SubjectContext);
  return v3;
}
