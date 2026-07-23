/*
 * XREFs of PopCreateHiberFileSecurityDescriptor @ 0x1407505BC
 * Callers:
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 * Callees:
 *     RtlGetAce @ 0x140404120 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
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

ACL *PopCreateHiberFileSecurityDescriptor()
{
  ACL *v0; // rbx
  ACL *v1; // rdi
  ULONG v2; // eax
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *Src; // rsi
  __int64 v5; // rbp
  ACL *v6; // rax
  __int64 v7; // rax
  NTSTATUS SecurityDescriptor; // eax
  ACL *v9; // rcx
  _BYTE *IdentifierAuthority; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0LL;
  WORD2(IdentifierAuthority) = 256;
  v1 = 0LL;
  LODWORD(IdentifierAuthority) = 0;
  v2 = RtlLengthRequiredSid(1u);
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v2, 0x72626968u);
  Src = Pool2;
  if ( !Pool2 )
    return v0;
  if ( RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Src, 0) = 0;
    v5 = 4 * (unsigned int)Src[1] + 24;
    if ( (unsigned int)v5 >= 4 * (unsigned int)Src[1] + 16 )
    {
      v6 = (ACL *)ExAllocatePool2(0x100uLL, (unsigned int)v5, 0x72626968u);
      v1 = v6;
      if ( v6 )
      {
        if ( RtlCreateAcl(v6, v5, 2u) >= 0 && (int)RtlpAddKnownAce((int)v1, 2, 0, 0x10000, Src, 0) >= 0 )
        {
          IdentifierAuthority = 0LL;
          RtlGetAce(v1, 0, (PVOID *)&IdentifierAuthority);
          IdentifierAuthority[1] |= 2u;
          v7 = ExAllocatePool2(0x100uLL, v5 + 40, 0x72626968u);
          v0 = (ACL *)v7;
          if ( v7 )
          {
            memmove((void *)(v7 + 40), v1, (unsigned int)v5);
            SecurityDescriptor = RtlCreateSecurityDescriptor(v0, 1u);
            v9 = v0;
            if ( SecurityDescriptor >= 0 )
            {
              if ( RtlSetDaclSecurityDescriptor(v0, 1u, v0 + 5, 0) >= 0 )
                goto LABEL_12;
              v9 = v0;
            }
            ExFreePoolWithTag(v9, 0);
          }
        }
      }
    }
  }
LABEL_12:
  ExFreePoolWithTag(Src, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  return v0;
}
