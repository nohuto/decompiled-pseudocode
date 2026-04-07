/*
 * XREFs of ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x18007CFB4
 * Callers:
 *     ?StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004A680 (-StartCrossfadeAnimation@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@.c)
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x18007CF00 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 * Callees:
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x180022370 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180074A40 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ??0CAnimationResource@@IEAA@XZ @ 0x18007D080 (--0CAnimationResource@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAnimationResource::Create(struct CAnimationResource **a1)
{
  CAnimationResource *v2; // rax
  struct CAnimationResource *v3; // rdi
  int TrustLevel; // eax
  unsigned int v5; // ebx
  int v6; // r9d

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x12u, 0LL);
    return v5;
  }
  v2 = (CAnimationResource *)DefaultHeap::AllocClear(0x60uLL);
  if ( !v2 )
  {
    v3 = 0LL;
    goto LABEL_7;
  }
  v3 = CAnimationResource::CAnimationResource(v2);
  if ( !v3 )
  {
LABEL_7:
    v5 = -2147024882;
    v6 = -2147024882;
    goto LABEL_8;
  }
  TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
  v5 = TrustLevel;
  if ( TrustLevel >= 0 )
  {
    *a1 = v3;
    return 0;
  }
  v6 = TrustLevel;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x12u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CAnimationResource::Release(v3);
  return v5;
}
