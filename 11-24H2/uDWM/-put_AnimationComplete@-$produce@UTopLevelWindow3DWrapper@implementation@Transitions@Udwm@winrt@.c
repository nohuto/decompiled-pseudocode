/*
 * XREFs of ?put_AnimationComplete@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAX@Z @ 0x1800E6810
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnimationCompletedHandler@345@@Z @ 0x1800E64A0 (-AnimationComplete@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBUAnima.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::put_AnimationComplete(
        __int64 a1,
        __int64 a2)
{
  winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *v2; // rcx
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::AnimationComplete(
      v2,
      (const struct winrt::Udwm::Transitions::AnimationCompletedHandler *)&v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
