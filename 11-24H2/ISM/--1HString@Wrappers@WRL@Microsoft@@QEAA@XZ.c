/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006CDC4
 * Callers:
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$0 @ 0x1801D582C (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryProperties_--_1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$1 @ 0x1801D5842 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1801D5842.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$2 @ 0x1801D5858 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1801D5858.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$3 @ 0x1801D586E (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1801D586E.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$4 @ 0x1801D5884 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1801D5884.c)
 *     _LampArrayRawInputProvider::UpdateDeviceAmbientProcess_::_1_::dtor$1 @ 0x1801D60E8 (_LampArrayRawInputProvider--UpdateDeviceAmbientProcess_--_1_--dtor$1.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$1 @ 0x1801D6188 (_LampArrayDevice--ProcessLampState_--_1_--dtor$1.c)
 *     _PnpApiWrapper::Details::OnDeviceNotification_::_1_::dtor$0 @ 0x1801D620F (_PnpApiWrapper--Details--OnDeviceNotification_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::OnConstantChanged_::_1_::dtor$0 @ 0x1801D820D (_MPCConstantManagerClient--OnConstantChanged_--_1_--dtor$0.c)
 *     _StringToHstringVectorParser_::_1_::dtor$1 @ 0x1801D8231 (_StringToHstringVectorParser_--_1_--dtor$1.c)
 *     _StringToHstringVectorParser_::_1_::dtor$2 @ 0x1801D8243 (_StringToHstringVectorParser_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
