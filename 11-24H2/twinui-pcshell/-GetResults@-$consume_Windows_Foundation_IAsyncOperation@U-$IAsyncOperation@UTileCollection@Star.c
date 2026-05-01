/*
 * XREFs of ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@UTileCollection@StartScreen@UI@WindowsUdk@4@@impl@winrt@@QEBA@XZ @ 0x180539F48
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180050324 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?await_resume@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEBA@XZ @ 0x18053C72C (-await_resume@-$await_adapter@U-$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Foundation@Windows@winrt@@UAppInstallItem@InstallControl@Preview@Store@ApplicationModel@34@@impl@winrt@@QEBA@XZ @ 0x1805DCAB4 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UAppInstallItem@InstallCont.c)
 *     ??$?RAEBU?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEBW4AsyncStatus@123@@_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@QEBA?A_PAEBU?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEBW4AsyncStatus@234@@Z @ 0x18061C6D8 (--$-RAEBU-$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@AEB.c)
 * Callees:
 *     ?put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z @ 0x180050FE0 (-put_abi@winrt@@YAPEAPEAXAEAUIUnknown@Foundation@Windows@1@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

winrt *__fastcall winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,winrt::WindowsUdk::UI::StartScreen::TileCollection>::GetResults(
        __int64 *a1,
        winrt *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, void **); // rbx
  void **v5; // rax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-20h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  winrt *v11; // [rsp+58h] [rbp+10h]

  v11 = a2;
  *(_QWORD *)a2 = 0LL;
  v3 = *a1;
  v8 = 0;
  v9 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v3 + 64LL);
  v5 = winrt::put_abi(a2, (struct IUnknown *)a2);
  v6 = v4(v3, v5);
  winrt::check_hresult(&v10, v6, (__int64)&v8);
  return a2;
}
