/*
 * XREFs of GetStyleWindow @ 0x14000F1FC
 * Callers:
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     UserSetDCVisRgn @ 0x14000F460 (UserSetDCVisRgn.c)
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetStyleWindow(__int64 a1))(__int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2616LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64))result(a1, 2848LL);
  return result;
}
