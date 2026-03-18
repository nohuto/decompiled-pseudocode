/*
 * XREFs of ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS2@@AEA_N@Z @ 0x14027C74C
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14028A668 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14001EE78 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _wcsnicmp_0 @ 0x140064F72 (_wcsnicmp_0.c)
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x14006DE94 (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z @ 0x14027C6E4 (-_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
        DxgMonitor::MonitorColorState *this,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *a2,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *a3,
        bool *a4)
{
  DxgMonitor::MonitorColorState *v6; // rsi
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64, __int64, HANDLE *); // rbx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rax
  const wchar_t *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  NTSTATUS v22; // edi
  void *v23; // rax
  unsigned int v24; // eax
  int v26; // r13d
  unsigned int v27; // r15d
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *v28; // rdi
  wchar_t **v29; // r14
  wchar_t **v30; // r14
  int v31; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-59h] BYREF
  PVOID v33; // [rsp+38h] [rbp-51h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-49h] BYREF
  NTSTATUS v35; // [rsp+48h] [rbp-41h]
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS2 *v36; // [rsp+50h] [rbp-39h]
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *v37; // [rsp+58h] [rbp-31h]
  DxgMonitor::MonitorColorState *v38; // [rsp+60h] [rbp-29h]
  bool *v39; // [rsp+68h] [rbp-21h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp-9h] BYREF

  v39 = a4;
  KeyHandle = 0LL;
  v36 = a3;
  *(_DWORD *)a2 = 0;
  v6 = this;
  v37 = a2;
  v38 = this;
  if ( (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)a3 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)v6 + 1);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, HANDLE *))(*(_QWORD *)v7 + 16LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    0LL);
  LOBYTE(v9) = 1;
  v10 = v8(v7, v9, 2LL, &KeyHandle);
  v15 = v10;
  if ( v10 < 0 )
  {
    v16 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
    *(_QWORD *)(v16 + 24) = v6;
    *(_QWORD *)(v16 + 32) = v15;
    WdLogGlobalForLineNumber = 2366;
LABEL_15:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
    return (unsigned int)v15;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DisplayHdrLevel");
  v17 = 0LL;
  ResultLength = 0;
  v33 = 0LL;
  KeyValueInformation = 0LL;
  v35 = ZwQueryValueKey(
          KeyHandle,
          &DestinationString,
          KeyValuePartialInformation,
          &KeyValueInformation,
          0x10u,
          &ResultLength);
  v22 = v35;
  if ( v35 == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = v6;
    WdLogGlobalForLineNumber = 2382;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v33,
      0LL);
    LODWORD(v15) = -1073741772;
    goto LABEL_15;
  }
  if ( v35 == -1073741789 || v35 == -2147483643 )
  {
    v23 = (void *)operator new[](ResultLength, 0x4D677844u, 256LL);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v33,
      v23);
    v17 = (const wchar_t *)v33;
    if ( !v33 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2391;
      wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
        &v33,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
      return 3221225495LL;
    }
    v22 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v33, ResultLength, &ResultLength);
    v35 = v22;
  }
  if ( v22 < 0 )
  {
    WdLogSingleEntry2(2LL, v6, v22);
    WdLogGlobalForLineNumber = 2401;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v33,
      0LL);
    LODWORD(v15) = v22;
    goto LABEL_15;
  }
  v24 = *((_DWORD *)v17 + 1);
  if ( v24 != 7 )
  {
    WdLogSingleEntry2(2LL, v6, v24);
    WdLogGlobalForLineNumber = 2408;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v33,
      0LL);
    LODWORD(v15) = -1073741788;
    goto LABEL_15;
  }
  v26 = *((_DWORD *)v17 + 2) >> 1;
  if ( (unsigned int)(v26 - 37) > 0x95 || v26 - 1 != 37 * ((v26 - 1) / 0x25u) )
  {
    LODWORD(v15) = -1073741823;
    WdLogSingleEntry2(2LL, v6, -1073741823LL);
    WdLogGlobalForLineNumber = 2420;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v33,
      0LL);
    goto LABEL_15;
  }
  v27 = 0;
  if ( v26 != 37 )
  {
    v28 = v36;
    do
    {
      v29 = &off_1400A82E0;
      while ( wcsnicmp_0(&v17[v27 + 6], *v29, 0x25uLL) )
      {
        v29 += 2;
        if ( v29 == &off_1400A8480 )
          goto LABEL_25;
      }
      *(_DWORD *)v37 |= *((_DWORD *)v29 + 2);
LABEL_25:
      if ( (unsigned int)Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline() )
      {
        v30 = &off_1400A8480;
        while ( wcsnicmp_0(&v17[v27 + 6], *v30, 0x25uLL) )
        {
          v30 += 2;
          if ( v30 == (wchar_t **)Feature_Servicing_GraphicsKernel_ReadOnlyExistingSysMem__private_requiresFeatures )
            goto LABEL_31;
        }
        *(_DWORD *)v28 |= *((_DWORD *)v30 + 2);
      }
LABEL_31:
      if ( &v17[v27 + 6] )
        v31 = wcsnlen(&v17[v27 + 6], v26 - v27);
      else
        v31 = 0;
      v27 += v31 + 1;
    }
    while ( v27 < v26 - 37 );
    v22 = v35;
    v6 = v38;
  }
  DxgMonitor::MonitorColorState::_MarkDisplayHDRReadInMonitorStore(v6, v39);
  wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
    &v33,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  return (unsigned int)v22;
}
