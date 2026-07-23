/*
 * XREFs of _PnpGetEnumSecurityDescriptor @ 0x140820DEC
 * Callers:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1408588A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140867160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A18380 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void *PnpGetEnumSecurityDescriptor()
{
  void *v0; // rdi
  ULONG v1; // ebx
  ULONG v2; // ebx
  ULONG v3; // ebx
  ACL *Pool2; // rax
  ACL *v5; // rsi
  ULONG v6; // eax
  void *v7; // rax
  void *v8; // rbx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-29h] BYREF
  _SID_IDENTIFIER_AUTHORITY v11; // [rsp+40h] [rbp-21h] BYREF
  _SID_IDENTIFIER_AUTHORITY v12; // [rsp+48h] [rbp-19h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v14; // [rsp+70h] [rbp+Fh]
  _BYTE Sid[12]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE Src[12]; // [rsp+84h] [rbp+23h] BYREF
  _BYTE v17[12]; // [rsp+90h] [rbp+2Fh] BYREF
  _BYTE Owner[20]; // [rsp+9Ch] [rbp+3Bh] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v11.Value = 0;
  *(_DWORD *)v12.Value = 0;
  v14 = 0LL;
  *(_WORD *)&v11.Value[4] = 768;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_WORD *)&v12.Value[4] = 256;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 18;
    if ( RtlValidSid(Sid) )
    {
      if ( RtlInitializeSid(Src, &v11, 1u) >= 0 )
      {
        *RtlSubAuthoritySid(Src, 0) = 4;
        if ( RtlValidSid(Src) )
        {
          if ( RtlInitializeSid(v17, &v12, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v17, 0) = 0;
            if ( RtlValidSid(v17) )
            {
              if ( RtlInitializeSid(Owner, &IdentifierAuthority, 2u) >= 0 )
              {
                *RtlSubAuthoritySid(Owner, 0) = 32;
                *RtlSubAuthoritySid(Owner, 1u) = 544;
                if ( RtlValidSid(Owner) )
                {
                  v1 = RtlLengthSid(v17);
                  v2 = RtlLengthSid(Src) + v1;
                  v3 = RtlLengthSid(Sid) + 32 + v2;
                  Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v3, 0x52504E50u);
                  v5 = Pool2;
                  if ( Pool2 )
                  {
                    if ( RtlCreateAcl(Pool2, v3, 2u) >= 0
                      && (int)RtlpAddKnownAce((int)v5, 2, 2, 983103, Sid, 0) >= 0
                      && (int)RtlpAddKnownAce((int)v5, 2, 2, 0x20000, Src, 0) >= 0
                      && (int)RtlpAddKnownAce((int)v5, 2, 2, 131097, v17, 0) >= 0
                      && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                      && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0) >= 0
                      && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u) >= 0
                      && RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 1u) >= 0 )
                    {
                      WORD1(SecurityDescriptor[0]) |= 0x1400u;
                      if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                      {
                        v6 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                        *(_DWORD *)IdentifierAuthority.Value = v6;
                        if ( v6 >= 0x28 )
                        {
                          v7 = (void *)ExAllocatePool2(0x100uLL, v6, 0x52504E50u);
                          v8 = v7;
                          if ( v7 )
                          {
                            if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v7, (PULONG)IdentifierAuthority.Value) < 0 )
                              ExFreePoolWithTag(v8, 0);
                            else
                              v0 = v8;
                          }
                        }
                      }
                    }
                    ExFreePoolWithTag(v5, 0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v0;
}
