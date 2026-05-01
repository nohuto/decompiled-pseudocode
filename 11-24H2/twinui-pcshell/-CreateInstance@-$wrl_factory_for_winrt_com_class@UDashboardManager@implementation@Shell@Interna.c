/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1805CE360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??$make@V?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18021A098 (--$make@V-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x180223220 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::DashboardManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  _QWORD *v7; // rax
  char v8; // r9
  __int16 v9; // r8
  __int16 v10; // dx
  unsigned int v11; // ebx
  const char *v12; // r9
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int16 v16; // [rsp+34h] [rbp-24h]
  __int16 v17; // [rsp+36h] [rbp-22h]
  char v18; // [rsp+38h] [rbp-20h]
  char v19; // [rsp+39h] [rbp-1Fh]
  char v20; // [rsp+3Ah] [rbp-1Eh]
  char v21; // [rsp+3Bh] [rbp-1Dh]
  char v22; // [rsp+3Ch] [rbp-1Ch]
  char v23; // [rsp+3Dh] [rbp-1Bh]
  char v24; // [rsp+3Eh] [rbp-1Ah]
  char v25; // [rsp+3Fh] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      v7 = winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>,>(&v14);
      v8 = *((_BYTE *)a3 + 8);
      v9 = *((_WORD *)a3 + 3);
      v10 = *((_WORD *)a3 + 2);
      v15 = *a3;
      v16 = v10;
      v17 = v9;
      v18 = v8;
      v19 = *((_BYTE *)a3 + 9);
      v20 = *((_BYTE *)a3 + 10);
      v21 = *((_BYTE *)a3 + 11);
      v22 = *((_BYTE *)a3 + 12);
      v23 = *((_BYTE *)a3 + 13);
      v24 = *((_BYTE *)a3 + 14);
      v25 = *((_BYTE *)a3 + 15);
      v11 = *winrt::Windows::Foundation::IUnknown::as(v7, &v13, (__int64)&v15, (__int64)a4);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
      result = v11;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x49,
                             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
                             v12);
    }
  }
  return result;
}
