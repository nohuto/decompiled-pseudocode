/*
 * XREFs of ApiSetEditionGetKeyStateUpdateParamsForRawInput @ 0x1C00A7044
 * Callers:
 *     UpdateKeyStateForMessage @ 0x1C00A6E40 (UpdateKeyStateForMessage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionGetKeyStateUpdateParamsForRawInput(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296710;
  if ( qword_1C0296710 )
  {
    result = (__int64 (*)(void))qword_1C0296710();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296718;
      if ( qword_1C0296718 )
        return (__int64 (*)(void))qword_1C0296718(a1, a2, a3, a4, a5);
    }
  }
  return result;
}
