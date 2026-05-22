/*
 * XREFs of ??$?9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800DC408
 * Callers:
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DC4E0 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180189730 (-RemoveInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180189B38 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::operator!=<PenHapticDevice,wil::err_exception_policy>(_QWORD *a1)
{
  return *a1 != 0LL;
}
