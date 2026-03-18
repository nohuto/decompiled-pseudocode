/*
 * XREFs of RFONT_vMakeInactive @ 0x1400DDCAC
 * Callers:
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140036330 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall RFONT_vMakeInactive(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 2000LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
