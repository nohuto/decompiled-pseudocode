/*
 * XREFs of ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x1800B7A30
 * Callers:
 *     ??1CCubicBezierInterpolator@@IEAA@XZ @ 0x1800B79FC (--1CCubicBezierInterpolator@@IEAA@XZ.c)
 *     ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x1800B7C4C (-Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CCubicBezierInterpolator::Cleanup(CCubicBezierInterpolator *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v3, a2);
    *((_QWORD *)this + 2) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v4, a2);
    *((_QWORD *)this + 3) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    CDisplayBlackCurtainAnimatedVisual::operator delete(v5, a2);
    *((_QWORD *)this + 8) = 0LL;
  }
}
