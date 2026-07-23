/*
 * XREFs of WmipInitializeSecurity @ 0x140C3EEC0
 * Callers:
 *     WmipDriverEntry @ 0x140C3EB10 (WmipDriverEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1408588A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x140911600 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A18380 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 WmipInitializeSecurity()
{
  ULONG v0; // ebx
  ACL *Pool2; // rax
  ACL *v2; // rdi
  __int64 result; // rax
  NTSTATUS Acl; // ebx
  PSID v5; // rsi
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-49h] BYREF
  __int16 v7; // [rsp+38h] [rbp-39h] BYREF
  char v8; // [rsp+3Ah] [rbp-37h]
  int v9; // [rsp+40h] [rbp-31h]
  __int128 v10; // [rsp+44h] [rbp-2Dh]
  int v11; // [rsp+54h] [rbp-1Dh]
  int v12; // [rsp+5Ch] [rbp-15h]
  int v13; // [rsp+64h] [rbp-Dh]
  LONG (__fastcall *v14)(__int64); // [rsp+80h] [rbp+Fh]
  __int64 (__fastcall *v15)(__int64, int, DWORD *, void *, ULONG *, __int64 *, int, __int64); // [rsp+90h] [rbp+1Fh]

  DestinationString = 0LL;
  v0 = 4
     * (*((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *((unsigned __int8 *)SeAliasUsersSid + 1)
      + *((unsigned __int8 *)SeExports->SeLocalServiceSid + 1)
      + *((unsigned __int8 *)SeExports->SeNetworkServiceSid + 1))
     + 116;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v0, 0x70696D57uLL);
  v2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Acl = RtlCreateAcl(Pool2, v0, 2u);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeLocalSystemSid);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x800u, SeAliasUsersSid);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x11FFFFFu, SeAliasAdminsSid);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeLocalServiceSid);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlAddAccessAllowedAce(v2, 2u, 0x1FFFFFu, SeExports->SeNetworkServiceSid);
  if ( Acl < 0 )
    goto LABEL_13;
  WmipDefaultAccessSd = (__int64)&WmipDefaultAccessSecurityDescriptor;
  RtlCreateSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, 1u);
  Acl = RtlSetDaclSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, 1u, v2, 0);
  if ( Acl < 0 )
    goto LABEL_13;
  v5 = SeAliasAdminsSid;
  Acl = RtlSetOwnerSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, SeAliasAdminsSid, 0);
  if ( Acl < 0 )
    goto LABEL_13;
  Acl = RtlSetGroupSecurityDescriptor(&WmipDefaultAccessSecurityDescriptor, v5, 0);
  if ( Acl < 0 )
    goto LABEL_13;
  SeCaptureSubjectContext(&WmipSystemSubjectContext);
  memset_0(&v7, 0, 0x78uLL);
  v7 = 120;
  v9 = 256;
  v8 = v8 & 0xE7 | 8;
  v11 = 2039807;
  v15 = WmipSecurityMethod;
  v14 = WmipDeleteMethod;
  v10 = WmipGenericMapping;
  v12 = 512;
  v13 = 168;
  RtlInitUnicodeString(&DestinationString, L"WmiGuid");
  result = ObCreateObjectType(&DestinationString, &v7, 0LL, (__int64)&WmipGuidObjectType);
  Acl = result;
  if ( (int)result < 0 )
  {
LABEL_13:
    ExFreePoolWithTag(v2, 0);
    WmipDefaultAccessSd = 0LL;
    return (unsigned int)Acl;
  }
  return result;
}
