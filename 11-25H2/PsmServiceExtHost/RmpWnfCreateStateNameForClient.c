/*
 * XREFs of RmpWnfCreateStateNameForClient @ 0x18002EBE8
 * Callers:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030BB0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18003D1E8 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18008984C (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     RmpWnfGetPublisherSid @ 0x18002EED0 (RmpWnfGetPublisherSid.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpWnfCreateStateNameForClient(PSID pSid, __int64 a2, int a3, __int64 a4)
{
  int PublisherSid; // ebx
  DWORD cbSid; // [rsp+40h] [rbp-C0h] BYREF
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+70h] [rbp-90h]
  _BYTE DestinationSid[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v14[80]; // [rsp+D0h] [rbp-30h] BYREF
  _ACL Acl; // [rsp+120h] [rbp+20h] BYREF

  memset_0(DestinationSid, 0, 0x44uLL);
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741811;
  PublisherSid = RmpWnfGetPublisherSid(DestinationSid);
  if ( PublisherSid >= 0 )
  {
    memset_0(v14, 0, 0x44uLL);
    memset_0(&Acl, 0, 0x138uLL);
    cbSid = 0;
    v12 = 0LL;
    Sid = 0LL;
    memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
    PublisherSid = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( PublisherSid < 0 )
      goto LABEL_10;
    PublisherSid = RtlCreateAcl(&Acl, 0x138u, 2u);
    if ( PublisherSid < 0 )
      goto LABEL_10;
    PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, DestinationSid);
    if ( PublisherSid < 0 )
      goto LABEL_10;
    RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, pSid);
    PublisherSid = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    if ( PublisherSid < 0 )
      goto LABEL_10;
    if ( (a3 & 1) == 0 )
      goto LABEL_8;
    cbSid = 68;
    if ( CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v14, &cbSid) )
    {
      PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v14);
      if ( PublisherSid < 0 )
        goto LABEL_10;
      if ( ConvertStringSidToSidW(
             L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
             &Sid) )
      {
        PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
        if ( PublisherSid >= 0 )
        {
LABEL_8:
          PublisherSid = NtCreateWnfStateName(a4, 3LL, 0LL);
          if ( PublisherSid >= 0 )
            PublisherSid = 0;
        }
LABEL_10:
        if ( Sid )
          LocalFree(Sid);
        if ( PublisherSid >= 0 )
          return 0;
        return (unsigned int)PublisherSid;
      }
    }
    if ( (int)GetLastError() > 0 )
      PublisherSid = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      PublisherSid = GetLastError();
    goto LABEL_10;
  }
  return (unsigned int)PublisherSid;
}
