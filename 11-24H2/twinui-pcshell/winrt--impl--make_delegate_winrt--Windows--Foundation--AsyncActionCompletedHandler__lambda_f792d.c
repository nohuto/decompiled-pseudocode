/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___ @ 0x1805F1DD8
 * Callers:
 *     ?HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@@Z @ 0x1805F4850 (-HideMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXPEAUHWND__@@.c)
 * Callees:
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805F2980 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_f792dc060f2f4a2e1ed0f6aa4fd4e86d___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *result; // rax
  _QWORD *v6; // [rsp+40h] [rbp+8h]

  v6 = operator new(0x168uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v6 + 1));
  v4 = *a2;
  *a2 = 0LL;
  v6[2] = v4;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    v6 + 3,
    a2 + 1);
  v6[3] = &MeetAndChatTelemetry::HideFlyout::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v6 = off_180757C38;
  result = a1;
  *a1 = v6;
  return result;
}
