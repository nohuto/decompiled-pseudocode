/*
 * XREFs of ??_GCAnimationClock@@UEAAPEAXI@Z @ 0x180070150
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAnimationClock@@UEAA@XZ @ 0x180070188 (--1CAnimationClock@@UEAA@XZ.c)
 */

CAnimationClock *__fastcall CAnimationClock::`scalar deleting destructor'(CAnimationClock *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CAnimationClock::~CAnimationClock(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
