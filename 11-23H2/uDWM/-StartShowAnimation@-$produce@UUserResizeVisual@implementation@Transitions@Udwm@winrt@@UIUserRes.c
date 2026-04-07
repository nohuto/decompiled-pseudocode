/*
 * XREFs of ?StartShowAnimation@?$produce@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@UIUserResizeVisual@345@@impl@winrt@@UEAAHXZ @ 0x180104760
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180037364 (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180041E40 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z @ 0x1800A330C (-StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z.c)
 *     ?AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ @ 0x1801044A0 (-AnimationDuration@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAMXZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::UserResizeVisual,winrt::Udwm::Transitions::IUserResizeVisual>::StartShowAnimation(
        unsigned __int64 a1)
{
  __int64 v1; // rbx
  CAcrylicSheet *v2; // rdi
  float v3; // xmm0_4
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (a1 - 8) & ((unsigned __int128)-(__int128)a1 >> 64);
  try
  {
    CVisual::SetOpacity(
      *(CVisual **)(*(_QWORD *)(*(_QWORD *)(((a1 - 8) & ((unsigned __int128)-(__int128)a1 >> 64)) + 0x48) + 336LL)
                  + 440LL),
      0.0);
    CTopLevelWindow3D::StartAnimation(*(_QWORD *)(v1 + 72), 14);
    v2 = *(CAcrylicSheet **)(v1 + 40);
    v3 = winrt::Udwm::Transitions::implementation::UserResizeVisual::AnimationDuration((CTopLevelWindow3D **)v1);
    CAcrylicSheet::StartAlphaAnimation(v2, 0.0, 1.0, v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v5);
  }
  return result;
}
