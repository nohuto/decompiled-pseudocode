/*
 * XREFs of ApiSetEditionSendIMENotification @ 0x1C02077D8
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C006C200 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionSendIMENotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02966E0;
  if ( qword_1C02966E0 )
  {
    result = (__int64 (*)(void))qword_1C02966E0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02966E8;
      if ( qword_1C02966E8 )
        return (__int64 (*)(void))qword_1C02966E8(a1, a2, a3, a4, a5);
    }
  }
  return result;
}
