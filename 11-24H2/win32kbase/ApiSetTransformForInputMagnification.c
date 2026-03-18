/*
 * XREFs of ApiSetTransformForInputMagnification @ 0x1400AFB5C
 * Callers:
 *     RIMApplyTransforms @ 0x1400AF04C (RIMApplyTransforms.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1400AFA8C (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     TransformForInputMagnification @ 0x140118624 (TransformForInputMagnification.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetTransformForInputMagnification(__int64 a1, __int64 a2, __int64 a3))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4656LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))TransformForInputMagnification(a1, a2, a3);
  }
  return result;
}
