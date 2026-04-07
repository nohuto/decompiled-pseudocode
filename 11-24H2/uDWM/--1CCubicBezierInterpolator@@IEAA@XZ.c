/*
 * XREFs of ??1CCubicBezierInterpolator@@IEAA@XZ @ 0x1800B79FC
 * Callers:
 *     ?Release@CCubicBezierInterpolator@@UEAAKXZ @ 0x1800B8040 (-Release@CCubicBezierInterpolator@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCubicBezierInterpolator::~CCubicBezierInterpolator(CCubicBezierInterpolator *this)
{
  *(_QWORD *)this = &CCubicBezierInterpolator::`vftable';
  CCubicBezierInterpolator::Cleanup(this);
}
