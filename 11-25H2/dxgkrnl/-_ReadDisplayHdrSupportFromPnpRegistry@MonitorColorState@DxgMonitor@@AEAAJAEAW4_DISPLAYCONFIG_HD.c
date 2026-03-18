/*
 * XREFs of ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1404088B0
 * Callers:
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140351D90 (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14000F9E8 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400587A4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _wcsnicmp_0 @ 0x140065352 (_wcsnicmp_0.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z @ 0x1402755C8 (-_MarkDisplayHDRReadInMonitorStore@MonitorColorState@DxgMonitor@@AEAAXAEA_N@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
        __int64 **this,
        enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *a2,
        bool *a3)
{
  DxgMonitor::MonitorColorState *v3; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  const wchar_t *v14; // rbx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  NTSTATUS v20; // edi
  void *v21; // rax
  unsigned int v22; // eax
  int v23; // r13d
  unsigned int v24; // r15d
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *v25; // rdi
  wchar_t **i; // r14
  int v27; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-31h] BYREF
  PVOID v30; // [rsp+40h] [rbp-29h] BYREF
  NTSTATUS v31; // [rsp+48h] [rbp-21h]
  enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *v32; // [rsp+50h] [rbp-19h]
  DxgMonitor::MonitorColorState *v33; // [rsp+58h] [rbp-11h]
  bool *v34; // [rsp+60h] [rbp-9h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+78h] [rbp+Fh] BYREF

  v33 = (DxgMonitor::MonitorColorState *)this;
  *(_DWORD *)a2 = 0;
  *a3 = 0;
  v3 = (DxgMonitor::MonitorColorState *)this;
  v4 = this[1];
  v34 = a3;
  v32 = a2;
  LOBYTE(a2) = 1;
  v5 = *v4;
  Handle = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *, __int64, HANDLE *))(v5 + 16))(
         v4,
         a2,
         2LL,
         &Handle);
  v11 = v6;
  if ( v6 < 0 )
  {
    v12 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v3;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogGlobalForLineNumber = 2405;
    if ( Handle )
      ZwClose(Handle);
    return (unsigned int)v11;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DisplayHdrLevel");
  v14 = 0LL;
  ResultLength = 0;
  v30 = 0LL;
  KeyValueInformation = 0LL;
  v15 = -1073741772;
  v31 = ZwQueryValueKey(
          Handle,
          &DestinationString,
          KeyValuePartialInformation,
          &KeyValueInformation,
          0x10u,
          &ResultLength);
  v20 = v31;
  if ( v31 == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = v3;
    WdLogGlobalForLineNumber = 2421;
LABEL_15:
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v30,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return v15;
  }
  if ( v31 == -1073741789 || v31 == -2147483643 )
  {
    v21 = (void *)operator new[](ResultLength, 0x4D677844u, 256LL, v19);
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v30,
      v21);
    v14 = (const wchar_t *)v30;
    if ( !v30 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2430;
      wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
        &v30,
        0LL);
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
      return 3221225495LL;
    }
    v20 = ZwQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, v30, ResultLength, &ResultLength);
    v31 = v20;
  }
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(2LL, v3, v20);
    WdLogGlobalForLineNumber = 2440;
    v15 = v20;
    goto LABEL_15;
  }
  v22 = *((_DWORD *)v14 + 1);
  if ( v22 != 7 )
  {
    WdLogSingleEntry2(2LL, v3, v22);
    WdLogGlobalForLineNumber = 2447;
    v15 = -1073741788;
    goto LABEL_15;
  }
  v23 = *((_DWORD *)v14 + 2) >> 1;
  if ( (unsigned int)(v23 - 37) > 0x95 || v23 - 1 != 37 * ((v23 - 1) / 0x25u) )
  {
    LODWORD(v11) = -1073741823;
    WdLogSingleEntry2(2LL, v3, -1073741823LL);
    WdLogGlobalForLineNumber = 2459;
    wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
      &v30,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
    return (unsigned int)v11;
  }
  v24 = 0;
  if ( v23 != 37 )
  {
    v25 = v32;
    do
    {
      for ( i = &off_1400A6300;
            i != (wchar_t **)&Feature_Servicing_GraphicsKernel_CpuHostApertureFixes__private_requiresFeatures;
            i += 2 )
      {
        if ( !wcsnicmp_0(&v14[v24 + 6], *i, 0x25uLL) )
        {
          *(_DWORD *)v25 |= *((_DWORD *)i + 2);
          break;
        }
      }
      if ( &v14[v24 + 6] )
        v27 = wcsnlen(&v14[v24 + 6], v23 - v24);
      else
        v27 = 0;
      v24 += v27 + 1;
    }
    while ( v24 < v23 - 37 );
    v20 = v31;
    v3 = v33;
  }
  DxgMonitor::MonitorColorState::_MarkDisplayHDRReadInMonitorStore(v3, v34);
  wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
    &v30,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Handle);
  return (unsigned int)v20;
}
