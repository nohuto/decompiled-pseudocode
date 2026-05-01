/*
 * XREFs of _SnapInteraction::SendTelemetryAsync_::_1_::dtor$0 @ 0x1806D6AF3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapInteraction::SendTelemetryAsync_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<IApplicationView>::~com_ptr<IApplicationView>(*(__int64 **)(a2 + 128));
}
