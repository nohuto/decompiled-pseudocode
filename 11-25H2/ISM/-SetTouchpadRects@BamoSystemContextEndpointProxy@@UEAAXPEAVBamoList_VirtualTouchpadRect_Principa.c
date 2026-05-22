/*
 * XREFs of ?SetTouchpadRects@BamoSystemContextEndpointProxy@@UEAAXPEAVBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18013F010
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?LogSetTouchpadRects@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXPEAVBamoList_VirtualTouchpadRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x18013EA00 (-LogSetTouchpadRects@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXPEAVBamoList_VirtualTouch.c)
 *     ?UpdateTouchpadRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ @ 0x18013F1A4 (-UpdateTouchpadRectsRemoteCache@BamoSystemContextEndpointProxyImpl@BamoImpl@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoSystemContextEndpointProxy::SetTouchpadRects(
        BamoSystemContextEndpointProxy *this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  v4 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Principal *))a2)(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  BamoImpl::BamoSystemContextEndpointProxyImpl::LogSetTouchpadRects(
    (BamoSystemContextEndpointProxy *)((char *)this + 8),
    a2);
  if ( !*(_DWORD *)(*((_QWORD *)this + 3) + 44LL) )
    BamoImpl::BamoSystemContextEndpointProxyImpl::UpdateTouchpadRectsRemoteCache((BamoSystemContextEndpointProxy *)((char *)this + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v5, v6);
}
