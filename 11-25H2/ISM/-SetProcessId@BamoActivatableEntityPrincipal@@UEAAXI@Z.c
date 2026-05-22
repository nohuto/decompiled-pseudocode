/*
 * XREFs of ?SetProcessId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x18007F100
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetProcessId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z @ 0x18008F388 (-SetProcessId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z.c)
 */

void __fastcall BamoActivatableEntityPrincipal::SetProcessId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoActivatableEntityPrincipalImpl::SetProcessId(
    (BamoImpl::BamoActivatableEntityPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
