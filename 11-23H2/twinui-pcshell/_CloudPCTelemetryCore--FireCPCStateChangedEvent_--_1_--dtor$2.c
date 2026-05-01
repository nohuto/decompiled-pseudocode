/*
 * XREFs of _CloudPCTelemetryCore::FireCPCStateChangedEvent_::_1_::dtor$2 @ 0x180736045
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CloudPCTelemetryCore::FireCPCStateChangedEvent_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a2 + 160), a2);
}
