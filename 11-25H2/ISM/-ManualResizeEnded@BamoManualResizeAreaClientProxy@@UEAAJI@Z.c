/*
 * XREFs of ?ManualResizeEnded@BamoManualResizeAreaClientProxy@@UEAAJI@Z @ 0x18014C950
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?ManualResizeEnded@BamoManualResizeAreaClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18014C9A0 (-ManualResizeEnded@BamoManualResizeAreaClientProxyImpl@BamoImpl@@QEAAJI@Z.c)
 */

__int64 __fastcall BamoManualResizeAreaClientProxy::ManualResizeEnded(
        BamoManualResizeAreaClientProxy *this,
        unsigned int a2)
{
  BamoManualResizeAreaClientProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoManualResizeAreaClientProxyImpl::ManualResizeEnded(
                  (BamoManualResizeAreaClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
