/*
 * XREFs of ?Create@CDCompDesktopThumbnailCVI@@SAJPEAPEAV1@@Z @ 0x1800ECB00
 * Callers:
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180060D60 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 * Callees:
 *     ?GetTrustLevel@?$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@U1345@UITransitionAnimationVisualNative@@@impl@winrt@@MEBA?AW4TrustLevel@Foundation@Windows@3@XZ @ 0x180022370 (-GetTrustLevel@-$root_implements@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udw.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDesktopThumbnailCVI@@IEAA@XZ @ 0x18006DED8 (--0CDesktopThumbnailCVI@@IEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

__int64 __fastcall CDCompDesktopThumbnailCVI::Create(struct CDCompDesktopThumbnailCVI **a1)
{
  unsigned int v2; // edi
  CDesktopThumbnailCVI *v3; // rax
  CDesktopThumbnailCVI *v4; // rbx
  int TrustLevel; // eax
  int v6; // r9d

  if ( a1 )
  {
    v3 = (CDesktopThumbnailCVI *)DefaultHeap::AllocClear(0x48uLL);
    v4 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x48uLL);
      CDesktopThumbnailCVI::CDesktopThumbnailCVI(v4);
      *((_QWORD *)v4 + 7) = 0LL;
      *(_QWORD *)v4 = &CDCompDesktopThumbnailCVI::`vftable';
      *((_QWORD *)v4 + 8) = 0LL;
      TrustLevel = winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,ITransitionAnimationVisualNative>::GetTrustLevel();
      v2 = TrustLevel;
      if ( TrustLevel >= 0 )
      {
        *a1 = v4;
        return 0;
      }
      v6 = TrustLevel;
    }
    else
    {
      v4 = 0LL;
      v2 = -2147024882;
      v6 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x95u, 0LL);
    *a1 = 0LL;
    if ( v4 )
      CBaseObject::Release(v4);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x95u, 0LL);
  }
  return v2;
}
