/*
 * XREFs of ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x14027E170
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033510 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004BEC4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??4?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140055C94 (--4-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     ?reset@?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAUWmiMonitorDescriptor@DxgMonitor@@@Z @ 0x140055CF8 (-reset@-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@Dx.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?reset@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAX$$T@Z @ 0x140063C20 (-reset@-$unique_ptr@$$BY0A@V-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWm.c)
 *     ??$reset@PEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAXPEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@1@@Z @ 0x1400644D4 (--$reset@PEAV-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescrip.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@Z @ 0x14027EA78 (-_ReadOneBlockMonitorDescriptorFromRegistry@EdidMonitorDescriptor@DxgMonitor@@CAJPEAXIAEAV-$uniq.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1403F38B0 (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        DxgMonitor::EdidMonitorDescriptor *this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **); // rbx
  int v6; // eax
  int v7; // r15d
  void *v8; // rbx
  NTSTATUS v9; // eax
  __int64 i; // rsi
  int OneBlockMonitorDescriptorFromRegistry; // eax
  void **v12; // rbx
  void **v13; // rbx
  void *v14; // rbx
  unsigned int v15; // esi
  __int64 v16; // rax
  bool v17; // cf
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 j; // r12
  int v22; // r12d
  void *v24; // [rsp+30h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  void **v26; // [rsp+40h] [rbp-29h] BYREF
  void **v27; // [rsp+48h] [rbp-21h] BYREF
  void *v28; // [rsp+50h] [rbp-19h] BYREF
  __int64 v29; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING v30; // [rsp+60h] [rbp-9h] BYREF
  __int128 v31; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+88h] [rbp+1Fh]
  int v33; // [rsp+90h] [rbp+27h]

  v28 = 0LL;
  KeyHandle = 0LL;
  v33 = *(_DWORD *)L"E";
  v30.Buffer = (wchar_t *)&v31;
  v4 = *(_QWORD *)a2;
  v31 = *(_OWORD *)L"EDID_OVERRIDE";
  *(_QWORD *)&v30.Length = 1835034LL;
  v5 = *(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **))(v4 + 16);
  v32 = *(_QWORD *)L"RRIDE";
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v28,
    0LL);
  v6 = v5(a2, 0LL, 1LL, &v28);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(7LL, v6);
    WdLogGlobalForLineNumber = 841;
LABEL_43:
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v28);
LABEL_39:
    DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(this);
    return (unsigned int)v7;
  }
  v8 = v28;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &KeyHandle,
    0LL);
  v9 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, v8, &v30);
  v7 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry1(7LL, v9);
    WdLogGlobalForLineNumber = 850;
    goto LABEL_43;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 4); i = (unsigned int)(i + 1) )
  {
    v26 = 0LL;
    OneBlockMonitorDescriptorFromRegistry = DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle);
    v7 = OneBlockMonitorDescriptorFromRegistry;
    if ( OneBlockMonitorDescriptorFromRegistry == -1073741801 )
    {
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        (void **)&v26,
        0LL);
      goto LABEL_43;
    }
    if ( OneBlockMonitorDescriptorFromRegistry >= 0 )
    {
      v12 = v26;
      if ( !v26 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 884;
      }
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        v12,
        (void **)(*((_QWORD *)this + 3) + 8 * i));
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
        (void **)(*((_QWORD *)this + 3) + 8 * i),
        (void **)&v26);
      ++*((_DWORD *)this + 5);
    }
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v26,
      0LL);
  }
  v24 = 0LL;
  while ( (unsigned int)i <= 0xFE )
  {
    v27 = 0LL;
    LODWORD(i) = i + 1;
    v7 = DxgMonitor::EdidMonitorDescriptor::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle);
    if ( v7 < 0 )
    {
      v7 = 0;
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
        (void **)&v27,
        0LL);
      break;
    }
    v13 = v27;
    if ( !v27 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 923;
    }
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      v13,
      &v24);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
      &v24,
      (void **)&v27);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      (void **)&v27,
      0LL);
  }
  v14 = v24;
  v15 = i - 1;
  if ( v24 )
  {
    if ( v15 <= *((_DWORD *)this + 4) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 937;
    }
    v16 = 8LL * v15;
    if ( !is_mul_ok(v15, 8uLL) )
      v16 = -1LL;
    v17 = __CFADD__(v16, 8LL);
    v18 = v16 + 8;
    if ( v17 )
      v18 = -1LL;
    v19 = operator new[](v18, 0x4D677844u, 256LL);
    if ( v19 )
    {
      v20 = v19 + 8;
      *(_QWORD *)v19 = v15;
      `vector constructor iterator'(
        (char *)(v19 + 8),
        8LL,
        v15,
        (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
      v29 = v20;
      if ( v20 )
      {
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 4); j = (unsigned int)(j + 1) )
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
            (void **)(v20 + 8 * j),
            (void **)(*((_QWORD *)this + 3) + 8 * j));
        v22 = 1;
        while ( v14 )
        {
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
            (void **)(v20 + 8LL * (v15 - v22)),
            &v24);
          wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::operator=(
            &v24,
            *(void ***)(v20 + 8LL * (v15 - v22)));
          ++*((_DWORD *)this + 4);
          ++*((_DWORD *)this + 5);
          v14 = v24;
          ++v22;
        }
        v29 = 0LL;
        wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> *>(
          (__int64 *)this + 3,
          v20);
        wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset(&v29);
        goto LABEL_36;
      }
    }
    else
    {
      v29 = 0LL;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 945;
    wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset(&v29);
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
      &v24,
      0LL);
    v7 = -1073741801;
    goto LABEL_43;
  }
LABEL_36:
  if ( v15 != *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 984;
  }
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::reset(
    &v24,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v28);
  if ( v7 < 0 )
    goto LABEL_39;
  return (unsigned int)v7;
}
