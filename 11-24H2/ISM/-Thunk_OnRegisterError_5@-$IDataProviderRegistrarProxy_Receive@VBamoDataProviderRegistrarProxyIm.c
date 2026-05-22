/*
 * XREFs of ?Thunk_OnRegisterError_5@?$IDataProviderRegistrarProxy_Receive@VBamoDataProviderRegistrarProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801059C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18004257C (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800429EC (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IDataProviderRegistrarProxy_Receive<BamoImpl::BamoDataProviderRegistrarProxyImpl>::Thunk_OnRegisterError_5(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v4 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 88LL))((char *)this - 16, v3);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v8);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v5, v6);
  return v4;
}
