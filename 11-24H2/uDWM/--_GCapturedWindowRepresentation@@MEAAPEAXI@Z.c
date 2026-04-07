/*
 * XREFs of ??_GCapturedWindowRepresentation@@MEAAPEAXI@Z @ 0x1800A8780
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CapturedWindowRepresentation@@MEAA@XZ @ 0x1800A86B0 (--1CapturedWindowRepresentation@@MEAA@XZ.c)
 */

CapturedWindowRepresentation *__fastcall CapturedWindowRepresentation::`scalar deleting destructor'(
        CapturedWindowRepresentation *this,
        unsigned int a2)
{
  char v2; // bl
  const struct std::nothrow_t *v4; // rdx

  v2 = a2;
  CapturedWindowRepresentation::~CapturedWindowRepresentation(this, a2);
  if ( (v2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
