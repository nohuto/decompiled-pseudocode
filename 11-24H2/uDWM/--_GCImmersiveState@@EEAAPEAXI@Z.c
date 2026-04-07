/*
 * XREFs of ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x18007B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveState@@EEAA@XZ @ 0x18007B308 (--1CImmersiveState@@EEAA@XZ.c)
 */

CImmersiveState *__fastcall CImmersiveState::`scalar deleting destructor'(CImmersiveState *this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CImmersiveState::~CImmersiveState(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
