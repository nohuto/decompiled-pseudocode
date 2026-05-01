/*
 * XREFs of _TaskbarPinningTelemetry::PinningActivity::TaskListTileMoved_::_1_::dtor$2 @ 0x1806D0E8E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskbarPinningTelemetry::PinningActivity::TaskListTileMoved_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a2 + 104);
}
