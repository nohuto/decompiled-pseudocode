/*
 * XREFs of SpbCheckDce @ 0x14010441C
 * Callers:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SpbCheckDce(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2664LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
