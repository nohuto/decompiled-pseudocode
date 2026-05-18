/*
 * XREFs of ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x18000C608
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000B030 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021B0 (__security_check_cookie.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180008FE8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x18000AB74 (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EF88 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 MapDwmVirtualAccountAndAdjustPrivileges(void)
{
  int v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // ebx
  int v3; // r9d
  ULONG SubAuthority2; // [rsp+20h] [rbp-49h]
  int v6; // [rsp+60h] [rbp-9h] BYREF
  PSID v7; // [rsp+68h] [rbp-1h] BYREF
  PSID v8; // [rsp+70h] [rbp+7h] BYREF
  PSID Sid; // [rsp+78h] [rbp+Fh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+17h] BYREF
  struct _UNICODE_STRING v11; // [rsp+90h] [rbp+27h] BYREF
  struct _UNICODE_STRING v12; // [rsp+A0h] [rbp+37h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+47h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Sid = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  DestinationString = 0LL;
  v6 = 0;
  v12 = 0LL;
  v11 = 0LL;
  v0 = StringCchPrintfW(&gwszDwmAccountName, 30LL, L"DWM-%d", NtCurrentPeb()->SessionId);
  v1 = v0;
  if ( v0 < 0 )
  {
    SubAuthority2 = 553;
    goto LABEL_17;
  }
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v11, L"Window Manager Group");
  RtlInitUnicodeString(&v12, &gwszDwmAccountName);
  v2 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v2 >= 0 )
  {
    v2 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &v8);
    if ( v2 < 0 )
    {
      SubAuthority2 = 583;
      goto LABEL_4;
    }
    v2 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 3u, 0x5Au, 0, NtCurrentPeb()->SessionId, 0, 0, 0, 0, 0, &v7);
    if ( v2 < 0 )
    {
      SubAuthority2 = 596;
      goto LABEL_4;
    }
    v0 = AddSidMappingToLsa(&DestinationString, 0LL, Sid, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v6);
    v1 = v0;
    if ( v0 < 0 )
    {
      SubAuthority2 = 598;
    }
    else if ( (unsigned int)(v6 - 2) <= 1
           || (v0 = AddSidMappingToLsa(&DestinationString, &v11, v8, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v6),
               v1 = v0,
               v0 >= 0) )
    {
      v0 = AddSidMappingToLsa(&DestinationString, &v12, v7, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v6);
      v1 = v0;
      if ( v0 >= 0 )
        goto LABEL_19;
      SubAuthority2 = 614;
    }
    else
    {
      SubAuthority2 = 610;
    }
LABEL_17:
    v3 = v0;
    goto LABEL_18;
  }
  SubAuthority2 = 570;
LABEL_4:
  v1 = v2 | 0x10000000;
  v3 = v1;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_180014D90, 2u, v3, SubAuthority2, 0LL);
LABEL_19:
  if ( v7 )
    RtlFreeSid(v7);
  if ( v8 )
    RtlFreeSid(v8);
  if ( Sid )
    RtlFreeSid(Sid);
  return v1;
}
