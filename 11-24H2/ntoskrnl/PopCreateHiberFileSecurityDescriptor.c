/*
 * XREFs of PopCreateHiberFileSecurityDescriptor @ 0x14075229C
 * Callers:
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 * Callees:
 *     RtlGetAce @ 0x14040BC40 (RtlGetAce.c)
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409E3B60 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

ACL *PopCreateHiberFileSecurityDescriptor()
{
  ACL *v0; // rbx
  ACL *v1; // rdi
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *Src; // rsi
  ULONG v4; // ebp
  ACL *v5; // rax
  __int64 v6; // rax
  NTSTATUS SecurityDescriptor; // eax
  ACL *v8; // rcx
  _BYTE *IdentifierAuthority; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0LL;
  WORD2(IdentifierAuthority) = 256;
  v1 = 0LL;
  LODWORD(IdentifierAuthority) = 0;
  RtlLengthRequiredSid(1u);
  Pool2 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
  Src = Pool2;
  if ( !Pool2 )
    return v0;
  if ( RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Src, 0) = 0;
    v4 = 4 * Src[1] + 24;
    if ( v4 >= 4 * (unsigned int)Src[1] + 16 )
    {
      v5 = (ACL *)ExAllocatePool2(0x100uLL);
      v1 = v5;
      if ( v5 )
      {
        if ( RtlCreateAcl(v5, v4, 2u) >= 0 && (int)RtlpAddKnownAce((int)v1, 2, 0, 0x10000, Src, 0) >= 0 )
        {
          IdentifierAuthority = 0LL;
          RtlGetAce(v1, 0, (PVOID *)&IdentifierAuthority);
          IdentifierAuthority[1] |= 2u;
          v6 = ExAllocatePool2(0x100uLL);
          v0 = (ACL *)v6;
          if ( v6 )
          {
            memmove((void *)(v6 + 40), v1, v4);
            SecurityDescriptor = RtlCreateSecurityDescriptor(v0, 1u);
            v8 = v0;
            if ( SecurityDescriptor >= 0 )
            {
              if ( RtlSetDaclSecurityDescriptor(v0, 1u, v0 + 5, 0) >= 0 )
                goto LABEL_12;
              v8 = v0;
            }
            ExFreePoolWithTag(v8, 0);
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
