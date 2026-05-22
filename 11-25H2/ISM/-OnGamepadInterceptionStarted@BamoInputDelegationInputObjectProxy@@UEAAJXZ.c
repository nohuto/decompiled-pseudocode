/*
 * XREFs of ?OnGamepadInterceptionStarted@BamoInputDelegationInputObjectProxy@@UEAAJXZ @ 0x180131760
 * Callers:
 *     ?OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x1801316C0 (-OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 *     ?OnGamepadInterceptionGained@InputDelegationInputObjectProxy@@UEAAXXZ @ 0x180131750 (-OnGamepadInterceptionGained@InputDelegationInputObjectProxy@@UEAAXXZ.c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnGamepadInterceptionStarted@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801317A0 (-OnGamepadInterceptionStarted@BamoInputDelegationInputObjectProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoInputDelegationInputObjectProxy::OnGamepadInterceptionStarted(
        BamoInputDelegationInputObjectProxy *this)
{
  BamoInputDelegationInputObjectProxy *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoInputDelegationInputObjectProxyImpl::OnGamepadInterceptionStarted((BamoInputDelegationInputObjectProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5, v2, v3);
  return (unsigned int)v1;
}
