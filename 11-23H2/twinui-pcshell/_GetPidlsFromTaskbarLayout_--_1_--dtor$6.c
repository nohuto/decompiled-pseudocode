/*
 * XREFs of _GetPidlsFromTaskbarLayout_::_1_::dtor$6 @ 0x1802C51A2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPidlsFromTaskbarLayout_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<IPinnedList>::~com_ptr<IPinnedList>((_QWORD *)(a2 + 72));
}
