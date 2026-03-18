/*
 * XREFs of ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140279B50
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14000F9E8 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140012998 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1400129C8 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004C414 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055B90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400587A4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1400951AC (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::LoadDescriptorOverridesFromRegistry(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        const struct DxgMonitor::IMonitorRegistry *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  void *v9; // rbx
  NTSTATUS v10; // eax
  int v11; // eax
  __int64 v12; // r9
  _DWORD *v13; // rbx
  unsigned int v14; // eax
  void *v15; // rax
  unsigned __int8 *v16; // rdi
  int v17; // r8d
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  void *v21; // [rsp+38h] [rbp-41h] BYREF
  void *v22; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v23; // [rsp+48h] [rbp-31h] BYREF
  struct _UNICODE_STRING v24; // [rsp+50h] [rbp-29h] BYREF
  __int128 v25; // [rsp+60h] [rbp-19h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-1h] BYREF
  _OWORD v28[2]; // [rsp+88h] [rbp+Fh] BYREF
  int v29; // [rsp+A8h] [rbp+2Fh]
  wchar_t v30; // [rsp+ACh] [rbp+33h]

  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
    return 3221226021LL;
  v21 = 0LL;
  KeyHandle = 0LL;
  v29 = *(_DWORD *)L"DE";
  v30 = aDisplayidOverr[18];
  v24.Buffer = (wchar_t *)v28;
  v4 = *(_QWORD *)a2;
  v28[0] = *(_OWORD *)L"DISPLAYID_OVERRIDE";
  *(_QWORD *)&v24.Length = 2490404LL;
  v28[1] = *(_OWORD *)L"D_OVERRIDE";
  v5 = *(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **))(v4 + 16);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v21,
    0LL);
  v6 = v5(a2, 0LL, 1LL, &v21);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v21;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &KeyHandle,
      0LL);
    v10 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, v9, &v24);
    v7 = v10;
    if ( v10 >= 0 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Data");
      v23 = 0LL;
      v11 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (void **)&v23);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v13 = v23;
        if ( v23[1] == 3 && (v14 = v23[2]) != 0 )
        {
          v15 = (void *)operator new[](v14, 0x4D677844u, 256LL, v12);
          v22 = v15;
          v16 = (unsigned __int8 *)v15;
          if ( v15 )
          {
            memmove(v15, v13 + 3, (unsigned int)v13[2]);
            v17 = v13[2];
            v26 = 0LL;
            v25 = 0LL;
            DisplayID_Initialize((struct DisplayIDObj *)&v25, v16, v17);
            if ( (_BYTE)v26 )
            {
              *((_DWORD *)this + 12) = *((_DWORD *)this + 3);
              wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(
                (void **)this + 7,
                (void **)this + 2);
              v18 = v25;
              *((_DWORD *)this + 2) = 1;
              v19 = v26;
              *(_OWORD *)((char *)this + 24) = v18;
              *((_QWORD *)this + 5) = v19;
              *((_DWORD *)this + 3) = v13[2];
              wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(
                (void **)this + 2,
                &v22);
              wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v22);
              v7 = 0;
            }
            else
            {
              WdLogSingleEntry0(7LL);
              WdLogGlobalForLineNumber = 231;
              wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v22);
              v7 = -1071841277;
            }
          }
          else
          {
            v7 = -1073741801;
            WdLogSingleEntry1(2LL, -1073741801LL);
            WdLogGlobalForLineNumber = 222;
            wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v22);
          }
        }
        else
        {
          WdLogSingleEntry0(7LL);
          WdLogGlobalForLineNumber = 216;
          v7 = -1073741811;
        }
      }
      else
      {
        WdLogSingleEntry1(7LL, v11);
        WdLogGlobalForLineNumber = 209;
      }
      wistd::unique_ptr<_KEY_VALUE_PARTIAL_INFORMATION,DxgMonitor::byte_array_deleter<_KEY_VALUE_PARTIAL_INFORMATION>>::reset(
        (void **)&v23,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(7LL, v10);
      WdLogGlobalForLineNumber = 198;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, v6);
    WdLogGlobalForLineNumber = 190;
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&KeyHandle);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v21);
  return v7;
}
