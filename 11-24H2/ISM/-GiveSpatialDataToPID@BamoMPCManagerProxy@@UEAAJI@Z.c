/*
 * XREFs of ?GiveSpatialDataToPID@BamoMPCManagerProxy@@UEAAJI@Z @ 0x180163300
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?GiveSpatialDataToPID@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180163350 (-GiveSpatialDataToPID@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoMPCManagerProxy::GiveSpatialDataToPID(BamoMPCManagerProxy *this, unsigned int a2)
{
  BamoMPCManagerProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMPCManagerProxyImpl::GiveSpatialDataToPID((BamoMPCManagerProxy *)((char *)v3 + 8), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
