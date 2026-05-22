/*
 * XREFs of _PenHapticDevice::UpdateBamoProperties_::_1_::dtor$2 @ 0x1801D85B9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenHapticDevice::UpdateBamoProperties_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)(a2 + 168));
}
