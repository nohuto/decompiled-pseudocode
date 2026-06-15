/*
 * XREFs of ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180012CD0
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180045024 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180049400 (-CreateNewRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SetRegistryKeyIntegrityLevel(HKEY hKey, PSID pSid)
{
  struct _ACL *v4; // rsi
  int KeySecurity; // ebx
  void *v6; // rax
  void *v7; // r13
  struct _ACL *v8; // r12
  int v9; // r15d
  DWORD v10; // eax
  struct _ACL *v11; // rax
  struct _ACL *v12; // r15
  DWORD i; // edi
  HANDLE v14; // rax
  HANDLE v15; // rax
  signed int LastError; // eax
  HANDLE ProcessHeap; // rax
  DWORD cbSecurityDescriptor; // [rsp+38h] [rbp-49h] BYREF
  DWORD nAclLength[2]; // [rsp+40h] [rbp-41h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+48h] [rbp-39h] BYREF
  WINBOOL bSaclPresent; // [rsp+4Ch] [rbp-35h] BYREF
  PACL pSacl; // [rsp+50h] [rbp-31h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-29h] BYREF
  _OWORD pSecurityDescriptor[2]; // [rsp+60h] [rbp-21h] BYREF
  __int64 v26; // [rsp+80h] [rbp-1h]
  __int64 pAclInformation; // [rsp+88h] [rbp+7h] BYREF
  int v28; // [rsp+90h] [rbp+Fh]

  if ( pSid )
  {
    v4 = 0LL;
    pSacl = 0LL;
    bSaclPresent = 0;
    bSaclDefaulted = 0;
    cbSecurityDescriptor = 0;
    KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
    if ( KeySecurity != 122 )
      goto LABEL_27;
    v6 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( !v6 )
    {
      LOWORD(KeySecurity) = 122;
LABEL_28:
      KeySecurity = (unsigned __int16)KeySecurity | 0x80070000;
LABEL_29:
      if ( KeySecurity < 0 )
        return (unsigned int)KeySecurity;
      v26 = 0LL;
      memset(pSecurityDescriptor, 0, sizeof(pSecurityDescriptor));
      if ( InitializeSecurityDescriptor(pSecurityDescriptor, 1u) )
      {
        if ( SetSecurityDescriptorSacl(pSecurityDescriptor, 1, v4, 0)
          && !RegSetKeySecurity(hKey, 0x10u, pSecurityDescriptor) )
        {
          goto LABEL_38;
        }
        LastError = GetLastError();
        KeySecurity = LastError;
        if ( LastError <= 0 )
          goto LABEL_38;
      }
      else
      {
        LastError = GetLastError();
        KeySecurity = LastError;
        if ( LastError <= 0 )
          goto LABEL_38;
      }
      KeySecurity = (unsigned __int16)LastError | 0x80070000;
LABEL_38:
      if ( v4 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v4);
      }
      return (unsigned int)KeySecurity;
    }
    KeySecurity = RegGetKeySecurity(hKey, 0x10u, v6, &cbSecurityDescriptor);
    if ( KeySecurity )
    {
LABEL_26:
      v15 = GetProcessHeap();
      HeapFree(v15, 0, v7);
LABEL_27:
      if ( KeySecurity <= 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( !GetSecurityDescriptorSacl(v7, &bSaclPresent, &pSacl, &bSaclDefaulted) )
    {
      KeySecurity = GetLastError();
      goto LABEL_26;
    }
    v8 = pSacl;
    KeySecurity = 8;
    pAce = 0LL;
    v9 = 8;
    pAclInformation = 0LL;
    v28 = 0;
    if ( pSacl && GetAclInformation(pSacl, &pAclInformation, 0xCu, AclSizeInformation) )
      v9 = HIDWORD(pAclInformation);
    v10 = v9 + GetLengthSid(pSid) + 8;
    if ( v10 > 0xFFFF )
      v10 = 0xFFFF;
    nAclLength[0] = v10;
    v11 = (struct _ACL *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      if ( InitializeAcl(v11, nAclLength[0], 2u) )
      {
        if ( AddAccessAllowedAceEx(v12, 2u, 3u, 1u, pSid) )
        {
          *(_QWORD *)nAclLength = 0LL;
          if ( GetAce(v12, 0, (LPVOID *)nAclLength) )
          {
            KeySecurity = 0;
            **(_BYTE **)nAclLength = 17;
            if ( v8 )
            {
              for ( i = 0; i < (unsigned int)pAclInformation; ++i )
              {
                if ( GetAce(v8, i, &pAce)
                  && *(_BYTE *)pAce != 17
                  && !AddAce(v12, 2u, 0xFFFFFFFF, pAce, *((unsigned __int16 *)pAce + 1)) )
                {
                  goto LABEL_22;
                }
              }
            }
            goto LABEL_23;
          }
        }
      }
LABEL_22:
      KeySecurity = GetLastError();
      if ( !KeySecurity )
      {
LABEL_23:
        v4 = v12;
        goto LABEL_26;
      }
    }
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v12);
    goto LABEL_26;
  }
  return 2147942487LL;
}
