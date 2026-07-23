/*
 * XREFs of CmpHiveRootSecurityDescriptor @ 0x1407DD764
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x1407D7E74 (CmpSetVersionData.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 *     CmpInitializePreloadedHives @ 0x140C49B14 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlGetAce @ 0x140404120 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x140463B10 (RtlDeriveCapabilitySidsFromName.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

ACL *CmpHiveRootSecurityDescriptor()
{
  ULONG v0; // ebx
  unsigned __int8 *Pool2; // r13
  unsigned __int8 *v2; // r15
  unsigned __int8 *v3; // r12
  ULONG v4; // ebx
  unsigned __int8 *v5; // rsi
  __int64 v6; // rax
  unsigned __int8 *v7; // r14
  ULONG v8; // edi
  ACL *v9; // rax
  ACL *v10; // rbx
  NTSTATUS Acl; // eax
  int v12; // eax
  __int64 v13; // rax
  ACL *v14; // rdi
  _SID_IDENTIFIER_AUTHORITY v16; // [rsp+38h] [rbp-69h] BYREF
  PVOID Ace; // [rsp+40h] [rbp-61h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+48h] [rbp-59h] BYREF
  size_t v19; // [rsp+50h] [rbp-51h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-49h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+98h] [rbp-9h] BYREF

  *(_QWORD *)&UnicodeString.Length = 1703960LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  UnicodeString.Buffer = L"registryRead";
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)v16.Value = 0;
  *(_WORD *)&v16.Value[4] = 1280;
  LODWORD(v19) = 0;
  WORD2(v19) = 3840;
  Ace = 0LL;
  v0 = RtlLengthRequiredSid(1u);
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v0, 0x20204D43u);
  v2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v0, 0x20204D43u);
  v3 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v0, 0x20204D43u);
  v4 = RtlLengthRequiredSid(2u);
  v5 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v4, 0x20204D43u);
  v6 = ExAllocatePool2(0x100uLL, v4, 0x20204D43u);
  v7 = (unsigned __int8 *)v6;
  if ( !Pool2 || !v2 || !v3 || !v5 || !v6 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 1u) < 0
    || RtlInitializeSid(v2, &v16, 1u) < 0
    || RtlInitializeSid(v3, &v16, 1u) < 0
    || RtlInitializeSid(v5, &v16, 2u) < 0
    || RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v19, 2u) < 0 )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  }
  *RtlSubAuthoritySid(Pool2, 0) = 0;
  *RtlSubAuthoritySid(v2, 0) = 12;
  *RtlSubAuthoritySid(v3, 0) = 18;
  *RtlSubAuthoritySid(v5, 0) = 32;
  *RtlSubAuthoritySid(v5, 1u) = 544;
  *RtlSubAuthoritySid(v7, 0) = 2;
  *RtlSubAuthoritySid(v7, 1u) = 1;
  if ( RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  v8 = 4 * (CapabilitySid[1] + Pool2[1] + v2[1] + v3[1] + v5[1] + v7[1]) + 104;
  v19 = v8;
  v9 = (ACL *)ExAllocatePool2(0x100uLL, v8, 0x20204D43u);
  v10 = v9;
  if ( !v9 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v9, v8, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, Acl, 0LL);
  v12 = RtlpAddKnownAce((int)v10, 2, 0, 983103, v3, 0);
  if ( v12 < 0
    || (v12 = RtlpAddKnownAce((int)v10, 2, 0, 983103, v5, 0), v12 < 0)
    || (v12 = RtlpAddKnownAce((int)v10, 2, 0, 131097, Pool2, 0), v12 < 0)
    || (v12 = RtlpAddKnownAce((int)v10, 2, 0, 131097, v2, 0), v12 < 0)
    || (v12 = RtlpAddKnownAce((int)v10, 2, 0, 131097, v7, 0), v12 < 0)
    || (v12 = RtlpAddKnownAce((int)v10, 2, 0, 131097, CapabilitySid, 0), v12 < 0) )
  {
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, v12, 0LL);
  }
  RtlGetAce(v10, 0, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v10, 1u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v10, 2u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v10, 3u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v10, 4u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  RtlGetAce(v10, 5u, &Ace);
  *((_BYTE *)Ace + 1) |= 2u;
  v13 = ExAllocatePool2(0x100uLL, v8 + 40LL, 0x20204D43u);
  v14 = (ACL *)v13;
  if ( !v13 )
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, 0LL, 0LL);
  memmove((void *)(v13 + 40), v10, v19);
  *(_DWORD *)v16.Value = RtlCreateSecurityDescriptor(v14, 1u);
  if ( *(int *)v16.Value < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, *(int *)v16.Value, 0LL);
  }
  *(_DWORD *)v16.Value = RtlSetDaclSecurityDescriptor(v14, 1u, v14 + 5, 0);
  if ( *(int *)v16.Value < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 9uLL, *(int *)v16.Value, 0LL);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(v5, 0);
  ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(v10, 0);
  return v14;
}
