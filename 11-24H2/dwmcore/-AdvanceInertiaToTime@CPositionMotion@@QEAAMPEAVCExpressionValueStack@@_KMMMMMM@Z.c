/*
 * XREFs of ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1800E50D0
 * Callers:
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E4E60 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 * Callees:
 *     ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x1800E5D28 (-AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x1800E5D80 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 */

float __fastcall CPositionMotion::AdvanceInertiaToTime(
        CPositionMotion *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  struct CExpressionValueStack *v10; // rdx
  CMotion *v11; // rcx
  unsigned __int64 v12; // r8
  float result; // xmm0_4

  *((float *)this + 28) = a7;
  *((float *)this + 29) = a8;
  *((float *)this + 30) = a9;
  CPositionMotion::AdvanceDeltaDueToScale(this);
  result = CMotion::AdvanceInertiaToTime(v11, v10, v12, a5, a6, a4);
  *((_DWORD *)this + 35) = *((_DWORD *)this + 28);
  *((float *)this + 34) = result;
  return result;
}
