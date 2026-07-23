/*
 * XREFs of CmpAdminSystemSecurityDescriptor @ 0x1407DC538
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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

ACL *CmpAdminSystemSecurityDescriptor()
{
  ULONG v0; // eax
  unsigned __int8 *Pool2; // rbp
  ULONG v2; // eax
  __int64 v3; // rax
  unsigned __int8 *v4; // rdi
  ULONG v5; // ebx
  size_t v6; // r14
  ACL *v7; // rax
  ACL *v8; // rsi
  NTSTATUS Acl; // eax
  int v10; // eax
  __int64 v11; // rax
  ACL *v12; // rbx
  NTSTATUS SecurityDescriptor; // eax
  ULONG_PTR v14; // r14
  NTSTATUS v15; // eax
  ULONG_PTR v16; // r14
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = RtlLengthRequiredSid(1u);
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v0, 0x20204D43u);
  v2 = RtlLengthRequiredSid(2u);
  v3 = ExAllocatePool2(0x100uLL, v2, 0x20204D43u);
  v4 = (unsigned __int8 *)v3;
  if ( !Pool2 || !v3 )
    KeBugCheckEx(0x51u, 0xBuLL, 1uLL, 0LL, 0LL);
  if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 1u) < 0 || RtlInitializeSid(v4, &IdentifierAuthority, 2u) < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 2uLL, 0LL, 0LL);
  *RtlSubAuthoritySid(Pool2, 0) = 18;
  *RtlSubAuthoritySid(v4, 0) = 32;
  *RtlSubAuthoritySid(v4, 1u) = 544;
  v5 = 4 * (Pool2[1] + v4[1]) + 40;
  v6 = v5;
  v7 = (ACL *)ExAllocatePool2(0x100uLL, v5, 0x20204D43u);
  v8 = v7;
  if ( !v7 )
    KeBugCheckEx(0x51u, 0xBuLL, 3uLL, 0LL, 0LL);
  Acl = RtlCreateAcl(v7, v5, 2u);
  if ( Acl < 0 )
    KeBugCheckEx(0x51u, 0xBuLL, 4uLL, Acl, 0LL);
  v10 = RtlpAddKnownAce((int)v8, 2, 0, 2032127, Pool2, 0);
  if ( v10 < 0 || (v10 = RtlpAddKnownAce((int)v8, 2, 0, 2032127, v4, 0), v10 < 0) )
    KeBugCheckEx(0x51u, 0xBuLL, 5uLL, v10, 0LL);
  v11 = ExAllocatePool2(0x100uLL, v5 + 40LL, 0x20204D43u);
  v12 = (ACL *)v11;
  if ( !v11 )
    KeBugCheckEx(0x51u, 0xBuLL, 6uLL, 0LL, 0LL);
  memmove((void *)(v11 + 40), v8, v6);
  SecurityDescriptor = RtlCreateSecurityDescriptor(v12, 1u);
  v14 = SecurityDescriptor;
  if ( SecurityDescriptor < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 7uLL, v14, 0LL);
  }
  v15 = RtlSetDaclSecurityDescriptor(v12, 1u, v12 + 5, 0);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x51u, 0xBuLL, 8uLL, v16, 0LL);
  }
  ExFreePoolWithTag(Pool2, 0);
  ExFreePoolWithTag(v4, 0);
  ExFreePoolWithTag(v8, 0);
  return v12;
}
