/*
 * XREFs of ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800D1950
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppArrangementImmediate@@UEAA@XZ @ 0x1800D16FC (--1CAppArrangementImmediate@@UEAA@XZ.c)
 */

CAppArrangementImmediate *__fastcall CAppArrangementImmediate::`vector deleting destructor'(
        CAppArrangementImmediate *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  CAppArrangementImmediate::~CAppArrangementImmediate(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
