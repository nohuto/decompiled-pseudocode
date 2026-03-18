/*
 * XREFs of HasHidTable @ 0x1400E3A64
 * Callers:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x14005FEB4 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1400E38D8 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x140189DE4 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14021E150 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall HasHidTable(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax

  result = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1144LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(a1);
  return result;
}
