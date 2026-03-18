/*
 * XREFs of ApiSetProcessHidRawInput @ 0x14013ACB0
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1400D69F0 (RIMProcessAnyPointerDeviceInput.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401972C4 (RIMOnAsyncWorkItemNotification.c)
 *     rimProcessHidInput @ 0x1401ED924 (rimProcessHidInput.c)
 * Callees:
 *     IsProcessHidRawInputSupported @ 0x1400C9610 (IsProcessHidRawInputSupported.c)
 *     ProcessHidRawInput @ 0x1400F8004 (ProcessHidRawInput.c)
 */

__int64 (__fastcall *__fastcall ApiSetProcessHidRawInput(
        __int64 a1,
        __int64 a2,
        unsigned int a3))(__int64, __int64, _QWORD)
{
  __int64 (__fastcall *result)(__int64, __int64, _QWORD); // rax

  result = (__int64 (__fastcall *)(__int64, __int64, _QWORD))IsProcessHidRawInputSupported(a1, a2);
  if ( (int)result >= 0 )
    return ProcessHidRawInput(a1, a2, a3);
  return result;
}
