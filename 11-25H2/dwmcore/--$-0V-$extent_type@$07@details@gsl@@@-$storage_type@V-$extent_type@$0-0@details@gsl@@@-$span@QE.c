/*
 * XREFs of ??$?0V?$extent_type@$07@details@gsl@@@?$storage_type@V?$extent_type@$0?0@details@gsl@@@?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@QEAA@UKnownNotNull@12@V?$extent_type@$07@details@2@@Z @ 0x180033E60
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180034A90 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800387D0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall gsl::span<AnimationHelper::AnimatedProperty const * const,-1>::storage_type<gsl::details::extent_type<-1>>::storage_type<gsl::details::extent_type<-1>>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *result; // rax

  *a1 = 8LL;
  result = a1;
  a1[1] = a2;
  return result;
}
