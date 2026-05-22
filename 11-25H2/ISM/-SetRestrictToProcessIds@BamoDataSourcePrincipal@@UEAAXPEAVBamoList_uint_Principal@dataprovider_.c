/*
 * XREFs of ?SetRestrictToProcessIds@BamoDataSourcePrincipal@@UEAAXPEAVBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180103330
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SetRestrictToProcessIds@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180103378 (-SetRestrictToProcessIds@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_uint_Principal@.c)
 */

void __fastcall BamoDataSourcePrincipal::SetRestrictToProcessIds(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  BamoImpl::BamoDataSourcePrincipalImpl::SetRestrictToProcessIds(
    (BamoImpl::BamoDataSourcePrincipalImpl *)(this + 1),
    a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
