/*
 * XREFs of _CmGetRegKeySecurityDescriptor @ 0x140A66A24
 * Callers:
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140A66970 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _CmGetDeviceInterfaceRegKeySecurityDescriptor @ 0x140A81E48 (_CmGetDeviceInterfaceRegKeySecurityDescriptor.c)
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
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A18380 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetRegKeySecurityDescriptor(char a1, _QWORD *a2)
{
  __int16 *v4; // r14
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ACL *Pool2; // rax
  ACL *v9; // rsi
  int Acl; // ebx
  ULONG v12; // eax
  void *v13; // rax
  void *v14; // rdi
  ULONG BufferLength; // [rsp+30h] [rbp-49h] BYREF
  __int16 v16; // [rsp+34h] [rbp-45h]
  int v17; // [rsp+38h] [rbp-41h]
  __int16 v18; // [rsp+3Ch] [rbp-3Dh]
  int v19; // [rsp+40h] [rbp-39h]
  __int16 v20; // [rsp+44h] [rbp-35h]
  _OWORD SecurityDescriptor[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v22; // [rsp+68h] [rbp-11h]
  _DWORD Sid[3]; // [rsp+70h] [rbp-9h] BYREF
  __int16 Owner; // [rsp+7Ch] [rbp+3h] BYREF
  int v25; // [rsp+7Eh] [rbp+5h]
  __int16 v26; // [rsp+82h] [rbp+9h]
  __int16 Src; // [rsp+8Ch] [rbp+13h] BYREF
  int v28; // [rsp+8Eh] [rbp+15h]
  __int16 v29; // [rsp+92h] [rbp+19h]
  __int16 v30; // [rsp+98h] [rbp+1Fh] BYREF
  int v31; // [rsp+9Ah] [rbp+21h]
  __int16 v32; // [rsp+9Eh] [rbp+25h]

  v18 = 1280;
  *a2 = 0LL;
  v17 = 0;
  BufferLength = 0;
  v16 = 256;
  v19 = 0;
  v20 = 3840;
  v4 = 0LL;
  v22 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  Sid[0] = 257;
  Sid[1] = 83886080;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( !RtlValidSid(Sid) )
    return (unsigned int)-1073741762;
  Src = 257;
  v28 = 0;
  v29 = v16;
  *RtlSubAuthoritySid(&Src, 0) = 0;
  if ( !RtlValidSid(&Src) )
    return (unsigned int)-1073741762;
  Owner = 513;
  v25 = 0;
  v26 = v18;
  *RtlSubAuthoritySid(&Owner, 0) = 32;
  *RtlSubAuthoritySid(&Owner, 1u) = 544;
  if ( !RtlValidSid(&Owner) )
    return (unsigned int)-1073741762;
  if ( !a1
    || (v31 = v19,
        v4 = &v30,
        v32 = v20,
        v30 = 513,
        *RtlSubAuthoritySid(&v30, 0) = 2,
        *RtlSubAuthoritySid(&v30, 1u) = 1,
        RtlValidSid(&v30)) )
  {
    v5 = RtlLengthSid(&Owner);
    v6 = RtlLengthSid(&Src) + v5;
    v7 = RtlLengthSid(Sid) + v6 + 32;
    if ( a1 )
      v7 += RtlLengthSid(v4) + 8;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v7, 0x52504E50u);
    v9 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v7, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v9, 2u, 2, 983103, (unsigned __int8 *)Sid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v9, 2u, 2, 131097, (unsigned __int8 *)&Src, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v9, 2u, 2, 983103, (unsigned __int8 *)&Owner, 0);
            if ( Acl >= 0 )
            {
              if ( !a1 || (Acl = RtlpAddKnownAce(v9, 2u, 2, 131097, (unsigned __int8 *)v4, 0), Acl >= 0) )
              {
                Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, 1u);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, &Owner, 1u);
                      if ( Acl >= 0 )
                      {
                        WORD1(SecurityDescriptor[0]) |= 0x1500u;
                        if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                        {
                          v12 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                          BufferLength = v12;
                          if ( v12 >= 0x28 )
                          {
                            v13 = (void *)ExAllocatePool2(0x100uLL, v12, 0x52504E50u);
                            v14 = v13;
                            if ( v13 )
                            {
                              Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v13, &BufferLength);
                              if ( Acl < 0 )
                                ExFreePoolWithTag(v14, 0);
                              else
                                *a2 = v14;
                            }
                            else
                            {
                              Acl = -1073741801;
                            }
                          }
                          else
                          {
                            Acl = -1073741762;
                          }
                        }
                        else
                        {
                          Acl = -1073741595;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741762;
  }
  return (unsigned int)Acl;
}
