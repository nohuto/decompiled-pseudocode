/*
 * XREFs of ?GetParentId@BamoActivatableEntityPrincipal@@UEAA_KXZ @ 0x1800B2AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

struct Microsoft::BamoImpl::ConnectionIndirector *__fastcall BamoActivatableEntityPrincipal::GetParentId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  v2 = this[7];
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v3, v4);
  return v2;
}
