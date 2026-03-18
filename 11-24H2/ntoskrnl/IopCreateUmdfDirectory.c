/*
 * XREFs of IopCreateUmdfDirectory @ 0x140C1C5E8
 * Callers:
 *     IopCreateRootDirectories @ 0x140C1C4F8 (IopCreateRootDirectories.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     RtlAddAccessAllowedAce @ 0x1409A7460 (RtlAddAccessAllowedAce.c)
 *     RtlInitializeSid @ 0x1409E3B60 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     NtCreateDirectoryObject @ 0x140A456D0 (NtCreateDirectoryObject.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 IopCreateUmdfDirectory()
{
  unsigned __int8 *SeLocalSystemSid; // r14
  ULONG v1; // eax
  _DWORD *Pool2; // rax
  _DWORD *v3; // rdi
  int Acl; // ebx
  ULONG v5; // ebx
  ACL *v6; // rax
  ACL *v7; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-29h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v11; // [rsp+50h] [rbp+7h]
  _DWORD v12[2]; // [rsp+58h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+60h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+74h] [rbp+2Bh]
  _OWORD *v17; // [rsp+78h] [rbp+2Fh]
  __int64 v18; // [rsp+80h] [rbp+37h]
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+6Fh] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  v16 = 0;
  v12[1] = 0;
  v11 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  DestinationString = 0LL;
  SeLocalSystemSid = (unsigned __int8 *)SeExports->SeLocalSystemSid;
  v1 = RtlLengthRequiredSid(6u);
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v1, 0x73536F49uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( Acl >= 0 )
    {
      v3[2] = 80;
      v3[3] = -1642288911;
      v3[4] = 582572993;
      v3[5] = 1835434367;
      v3[6] = 1344795993;
      v3[7] = 749280709;
      v5 = 4 * (SeLocalSystemSid[1] + *((unsigned __int8 *)v3 + 1)) + 40;
      v6 = (ACL *)ExAllocatePool2(0x100uLL, v5, 0x63416F49uLL);
      v7 = v6;
      if ( v6 )
      {
        Acl = RtlCreateAcl(v6, v5, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, SeLocalSystemSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v7, 2u, 0x10000000u, v3);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
                if ( Acl >= 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"\\UMDFCommunicationPorts");
                  v13 = 0LL;
                  v18 = 0LL;
                  p_DestinationString = &DestinationString;
                  v12[0] = 48;
                  v17 = SecurityDescriptor;
                  v15 = 528;
                  Acl = NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)v12);
                  if ( Acl >= 0 )
                    ObCloseHandle(Handle, 0);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
