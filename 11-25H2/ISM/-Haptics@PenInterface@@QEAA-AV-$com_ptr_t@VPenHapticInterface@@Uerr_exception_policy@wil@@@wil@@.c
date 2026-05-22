/*
 * XREFs of ?Haptics@PenInterface@@QEAA?AV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1801891D0
 * Callers:
 *     ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180189730 (-RemoveInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180189B38 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180109450 (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall PenInterface::Haptics(__int64 a1, __int64 *a2)
{
  wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
    a2,
    (__int64 *)(a1 + 136));
  return a2;
}
