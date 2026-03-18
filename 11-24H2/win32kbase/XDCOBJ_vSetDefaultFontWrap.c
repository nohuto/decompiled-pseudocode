/*
 * XREFs of XDCOBJ_vSetDefaultFontWrap @ 0x1400DA678
 * Callers:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall XDCOBJ_vSetDefaultFontWrap(__int64 a1, __int64 a2))(__int64, _QWORD)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  v2 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1504LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, v2);
  return result;
}
