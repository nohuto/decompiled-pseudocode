/*
 * XREFs of ?OnGamepadExclusivityExited@BamoMPCManagerClientProxy@@UEAAJXZ @ 0x180163BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnGamepadExclusivityExited@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x180163C10 (-OnGamepadExclusivityExited@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnGamepadExclusivityExited(BamoMPCManagerClientProxy *this)
{
  BamoMPCManagerClientProxy *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoMPCManagerClientProxyImpl::OnGamepadExclusivityExited((BamoMPCManagerClientProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5, v2, v3);
  return (unsigned int)v1;
}
