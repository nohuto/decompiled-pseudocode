/*
 * XREFs of _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1800C54C4
 * Callers:
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275678 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180275788 (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282774 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180282D70 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D8E08 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x1800486E0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180048710 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x1800C5610 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@GU.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800C5894 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??$_Assign_counted_range@PEBH@?$vector@HV?$allocator@H@std@@@std@@AEAAXPEBH_K@Z @ 0x18022AA40 (--$_Assign_counted_range@PEBH@-$vector@HV-$allocator@H@std@@@std@@AEAAXPEBH_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion(__int64 a1, void **a2)
{
  size_t size_of; // rax
  _QWORD *v5; // rax
  void *v6; // rdx
  int i; // edi
  _BYTE v9[152]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v10[128]; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v11; // [rsp+150h] [rbp+18h] BYREF

  v11 = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  size_of = std::_Get_size_of_n<4>(2uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 16) = v5 + 1;
  *v5 = 0LL;
  *(_QWORD *)(a1 + 8) = v5 + 1;
  std::wstring::wstring((char **)(a1 + 24), &pvData);
  if ( (void **)(a1 + 24) != a2 )
  {
    v6 = a2;
    if ( (unsigned __int64)a2[3] > 7 )
      v6 = *a2;
    std::wstring::assign((void *)(a1 + 24), v6);
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
    v9,
    a2);
  std::basic_istream<unsigned short>::operator>>(v9, *(_QWORD *)a1);
  for ( i = 1; i < 2; ++i )
  {
    if ( !(unsigned __int16)std::basic_istream<unsigned short>::get(v9) )
    {
      v11 = 0LL;
      std::vector<int>::_Assign_counted_range<int const *>(a1, &v11, 2LL);
      break;
    }
    std::basic_istream<unsigned short>::operator>>(v9, *(_QWORD *)a1 + 4LL * i);
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v10);
  std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(v10);
  return a1;
}
