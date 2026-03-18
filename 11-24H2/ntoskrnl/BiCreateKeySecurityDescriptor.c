/*
 * XREFs of BiCreateKeySecurityDescriptor @ 0x14085C904
 * Callers:
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     BiCreateKey @ 0x14085DB5C (BiCreateKey.c)
 * Callees:
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x14085A2E0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14085CB30 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

ACL *__fastcall BiCreateKeySecurityDescriptor(int a1)
{
  PSID SeLocalSystemSid; // r14
  PSID Src; // rsi
  ULONG v4; // ebx
  ULONG v5; // ebp
  ULONG v6; // r12d
  ACL *Pool2; // rax
  ACL *v8; // rdi
  ACL *v9; // rbx
  __int16 AclSize; // ax
  __int16 v12; // ax
  ULONG v13; // ebx
  char *v14; // rbx
  ULONG v15; // eax

  SeLocalSystemSid = SeExports->SeLocalSystemSid;
  Src = SeExports->SeAliasAdminsSid;
  v4 = RtlLengthSid(SeLocalSystemSid);
  v5 = v4 + RtlLengthSid(Src) + 24;
  v6 = v5 + RtlLengthSid(Src) + 40;
  Pool2 = (ACL *)ExAllocatePool2(0x102uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return 0LL;
  v9 = Pool2 + 5;
  if ( RtlCreateAcl(Pool2 + 5, v5, 2u) < 0 )
    goto LABEL_5;
  if ( (int)RtlpAddKnownAce((int)v9, 2, 0, a1, Src, 0) < 0 )
    goto LABEL_5;
  if ( (int)RtlpAddKnownAce((int)v9, 2, 0, 983103, SeLocalSystemSid, 0) < 0 )
    goto LABEL_5;
  *(_OWORD *)&v8->AclRevision = 0LL;
  *(_OWORD *)&v8[2].AclRevision = 0LL;
  v8[4] = 0LL;
  AclSize = v8->AclSize;
  v8->AclRevision = 1;
  if ( AclSize < 0 )
    goto LABEL_5;
  v12 = AclSize | 4;
  if ( v9 )
    v8[4] = (ACL)v9;
  v8->AclSize = v12 & 0xFFF7;
  v13 = RtlLengthSecurityDescriptor(v8);
  if ( RtlLengthSid(Src) + v13 < v6
    || (v14 = (char *)v8 + RtlLengthSecurityDescriptor(v8),
        v15 = RtlLengthSid(Src),
        memmove(v14, Src, v15),
        RtlSetOwnerSecurityDescriptor(v8, v14, 0) < 0) )
  {
LABEL_5:
    ExFreePoolWithTag(v8, 0x4B444342u);
    return 0LL;
  }
  return v8;
}
