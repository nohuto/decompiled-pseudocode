/*
 * XREFs of ?SetInputSiteManager@BamoInputSystemPrincipal@@UEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x180091160
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D7E8 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetInputSiteManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputSiteManagerPrincipal@@@Z @ 0x1800911A8 (-SetInputSiteManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoInputSiteManagerPrincip.c)
 */

void __fastcall BamoInputSystemPrincipal::SetInputSiteManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoInputSiteManagerPrincipal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoInputSystemPrincipalImpl::SetInputSiteManager((BamoImpl::BamoInputSystemPrincipalImpl *)(this + 1), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
