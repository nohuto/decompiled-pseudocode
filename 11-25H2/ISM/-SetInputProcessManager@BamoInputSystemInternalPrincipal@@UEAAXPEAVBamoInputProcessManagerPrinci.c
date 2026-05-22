/*
 * XREFs of ?SetInputProcessManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoInputProcessManagerPrincipal@@@Z @ 0x18000C930
 * Callers:
 *     ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000C978 (--0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetInputProcessManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputProcessManagerPrincipal@@@Z @ 0x180092A2C (-SetInputProcessManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputProcess.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoInputSystemInternalPrincipal::SetInputProcessManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoInputProcessManagerPrincipal *a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v4, this[3]);
  BamoImpl::BamoInputSystemInternalPrincipalImpl::SetInputProcessManager(
    (BamoImpl::BamoInputSystemInternalPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v4);
}
