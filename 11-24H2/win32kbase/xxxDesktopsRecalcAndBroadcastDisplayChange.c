/*
 * XREFs of xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1400A3820
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6))(__int64, __int64, _QWORD, _QWORD, __int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD, _QWORD, __int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                                                        + 3832LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, __int64))result(a1, a2, a3, 0LL, a5, a6);
  return result;
}
