/*
 * XREFs of SeMakeAnonymousLogonToken @ 0x140C28B3C
 * Callers:
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpTimeFieldsToTime @ 0x14042E5F8 (RtlpTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SepCreateToken @ 0x140783CB4 (SepCreateToken.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1409A6F20 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     SeSetMandatoryPolicyToken @ 0x140A4769C (SeSetMandatoryPolicyToken.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 SeMakeAnonymousLogonToken()
{
  PSID v0; // rbx
  unsigned int v1; // r15d
  ULONG v2; // edi
  ACL *Pool2; // rax
  ACL *v4; // rsi
  void *v6; // rax
  void *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // [rsp+28h] [rbp-100h]
  int v11; // [rsp+30h] [rbp-F8h]
  int v12; // [rsp+A8h] [rbp-80h] BYREF
  int v13[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+B8h] [rbp-70h] BYREF
  _SID_AND_ATTRIBUTES v15; // [rsp+C0h] [rbp-68h] BYREF
  int v16[2]; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-50h]
  __int64 v18; // [rsp+E0h] [rbp-48h]
  int v19; // [rsp+E8h] [rbp-40h]
  int v20; // [rsp+ECh] [rbp-3Ch]
  void *v21; // [rsp+F0h] [rbp-38h]
  __int64 v22; // [rsp+F8h] [rbp-30h]
  __m128i si128; // [rsp+100h] [rbp-28h] BYREF
  _SID_AND_ATTRIBUTES v24; // [rsp+118h] [rbp-10h] BYREF
  PSID v25; // [rsp+128h] [rbp+0h]
  int v26; // [rsp+130h] [rbp+8h]

  v12 = 1;
  *(_QWORD *)v13 = 0LL;
  *(&v15.Attributes + 1) = 0;
  v16[1] = 0;
  v20 = 0;
  v14 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  RtlpTimeFieldsToTime((__int64)&si128, &v14);
  v0 = SeAnonymousLogonSid;
  v24.Sid = SeWorldSid;
  v25 = SeLowMandatorySid;
  v15.Sid = SeAnonymousLogonSid;
  v15.Attributes = 0;
  v24.Attributes = 7;
  v26 = 96;
  v1 = ((4 * *((unsigned __int8 *)SeWorldSid + 1) + 11) & 0xFFFFFFFC)
     + 16
     + ((4 * *((unsigned __int8 *)SeLowMandatorySid + 1) + 11) & 0xFFFFFFFC);
  v2 = 4 * (*((unsigned __int8 *)SeAnonymousLogonSid + 1) + *((unsigned __int8 *)SeWorldSid + 1)) + 48;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL, 0xC8uLL, 0x63416553uLL);
  v4 = Pool2;
  if ( !Pool2 )
    return 0LL;
  RtlCreateAcl(Pool2, v2, 2u);
  RtlAddAccessAllowedAce(v4, 2u, 0xF01FFu, SeWorldSid);
  RtlAddAccessAllowedAce(v4, 2u, 0xF01FFu, SeAnonymousLogonSid);
  v6 = (void *)ExAllocatePool2(0x100uLL, 0x28uLL, 0x64536553uLL);
  v7 = v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  RtlCreateSecurityDescriptor(v6, 1u);
  RtlSetDaclSecurityDescriptor(v7, 1u, v4, 0);
  RtlSetOwnerSecurityDescriptor(v7, SeWorldSid, 0);
  RtlSetGroupSecurityDescriptor(v7, SeWorldSid, 0);
  v16[0] = 48;
  v17 = 0LL;
  v19 = 0;
  v18 = 0LL;
  v21 = v7;
  v22 = 0LL;
  SepCreateToken(
    (HANDLE *)v13,
    v8,
    v9,
    (__int64)v16,
    v10,
    v11,
    (__int64)&SeAnonymousAuthenticationId,
    &v14,
    &v15,
    2u,
    &v24,
    v1,
    0,
    0LL,
    0LL,
    v0,
    v4);
  SeSetMandatoryPolicyToken(*(__int64 *)v13, &v12);
  ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(v7, 0);
  return *(_QWORD *)v13;
}
