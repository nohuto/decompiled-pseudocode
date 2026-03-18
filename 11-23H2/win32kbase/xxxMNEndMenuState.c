/*
 * XREFs of xxxMNEndMenuState @ 0x1C02333DC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*xxxMNEndMenuState())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02956A8;
  if ( qword_1C02956A8 )
    return (__int64 (*)(void))qword_1C02956A8();
  return result;
}
