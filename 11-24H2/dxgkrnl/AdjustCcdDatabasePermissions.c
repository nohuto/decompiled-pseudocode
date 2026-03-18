/*
 * XREFs of AdjustCcdDatabasePermissions @ 0x14026C39C
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x14026C39C (AdjustCcdDatabasePermissions.c)
 *     DxgkHandleCcdDatabaseRequests @ 0x14026D3B4 (DxgkHandleCcdDatabaseRequests.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140063114 (--1-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoolWit.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006449C (--1-$unique_storage@U-$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1-FreePoolWithTag@-$pool_helper.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1400648B8 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@_E$1-FreePoolWithTag@-$pool_helpers@PEA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1400910E4 (-reset@-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoo.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     AdjustCcdDatabasePermissions @ 0x14026C39C (AdjustCcdDatabasePermissions.c)
 *     _CcdOpenRegistrySubkey @ 0x1403BD08C (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall AdjustCcdDatabasePermissions(int a1, const WCHAR *a2, unsigned int a3, void *a4)
{
  ULONG v7; // r15d
  int v8; // eax
  unsigned int v9; // ebx
  ULONG v10; // eax
  __int64 Pool2; // rax
  PSECURITY_DESCRIPTOR v12; // rbx
  NTSTATUS v13; // eax
  int v14; // edi
  NTSTATUS DaclSecurityDescriptor; // eax
  PACL v16; // rcx
  ULONG i; // ebx
  NTSTATUS v18; // eax
  NTSTATUS v19; // edi
  unsigned __int8 v20; // al
  ULONG v21; // eax
  ULONG v22; // ebx
  struct _ACL *v23; // rax
  struct _ACL *v24; // rdi
  NTSTATUS Acl; // eax
  NTSTATUS v26; // eax
  int AcesBufferSize; // eax
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  ULONG v32; // eax
  __int64 v33; // rax
  PSECURITY_DESCRIPTOR v34; // rbx
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  unsigned int *v37; // rbx
  unsigned int v38; // r14d
  __int64 v39; // rax
  NTSTATUS v40; // eax
  __int64 v41; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-59h] BYREF
  PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int8 DaclDefaulted[8]; // [rsp+60h] [rbp-49h] BYREF
  struct _ACL *v45; // [rsp+68h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-39h] BYREF
  ULONG Length; // [rsp+78h] [rbp-31h] BYREF
  PACL Dacl; // [rsp+80h] [rbp-29h] BYREF
  unsigned int *v49; // [rsp+88h] [rbp-21h] BYREF
  ULONG AceListLength; // [rsp+90h] [rbp-19h] BYREF
  ULONG Size; // [rsp+94h] [rbp-15h] BYREF
  ULONG Size_4; // [rsp+98h] [rbp-11h] BYREF
  ULONG v53; // [rsp+9Ch] [rbp-Dh] BYREF
  PVOID Ace; // [rsp+A0h] [rbp-9h] BYREF
  PVOID AceList; // [rsp+A8h] [rbp-1h] BYREF
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v57; // [rsp+D8h] [rbp+2Fh]
  unsigned __int8 DaclPresent; // [rsp+120h] [rbp+77h] BYREF

  if ( a3 > 5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2502;
    return 0LL;
  }
  v7 = 0;
  v53 = 2;
  Handle = 0LL;
  v8 = CcdOpenRegistrySubkey((int)&Handle, 983103, a1, a2, &v53);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 2510;
    goto LABEL_73;
  }
  v10 = 336;
  SecurityDescriptor = 0LL;
  for ( Length = 336; ; v10 = Length )
  {
    Pool2 = ExAllocatePool2(256LL, v10, 1265072196LL);
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      (__int64 *)&SecurityDescriptor,
      Pool2);
    v12 = SecurityDescriptor;
    if ( !SecurityDescriptor )
    {
      v14 = -1073741801;
      goto LABEL_75;
    }
    v13 = ZwQuerySecurityObject(Handle, 4u, SecurityDescriptor, Length, &Length);
    v14 = v13;
    if ( v13 != -1073741789 )
      break;
  }
  if ( v13 < 0 )
  {
LABEL_75:
    WdLogSingleEntry1(2LL, v14);
    WdLogGlobalForLineNumber = 2532;
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return (unsigned int)v14;
  }
  DaclPresent = 0;
  DaclDefaulted[0] = 0;
  Dacl = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v12, &DaclPresent, &Dacl, DaclDefaulted);
  v9 = DaclSecurityDescriptor;
  if ( DaclSecurityDescriptor < 0 )
  {
    WdLogSingleEntry1(2LL, DaclSecurityDescriptor);
    WdLogGlobalForLineNumber = 2539;
    goto LABEL_72;
  }
  if ( !DaclPresent || (v16 = Dacl) == 0LL )
  {
    v9 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 2543;
LABEL_72:
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
    goto LABEL_73;
  }
  DaclPresent = 0;
  for ( i = 0; i < v16->AceCount; ++i )
  {
    Ace = 0LL;
    v18 = RtlGetAce(v16, i, &Ace);
    v19 = v18;
    if ( v18 < 0 )
    {
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 2552;
      goto LABEL_24;
    }
    if ( !*(_BYTE *)Ace && (*((_DWORD *)Ace + 1) & 0x2001F) == 0x2001F && RtlEqualSid((char *)Ace + 8, a4) )
    {
      v16 = Dacl;
      v20 = 1;
      DaclPresent = 1;
      goto LABEL_26;
    }
    v16 = Dacl;
  }
  v20 = DaclPresent;
LABEL_26:
  if ( !v20 )
  {
    SelfRelativeSecurityDescriptor = 0LL;
    memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
    v57 = 0LL;
    if ( v16->AclSize < 8u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2578;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"Dacl->AclSize >= sizeof(ACL)",
        2578LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v21 = RtlLengthSid(a4);
    v22 = v21 + Dacl->AclSize + 8;
    v23 = (struct _ACL *)ExAllocatePool2(256LL, v22, 1265072196LL);
    v45 = v23;
    v24 = v23;
    if ( !v23 )
    {
      v9 = -1073741670;
      WdLogSingleEntry1(2LL, -1073741670LL);
      WdLogGlobalForLineNumber = 2586;
      goto LABEL_31;
    }
    Acl = RtlCreateAcl(v23, v22, 2u);
    v9 = Acl;
    if ( Acl < 0 )
    {
      WdLogSingleEntry1(2LL, Acl);
      WdLogGlobalForLineNumber = 2589;
      goto LABEL_31;
    }
    AceList = 0LL;
    AceListLength = 0;
    v26 = RtlGetAce(Dacl, 0, &AceList);
    v9 = v26;
    if ( v26 < 0 )
    {
      WdLogSingleEntry1(2LL, v26);
      WdLogGlobalForLineNumber = 2594;
      goto LABEL_31;
    }
    AcesBufferSize = RtlGetAcesBufferSize(Dacl, &AceListLength);
    v9 = AcesBufferSize;
    if ( AcesBufferSize < 0 )
    {
      WdLogSingleEntry1(2LL, AcesBufferSize);
      WdLogGlobalForLineNumber = 2595;
      goto LABEL_31;
    }
    v28 = RtlAddAce(v24, 2u, 0, AceList, AceListLength);
    v9 = v28;
    if ( v28 < 0 )
    {
      WdLogSingleEntry1(2LL, v28);
      WdLogGlobalForLineNumber = 2596;
      goto LABEL_31;
    }
    v29 = RtlAddAccessAllowedAceEx(v24, 2u, 2u, 0x2001Fu, a4);
    v9 = v29;
    if ( v29 < 0 )
    {
      WdLogSingleEntry1(2LL, v29);
      WdLogGlobalForLineNumber = 2599;
      goto LABEL_31;
    }
    v30 = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
    v9 = v30;
    if ( v30 < 0 )
    {
      WdLogSingleEntry1(2LL, v30);
      WdLogGlobalForLineNumber = 2602;
      goto LABEL_31;
    }
    v31 = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v24, 0);
    v9 = v31;
    if ( v31 < 0 )
    {
      WdLogSingleEntry1(2LL, v31);
      WdLogGlobalForLineNumber = 2605;
      goto LABEL_31;
    }
    if ( !RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor) )
    {
      v9 = -1073741595;
      WdLogSingleEntry1(2LL, -1073741595LL);
      WdLogGlobalForLineNumber = 2609;
      goto LABEL_31;
    }
    v32 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor);
    Size = v32;
    if ( v32 < 0x28 )
    {
      v9 = -1073741595;
      WdLogSingleEntry1(2LL, -1073741595LL);
      WdLogGlobalForLineNumber = 2617;
      goto LABEL_31;
    }
    v33 = ExAllocatePool2(256LL, v32, 1265072196LL);
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      (__int64 *)&SelfRelativeSecurityDescriptor,
      v33);
    if ( ____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&SelfRelativeSecurityDescriptor) )
    {
      v9 = -1073741670;
      WdLogSingleEntry1(2LL, -1073741670LL);
      WdLogGlobalForLineNumber = 2624;
      goto LABEL_31;
    }
    v34 = SelfRelativeSecurityDescriptor;
    memset(SelfRelativeSecurityDescriptor, 0, Size);
    v35 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v34, &Size);
    v19 = v35;
    if ( v35 < 0 )
    {
      WdLogSingleEntry1(2LL, v35);
      WdLogGlobalForLineNumber = 2629;
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
      __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v45);
LABEL_24:
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
      v9 = v19;
LABEL_73:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return v9;
    }
    v36 = ZwSetSecurityObject(Handle, 4u, v34);
    v9 = v36;
    if ( v36 < 0 )
    {
      WdLogSingleEntry1(2LL, v36);
      WdLogGlobalForLineNumber = 2634;
LABEL_31:
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
      __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v45);
      goto LABEL_72;
    }
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
    __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v45);
  }
  v37 = 0LL;
  v38 = 544;
  v49 = 0LL;
  do
  {
LABEL_58:
    if ( !v37 )
    {
      v39 = ExAllocatePool2(256LL, v38, 1265072196LL);
      _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
        (__int64 *)&v49,
        v39);
      v37 = v49;
      if ( !v49 )
      {
        v9 = -1073741670;
        WdLogSingleEntry1(2LL, -1073741670LL);
        WdLogGlobalForLineNumber = 2651;
        __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&v49);
        goto LABEL_72;
      }
    }
    Size_4 = 0;
    v40 = ZwEnumerateKey(Handle, v7, KeyBasicInformation, v37, v38 - 2, &Size_4);
    v41 = v40;
    if ( v40 != -2147483643 && v40 != -1073741789 )
      break;
    v38 = Size_4 + 2;
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      (__int64 *)&v49,
      0LL);
    v37 = v49;
  }
  while ( (_DWORD)v41 == -2147483643 || (_DWORD)v41 == -1073741789 );
  if ( (int)v41 >= 0 )
  {
    *((_WORD *)v37 + ((unsigned __int64)v37[3] >> 1) + 8) = 0;
    AdjustCcdDatabasePermissions(Handle, v37 + 4, a3 + 1, a4);
LABEL_68:
    ++v7;
    goto LABEL_58;
  }
  if ( (_DWORD)v41 != -2147483622 )
  {
    WdLogSingleEntry1(1LL, v41);
    WdLogGlobalForLineNumber = 2683;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Failed to enumerate key with status 0x%I64x",
      v41,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
  __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&v49);
  __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
  return 0LL;
}
