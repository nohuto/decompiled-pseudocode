/*
 * XREFs of IsMessageOnlyWindow @ 0x140094A24
 * Callers:
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1400948A8 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x14018A840 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA-AVCInputDest@@AEBU_InputHitTestResul.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall IsMessageOnlyWindow(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5104LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
