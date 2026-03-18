/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1400A3894
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140062790 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PostIAMShellHookMessageEx(
        __int64 a1,
        __int64 a2,
        __int64 a3))(__int64, _QWORD, __int64)
{
  unsigned int v4; // edi
  __int64 (__fastcall *result)(__int64, _QWORD, __int64); // rax

  v4 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48)
                                                              + 3800LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD, __int64))result(a1, v4, a3);
  return result;
}
