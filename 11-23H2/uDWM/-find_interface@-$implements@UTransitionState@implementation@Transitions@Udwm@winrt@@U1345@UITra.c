/*
 * XREFs of ?find_interface@?$implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800FF860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TransitionState,winrt::Udwm::Transitions::TransitionState,Udwm::Transitions::ITransitionStateNative,Udwm::Transitions::ITransitionStateNativePrivate>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v2 = a1 - 24;
  v3 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionState>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionState> )
    v3 = a2[1] - 0x160685651F848FAELL;
  if ( !v3 )
  {
    v4 = v2 + 16;
    return v4 & -(__int64)(v2 != 0);
  }
  v5 = *a2 - winrt::impl::guid_v<Udwm::Transitions::ITransitionStateNative>;
  if ( *a2 == winrt::impl::guid_v<Udwm::Transitions::ITransitionStateNative> )
    v5 = a2[1] + 0x3F004508A35FD080LL;
  if ( v5 )
  {
    v6 = *a2 - winrt::impl::guid_v<Udwm::Transitions::ITransitionStateNativePrivate>;
    if ( *a2 == winrt::impl::guid_v<Udwm::Transitions::ITransitionStateNativePrivate> )
      v6 = a2[1] - 0x1424D6F75F502F8ALL;
    if ( v6 )
      return 0LL;
    v4 = v2 + 8;
    return v4 & -(__int64)(v2 != 0);
  }
  return v2;
}
