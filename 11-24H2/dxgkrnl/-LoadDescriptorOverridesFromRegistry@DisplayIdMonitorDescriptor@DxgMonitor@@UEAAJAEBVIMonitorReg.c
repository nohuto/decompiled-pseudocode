/*
 * XREFs of ?LoadDescriptorOverridesFromRegistry@DisplayIdMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x140281080
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@QEAAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x14001EE78 (-reset@-$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U-$byte_array_deleter@U_KEY_VALUE_PARTIAL_I.c)
 *     ??4?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x140021E28 (--4-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@wistd@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV?$unique_ptr@U_KEY_VALUE_PARTIAL_INFORMATION@@U?$byte_array_deleter@U_KEY_VALUE_PARTIAL_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x140021E58 (-DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@AEAV-$unique_ptr@U_KEY_VALUE_PARTIAL.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x14004BEC4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140055340 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140058224 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x140097580 (-DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
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
  _DWORD *v12; // rbx
  unsigned int v13; // eax
  void *v14; // rax
  char *v15; // rdi
  unsigned int v16; // r8d
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  void *v20; // [rsp+38h] [rbp-41h] BYREF
  void *v21; // [rsp+40h] [rbp-39h] BYREF
  _DWORD *v22; // [rsp+48h] [rbp-31h] BYREF
  struct _UNICODE_STRING v23; // [rsp+50h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  __int128 v25; // [rsp+70h] [rbp-9h] BYREF
  __int128 v26; // [rsp+80h] [rbp+7h]
  _OWORD v27[2]; // [rsp+90h] [rbp+17h] BYREF
  int v28; // [rsp+B0h] [rbp+37h]
  wchar_t v29; // [rsp+B4h] [rbp+3Bh]

  if ( !(unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
    return 3221226021LL;
  v20 = 0LL;
  KeyHandle = 0LL;
  v28 = *(_DWORD *)L"DE";
  v29 = aDisplayidOverr[18];
  v23.Buffer = (wchar_t *)v27;
  v4 = *(_QWORD *)a2;
  v27[0] = *(_OWORD *)L"DISPLAYID_OVERRIDE";
  *(_QWORD *)&v23.Length = 2490404LL;
  v27[1] = *(_OWORD *)L"D_OVERRIDE";
  v5 = *(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorRegistry *, _QWORD, __int64, void **))(v4 + 16);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    &v20,
    0LL);
  v6 = v5(a2, 0LL, 1LL, &v20);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v20;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &KeyHandle,
      0LL);
    v10 = DxgkOpenRegistrySubkey(&KeyHandle, 0x20019u, v9, &v23);
    v7 = v10;
    if ( v10 >= 0 )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Data");
      v22 = 0LL;
      v11 = DxgkRetrieveValueFromRegistry(KeyHandle, &DestinationString, (void **)&v22);
      v7 = v11;
      if ( v11 >= 0 )
      {
        v12 = v22;
        if ( v22[1] == 3 && (v13 = v22[2]) != 0 )
        {
          v14 = (void *)operator new[](v13, 0x4D677844u, 256LL);
          v21 = v14;
          v15 = (char *)v14;
          if ( v14 )
          {
            memmove(v14, v12 + 3, (unsigned int)v12[2]);
            v16 = v12[2];
            v25 = 0LL;
            v26 = 0LL;
            DisplayID_Initialize((struct DisplayIDObj *)&v25, v15, v16);
            if ( (_BYTE)v26 )
            {
              *((_DWORD *)this + 14) = *((_DWORD *)this + 3);
              wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(
                (void **)this + 8,
                (void **)this + 2);
              v17 = v25;
              *((_DWORD *)this + 2) = 1;
              v18 = v26;
              *(_OWORD *)((char *)this + 24) = v17;
              *(_OWORD *)((char *)this + 40) = v18;
              *((_DWORD *)this + 3) = v12[2];
              wistd::unique_ptr<unsigned int [0],wistd::default_delete<unsigned int [0]>>::operator=(
                (void **)this + 2,
                &v21);
              wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v21);
              v7 = 0;
            }
            else
            {
              WdLogSingleEntry0(7LL);
              WdLogGlobalForLineNumber = 231;
              wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v21);
              v7 = -1071841277;
            }
          }
          else
          {
            v7 = -1073741801;
            WdLogSingleEntry1(2LL, -1073741801LL);
            WdLogGlobalForLineNumber = 222;
            wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v21);
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
        (void **)&v22,
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
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v20);
  return v7;
}
