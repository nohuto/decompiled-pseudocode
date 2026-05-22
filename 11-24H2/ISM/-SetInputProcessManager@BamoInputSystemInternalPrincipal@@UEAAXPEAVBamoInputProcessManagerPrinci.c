/*
 * XREFs of ?SetInputProcessManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoInputProcessManagerPrincipal@@@Z @ 0x18000D090
 * Callers:
 *     ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D0D8 (--0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetInputProcessManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputProcessManagerPrincipal@@@Z @ 0x180092BCC (-SetInputProcessManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputProcess.c)
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
