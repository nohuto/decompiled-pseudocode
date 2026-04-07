/*
 * XREFs of ??0CCubicBezierInterpolator@@IEAA@NNNN@Z @ 0x1800B79B4
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800B7A80 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     <none>
 */

CCubicBezierInterpolator *__fastcall CCubicBezierInterpolator::CCubicBezierInterpolator(
        CCubicBezierInterpolator *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  CCubicBezierInterpolator *result; // rax

  *(_QWORD *)this = &CCubicBezierInterpolator::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 8) = 0LL;
  result = this;
  *((double *)this + 4) = a2;
  *((double *)this + 5) = a3;
  *((double *)this + 6) = a4;
  *((double *)this + 7) = a5;
  *((_DWORD *)this + 19) = 1;
  return result;
}
