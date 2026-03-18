/*
 * XREFs of ApiSetEditionResetIMEConversionStatus @ 0x1C00B83C8
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C00B8300 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionResetIMEConversionStatus(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02966B0;
  if ( qword_1C02966B0 )
  {
    result = (__int64 (*)(void))qword_1C02966B0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02966B8;
      if ( qword_1C02966B8 )
        return (__int64 (*)(void))qword_1C02966B8(a1, a2);
    }
  }
  return result;
}
