/*
 * XREFs of ?SetOcclusionRects@BamoSystemContextEndpointProxy@@UEAAXPEAVBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180141140
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?LogSetOcclusionRects@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXPEAVBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180140B48 (-LogSetOcclusionRects@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXPEAVBamoList_DisplayOccl.c)
 *     ?UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x18014127C (-UpdateOcclusionRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BamoSystemContextEndpointProxy::SetOcclusionRects(
        BamoSystemContextEndpointProxy *this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v4 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoSystemContextEndpointProxyImpl::LogSetOcclusionRects(
    (BamoSystemContextEndpointProxy *)((char *)this + 8),
    a2);
  if ( !*(_DWORD *)(*((_QWORD *)this + 3) + 44LL) )
    BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateOcclusionRectsRemoteCache((BamoSystemContextEndpointProxy *)((char *)this + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v5, v6);
}
