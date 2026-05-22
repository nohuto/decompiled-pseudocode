/*
 * XREFs of ?SetPenDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180187C50
 * Callers:
 *     ??0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180185DEC (--0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetPenDevices@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180187C98 (-SetPenDevices@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincip.c)
 */

void __fastcall BamoHapticDeviceManagerPrincipal::SetPenDevices(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoHapticDeviceManagerPrincipalImpl::SetPenDevices(
    (BamoImpl::BamoHapticDeviceManagerPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
