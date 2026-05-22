/*
 * XREFs of _MPCManager::MPCManager_::_1_::dtor$1 @ 0x1801CF5D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall MPCManager::MPCManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::BaseBamoConnection,wil::err_returncode_policy>((Microsoft::Bamo::BaseBamoConnection **)(*(_QWORD *)(a2 + 64) + 64LL));
}
