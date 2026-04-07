/*
 * XREFs of ??_ECAccentTransitionAnimatedVisual@@UEAAPEAXI@Z @ 0x1800A1E00
 * Callers:
 *     ??_ECAccentTransitionAnimatedVisual@@W7EAAPEAXI@Z @ 0x1800A1DF0 (--_ECAccentTransitionAnimatedVisual@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAccentTransitionAnimatedVisual@@UEAA@XZ @ 0x1800A1DA8 (--1CAccentTransitionAnimatedVisual@@UEAA@XZ.c)
 */

CAccentTransitionAnimatedVisual *__fastcall CAccentTransitionAnimatedVisual::`vector deleting destructor'(
        CAccentTransitionAnimatedVisual *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CAccentTransitionAnimatedVisual::~CAccentTransitionAnimatedVisual(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
