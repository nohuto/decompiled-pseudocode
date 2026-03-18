/*
 * XREFs of ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14027D390
 * Callers:
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14018C588 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140056BA4 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z @ 0x14027D634 (-_GetAppOverrideKey@MonitorUsageState@DxgMonitor@@AEBAJAEBU_UNICODE_STRING@@PEA_K@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorUsageState::SetAppOverride(
        DxgMonitor::MonitorUsageState *this,
        GUID *Guid,
        struct _GUID *a3,
        int a4,
        unsigned __int64 a5,
        bool a6,
        const struct _UNICODE_STRING *a7)
{
  NTSTATUS AppOverrideKey; // ebx
  unsigned __int64 *v11; // rdx
  unsigned __int64 *p_p_GuidString; // rcx
  unsigned __int64 v14; // r12
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, HANDLE *); // rbx
  NTSTATUS v17; // eax
  unsigned __int64 p_GuidString; // [rsp+30h] [rbp-30h] BYREF
  struct _UNICODE_STRING *v19; // [rsp+38h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+48h] [rbp-18h] BYREF

  if ( *(_OWORD *)Guid != *(_OWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED
    && (*(_QWORD *)&Guid->Data1 != *(_QWORD *)&GUID_MONITOR_OVERRIDE_TEST_SPECIALIZED.Data1
     || *(_QWORD *)Guid->Data4 != *(_QWORD *)GUID_MONITOR_OVERRIDE_TEST_SPECIALIZED.Data4)
    || *(_QWORD *)&a3->Data1 != *(_QWORD *)&GUID_SPM_DEFAULT.Data1
    || *(_QWORD *)a3->Data4 != *(_QWORD *)GUID_SPM_DEFAULT.Data4
    || a7 && !a7->Length )
  {
    return 3221225485LL;
  }
  GuidString = 0LL;
  AppOverrideKey = RtlStringFromGUID(Guid, &GuidString);
  if ( AppOverrideKey < 0 )
  {
    v19 = (struct _UNICODE_STRING *)RtlFreeUnicodeString;
    v11 = &p_GuidString;
    p_p_GuidString = (unsigned __int64 *)&v19;
    p_GuidString = (unsigned __int64)&GuidString;
LABEL_10:
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(
      (__int64 (__fastcall **)(_QWORD))p_p_GuidString,
      v11);
    return (unsigned int)AppOverrideKey;
  }
  p_GuidString = 0LL;
  AppOverrideKey = DxgMonitor::MonitorUsageState::_GetAppOverrideKey(this, &GuidString, &p_GuidString);
  if ( AppOverrideKey < 0 )
    goto LABEL_12;
  v14 = p_GuidString;
  if ( !a6 && p_GuidString != a5 )
  {
    v19 = &GuidString;
    p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z(
      (__int64 (__fastcall **)(_QWORD))&p_GuidString,
      &v19);
    return 3221225485LL;
  }
  v15 = *((_QWORD *)this + 1);
  KeyHandle = 0LL;
  v16 = *(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)v15 + 8LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    0LL);
  AppOverrideKey = v16(v15, 0LL, &KeyHandle);
  if ( AppOverrideKey < 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
LABEL_12:
    v19 = &GuidString;
    p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
LABEL_13:
    v11 = (unsigned __int64 *)&v19;
    p_p_GuidString = &p_GuidString;
    goto LABEL_10;
  }
  if ( a4 )
  {
    (*(void (__fastcall **)(_QWORD, HANDLE, wchar_t *, unsigned __int64))(**((_QWORD **)this + 1) + 112LL))(
      *((_QWORD *)this + 1),
      KeyHandle,
      GuidString.Buffer,
      v14);
  }
  else
  {
    v17 = ZwDeleteValueKey(KeyHandle, &GuidString);
    AppOverrideKey = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v17);
      WdLogGlobalForLineNumber = 539;
      wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
      v19 = &GuidString;
      p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
      goto LABEL_13;
    }
  }
  if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data1
    && *(_QWORD *)Guid->Data4 == *(_QWORD *)GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED.Data4 )
  {
    *((_BYTE *)this + 21) = a4 != 0;
  }
  else
  {
    if ( *(_QWORD *)&Guid->Data1 != *(_QWORD *)&GUID_MONITOR_OVERRIDE_TEST_SPECIALIZED.Data1
      || *(_QWORD *)Guid->Data4 != *(_QWORD *)GUID_MONITOR_OVERRIDE_TEST_SPECIALIZED.Data4 )
    {
      goto LABEL_31;
    }
    *((_BYTE *)this + 22) = a4 != 0;
  }
  *((_BYTE *)this + 20) = 0;
  *((_DWORD *)this + 4) = a4 != 0 ? 2 : 0;
LABEL_31:
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  v19 = &GuidString;
  p_GuidString = (unsigned __int64)RtlFreeUnicodeString;
  ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&p_GuidString, &v19);
  return 0LL;
}
