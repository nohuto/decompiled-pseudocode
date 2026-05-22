/*
 * XREFs of ?SetInputObserverManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputObserverManagerPrincipal@@@Z @ 0x18000E4E0
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D7E8 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetInputObserverManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputObserverManagerPrincipal@@@Z @ 0x180092794 (-SetInputObserverManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputObserverManage.c)
 */

void __fastcall BamoInputSystemPrincipal::SetInputObserverManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoInputObserverManagerPrincipal *a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v4, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetInputObserverManager(
    (BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v4);
}
