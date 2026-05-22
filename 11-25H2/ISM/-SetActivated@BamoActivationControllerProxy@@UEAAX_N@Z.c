/*
 * XREFs of ?SetActivated@BamoActivationControllerProxy@@UEAAX_N@Z @ 0x1800B2850
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?LogSetActivated@BamoActivationControllerProxyImpl@BamoImpl@@AEAAX_N@Z @ 0x1800B2608 (-LogSetActivated@BamoActivationControllerProxyImpl@BamoImpl@@AEAAX_N@Z.c)
 *     ?UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ @ 0x1800B292C (-UpdateActivatedRemoteCache@BamoActivationControllerProxyImpl@BamoImpl@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoActivationControllerProxy::SetActivated(BamoActivationControllerProxy *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v6,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  *((_BYTE *)this + 40) = a2;
  BamoImpl::BamoActivationControllerProxyImpl::LogSetActivated((BamoActivationControllerProxy *)((char *)this + 8));
  if ( !*(_DWORD *)(*((_QWORD *)this + 3) + 44LL) )
    BamoImpl::BamoActivationControllerProxyImpl::UpdateActivatedRemoteCache((BamoActivationControllerProxy *)((char *)this + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6, v4, v5);
}
