/*
 * XREFs of SmKmStoreFileMakeSecurityDescriptor @ 0x14079B2CC
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x14079AD0C (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileMakeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ACL **a2)
{
  void *v3; // r14
  void *Src; // rsi
  ACL *v5; // rdi
  ULONG_PTR v6; // r12
  void *Pool2; // rax
  void *v8; // r15
  NTSTATUS Acl; // ebx
  void *v10; // rax
  ULONG v11; // eax
  void *v12; // rax
  ULONG v13; // ebx
  ULONG v14; // ebx
  ULONG v15; // ebx
  ACL *v16; // rax
  _SID_IDENTIFIER_AUTHORITY v19; // [rsp+80h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp+58h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v19.Value = 0;
  v3 = 0LL;
  *(_WORD *)&v19.Value[4] = 1280;
  Src = 0LL;
  v5 = 0LL;
  v6 = RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v6, 0x53446D73u);
  v8 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
  if ( Acl >= 0 )
  {
    v10 = (void *)ExAllocatePool2(0x100uLL, v6, 0x53446D73u);
    v3 = v10;
    if ( v10 )
    {
      Acl = RtlInitializeSid(v10, &v19, 1u);
      if ( Acl < 0 )
        goto LABEL_17;
      v11 = RtlLengthRequiredSid(2u);
      v12 = (void *)ExAllocatePool2(0x100uLL, v11, 0x53446D73u);
      Src = v12;
      if ( v12 )
      {
        Acl = RtlInitializeSid(v12, &v19, 2u);
        if ( Acl < 0 )
          goto LABEL_17;
        *RtlSubAuthoritySid(v8, 0) = 0;
        *RtlSubAuthoritySid(v3, 0) = 18;
        *RtlSubAuthoritySid(Src, 0) = 32;
        *RtlSubAuthoritySid(Src, 1u) = 544;
        v13 = RtlLengthSid(Src);
        v14 = RtlLengthSid(v3) + v13;
        v15 = RtlLengthSid(v8) + 32 + v14;
        v16 = (ACL *)ExAllocatePool2(0x100uLL, v15, 0x61446D73u);
        v5 = v16;
        if ( v16 )
        {
          Acl = RtlCreateAcl(v16, v15, 2u);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((int)v5, 2, 0, 2032127, Src, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((int)v5, 2, 0, 2032127, v3, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((int)v5, 2, 0, 0x10000, v8, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
                    if ( Acl >= 0 )
                    {
                      *a2 = v5;
                      v5 = 0LL;
                      Acl = 0;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_17;
        }
      }
    }
    Acl = -1073741670;
  }
LABEL_17:
  ExFreePoolWithTag(v8, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)Acl;
}
