/*
 * XREFs of BiCreateKeySecurityDescriptor @ 0x1409680C8
 * Callers:
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     BiCreateKey @ 0x140A644B0 (BiCreateKey.c)
 * Callees:
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  if ( (int)RtlpAddKnownAce(v9, 2u, 0, a1, (unsigned __int8 *)Src, 0) < 0 )
    goto LABEL_5;
  if ( (int)RtlpAddKnownAce(v9, 2u, 0, 983103, (unsigned __int8 *)SeLocalSystemSid, 0) < 0 )
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
