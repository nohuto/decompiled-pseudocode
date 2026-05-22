/*
 * XREFs of ??1BamoSystemContextEndpointPrincipal@@MEAA@XZ @ 0x1800ABCC0
 * Callers:
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$0 @ 0x1801C836C (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$0.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$0 @ 0x1801C846F (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$0.c)
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$0 @ 0x1801C85ED (_DeviceDockServer--DeviceDockServer_--_1_--dtor$0.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$0 @ 0x1801CC0AE (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$0.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$2 @ 0x1801D0A39 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall BamoSystemContextEndpointPrincipal::~BamoSystemContextEndpointPrincipal(
        volatile signed __int32 **this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    this + 4,
    a2,
    a3,
    a4);
}
