/*
 * XREFs of std::_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Copy @ 0x1800ABAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@Z @ 0x18008205C (--0-$com_ptr_t@VDeviceDockServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDeviceDockServer@@@.c)
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_41eee22a06de91399d417ae04e8a558f__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy____::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  *a2 = off_1801E2AA0;
  wil::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>::com_ptr_t<DeviceDockServer,wil::err_returncode_policy>(
    a2 + 1,
    *(_QWORD *)(a1 + 8));
  return a2;
}
