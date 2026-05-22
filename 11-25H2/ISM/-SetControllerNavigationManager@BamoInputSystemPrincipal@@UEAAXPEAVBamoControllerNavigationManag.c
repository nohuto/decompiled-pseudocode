/*
 * XREFs of ?SetControllerNavigationManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoControllerNavigationManagerPrincipal@@@Z @ 0x18000E270
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D7E8 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ?SetControllerNavigationManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoControllerNavigationManagerPrincipal@@@Z @ 0x18000E714 (-SetControllerNavigationManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoControllerNa.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

void __fastcall BamoInputSystemPrincipal::SetControllerNavigationManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoControllerNavigationManagerPrincipal *a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v4, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetControllerNavigationManager(
    (BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v4);
}
