/*
 * XREFs of ?put_Rect@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x180104D20
 * Callers:
 *     <none>
 * Callees:
 *     ?Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z @ 0x1801044CC (-Rect@UserResizeVisual@implementation@Transitions@Udwm@winrt@@QEAAXAEBU0Foundation@Windows@5@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::put_Rect(
        __int64 a1,
        struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  winrt::Udwm::Transitions::implementation::UserResizeVisual *v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (winrt::Udwm::Transitions::implementation::UserResizeVisual *)((a1 - 8) & -(__int64)(a1 != 0));
  try
  {
    winrt::Udwm::Transitions::implementation::UserResizeVisual::Rect(v4, a2, a3, a4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v6);
  }
  return result;
}
