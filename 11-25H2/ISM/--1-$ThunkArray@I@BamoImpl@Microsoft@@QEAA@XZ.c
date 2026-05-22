/*
 * XREFs of ??1?$ThunkArray@I@BamoImpl@Microsoft@@QEAA@XZ @ 0x18009C200
 * Callers:
 *     _BamoImpl::BamoSystemContextEndpointPrincipalImpl::OnInputConfigChanged_::_1_::dtor$0 @ 0x1801CD3E0 (_BamoImpl--BamoSystemContextEndpointPrincipalImpl--OnInputConfigChanged_--_1_--dtor$0.c)
 *     _BamoImpl::BamoGestureServicesProxyImpl::StartAnimation_::_1_::dtor$0 @ 0x1801CF878 (_BamoImpl--BamoGestureServicesProxyImpl--StartAnimation_--_1_--dtor$0.c)
 *     _BamoImpl::BamoSystemContextEndpointProxyImpl::OnInputConfigChanged_::_1_::dtor$0 @ 0x1801CFC47 (_BamoImpl--BamoSystemContextEndpointProxyImpl--OnInputConfigChanged_--_1_--dtor$0.c)
 *     _BamoImpl::BamoGestureServicesPrincipalImpl::StartAnimation_::_1_::dtor$0 @ 0x1801CFC96 (_BamoImpl--BamoGestureServicesPrincipalImpl--StartAnimation_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::ThunkArray<unsigned int>::~ThunkArray<unsigned int>(__int64 a1)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1,
    *(void **)(a1 + 8));
}
