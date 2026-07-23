/*
 * XREFs of PiAuCreateStandardSecurityObject @ 0x140C13470
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiAuAllocateAndInitializeSid @ 0x14071BE20 (PiAuAllocateAndInitializeSid.c)
 *     RtlAddAccessDeniedAceEx @ 0x1407708A0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAccessAllowedAceEx @ 0x1409170C0 (RtlAddAccessAllowedAceEx.c)
 *     RtlValidSid @ 0x140918DF0 (RtlValidSid.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCreateStandardSecurityObject(PSID *a1)
{
  ACL *v2; // rsi
  void *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r13
  unsigned int i; // r15d
  PVOID *v7; // r13
  int Acl; // edi
  __int64 v9; // r8
  unsigned int v10; // edx
  _DWORD *v11; // r9
  __int64 v12; // rcx
  BOOLEAN valid; // al
  PVOID *v14; // r15
  __int64 v15; // rdx
  _DWORD *v16; // r8
  PVOID *v17; // r14
  __int64 v19; // r9
  int v20; // r8d
  PSID *v21; // rdx
  __int64 v22; // rax
  ULONG v23; // edi
  ACL *Pool2; // rax
  __int64 j; // r15
  __int64 k; // r15
  ULONG v27; // eax
  void *v28; // rax
  ULONG BufferLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  PSID v30; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h]
  PSID v33[24]; // [rsp+78h] [rbp-90h] BYREF

  LOWORD(BufferLength[1]) = 1280;
  BufferLength[0] = 0;
  v32 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  memset(&SecurityDescriptor[8], 0, 32);
  memset_0(v33, 0, sizeof(v33));
  v4 = 0LL;
  LODWORD(v5) = 24;
  v30 = 0LL;
  for ( i = 0; i < (unsigned int)v5; ++i )
  {
    v7 = &v33[i];
    *(_QWORD *)SecurityDescriptor = 28LL * i;
    Acl = PiAuAllocateAndInitializeSid(
            v7,
            (_SID_IDENTIFIER_AUTHORITY *)BufferLength,
            *(_DWORD *)&PiAuSwDeviceCreateSidSubAuthorities[*(_QWORD *)SecurityDescriptor]);
    if ( Acl < 0 )
    {
LABEL_19:
      v5 = 24LL;
      goto LABEL_20;
    }
    v9 = *(_QWORD *)SecurityDescriptor;
    v10 = 0;
    if ( *(_DWORD *)&PiAuSwDeviceCreateSidSubAuthorities[*(_QWORD *)SecurityDescriptor] )
    {
      v11 = *v7;
      do
      {
        v12 = v10++;
        v11[v12 + 2] = dword_140027814[7 * i + v12];
      }
      while ( v10 < *(_DWORD *)&PiAuSwDeviceCreateSidSubAuthorities[v9] );
    }
    valid = RtlValidSid(*v7);
    v5 = 24LL;
    if ( !valid )
      goto LABEL_9;
  }
  while ( !(_DWORD)v4 )
  {
    v14 = (PVOID *)&SecurityDescriptor[8 * v4 - 8];
    Acl = PiAuAllocateAndInitializeSid(
            v14,
            (_SID_IDENTIFIER_AUTHORITY *)BufferLength,
            PiAuLimitedWriteSidSubAuthorities);
    if ( Acl < 0 )
      goto LABEL_18;
    v15 = 0LL;
    if ( PiAuLimitedWriteSidSubAuthorities )
    {
      v16 = *v14;
      do
      {
        v16[v15 + 2] = dword_140027AB4[v15];
        v15 = (unsigned int)(v15 + 1);
      }
      while ( (unsigned int)v15 < PiAuLimitedWriteSidSubAuthorities );
    }
    if ( !RtlValidSid(*v14) )
    {
      Acl = -1073741595;
LABEL_18:
      v4 = (__int64)v30;
      goto LABEL_19;
    }
    v4 = 1LL;
  }
  v5 = 24LL;
  v19 = 24LL;
  v20 = 4
      * (*((unsigned __int8 *)a1[5] + 1)
       + *((unsigned __int8 *)a1[4] + 1)
       + *((unsigned __int8 *)a1[3] + 1)
       + *((unsigned __int8 *)a1[2] + 1)
       + *((unsigned __int8 *)*a1 + 1)
       + *((unsigned __int8 *)a1[6] + 1))
      + 104;
  v21 = v33;
  do
  {
    v22 = (__int64)*v21++;
    v20 += 4 * *(unsigned __int8 *)(v22 + 1) + 16;
    --v19;
  }
  while ( v19 );
  v4 = (__int64)v30;
  v23 = v20 + 4 * (*((unsigned __int8 *)v30 + 1) + 4);
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v23, 0x20207050uLL);
  v2 = Pool2;
  if ( !Pool2 )
    goto LABEL_34;
  Acl = RtlCreateAcl(Pool2, v23, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x201E7u, a1[2]);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessDeniedAceEx(v2, 2u, 0, 0xF01FFu, a1[3]);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0xF01FFu, *a1);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x20125u, a1[4]);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x40u, a1[5]);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x40u, a1[6]);
              if ( Acl >= 0 )
              {
                for ( j = 0LL; (unsigned int)j < 0x18; j = (unsigned int)(j + 1) )
                {
                  Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x80u, v33[j]);
                  if ( Acl < 0 )
                    goto LABEL_20;
                }
                for ( k = 0LL; !(_DWORD)k; k = 1LL )
                {
                  Acl = RtlAddAccessAllowedAceEx(v2, 2u, 0, 0x40u, *(PSID *)&SecurityDescriptor[8 * k - 8]);
                  if ( Acl < 0 )
                    goto LABEL_20;
                }
                Acl = RtlCreateSecurityDescriptor(&SecurityDescriptor[8], 1u);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(&SecurityDescriptor[8], 1u, v2, 0);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetOwnerSecurityDescriptor(&SecurityDescriptor[8], *a1, 0);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetGroupSecurityDescriptor(&SecurityDescriptor[8], *a1, 0);
                      if ( Acl >= 0 )
                      {
                        if ( !RtlValidSecurityDescriptor(&SecurityDescriptor[8])
                          || (v27 = RtlLengthSecurityDescriptor(&SecurityDescriptor[8]),
                              BufferLength[0] = v27,
                              v27 < 0x28) )
                        {
LABEL_9:
                          Acl = -1073741595;
                          goto LABEL_20;
                        }
                        v28 = (void *)ExAllocatePool2(0x100uLL, v27, 0x20207050uLL);
                        v3 = v28;
                        if ( !v28 )
                        {
LABEL_34:
                          Acl = -1073741670;
                          goto LABEL_20;
                        }
                        Acl = RtlAbsoluteToSelfRelativeSD(&SecurityDescriptor[8], v28, BufferLength);
                        if ( Acl >= 0 )
                        {
                          PiAuSecurityObject = v3;
                          v3 = 0LL;
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
    }
  }
LABEL_20:
  v17 = v33;
  do
  {
    if ( *v17 )
      ExFreePoolWithTag(*v17, 0);
    ++v17;
    --v5;
  }
  while ( v5 );
  if ( v4 )
    ExFreePoolWithTag((PVOID)v4, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)Acl;
}
