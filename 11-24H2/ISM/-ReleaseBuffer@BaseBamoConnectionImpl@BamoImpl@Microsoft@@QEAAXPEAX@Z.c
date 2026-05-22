/*
 * XREFs of ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x18009BC00
 * Callers:
 *     ??1?$ThunkArray@I@BamoImpl@Microsoft@@QEAA@XZ @ 0x18009C3D0 (--1-$ThunkArray@I@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x1800AB03C (-OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z.c)
 *     ?StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x1801257C0 (-StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPri.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180140D10 (-OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePay.c)
 *     ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x1801433B0 (-StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        void *a2)
{
  if ( a2 )
  {
    if ( a2 == *((void **)this + 16) )
      *((_BYTE *)this + 136) = 0;
    else
      operator delete(a2, (const struct std::nothrow_t *)a2);
  }
}
