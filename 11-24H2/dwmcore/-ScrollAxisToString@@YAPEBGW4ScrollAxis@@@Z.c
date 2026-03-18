/*
 * XREFs of ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x1800E19D8
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x1800E2EDC (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1800E4E60 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x1800E5D80 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 *     ?AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z @ 0x1800E7184 (-AdvanceInertiaToTimeInertiaModifier@CMotion@@AEAAMPEAVCExpressionValueStack@@_K@Z.c)
 *     ?StartInertia@CMotion@@IEAAXMM_N0@Z @ 0x1801EB738 (-StartInertia@CMotion@@IEAAXMM_N0@Z.c)
 *     ?StartInContact@CMotion@@IEAAX_N@Z @ 0x1801EB908 (-StartInContact@CMotion@@IEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall ScrollAxisToString(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"X";
  v1 = a1 - 1;
  if ( !v1 )
    return L"Y";
  if ( v1 == 1 )
    return L"Scale";
  return L"Unsupported Axis";
}
