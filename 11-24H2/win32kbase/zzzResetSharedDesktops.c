/*
 * XREFs of zzzResetSharedDesktops @ 0x14014DEB8
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall zzzResetSharedDesktops(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4))(__int64, _QWORD, _QWORD, _QWORD)
{
  unsigned int v6; // esi
  __int64 (__fastcall *result)(__int64, _QWORD, _QWORD, _QWORD); // rax

  v6 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2)
                                                                                 + 48)
                                                                     + 3720LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))result(a1, v6, a3, a4);
  return result;
}
