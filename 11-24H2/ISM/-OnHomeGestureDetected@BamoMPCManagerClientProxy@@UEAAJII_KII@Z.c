/*
 * XREFs of ?OnHomeGestureDetected@BamoMPCManagerClientProxy@@UEAAJII_KII@Z @ 0x180163EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnHomeGestureDetected@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJII_KII@Z @ 0x180163F2C (-OnHomeGestureDetected@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJII_KII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoMPCManagerClientProxy::OnHomeGestureDetected(
        BamoMPCManagerClientProxy *this,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  BamoMPCManagerClientProxy *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v9) = BamoImpl::BamoMPCManagerClientProxyImpl::OnHomeGestureDetected(
                  (BamoMPCManagerClientProxy *)((char *)v9 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v13, v10, v11);
  return (unsigned int)v9;
}
