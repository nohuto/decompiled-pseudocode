/*
 * XREFs of ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x180225BBC
 * Callers:
 *     ??_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z @ 0x180225B70 (--_ECScrollPositionKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z @ 0x1802AB780 (--_ECScrollScaleKeyframeAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECScrollKeyframeAnimation@@UEAAPEAXI@Z @ 0x1802AD9A0 (--_ECScrollKeyframeAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CScrollKeyframeAnimation::~CScrollKeyframeAnimation(CScrollKeyframeAnimation *this)
{
  *((_QWORD *)this + 68) = 0LL;
  *(_QWORD *)this = &CScrollKeyframeAnimation::`vftable';
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease((CPathData **)this + 87);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease((CPathData **)this + 77);
  CKeyframeAnimation::~CKeyframeAnimation(this);
}
