/*
 * XREFs of ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x18002EF60
 * Callers:
 *     CrmActivityStart @ 0x18002D8A0 (CrmActivityStart.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpWnfCreateStateNameForIpcEx(PSID pSid, PSID a2, __int64 a3, char a4, struct _WNF_STATE_NAME *a5)
{
  int LastError; // ebx
  DWORD cbSid; // [rsp+40h] [rbp-C0h] BYREF
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-90h]
  _OWORD v14[4]; // [rsp+80h] [rbp-80h] BYREF
  int v15; // [rsp+C0h] [rbp-40h]
  struct _ACL Acl; // [rsp+D0h] [rbp-30h] BYREF

  v15 = 0;
  memset(v14, 0, sizeof(v14));
  memset_0(&Acl, 0, 0x138uLL);
  v13 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  cbSid = 0;
  Sid = 0LL;
  LastError = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( LastError < 0 )
    goto LABEL_8;
  LastError = RtlCreateAcl(&Acl, 0x138u, 2u);
  if ( LastError < 0 )
    goto LABEL_8;
  LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, pSid);
  if ( LastError < 0 )
    goto LABEL_8;
  RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, a2);
  LastError = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
  if ( LastError < 0 )
    goto LABEL_8;
  if ( (a4 & 1) != 0 )
  {
    cbSid = 68;
    if ( CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v14, &cbSid) )
    {
      LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v14);
      if ( LastError < 0 )
        goto LABEL_8;
      if ( ConvertStringSidToSidW(
             L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
             &Sid) )
      {
        LastError = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
        if ( LastError < 0 )
          goto LABEL_8;
        goto LABEL_6;
      }
      if ( (int)GetLastError() <= 0 )
      {
LABEL_17:
        LastError = GetLastError();
        goto LABEL_8;
      }
    }
    else if ( (int)GetLastError() <= 0 )
    {
      goto LABEL_17;
    }
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    goto LABEL_8;
  }
LABEL_6:
  LastError = NtCreateWnfStateName(a5, 3LL, 0LL);
  if ( LastError >= 0 )
    LastError = 0;
LABEL_8:
  if ( Sid )
    LocalFree(Sid);
  return (unsigned int)LastError;
}
