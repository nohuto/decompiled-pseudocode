/*
 * XREFs of DpiCreateSecurityDescriptorForGpuVirtualization @ 0x140235DE0
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x140404394 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiCreateSecurityDescriptorForGpuVirtualization(_QWORD *a1)
{
  void *v2; // rsi
  ULONG v3; // eax
  __int64 v4; // r9
  void *Pool2; // rax
  void *v6; // r14
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  __int64 v12; // r9
  struct _ACL *v13; // rax
  struct _ACL *v14; // rdi
  NTSTATUS Acl; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  ULONG v23; // eax
  __int64 v24; // r9
  void *v25; // rax
  NTSTATUS v26; // eax
  size_t Size; // [rsp+20h] [rbp-40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+50h] [rbp-10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  LODWORD(Size) = 0;
  v30 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v2 = 0LL;
  v3 = RtlLengthRequiredSid(2u);
  Pool2 = (void *)ExAllocatePool2(256LL, v3, 1953656900LL, v4);
  v6 = Pool2;
  if ( Pool2 )
  {
    v8 = RtlInitializeSid(Pool2, &IdentifierAuthority, 2u);
    v7 = v8;
    if ( v8 >= 0 )
    {
      *RtlSubAuthoritySid(v6, 0) = 83;
      *RtlSubAuthoritySid(v6, 1u) = 0;
      v9 = RtlLengthSid(SeExports->SeLocalSystemSid);
      v10 = RtlLengthSid(SeExports->SeAliasAdminsSid) + v9;
      v11 = RtlLengthSid(v6) + 32 + v10;
      v13 = (struct _ACL *)ExAllocatePool2(256LL, v11, 1953656900LL, v12);
      v14 = v13;
      if ( v13 )
      {
        Acl = RtlCreateAcl(v13, v11, 2u);
        v7 = Acl;
        if ( Acl >= 0 )
        {
          v16 = RtlAddAccessAllowedAce(v14, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
          v7 = v16;
          if ( v16 >= 0 )
          {
            v17 = RtlAddAccessAllowedAce(v14, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
            v7 = v17;
            if ( v17 >= 0 )
            {
              v18 = RtlAddAccessAllowedAce(v14, 2u, 0x1F01FFu, v6);
              v7 = v18;
              if ( v18 >= 0 )
              {
                v19 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                v7 = v19;
                if ( v19 >= 0 )
                {
                  v20 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v14, 0);
                  v7 = v20;
                  if ( v20 >= 0 )
                  {
                    v21 = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
                    v7 = v21;
                    if ( v21 >= 0 )
                    {
                      v22 = RtlSetGroupSecurityDescriptor(SecurityDescriptor, SeExports->SeLocalSystemSid, 0);
                      v7 = v22;
                      if ( v22 >= 0 )
                      {
                        v23 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                        LODWORD(Size) = v23;
                        if ( v23 >= 0x28 )
                        {
                          v25 = (void *)ExAllocatePool2(256LL, v23, 1953656900LL, v24);
                          v2 = v25;
                          if ( v25 )
                          {
                            memset(v25, 0, (unsigned int)Size);
                            v26 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v2, (PULONG)&Size);
                            v7 = v26;
                            if ( v26 >= 0 )
                            {
                              *a1 = v2;
                              v2 = 0LL;
                              v7 = 0;
                            }
                            else
                            {
                              WdLogSingleEntry1(2LL, v26);
                              WdLogGlobalForLineNumber = 329;
                            }
                          }
                          else
                          {
                            v7 = -1073741670;
                          }
                        }
                        else
                        {
                          v7 = -1073741595;
                          WdLogSingleEntry1(2LL, -1073741595LL);
                          WdLogGlobalForLineNumber = 310;
                        }
                      }
                      else
                      {
                        WdLogSingleEntry1(2LL, v22);
                        WdLogGlobalForLineNumber = 293;
                      }
                    }
                    else
                    {
                      WdLogSingleEntry1(2LL, v21);
                      WdLogGlobalForLineNumber = 283;
                    }
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, v20);
                    WdLogGlobalForLineNumber = 273;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL, v19);
                  WdLogGlobalForLineNumber = 263;
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, v18);
                WdLogGlobalForLineNumber = 249;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v17);
              WdLogGlobalForLineNumber = 239;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, v16);
            WdLogGlobalForLineNumber = 229;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, Acl);
          WdLogGlobalForLineNumber = 219;
        }
        ExFreePoolWithTag(v14, 0);
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
      }
      else
      {
        v7 = -1073741670;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v8);
      WdLogGlobalForLineNumber = 189;
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
