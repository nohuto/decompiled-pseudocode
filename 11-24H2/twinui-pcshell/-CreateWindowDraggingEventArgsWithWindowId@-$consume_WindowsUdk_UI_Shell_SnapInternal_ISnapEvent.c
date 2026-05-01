/*
 * XREFs of ?CreateWindowDraggingEventArgsWithWindowId@?$consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics@UISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUPoint@Foundation@Windows@3@AEBUWindowId@UI@63@@Z @ 0x18023A61C
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1801173F4 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 *     ??R_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18023A5F0 (--R_lambda_8cef40b0f04add78b87f76d5b45d2d32_@@QEBA@AEBUISnapEventFactoryStatics@SnapInternal@She.c)
 *     ?CreateWindowDraggingEventArgsWithWindowId@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@winrt@@SA@AEBUPoint@Foundation@Windows@6@AEBUWindowId@496@@Z @ 0x18029A224 (-CreateWindowDraggingEventArgsWithWindowId@SnapEventFactory@SnapInternal@Shell@UI@WindowsUdk@win.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_SnapInternal_ISnapEventFactoryStatics<winrt::WindowsUdk::UI::Shell::SnapInternal::ISnapEventFactoryStatics>::CreateWindowDraggingEventArgsWithWindowId(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // eax
  int v11; // [rsp+38h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-18h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v4 = *a1;
  v13 = 0LL;
  v11 = 0;
  v7 = *v4;
  v8 = *a4;
  v12 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v7 + 56))(v4, *a3, v8, &v13);
  winrt::check_hresult(&v14, v9, &v11);
  *a2 = v13;
  return a2;
}
