/*
 * XREFs of ??$?9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800C8240
 * Callers:
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF640 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180191250 (-RemoveInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180191658 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::operator!=<PenHapticDevice,wil::err_exception_policy>(_QWORD *a1)
{
  return *a1 != 0LL;
}
