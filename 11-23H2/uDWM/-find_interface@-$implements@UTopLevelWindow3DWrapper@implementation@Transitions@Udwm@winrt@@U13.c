/*
 * XREFs of ?find_interface@?$implements@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@34@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800FB260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::TopLevelWindow3DWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax

  v2 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper> )
    v2 = a2[1] + 0x13A7E326717F5958LL;
  if ( v2 )
  {
    v4 = *a2 - winrt::impl::guid_v<Udwm::Transitions::ITransitionAnimationVisualNative>;
    if ( *a2 == winrt::impl::guid_v<Udwm::Transitions::ITransitionAnimationVisualNative> )
      v4 = a2[1] - 0x73F63BA0C2CDDDB6LL;
    return (a1 - 16) & -(__int64)(v4 == 0);
  }
  else
  {
    result = a1 - 8;
    if ( a1 == 16 )
      return 0LL;
  }
  return result;
}
