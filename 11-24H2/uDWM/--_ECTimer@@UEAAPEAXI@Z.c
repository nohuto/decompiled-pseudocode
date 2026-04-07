/*
 * XREFs of ??_ECTimer@@UEAAPEAXI@Z @ 0x18007AB90
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CTimer@@UEAA@XZ @ 0x18007ABC8 (--1CTimer@@UEAA@XZ.c)
 */

CTimer *__fastcall CTimer::`vector deleting destructor'(CTimer *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CTimer::~CTimer(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
