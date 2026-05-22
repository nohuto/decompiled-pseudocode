/*
 * XREFs of ?OnDockDeviceAdded@BamoDeviceDockClientProxy@@UEAAJIPEAVBamoDockDevicePrincipal@@@Z @ 0x180181110
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnDockDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockDevicePrincipal@@@Z @ 0x180181170 (-OnDockDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockDevicePrincipal@@@Z.c)
 */

__int64 __fastcall BamoDeviceDockClientProxy::OnDockDeviceAdded(
        BamoDeviceDockClientProxy *this,
        unsigned int a2,
        struct BamoDockDevicePrincipal *a3)
{
  BamoDeviceDockClientProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoDeviceDockClientProxyImpl::OnDockDeviceAdded(
                  (BamoDeviceDockClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
