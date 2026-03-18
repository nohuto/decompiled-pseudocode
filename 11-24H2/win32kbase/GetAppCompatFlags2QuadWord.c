/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x140110BA4
 * Callers:
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x140110B6C (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     NtUserEnableMouseInPointer @ 0x14013A230 (NtUserEnableMouseInPointer.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall GetAppCompatFlags2QuadWord(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3480LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
