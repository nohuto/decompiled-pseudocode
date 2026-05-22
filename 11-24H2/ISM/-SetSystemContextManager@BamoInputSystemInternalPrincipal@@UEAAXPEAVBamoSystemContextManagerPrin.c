/*
 * XREFs of ?SetSystemContextManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoSystemContextManagerPrincipal@@@Z @ 0x180092160
 * Callers:
 *     ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D0D8 (--0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetSystemContextManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemContextManagerPrincipal@@@Z @ 0x1800921A8 (-SetSystemContextManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemConte.c)
 */

void __fastcall BamoInputSystemInternalPrincipal::SetSystemContextManager(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoSystemContextManagerPrincipal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoInputSystemInternalPrincipalImpl::SetSystemContextManager(
    (BamoImpl::BamoInputSystemInternalPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
