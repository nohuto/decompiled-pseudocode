/*
 * XREFs of ??_GCCrossFade@@UEAAPEAXI@Z @ 0x18007D820
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStoryboard@@UEAA@XZ @ 0x18007D858 (--1CStoryboard@@UEAA@XZ.c)
 */

CCrossFade *__fastcall CCrossFade::`scalar deleting destructor'(CCrossFade *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CStoryboard::~CStoryboard(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
