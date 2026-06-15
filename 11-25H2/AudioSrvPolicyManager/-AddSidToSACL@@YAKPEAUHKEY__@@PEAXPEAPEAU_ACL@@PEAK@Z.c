/*
 * XREFs of ?AddSidToSACL@@YAKPEAUHKEY__@@PEAXPEAPEAU_ACL@@PEAK@Z @ 0x18001A450
 * Callers:
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180049AFC (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AddSidToSACL(HKEY hKey, PSID pSid, struct _ACL **a3, unsigned int *a4)
{
  DWORD KeySecurity; // ebx
  void *v8; // rax
  void *v9; // r14
  struct _ACL *v10; // r15
  int v11; // ebx
  DWORD v12; // r12d
  struct _ACL *v13; // rax
  struct _ACL *v14; // rdi
  DWORD i; // esi
  DWORD cbSecurityDescriptor; // [rsp+30h] [rbp-39h] BYREF
  WINBOOL bSaclDefaulted; // [rsp+34h] [rbp-35h] BYREF
  WINBOOL bSaclPresent; // [rsp+38h] [rbp-31h] BYREF
  PACL pSacl; // [rsp+40h] [rbp-29h] BYREF
  LPVOID pAce; // [rsp+48h] [rbp-21h] BYREF
  LPVOID pAceList; // [rsp+50h] [rbp-19h] BYREF
  struct _ACL **v23; // [rsp+58h] [rbp-11h]
  __int64 pAclInformation; // [rsp+60h] [rbp-9h] BYREF
  int v25; // [rsp+68h] [rbp-1h]

  v23 = a3;
  pSacl = 0LL;
  bSaclPresent = 0;
  bSaclDefaulted = 0;
  cbSecurityDescriptor = 0;
  KeySecurity = 87;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( pSid )
      {
        *a3 = 0LL;
        *a4 = 0;
        KeySecurity = RegGetKeySecurity(hKey, 0x10u, 0LL, &cbSecurityDescriptor);
        if ( KeySecurity == 122 )
        {
          v8 = operator new[](cbSecurityDescriptor, (const struct std::nothrow_t *)&std::nothrow);
          v9 = v8;
          if ( !v8 )
            return 122;
          KeySecurity = RegGetKeySecurity(hKey, 0x10u, v8, &cbSecurityDescriptor);
          if ( KeySecurity )
            goto LABEL_29;
          if ( !GetSecurityDescriptorSacl(v9, &bSaclPresent, &pSacl, &bSaclDefaulted) )
          {
            KeySecurity = GetLastError();
            goto LABEL_29;
          }
          v10 = pSacl;
          v11 = 8;
          pAceList = 0LL;
          pAclInformation = 0LL;
          v25 = 0;
          if ( pSacl && GetAclInformation(pSacl, &pAclInformation, 0xCu, AclSizeInformation) )
            v11 = HIDWORD(pAclInformation);
          v12 = v11 + GetLengthSid(pSid) + 8;
          if ( v12 > 0xFFFF )
            v12 = 0xFFFF;
          v13 = (struct _ACL *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
          v14 = v13;
          if ( v13 )
          {
            if ( InitializeAcl(v13, v12, 2u) )
            {
              if ( AddAccessAllowedAceEx(v14, 2u, 3u, 1u, pSid) )
              {
                pAce = 0LL;
                if ( GetAce(v14, 0, &pAce) )
                {
                  KeySecurity = 0;
                  *(_BYTE *)pAce = 17;
                  if ( v10 )
                  {
                    for ( i = 0; i < (unsigned int)pAclInformation; ++i )
                    {
                      if ( GetAce(v10, i, &pAceList)
                        && *(_BYTE *)pAceList != 17
                        && !AddAce(v14, 2u, 0xFFFFFFFF, pAceList, *((unsigned __int16 *)pAceList + 1)) )
                      {
                        goto LABEL_24;
                      }
                    }
                  }
                  goto LABEL_25;
                }
              }
            }
LABEL_24:
            KeySecurity = GetLastError();
            if ( !KeySecurity )
            {
LABEL_25:
              *v23 = v14;
              *a4 = v12;
LABEL_29:
              operator delete(v9);
              return KeySecurity;
            }
          }
          else
          {
            KeySecurity = 8;
          }
          operator delete(v14);
          goto LABEL_29;
        }
      }
    }
  }
  return KeySecurity;
}
