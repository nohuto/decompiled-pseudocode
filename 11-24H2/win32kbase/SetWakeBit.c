/*
 * XREFs of SetWakeBit @ 0x140095C28
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140062790 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     PostUpdateKeyStateEvent @ 0x140095730 (PostUpdateKeyStateEvent.c)
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall SetWakeBit(__int64 a1, __int64 a2))(__int64, _QWORD)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *result)(__int64, _QWORD); // rax

  v2 = a2;
  result = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 1344LL);
  if ( result )
    return (__int64 (__fastcall *)(__int64, _QWORD))result(a1, v2);
  return result;
}
