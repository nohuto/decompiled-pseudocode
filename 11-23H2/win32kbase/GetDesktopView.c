/*
 * XREFs of GetDesktopView @ 0x1C00BDF44
 * Callers:
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00DE4B0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*GetDesktopView())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02951F0;
  if ( qword_1C02951F0 )
    return (__int64 (*)(void))qword_1C02951F0();
  return result;
}
