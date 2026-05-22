/*
 * XREFs of ??0VirtualTouchpadControllerProxy@@QEAA@XZ @ 0x180132998
 * Callers:
 *     ?CreateVirtualTouchpadControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180114778 (-CreateVirtualTouchpadControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBa.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ?ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z @ 0x180134680 (-ServerCreated@VirtualTouchpad@InputTraceLogging@@SAXPEBX@Z.c)
 */

VirtualTouchpadControllerProxy *__fastcall VirtualTouchpadControllerProxy::VirtualTouchpadControllerProxy(
        VirtualTouchpadControllerProxy *this)
{
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoVirtualTouchpadControllerProxyImpl::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *((_WORD *)this + 24) = 0;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = 0;
  *(_OWORD *)((char *)this + 84) = 0LL;
  *((_DWORD *)this + 25) = 0;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *(_QWORD *)this = &VirtualTouchpadControllerProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &VirtualTouchpadControllerProxy::`vftable'{for `IVirtualTouchpadControllerProxy'};
  *((_QWORD *)this + 16) = &VirtualTouchpadControllerProxy::`vftable'{for `IInputSiteTransformClientPrivate'};
  *((_QWORD *)this + 17) = &VirtualTouchpadControllerProxy::`vftable'{for `ISystemContextObserver'};
  *((_BYTE *)this + 208) = 0;
  *((_BYTE *)this + 228) = 0;
  *((_BYTE *)this + 240) = 0;
  *((_DWORD *)this + 62) = 0;
  memset_0((char *)this + 252, 0, 0x98uLL);
  *((_QWORD *)this + 51) = 0LL;
  InputTraceLogging::VirtualTouchpad::ServerCreated(this);
  return this;
}
