/*
 * XREFs of CmpHiveRootSecurityDescriptor @ 0x1407CDA54
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407BAA30 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x1407C8190 (CmpSetVersionData.c)
 *     CmInitSystem1 @ 0x140C33C44 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140C35AB8 (CmpCreateRegistryRoot.c)
 *     CmpInitializePreloadedHives @ 0x140C36714 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlGetAce @ 0x1404044D0 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14046C970 (RtlDeriveCapabilitySidsFromName.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x1409EAF40 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

ACL *CmpHiveRootSecurityDescriptor()
{
  unsigned __int8 *Pool2; // r13
  unsigned __int8 *v1; // r15
  unsigned __int8 *v2; // r12
  unsigned __int8 *v3; // rsi
  __int64 v4; // rax
  unsigned __int8 *v5; // r14
  ULONG v6; // edi
  ACL *v7; // rax
  ACL *v8; // rbx
  NTSTATUS Acl; // eax
  int v10; // eax
  __int64 v11; // rax
  ACL *v12; // rdi
  _SID_IDENTIFIER_AUTHORITY v14; // [rsp+38h] [rbp-69h] BYREF
  PVOID Ace; // [rsp+40h] [rbp-61h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+48h] [rbp-59h] BYREF
  size_t v17; // [rsp+50h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+98h] [rbp-9h] BYREF

  *(_QWORD *)&UnicodeString.Length = 1703960LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  UnicodeString.Buffer = L"registryRead";
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)v14.Value = 0;
  *(_WORD *)&v14.Value[4] = 1280;
  LODWORD(v17) = 0;
  WORD2(v17) = 3840;
  Ace = 0LL;
  RtlLengthRequiredSid(1u);
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  v1 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  v2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  RtlLengthRequiredSid(2u);
  v3 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  v4 = ExAllocatePool2(0x100uLL);
  v5 = (unsigned __int8 *)v4;
  if ( !Pool2 || !v1 || !v2 || !v3 || !v4 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 1u) < 0
    || RtlInitializeSid(v1, &v14, 1u) < 0
    || RtlInitializeSid(v2, &v14, 1u) < 0
    || RtlInitializeSid(v3, &v14, 2u) < 0
    || RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v17, 2u) < 0 )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  }
  *RtlSubAuthoritySid(Pool2, 0) = 0;
  *RtlSubAuthoritySid(v1, 0) = 12;
  *RtlSubAuthoritySid(v2, 0) = 18;
  *RtlSubAuthoritySid(v3, 0) = 32;
  *RtlSubAuthoritySid(v3, 1u) = 544;
  *RtlSubAuthoritySid(v5, 0) = 2;
  *RtlSubAuthoritySid(v5, 1u) = 1;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  v6 = 4 * (CapabilitySid[1] + Pool2[1] + v1[1] + v2[1] + v3[1] + v5[1]) + 104;
  v17 = v6;
  v7 = (ACL *)ExAllocatePool2(0x100uLL);
  v8 = v7;
  if ( !v7 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v7, v6, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, Acl, 0LL);
  v10 = RtlpAddKnownAce((int)v8, 2, 0, 983103, v2, 0);
  if ( v10 < 0
    || (v10 = RtlpAddKnownAce((int)v8, 2, 0, 983103, v3, 0), v10 < 0)
    || (v10 = RtlpAddKnownAce((int)v8, 2, 0, 131097, Pool2, 0), v10 < 0)
    || (v10 = RtlpAddKnownAce((int)v8, 2, 0, 131097, v1, 0), v10 < 0)
    || (v10 = RtlpAddKnownAce((int)v8, 2, 0, 131097, v5, 0), v10 < 0)
    || (v10 = RtlpAddKnownAce((int)v8, 2, 0, 131097, CapabilitySid, 0), v10 < 0) )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, v10, 0LL);
  }
  RtlGetAce(v8, 0, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 1u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 2u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 3u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 4u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v8, 5u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  v11 = ExAllocatePool2(0x100uLL);
  v12 = (ACL *)v11;
  if ( !v11 )
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, 0LL, 0LL);
  memmove((void *)(v11 + 40), v8, v17);
  *(_DWORD *)v14.Value = RtlCreateSecurityDescriptor(v12, 1u);
  if ( *(int *)v14.Value < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, *(int *)v14.Value, 0LL);
  }
  *(_DWORD *)v14.Value = RtlSetDaclSecurityDescriptor(v12, 1u, v12 + 5, 0);
  if ( *(int *)v14.Value < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 9uLL, *(int *)v14.Value, 0LL);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v1, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(v5, 0);
  ExFreePoolWithTag(v8, 0);
  return v12;
}
