/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18063B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x180223220 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$create_and_initialize@V?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@impl@winrt@@YAPEAV?$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@Shell@Internal@Windows@winrt@@@details@wil@@XZ @ 0x18063B584 (--$create_and_initialize@V-$module_count_wrapper@VLaunchRemoteDesktopUriHandler@implementation@S.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  _OWORD *v7; // rax
  __int64 v8; // rbx
  char v9; // r8
  __int16 v10; // dx
  __int16 v11; // cx
  unsigned int v12; // edi
  const char *v13; // r9
  int v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h] BYREF
  int v16; // [rsp+30h] [rbp-28h] BYREF
  __int16 v17; // [rsp+34h] [rbp-24h]
  __int16 v18; // [rsp+36h] [rbp-22h]
  char v19; // [rsp+38h] [rbp-20h]
  char v20; // [rsp+39h] [rbp-1Fh]
  char v21; // [rsp+3Ah] [rbp-1Eh]
  char v22; // [rsp+3Bh] [rbp-1Dh]
  char v23; // [rsp+3Ch] [rbp-1Ch]
  char v24; // [rsp+3Dh] [rbp-1Bh]
  char v25; // [rsp+3Eh] [rbp-1Ah]
  char v26; // [rsp+3Fh] [rbp-19h]
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
      v7 = winrt::impl::create_and_initialize<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::LaunchRemoteDesktopUriHandler>,>();
      v8 = ((unsigned __int64)v7 + 8) & -(__int64)(v7 != 0LL);
      v15 = v8;
      v9 = *((_BYTE *)a3 + 8);
      v10 = *((_WORD *)a3 + 3);
      v11 = *((_WORD *)a3 + 2);
      v16 = *a3;
      v17 = v11;
      v18 = v10;
      v19 = v9;
      v20 = *((_BYTE *)a3 + 9);
      v21 = *((_BYTE *)a3 + 10);
      v22 = *((_BYTE *)a3 + 11);
      v23 = *((_BYTE *)a3 + 12);
      v24 = *((_BYTE *)a3 + 13);
      v25 = *((_BYTE *)a3 + 14);
      v26 = *((_BYTE *)a3 + 15);
      v12 = *winrt::Windows::Foundation::IUnknown::as(&v15, &v14, (__int64)&v16, (__int64)a4);
      if ( v8 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v15);
      result = v12;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x49,
                             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
                             v13);
    }
  }
  return result;
}
