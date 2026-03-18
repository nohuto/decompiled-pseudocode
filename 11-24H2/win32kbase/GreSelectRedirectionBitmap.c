/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1400E07B4
 * Callers:
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 *     DestroyMonitorDCs @ 0x1400A2C70 (DestroyMonitorDCs.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GreSelectRedirectionBitmap(__int64 a1, __int64 a2))(__int64, __int64)
{
  __int64 (__fastcall *result)(__int64, __int64); // rax

  result = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 2592LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, __int64))result(a1, a2);
  return result;
}
