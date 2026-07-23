/*
 * XREFs of _PnpGetPropertiesSecurityDescriptor @ 0x140A73678
 * Callers:
 *     _PnpOpenPropertiesKey @ 0x14097E830 (_PnpOpenPropertiesKey.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140867160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void *PnpGetPropertiesSecurityDescriptor()
{
  void *v0; // rbx
  ULONG v1; // edi
  ACL *Pool2; // rax
  ACL *v3; // rsi
  ULONG v5; // eax
  void *v6; // rax
  void *v7; // rdi
  ULONG BufferLength; // [rsp+30h] [rbp-50h] BYREF
  char SecurityDescriptor; // [rsp+38h] [rbp-48h] BYREF
  int v10; // [rsp+39h] [rbp-47h]
  __int16 v11; // [rsp+3Dh] [rbp-43h]
  char v12; // [rsp+3Fh] [rbp-41h]
  _DWORD *v13; // [rsp+40h] [rbp-40h]
  _DWORD *v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  ACL *v16; // [rsp+58h] [rbp-28h]
  _DWORD Sid[4]; // [rsp+60h] [rbp-20h] BYREF

  Sid[0] = 257;
  Sid[1] = 83886080;
  v0 = 0LL;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( RtlValidSid(Sid) )
  {
    v1 = RtlLengthSid(Sid) + 16;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v1, 0x52504E50u);
    v3 = Pool2;
    if ( Pool2 )
    {
      if ( RtlCreateAcl(Pool2, v1, 2u) >= 0 && (int)RtlpAddKnownAce(v3, 2u, 2, 983103, (unsigned __int8 *)Sid, 0) >= 0 )
      {
        v10 = 1024;
        v11 = 0;
        v12 = 0;
        v15 = 0LL;
        SecurityDescriptor = 1;
        v16 = v3;
        v13 = Sid;
        *(_WORD *)((char *)&v10 + 1) = 5;
        v14 = Sid;
        *(_WORD *)((char *)&v10 + 1) = 5127;
        if ( RtlValidSecurityDescriptor(&SecurityDescriptor) )
        {
          v5 = RtlLengthSecurityDescriptor(&SecurityDescriptor);
          BufferLength = v5;
          if ( v5 >= 0x28 )
          {
            v6 = (void *)ExAllocatePool2(0x100uLL, v5, 0x52504E50u);
            v7 = v6;
            if ( v6 )
            {
              if ( RtlAbsoluteToSelfRelativeSD(&SecurityDescriptor, v6, &BufferLength) < 0 )
                ExFreePoolWithTag(v7, 0);
              else
                v0 = v7;
            }
          }
        }
      }
      ExFreePoolWithTag(v3, 0);
    }
  }
  return v0;
}
