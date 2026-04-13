/*
 * XREFs of ?get_PairingContext@MobilityExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A7E50
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A434 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003F9A8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?TryGetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAPEA_W@Z @ 0x1800A7B44 (-TryGetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAPEA_W@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

__int64 __fastcall MobilityExperienceManager::get_PairingContext(MobilityExperienceManager *this, HSTRING *a2)
{
  const wchar_t *v3; // rdx
  CreativeFramework::MobilityExperienceSettings *v4; // rcx
  wchar_t **v5; // r9
  HRESULT MobilityString; // eax
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  HSTRING_HEADER *v10; // rax
  wchar_t v12[4]; // [rsp+20h] [rbp-48h] BYREF
  const WCHAR *v13; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER v14; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a2 = 0LL;
  *(_QWORD *)v12 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)v12,
    0LL);
  MobilityString = CreativeFramework::MobilityExperienceSettings::TryGetMobilityString(v4, v3, v12, v5);
  v8 = MobilityString;
  if ( MobilityString >= 0 )
  {
    if ( !*(_QWORD *)v12
      || (v13 = *(const WCHAR **)v12,
          v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, &v13, v7),
          MobilityString = WindowsDuplicateString((HSTRING)v10[1].Reserved.Reserved1, a2),
          v8 = MobilityString,
          MobilityString >= 0) )
    {
      v8 = 0;
      goto LABEL_8;
    }
    v9 = 72LL;
  }
  else
  {
    v9 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)(unsigned int)MobilityString);
LABEL_8:
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)v12);
  return v8;
}
