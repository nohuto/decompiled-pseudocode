/*
 * XREFs of ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C020600C
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionFinalizeKoreanImeCompStrOnMouseClick(__int64 a1, unsigned int a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296B60;
  if ( qword_1C0296B60 )
  {
    result = (__int64 (*)(void))qword_1C0296B60();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296B68;
      if ( qword_1C0296B68 )
        return (__int64 (*)(void))qword_1C0296B68(a1, a2);
    }
  }
  return result;
}
