/*
 * XREFs of ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800D1910
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x1800D16D4 (--1CAppArrangementBase@@UEAA@XZ.c)
 */

void **__fastcall CAppArrangementDelayed::`scalar deleting destructor'(void **this, char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CAppArrangementBase::~CAppArrangementBase(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
