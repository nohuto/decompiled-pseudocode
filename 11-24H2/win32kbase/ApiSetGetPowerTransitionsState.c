/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x14005447C
 * Callers:
 *     RIMGetCurrentPowerInputMode @ 0x1400543B0 (RIMGetCurrentPowerInputMode.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1400F0E64 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimDisplayOffPolicyUpdateStateAndApply @ 0x140180FF0 (rimDisplayOffPolicyUpdateStateAndApply.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 (*__fastcall ApiSetGetPowerTransitionsState(void *a1))(void)
{
  __int64 (*result)(void); // rax

  memset(a1, 0, 0x40uLL);
  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4560LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 4568LL);
      if ( result )
        return (__int64 (*)(void))((__int64 (__fastcall *)(void *))result)(a1);
    }
  }
  return result;
}
