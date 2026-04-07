/*
 * XREFs of ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x18002225C
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x18002F710 (-Initialize@CButton@@MEAAJXZ.c)
 * Callees:
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x180022370 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800225D0 (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

__int64 __fastcall CAtlasButton::Create(struct CAtlasButton **a1)
{
  CAtlasedImage *v2; // rax
  CAtlasedImage *v3; // rbx
  int TrustLevel; // eax
  unsigned int v5; // edi
  int v7; // r9d

  if ( !a1 )
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x82u, 0LL);
    return v5;
  }
  v2 = (CAtlasedImage *)DefaultHeap::AllocClear(0x98uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x98uLL);
    CAtlasedImage::CAtlasedImage(v3);
    *((_QWORD *)v3 + 16) = 0LL;
    *((_DWORD *)v3 + 35) = 0;
    *(_QWORD *)v3 = &CAtlasButton::`vftable';
    *((_DWORD *)v3 + 34) = 1;
    *((_BYTE *)v3 + 144) = 0;
    TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel(v3);
    v5 = TrustLevel;
    if ( TrustLevel >= 0 )
    {
      *a1 = v3;
      return 0;
    }
    v7 = TrustLevel;
  }
  else
  {
    v3 = 0LL;
    v5 = -2147024882;
    v7 = -2147024882;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x82u, 0LL);
  *a1 = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  return v5;
}
