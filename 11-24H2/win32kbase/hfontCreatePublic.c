/*
 * XREFs of hfontCreatePublic @ 0x140142270
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall hfontCreatePublic(__int64 a1, __int64 a2))(__int64, _QWORD)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  v2 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 1792LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, v2);
  return result;
}
