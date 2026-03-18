/*
 * XREFs of ApiSetAdjustLinearity @ 0x1C020599C
 * Callers:
 *     RIMTransformCoordinates @ 0x1C01901B4 (RIMTransformCoordinates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetAdjustLinearity(__int64 a1, __int64 a2, __int64 a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296318;
  if ( qword_1C0296318 )
  {
    result = (__int64 (*)(void))qword_1C0296318();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296320;
      if ( qword_1C0296320 )
        return (__int64 (*)(void))qword_1C0296320(a1, a2, a3, a4);
    }
  }
  return result;
}
