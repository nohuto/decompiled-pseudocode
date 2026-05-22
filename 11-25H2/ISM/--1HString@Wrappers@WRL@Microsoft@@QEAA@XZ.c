/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006CF94
 * Callers:
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$0 @ 0x1801CE17F (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryProperties_--_1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$1 @ 0x1801CE195 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1801CE195.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$2 @ 0x1801CE1AB (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1801CE1AB.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$3 @ 0x1801CE1C1 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1801CE1C1.c)
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$4 @ 0x1801CE1D7 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_1801CE1D7.c)
 *     _LampArrayRawInputProvider::UpdateDeviceAmbientProcess_::_1_::dtor$1 @ 0x1801CEA3B (_LampArrayRawInputProvider--UpdateDeviceAmbientProcess_--_1_--dtor$1.c)
 *     _PnpApiWrapper::Details::OnDeviceNotification_::_1_::dtor$0 @ 0x1801CEB50 (_PnpApiWrapper--Details--OnDeviceNotification_--_1_--dtor$0.c)
 *     _MPCConstantManagerClient::OnConstantChanged_::_1_::dtor$0 @ 0x1801D09CD (_MPCConstantManagerClient--OnConstantChanged_--_1_--dtor$0.c)
 *     _StringToHstringVectorParser_::_1_::dtor$1 @ 0x1801D09F1 (_StringToHstringVectorParser_--_1_--dtor$1.c)
 *     _StringToHstringVectorParser_::_1_::dtor$2 @ 0x1801D0A03 (_StringToHstringVectorParser_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
