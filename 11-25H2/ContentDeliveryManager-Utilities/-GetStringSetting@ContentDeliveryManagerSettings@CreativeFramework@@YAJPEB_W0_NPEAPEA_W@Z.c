/*
 * XREFs of ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800AD008
 * Callers:
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800AC9EC (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800AD4A8 (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A434 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003A158 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003F9A8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
        const WCHAR *this,
        LPCWSTR lpValue,
        const wchar_t *a3,
        _QWORD *a4)
{
  const WCHAR *v4; // rdi
  LSTATUS ValueW; // eax
  int v8; // ebx
  void *v9; // rax
  PVOID v10; // rsi
  unsigned int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  SIZE_T cb; // [rsp+80h] [rbp+18h] BYREF
  PVOID pvData; // [rsp+88h] [rbp+20h] BYREF

  v4 = lpValue;
  *a4 = 0LL;
  LODWORD(cb) = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, this, lpValue, 2u, 0LL, 0LL, (LPDWORD)&cb);
  v8 = ValueW;
  if ( ValueW > 0 )
    v8 = (unsigned __int16)ValueW | 0x80070000;
  if ( v8 < 0 )
  {
    if ( v8 == -2147024894 )
      return 0;
  }
  else
  {
    pvData = 0LL;
    v9 = CoTaskMemAlloc((unsigned int)cb);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &pvData,
      v9);
    v10 = pvData;
    v11 = RegGetValueW(HKEY_CURRENT_USER, this, v4, 2u, 0LL, pvData, (LPDWORD)&cb);
    if ( v11 )
    {
      if ( !v4 )
        v4 = word_1800E629C;
      v8 = wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0xBA,
             (__int64)"OneCoreUap\\Internal\\Shell\\inc\\ContentDeliveryManagerSettings.h",
             (const char *)v11,
             (unsigned __int64)"RegKey: %ws %ws",
             (const char *)this,
             v4);
    }
    else
    {
      pvData = 0LL;
      *a4 = v10;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&pvData);
  }
  return (unsigned int)v8;
}
