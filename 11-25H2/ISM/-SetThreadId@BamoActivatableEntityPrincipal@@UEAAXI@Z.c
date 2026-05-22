/*
 * XREFs of ?SetThreadId@BamoActivatableEntityPrincipal@@UEAAXI@Z @ 0x18007EC30
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetThreadId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z @ 0x1800944D4 (-SetThreadId@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXI@Z.c)
 */

void __fastcall BamoActivatableEntityPrincipal::SetThreadId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoActivatableEntityPrincipalImpl::SetThreadId(
    (BamoImpl::BamoActivatableEntityPrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
