/*
 * XREFs of ?PrefetchDisplayName@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXPEBG@Z @ 0x1800A9D2C
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x1800AA15C (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A434 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003F9A8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z @ 0x180081CE8 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEB_WI@Z.c)
 *     ??0MRTHelperForPackage@ShellMRTHelper@@QEAA@PEBG@Z @ 0x1800A97F4 (--0MRTHelperForPackage@ShellMRTHelper@@QEAA@PEBG@Z.c)
 *     ??1MRTHelperBase@ShellMRTHelper@@QEAA@XZ @ 0x1800A98B4 (--1MRTHelperBase@ShellMRTHelper@@QEAA@XZ.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x1800A9E2C (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::PrefetchDisplayName(
        HSTRING *this,
        char *a2)
{
  int v3; // eax
  const wchar_t *v4; // rdx
  unsigned __int64 v5; // r8
  HRESULT v6; // eax
  int v7[26]; // [rsp+20h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  const wchar_t *v9; // [rsp+A0h] [rbp+18h] BYREF

  ShellMRTHelper::MRTHelperForPackage::MRTHelperForPackage((ShellMRTHelper::MRTHelperForPackage *)v7, a2);
  v9 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (void **)&v9,
    0LL);
  v3 = ShellMRTHelper::MRTHelperBase::Resolve(v7, 0LL, L"ms-resource:ActionCenterGroupName", &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v3,
      v7[0]);
  v4 = v9;
  if ( v9 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v9[v5] );
    if ( v5 > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      goto LABEL_10;
    }
  }
  else
  {
    LODWORD(v5) = 0;
    v4 = word_1800E629C;
  }
  v6 = Microsoft::WRL::Wrappers::HString::Set(this + 10, v4, v5);
LABEL_10:
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappdisplayinfo.cpp",
      (const char *)(unsigned int)v6,
      v7[0]);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v9);
  ShellMRTHelper::MRTHelperBase::~MRTHelperBase((ShellMRTHelper::MRTHelperBase *)v7);
}
