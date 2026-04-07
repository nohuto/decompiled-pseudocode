/*
 * XREFs of ?StartHideAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHPEAX@Z @ 0x1800EB8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate@345@@Z @ 0x1800EB8F0 (-StartHideAnimation@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXUUnloadDelegate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::StartHideAnimation(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  try
  {
    winrt::Udwm::Transitions::implementation::UserResizeVisual::StartHideAnimation();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
