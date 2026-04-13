/*
 * XREFs of ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x180033224
 * Callers:
 *     ?RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x1800393E4 (-RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x180051BE4 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x180061C10 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A404 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003A298 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FB88 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
        LPCWSTR lpSubKey,
        LPCWSTR lpValue,
        const unsigned __int16 *a3,
        _QWORD *a4)
{
  char v4; // si
  const WCHAR *v5; // rdi
  LSTATUS ValueW; // eax
  signed int v9; // ebx
  LPVOID v10; // rax
  PVOID v11; // rsi
  unsigned int v12; // eax
  PVOID pvData[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  SIZE_T cb; // [rsp+88h] [rbp+20h] BYREF

  v4 = (char)a3;
  v5 = lpValue;
  *a4 = 0LL;
  LODWORD(cb) = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, lpSubKey, lpValue, 2u, 0LL, 0LL, (LPDWORD)&cb);
  v9 = ValueW;
  if ( ValueW > 0 )
    v9 = (unsigned __int16)ValueW | 0x80070000;
  if ( v9 < 0 )
  {
    if ( v4 && v9 == -2147024894 )
      return 0;
  }
  else
  {
    pvData[0] = 0LL;
    v10 = CoTaskMemAlloc((unsigned int)cb);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      pvData,
      v10);
    v11 = pvData[0];
    v12 = RegGetValueW(HKEY_CURRENT_USER, lpSubKey, v5, 2u, 0LL, pvData[0], (LPDWORD)&cb);
    if ( v12 )
    {
      if ( !v5 )
        v5 = word_1800E78BC;
      v9 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0xBA,
             (unsigned int)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
             (const char *)v12,
             (unsigned int)"RegKey: %ws %ws",
             (const char *)lpSubKey,
             v5);
    }
    else
    {
      pvData[0] = 0LL;
      *a4 = v11;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(pvData);
  }
  return (unsigned int)v9;
}
