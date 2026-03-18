/*
 * XREFs of ApiSetEditionHandleRawInputThrottlingTimer @ 0x140064258
 * Callers:
 *     ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x1400641B0 (-OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*ApiSetEditionHandleRawInputThrottlingTimer())(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 6920LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
    {
      result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 6928LL);
      if ( result )
        return (__int64 (*)(void))result();
    }
  }
  return result;
}
