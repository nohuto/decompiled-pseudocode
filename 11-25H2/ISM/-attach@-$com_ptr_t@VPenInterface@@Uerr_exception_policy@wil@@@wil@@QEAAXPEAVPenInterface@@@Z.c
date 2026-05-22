/*
 * XREFs of ?attach@?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z @ 0x1800977F0
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800B4444 (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z @ 0x1801862D0 (-AttachRIMDevice@HapticDeviceManager@@QEAAXPEAX0@Z.c)
 *     ?Initialize@PenInterface@@QEAAJXZ @ 0x1801885DC (-Initialize@PenInterface@@QEAAJXZ.c)
 *     ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180189730 (-RemoveInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 *     ??4?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18018BE0C (--4-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<PenInterface,wil::err_exception_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
