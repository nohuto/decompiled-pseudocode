/*
 * XREFs of ?IsSystemProductValidForTaskbarIcon@Pinning@Mobility@@YA_NXZ @ 0x180034584
 * Callers:
 *     ??R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ @ 0x18002BA50 (--R_lambda_3a3b929e5d63e7f37c8f1fb2c9733fad_@@QEBA@XZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A404 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FB88 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

bool __fastcall Mobility::Pinning::IsSystemProductValidForTaskbarIcon(Mobility::Pinning *this)
{
  bool v1; // bl
  LPVOID v2; // rax
  const WCHAR *v3; // rdi
  SIZE_T cb; // [rsp+50h] [rbp+8h] BYREF
  PVOID pvData; // [rsp+58h] [rbp+10h] BYREF

  v1 = 1;
  LODWORD(cb) = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Hardware\\Description\\System\\BIOS",
          L"SystemProductName",
          2u,
          0LL,
          0LL,
          (LPDWORD)&cb) )
  {
    pvData = 0LL;
    v2 = CoTaskMemAlloc((unsigned int)cb);
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &pvData,
      v2);
    v3 = (const WCHAR *)pvData;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Hardware\\Description\\System\\BIOS",
            L"SystemProductName",
            2u,
            0LL,
            pvData,
            (LPDWORD)&cb) )
    {
      pvData = 0LL;
      v1 = CompareStringOrdinal(v3, -1, L"Surface Go", -1, 1) != 2;
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&pvData);
  }
  return v1;
}
