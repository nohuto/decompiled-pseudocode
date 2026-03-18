/*
 * XREFs of GreHintDCWnd @ 0x1400D625C
 * Callers:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GreHintDCWnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5))(__int64, __int64, __int64, _QWORD, int)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, _QWORD, int); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(
                                                                                            a1,
                                                                                            a2)
                                                                                        + 24)
                                                                            + 2624LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int))result(a1, a2, a3, a4, a5);
  return result;
}
