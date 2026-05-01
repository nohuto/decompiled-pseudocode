/*
 * XREFs of _GetPidlsFromTaskbarLayout_::_1_::dtor$5 @ 0x1802BAE5B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPidlsFromTaskbarLayout_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a2 + 64);
}
