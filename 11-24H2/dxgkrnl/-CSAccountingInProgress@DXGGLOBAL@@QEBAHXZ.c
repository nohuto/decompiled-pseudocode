/*
 * XREFs of ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x14002B770
 * Callers:
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x14002ABC4 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x1402A4A70 (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1402E6A98 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?ReportDevicePowerState@DXGGLOBAL@@QEAAXPEAU_DEVICE_OBJECT@@W4_DEVICE_POWER_STATE@@@Z @ 0x1402E6C64 (-ReportDevicePowerState@DXGGLOBAL@@QEAAXPEAU_DEVICE_OBJECT@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x140336450 (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ?AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z @ 0x1403FF880 (-AddGPUTimeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGGLOBAL::CSAccountingInProgress(DXGGLOBAL *this)
{
  return *((_DWORD *)this + 522) && *((_BYTE *)this + 304344);
}
