/*
 * XREFs of ?SetHapticDeviceManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoHapticDeviceManagerPrincipal@@@Z @ 0x18012E7C0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000DF48 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHapticDeviceManagerPrincipal@@@Z @ 0x18012E808 (-SetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHapticDeviceManagerP.c)
 */

void __fastcall BamoInputSystemPrincipal::SetHapticDeviceManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoHapticDeviceManagerPrincipal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetHapticDeviceManager(
    (BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
