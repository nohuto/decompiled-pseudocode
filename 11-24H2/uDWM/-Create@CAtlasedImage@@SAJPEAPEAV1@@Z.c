/*
 * XREFs of ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x1800224FC
 * Callers:
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180021928 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180023E20 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x180022370 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800225D0 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CAtlasedImage::Create(struct CAtlasedImage **a1)
{
  CAtlasedImage *v2; // rax
  struct CAtlasedImage *v3; // rdi
  int TrustLevel; // eax
  unsigned int v5; // ebx
  int v7; // r9d

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9Du, 0LL);
    return v5;
  }
  v2 = (CAtlasedImage *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v2 )
  {
    v3 = 0LL;
    goto LABEL_7;
  }
  v3 = CAtlasedImage::CAtlasedImage(v2);
  if ( !v3 )
  {
LABEL_7:
    v5 = -2147024882;
    v7 = -2147024882;
    goto LABEL_8;
  }
  TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
  v5 = TrustLevel;
  if ( TrustLevel >= 0 )
  {
    *a1 = v3;
    return 0;
  }
  v7 = TrustLevel;
LABEL_8:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x9Du, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return v5;
}
