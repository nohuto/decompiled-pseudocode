/*
 * XREFs of ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18006D918
 * Callers:
 *     ?GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ @ 0x18006D82C (-GetCookie@ActivationControllerBamoProxy@@QEAA_KXZ.c)
 *     ?OnStubDisconnected@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z @ 0x18006D860 (-OnStubDisconnected@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@@Z.c)
 *     ?LogOnPeerConnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z @ 0x18008F2B0 (-LogOnPeerConnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z.c)
 *     ?LogOnPeerDisconnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z @ 0x18008F31C (-LogOnPeerDisconnected@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@AEAAXPEAVBamoPeer@2@@Z.c)
 *     ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x180092F1C (-GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_.c)
 *     ?LogOnOcclusionRectsChanged@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpointStub@@@Z @ 0x1800AC178 (-LogOnOcclusionRectsChanged@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpoi.c)
 *     ?LogOnOcclusionRectsChanging@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpointStub@@PEAVBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800AC1FC (-LogOnOcclusionRectsChanging@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpo.c)
 *     ?LogOnTouchpadRectsChanged@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpointStub@@@Z @ 0x1800AC2B0 (-LogOnTouchpadRectsChanged@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpoin.c)
 *     ?LogOnTouchpadRectsChanging@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpointStub@@PEAVBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800AC334 (-LogOnTouchpadRectsChanging@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpoi.c)
 *     ?AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F49E0 (-AttachApplication2@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoCu.c)
 *     ?CreateCursorForDevice@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z @ 0x1800F4C70 (-CreateCursorForDevice@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K@Z.c)
 *     ?CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F4E80 (-CreateCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1PEBUCurs.c)
 *     ?DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z @ 0x1800F51D0 (-DestroyCursorShape@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K1@Z.c)
 *     ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800F55E0 (-EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub.c)
 *     ?SetCursorShellMagnification@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_KM@Z @ 0x1800F6110 (-SetCursorShellMagnification@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_.c)
 *     ?SetCursorShellVisibility@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K_N@Z @ 0x1800F62E0 (-SetCursorShellVisibility@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@_K_N.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x1801375A8 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoPeer::GetPeerId(Microsoft::Bamo::BaseBamoPeer *this)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)this + 8LL))(this)
                         + 36);
}
