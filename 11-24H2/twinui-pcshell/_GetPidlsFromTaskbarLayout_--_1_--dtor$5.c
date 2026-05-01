/*
 * XREFs of _GetPidlsFromTaskbarLayout_::_1_::dtor$5 @ 0x1806FCD52
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPidlsFromTaskbarLayout_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>::~com_ptr<Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs>(
           (_QWORD *)(a2 + 80),
           a2);
}
