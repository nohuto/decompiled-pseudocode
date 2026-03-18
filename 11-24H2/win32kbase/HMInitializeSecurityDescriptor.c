/*
 * XREFs of HMInitializeSecurityDescriptor @ 0x140124158
 * Callers:
 *     ?UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z @ 0x140123F20 (-UserSetWindowMessageCapability@@YAHPEAUHWND__@@IPEAXH@Z.c)
 *     HMInitializeObjectSecurity @ 0x1401240C4 (HMInitializeObjectSecurity.c)
 * Callees:
 *     AllocAce @ 0x1400175A0 (AllocAce.c)
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall HMInitializeSecurityDescriptor(void *a1, struct _GENERIC_MAPPING *a2)
{
  void *v3; // r14
  void *v4; // r15
  unsigned int v5; // edx
  PVOID v6; // rcx
  DWORD v8; // r12d
  PSID SeAliasAdminsSid; // rsi
  ULONG v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rbx
  char *v14; // rax
  char *v15; // rsi
  char *v16; // rdi
  ULONG v17; // eax
  _DWORD *v18; // rax
  struct _ACL *v19; // rsi
  ULONG v20; // r14d
  struct _ACL *v21; // rax
  ULONG v22; // r12d
  struct _ACL *v23; // rax
  struct _ACL *v24; // r14
  char *v25; // rcx
  char *v26; // rcx
  PSECURITY_DESCRIPTOR v27; // r15
  NTSTATUS v28; // eax
  PVOID v29; // rcx
  int v30; // r9d
  char *v31; // rcx
  __int64 v32; // rax
  PSID LabelSid; // [rsp+28h] [rbp-51h]
  PVOID TokenInformation; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  DWORD AccessMask; // [rsp+40h] [rbp-39h] BYREF
  PVOID v37; // [rsp+48h] [rbp-31h] BYREF
  ULONG v38; // [rsp+50h] [rbp-29h] BYREF
  int v39; // [rsp+54h] [rbp-25h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v40; // [rsp+58h] [rbp-21h] BYREF
  PGENERIC_MAPPING GenericMapping; // [rsp+78h] [rbp-1h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp+7h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp+Fh] BYREF

  GenericMapping = a2;
  SecurityDescriptor = a1;
  TokenInformation = 0LL;
  memset(&v40, 0, sizeof(v40));
  P = 0LL;
  v39 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v37 = 0LL;
  if ( RtlCreateSecurityDescriptor(a1, 1u) < 0 )
    return 0LL;
  SeCaptureSubjectContext(&v40);
  if ( SeQueryInformationToken(v40.PrimaryToken, TokenUser, &TokenInformation) < 0 )
  {
    SeReleaseSubjectContext(&v40);
    return 0LL;
  }
  if ( SeQueryInformationToken(v40.PrimaryToken, TokenGroups, &P) < 0 )
  {
    SeReleaseSubjectContext(&v40);
    v6 = TokenInformation;
    goto LABEL_6;
  }
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  if ( !*(_DWORD *)P )
    goto LABEL_5;
  v31 = (char *)P + 8;
  while ( 1 )
  {
    v30 = *((_DWORD *)v31 + 2);
    if ( (v30 & 0xC0000000) == 0xC0000000 )
    {
      v3 = *(void **)v31;
      if ( v4 )
        break;
    }
    if ( (v30 & 0x20) == 0 || (v4 = *(void **)v31, !v3) )
    {
      ++v5;
      v31 += 16;
      if ( v5 < *(_DWORD *)P )
        continue;
    }
    if ( !v4 )
      goto LABEL_5;
    break;
  }
  if ( SeQueryInformationToken(v40.PrimaryToken, TokenSessionId, (PVOID *)&v39) < 0
    || SeQueryInformationToken(v40.PrimaryToken, TokenAppContainerSid, &v37) < 0 )
  {
LABEL_5:
    SeReleaseSubjectContext(&v40);
    ExFreePoolWithTag(TokenInformation, 0);
    v6 = P;
LABEL_6:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  SeReleaseSubjectContext(&v40);
  AccessMask = 0x10000000;
  RtlMapGenericMask(&AccessMask, a2);
  v8 = AccessMask;
  SeAliasAdminsSid = SeExports->SeAliasAdminsSid;
  v10 = RtlLengthSid(SeAliasAdminsSid);
  v12 = Win32AllocPoolWithQuotaZInitImpl(v11, v10 + 8, 0x65737355u);
  v13 = (_DWORD *)v12;
  if ( !v12 )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    goto LABEL_30;
  }
  *(_WORD *)v12 = 0;
  v38 = v10 + 8;
  *(_WORD *)(v12 + 2) = v10 + 8;
  *(_DWORD *)(v12 + 4) = v8;
  RtlCopySid(v10, (PSID)(v12 + 8), SeAliasAdminsSid);
  v14 = (char *)AllocAce(v13, 0, 0, AccessMask, SeExports->SeLocalSystemSid, &v38);
  v15 = v14;
  if ( !v14 )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    goto LABEL_28;
  }
  v16 = (char *)AllocAce(v14, 0, 0, AccessMask, *(PSID *)TokenInformation, &v38);
  if ( !v16 )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    v26 = v15;
    goto LABEL_29;
  }
  v17 = RtlLengthRequiredSid(3u);
  v18 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v17, 0x65737355u);
  v13 = v18;
  if ( !v18 )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    v26 = v16;
    goto LABEL_29;
  }
  if ( RtlInitializeSid(v18, &IdentifierAuthority, 3u) < 0 )
    goto LABEL_26;
  v13[3] = 0;
  v13[2] = 90;
  v13[4] = v39;
  v19 = (struct _ACL *)AllocAce(v16, 0, 0, AccessMask, v13, &v38);
  if ( !v19 )
    goto LABEL_26;
  if ( *(_QWORD *)v37 )
  {
    v32 = AllocAce(v19, 0, 0, AccessMask, *(PSID *)v37, &v38);
    if ( !v32 )
    {
LABEL_33:
      ExFreePoolWithTag(TokenInformation, 0);
      ExFreePoolWithTag(P, 0);
      goto LABEL_25;
    }
    v19 = (struct _ACL *)v32;
  }
  AccessMask = -1073741824;
  RtlMapGenericMask(&AccessMask, GenericMapping);
  v16 = (char *)v19;
  if ( v3 )
  {
    v16 = (char *)AllocAce(v19, 0, 0, AccessMask, v3, &v38);
    if ( !v16 )
      goto LABEL_33;
  }
  v20 = v38 + 8;
  v21 = (struct _ACL *)Win32AllocPoolZInitImpl(256LL, v38 + 8, 0x65737355u);
  v19 = v21;
  if ( !v21 )
  {
LABEL_26:
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    v25 = v16;
    goto LABEL_27;
  }
  if ( RtlCreateAcl(v21, v20, 2u) < 0
    || (RtlAddAce(v19, 2u, 0, v16, v19->AclSize - 8),
        v22 = RtlLengthSid(v4) + 16,
        v23 = (struct _ACL *)Win32AllocPoolZInitImpl(256LL, v22, 0x65737355u),
        (v24 = v23) == 0LL) )
  {
    ExFreePoolWithTag(TokenInformation, 0);
    ExFreePoolWithTag(P, 0);
    GreDeleteFastMutex(v16);
LABEL_25:
    v25 = (char *)v19;
LABEL_27:
    GreDeleteFastMutex(v25);
LABEL_28:
    v26 = (char *)v13;
LABEL_29:
    GreDeleteFastMutex(v26);
LABEL_30:
    v6 = v37;
    goto LABEL_6;
  }
  if ( RtlCreateAcl(v23, v22, 2u) < 0
    || (LODWORD(LabelSid) = 7, RtlAddMandatoryAce(v24, 2u, 0, (ULONG)v4, 0x11u, LabelSid) < 0)
    || (v27 = SecurityDescriptor, RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v19, 0) < 0) )
  {
    v29 = TokenInformation;
    goto LABEL_40;
  }
  v28 = RtlSetSaclSecurityDescriptor(v27, 1u, v24, 0);
  v29 = TokenInformation;
  if ( v28 < 0 )
  {
LABEL_40:
    ExFreePoolWithTag(v29, 0);
    ExFreePoolWithTag(P, 0);
    GreDeleteFastMutex(v16);
    GreDeleteFastMutex((char *)v19);
    v25 = (char *)v24;
    goto LABEL_27;
  }
  ExFreePoolWithTag(TokenInformation, 0);
  ExFreePoolWithTag(P, 0);
  GreDeleteFastMutex(v16);
  GreDeleteFastMutex((char *)v13);
  ExFreePoolWithTag(v37, 0);
  return 1LL;
}
