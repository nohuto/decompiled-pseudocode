/*
 * XREFs of AdjustCcdDatabasePermissions @ 0x14026549C
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x14026549C (AdjustCcdDatabasePermissions.c)
 *     DxgkHandleCcdDatabaseRequests @ 0x1402664B4 (DxgkHandleCcdDatabaseRequests.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400587A4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140062824 (--1-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoolWit.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006487C (--1-$unique_storage@U-$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1-FreePoolWithTag@-$pool_helper.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x140064C98 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@_E$1-FreePoolWithTag@-$pool_helpers@PEA.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x14008FC80 (-reset@-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoo.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     AdjustCcdDatabasePermissions @ 0x14026549C (AdjustCcdDatabasePermissions.c)
 *     _CcdOpenRegistrySubkey @ 0x1403CA298 (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall AdjustCcdDatabasePermissions(int a1, const WCHAR *a2, unsigned int a3, void *a4)
{
  ULONG v7; // r15d
  int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // ebx
  ULONG v11; // eax
  __int64 Pool2; // rax
  PSECURITY_DESCRIPTOR v13; // rbx
  NTSTATUS v14; // eax
  int v15; // edi
  NTSTATUS DaclSecurityDescriptor; // eax
  __int64 v17; // r9
  PACL v18; // rcx
  ULONG i; // ebx
  NTSTATUS v20; // eax
  NTSTATUS v21; // edi
  unsigned __int8 v22; // al
  ULONG v23; // eax
  ULONG v24; // ebx
  __int64 v25; // r9
  struct _ACL *v26; // rax
  struct _ACL *v27; // rdi
  NTSTATUS Acl; // eax
  NTSTATUS v29; // eax
  int AcesBufferSize; // eax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  NTSTATUS v34; // eax
  ULONG v35; // eax
  __int64 v36; // r9
  __int64 v37; // rax
  PSECURITY_DESCRIPTOR v38; // rbx
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  unsigned int *v41; // rbx
  unsigned int v42; // r14d
  __int64 v43; // rax
  NTSTATUS v44; // eax
  __int64 v45; // rdi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-59h] BYREF
  PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor; // [rsp+58h] [rbp-51h] BYREF
  unsigned __int8 DaclDefaulted[8]; // [rsp+60h] [rbp-49h] BYREF
  struct _ACL *v49; // [rsp+68h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-39h] BYREF
  ULONG Length; // [rsp+78h] [rbp-31h] BYREF
  PACL Dacl; // [rsp+80h] [rbp-29h] BYREF
  unsigned int *v53; // [rsp+88h] [rbp-21h] BYREF
  ULONG AceListLength; // [rsp+90h] [rbp-19h] BYREF
  ULONG Size; // [rsp+94h] [rbp-15h] BYREF
  ULONG Size_4; // [rsp+98h] [rbp-11h] BYREF
  ULONG v57; // [rsp+9Ch] [rbp-Dh] BYREF
  PVOID Ace; // [rsp+A0h] [rbp-9h] BYREF
  PVOID AceList; // [rsp+A8h] [rbp-1h] BYREF
  _OWORD AbsoluteSecurityDescriptor[2]; // [rsp+B8h] [rbp+Fh] BYREF
  __int64 v61; // [rsp+D8h] [rbp+2Fh]
  unsigned __int8 DaclPresent; // [rsp+120h] [rbp+77h] BYREF

  if ( a3 > 5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2502;
    return 0LL;
  }
  v7 = 0;
  v57 = 2;
  Handle = 0LL;
  v8 = CcdOpenRegistrySubkey((int)&Handle, 983103, a1, a2, &v57);
  v10 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 2510;
    goto LABEL_73;
  }
  v11 = 336;
  SecurityDescriptor = 0LL;
  for ( Length = 336; ; v11 = Length )
  {
    Pool2 = ExAllocatePool2(256LL, v11, 1265072196LL, v9);
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      (__int64 *)&SecurityDescriptor,
      Pool2);
    v13 = SecurityDescriptor;
    if ( !SecurityDescriptor )
    {
      v15 = -1073741801;
      goto LABEL_75;
    }
    v14 = ZwQuerySecurityObject(Handle, 4u, SecurityDescriptor, Length, &Length);
    v15 = v14;
    if ( v14 != -1073741789 )
      break;
  }
  if ( v14 < 0 )
  {
LABEL_75:
    WdLogSingleEntry1(2LL, v15);
    WdLogGlobalForLineNumber = 2532;
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return (unsigned int)v15;
  }
  DaclPresent = 0;
  DaclDefaulted[0] = 0;
  Dacl = 0LL;
  DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(v13, &DaclPresent, &Dacl, DaclDefaulted);
  v10 = DaclSecurityDescriptor;
  if ( DaclSecurityDescriptor < 0 )
  {
    WdLogSingleEntry1(2LL, DaclSecurityDescriptor);
    WdLogGlobalForLineNumber = 2539;
    goto LABEL_72;
  }
  if ( !DaclPresent || (v18 = Dacl) == 0LL )
  {
    v10 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 2543;
LABEL_72:
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
    goto LABEL_73;
  }
  DaclPresent = 0;
  for ( i = 0; i < v18->AceCount; ++i )
  {
    Ace = 0LL;
    v20 = RtlGetAce(v18, i, &Ace);
    v21 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(2LL, v20);
      WdLogGlobalForLineNumber = 2552;
      goto LABEL_24;
    }
    if ( !*(_BYTE *)Ace && (*((_DWORD *)Ace + 1) & 0x2001F) == 0x2001F && RtlEqualSid((char *)Ace + 8, a4) )
    {
      v18 = Dacl;
      v22 = 1;
      DaclPresent = 1;
      goto LABEL_26;
    }
    v18 = Dacl;
  }
  v22 = DaclPresent;
LABEL_26:
  if ( !v22 )
  {
    SelfRelativeSecurityDescriptor = 0LL;
    memset(AbsoluteSecurityDescriptor, 0, sizeof(AbsoluteSecurityDescriptor));
    v61 = 0LL;
    if ( v18->AclSize < 8u )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2578;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Dacl->AclSize >= sizeof(ACL)", 2578LL, 0LL, 0LL, 0LL, 0LL);
    }
    v23 = RtlLengthSid(a4);
    v24 = v23 + Dacl->AclSize + 8;
    v26 = (struct _ACL *)ExAllocatePool2(256LL, v24, 1265072196LL, v25);
    v49 = v26;
    v27 = v26;
    if ( !v26 )
    {
      v10 = -1073741670;
      WdLogSingleEntry1(2LL, -1073741670LL);
      WdLogGlobalForLineNumber = 2586;
      goto LABEL_31;
    }
    Acl = RtlCreateAcl(v26, v24, 2u);
    v10 = Acl;
    if ( Acl < 0 )
    {
      WdLogSingleEntry1(2LL, Acl);
      WdLogGlobalForLineNumber = 2589;
      goto LABEL_31;
    }
    AceList = 0LL;
    AceListLength = 0;
    v29 = RtlGetAce(Dacl, 0, &AceList);
    v10 = v29;
    if ( v29 < 0 )
    {
      WdLogSingleEntry1(2LL, v29);
      WdLogGlobalForLineNumber = 2594;
      goto LABEL_31;
    }
    AcesBufferSize = RtlGetAcesBufferSize(Dacl, &AceListLength);
    v10 = AcesBufferSize;
    if ( AcesBufferSize < 0 )
    {
      WdLogSingleEntry1(2LL, AcesBufferSize);
      WdLogGlobalForLineNumber = 2595;
      goto LABEL_31;
    }
    v31 = RtlAddAce(v27, 2u, 0, AceList, AceListLength);
    v10 = v31;
    if ( v31 < 0 )
    {
      WdLogSingleEntry1(2LL, v31);
      WdLogGlobalForLineNumber = 2596;
      goto LABEL_31;
    }
    v32 = RtlAddAccessAllowedAceEx(v27, 2u, 2u, 0x2001Fu, a4);
    v10 = v32;
    if ( v32 < 0 )
    {
      WdLogSingleEntry1(2LL, v32);
      WdLogGlobalForLineNumber = 2599;
      goto LABEL_31;
    }
    v33 = RtlCreateSecurityDescriptor(AbsoluteSecurityDescriptor, 1u);
    v10 = v33;
    if ( v33 < 0 )
    {
      WdLogSingleEntry1(2LL, v33);
      WdLogGlobalForLineNumber = 2602;
      goto LABEL_31;
    }
    v34 = RtlSetDaclSecurityDescriptor(AbsoluteSecurityDescriptor, 1u, v27, 0);
    v10 = v34;
    if ( v34 < 0 )
    {
      WdLogSingleEntry1(2LL, v34);
      WdLogGlobalForLineNumber = 2605;
      goto LABEL_31;
    }
    if ( !RtlValidSecurityDescriptor(AbsoluteSecurityDescriptor) )
    {
      v10 = -1073741595;
      WdLogSingleEntry1(2LL, -1073741595LL);
      WdLogGlobalForLineNumber = 2609;
      goto LABEL_31;
    }
    v35 = RtlLengthSecurityDescriptor(AbsoluteSecurityDescriptor);
    Size = v35;
    if ( v35 < 0x28 )
    {
      v10 = -1073741595;
      WdLogSingleEntry1(2LL, -1073741595LL);
      WdLogGlobalForLineNumber = 2617;
      goto LABEL_31;
    }
    v37 = ExAllocatePool2(256LL, v35, 1265072196LL, v36);
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      (__int64 *)&SelfRelativeSecurityDescriptor,
      v37);
    if ( ____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&SelfRelativeSecurityDescriptor) )
    {
      v10 = -1073741670;
      WdLogSingleEntry1(2LL, -1073741670LL);
      WdLogGlobalForLineNumber = 2624;
      goto LABEL_31;
    }
    v38 = SelfRelativeSecurityDescriptor;
    memset(SelfRelativeSecurityDescriptor, 0, Size);
    v39 = RtlAbsoluteToSelfRelativeSD(AbsoluteSecurityDescriptor, v38, &Size);
    v21 = v39;
    if ( v39 < 0 )
    {
      WdLogSingleEntry1(2LL, v39);
      WdLogGlobalForLineNumber = 2629;
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
      __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v49);
LABEL_24:
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
      v10 = v21;
LABEL_73:
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return v10;
    }
    v40 = ZwSetSecurityObject(Handle, 4u, v38);
    v10 = v40;
    if ( v40 < 0 )
    {
      WdLogSingleEntry1(2LL, v40);
      WdLogGlobalForLineNumber = 2634;
LABEL_31:
      __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
      __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v49);
      goto LABEL_72;
    }
    __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SelfRelativeSecurityDescriptor);
    __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ((__int64 *)&v49);
  }
  v41 = 0LL;
  v42 = 544;
  v53 = 0LL;
  do
  {
LABEL_58:
    if ( !v41 )
    {
      v43 = ExAllocatePool2(256LL, v42, 1265072196LL, v17);
      _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
        (__int64 *)&v53,
        v43);
      v41 = v53;
      if ( !v53 )
      {
        v10 = -1073741670;
        WdLogSingleEntry1(2LL, -1073741670LL);
        WdLogGlobalForLineNumber = 2651;
        __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&v53);
        goto LABEL_72;
      }
    }
    Size_4 = 0;
    v44 = ZwEnumerateKey(Handle, v7, KeyBasicInformation, v41, v42 - 2, &Size_4);
    v45 = v44;
    if ( v44 != -2147483643 && v44 != -1073741789 )
      break;
    v42 = Size_4 + 2;
    _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
      (__int64 *)&v53,
      0LL);
    v41 = v53;
  }
  while ( (_DWORD)v45 == -2147483643 || (_DWORD)v45 == -1073741789 );
  if ( (int)v45 >= 0 )
  {
    *((_WORD *)v41 + ((unsigned __int64)v41[3] >> 1) + 8) = 0;
    AdjustCcdDatabasePermissions(Handle, v41 + 4, a3 + 1, a4);
LABEL_68:
    ++v7;
    goto LABEL_58;
  }
  if ( (_DWORD)v45 != -2147483622 )
  {
    WdLogSingleEntry1(1LL, v45);
    WdLogGlobalForLineNumber = 2683;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Failed to enumerate key with status 0x%I64x",
      v45,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_68;
  }
  __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&v53);
  __1__unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAA_XZ(&SecurityDescriptor);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
  return 0LL;
}
