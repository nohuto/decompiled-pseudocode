/*
 * XREFs of ?IsPastDelay@CNaturalAnimation@@AEAA_NXZ @ 0x1801BB1E8
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800129B0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801BAE20 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1801BB5B0 (-ToMilliseconds@TimeDelta@@QEBAHXZ.c)
 */

bool __fastcall CNaturalAnimation::IsPastDelay(CNaturalAnimation *this)
{
  TimeDelta *v1; // rdi

  v1 = (CNaturalAnimation *)((char *)this + 408);
  if ( (int)TimeDelta::ToMilliseconds((CNaturalAnimation *)((char *)this + 408)) >= *((_DWORD *)this + 100) )
    return 1;
  *(_QWORD *)v1 = CComposition::GetFrameTargetTime(*((CComposition **)this + 3))
                - *((_QWORD *)this + 48)
                - Time::s_luBegin.QuadPart;
  return (int)TimeDelta::ToMilliseconds(v1) >= *((_DWORD *)this + 100);
}
