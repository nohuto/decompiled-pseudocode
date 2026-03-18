/*
 * XREFs of ApiSetEditionWakeSomeone @ 0x1400C1780
 * Callers:
 *     HandleDeferredInput @ 0x1400C06B0 (HandleDeferredInput.c)
 * Callees:
 *     EditionWakeSomeone @ 0x140126D18 (EditionWakeSomeone.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall ApiSetEditionWakeSomeone(__int64 a1, __int64 a2, unsigned int a3, __int64 a4))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4832LL);
  if ( result )
  {
    result = (__int64 (*)(void))result();
    if ( (int)result >= 0 )
      return (__int64 (*)(void))EditionWakeSomeone(a1, a2, a3, a4);
  }
  return result;
}
