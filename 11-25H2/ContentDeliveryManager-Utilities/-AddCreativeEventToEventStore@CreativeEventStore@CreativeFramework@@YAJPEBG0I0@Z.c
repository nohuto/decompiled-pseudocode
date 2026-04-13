/*
 * XREFs of ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18004DBB4
 * Callers:
 *     _lambda_929976d9f769b9ae6bfa1e1f0592e0ca_::operator() @ 0x18004CC48 (_lambda_929976d9f769b9ae6bfa1e1f0592e0ca_--operator().c)
 * Callees:
 *     ??$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z @ 0x180027B84 (--$SetSettingValue@K$03@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A434 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x18002E270 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x18002ECC8 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180033CB0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18003B28C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D630 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003F9A8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x180052BC4 (-GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 */

__int64 __fastcall CreativeFramework::CreativeEventStore::AddCreativeEventToEventStore(
        CreativeFramework::CreativeEventStore *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4)
{
  unsigned int v7; // r14d
  WCHAR *v8; // rbx
  int v9; // eax
  int v10; // edi
  bool *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int DoesKeyExist; // eax
  const unsigned __int16 *v15; // rdx
  unsigned __int16 **v16; // r8
  int UniqueTimestamp; // eax
  WCHAR *v18; // rdi
  int v19; // eax
  int v20; // esi
  WCHAR *v21; // r14
  __int64 v22; // r9
  int v23; // eax
  unsigned __int16 v25; // [rsp+30h] [rbp-40h] BYREF
  LPCWSTR lpValueName; // [rsp+38h] [rbp-38h] BYREF
  WCHAR *v27; // [rsp+40h] [rbp-30h] BYREF
  WCHAR *v28; // [rsp+48h] [rbp-28h] BYREF
  WCHAR *v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h]
  __int64 v31; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v28 = 0LL;
  v7 = (unsigned int)a3;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&v28,
    0LL);
  v8 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)&v29,
         L"%ws\\%ws",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEvents",
         this);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v8 = v29;
    v10 = 0;
    v28 = v29;
    v29 = 0LL;
    v31 = 0LL;
    v30 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v9);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 72LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)v12);
    goto LABEL_28;
  }
  LOBYTE(v25) = 0;
  DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::DoesKeyExist(v8, &v25, v11);
  v10 = DoesKeyExist;
  if ( DoesKeyExist < 0 )
  {
    v13 = 75LL;
LABEL_8:
    v12 = (unsigned int)DoesKeyExist;
    goto LABEL_9;
  }
  if ( !(_BYTE)v25 )
  {
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::CreateKey(v8, v15);
    v10 = DoesKeyExist;
    if ( DoesKeyExist < 0 )
    {
      v13 = 78LL;
      goto LABEL_8;
    }
    DoesKeyExist = CreativeFramework::ContentDeliveryManagerSettings::Details::SetSettingValue<unsigned long,4>(
                     v8,
                     0LL,
                     0);
    v10 = DoesKeyExist;
    if ( DoesKeyExist < 0 )
    {
      v13 = 83LL;
      goto LABEL_8;
    }
  }
  lpValueName = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&lpValueName,
    0LL);
  UniqueTimestamp = CreativeFramework::CreativeEventStore::GetUniqueTimestamp(
                      (CreativeFramework::CreativeEventStore *)v8,
                      (const unsigned __int16 *)&lpValueName,
                      v16);
  v10 = UniqueTimestamp;
  if ( UniqueTimestamp >= 0 )
  {
    v27 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (void **)&v27,
      0LL);
    v27 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v18 = 0LL;
    v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)&v29,
            L"%d,%ws,%ws",
            v7,
            a4,
            a2);
    v20 = v19;
    if ( v19 >= 0 )
    {
      v18 = v29;
      v20 = 0;
      v27 = v29;
      v21 = v29;
      v29 = 0LL;
      v31 = 0LL;
      v30 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v19);
      v21 = 0LL;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v29);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
        (const char *)(unsigned int)v20);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v27);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpValueName);
      v10 = v20;
      goto LABEL_28;
    }
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
            v8,
            lpValueName,
            v18,
            (const unsigned __int16 *)v22);
    v10 = v23;
    if ( v23 >= 0 )
    {
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v27);
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpValueName);
      v10 = 0;
      goto LABEL_28;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)v23);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CreativeEventStore.h",
      (const char *)(unsigned int)UniqueTimestamp);
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&lpValueName);
LABEL_28:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v28);
  return (unsigned int)v10;
}
