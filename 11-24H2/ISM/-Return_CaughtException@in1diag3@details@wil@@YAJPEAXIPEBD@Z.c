/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CBD08
 * Callers:
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$4 @ 0x1801D30BE (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--catch$4.c)
 *     _HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch$0 @ 0x1801D33DD (_HotkeyRegistrationForwarder--ForwardHotkeyRegistration_--_1_--catch$0.c)
 *     _Details::GetDeviceStringProperty_::_1_::catch$1 @ 0x1801D51D0 (_Details--GetDeviceStringProperty_--_1_--catch$1.c)
 *     _Details::GetDeviceStringProperty_::_1_::catch$1_0 @ 0x1801D520C (_Details--GetDeviceStringProperty_--_1_--catch$1_0.c)
 *     _SpatialRimDeviceCollection::Initialize_::_1_::catch$1 @ 0x1801D5918 (_SpatialRimDeviceCollection--Initialize_--_1_--catch$1.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceAdded_::_1_::catch$3 @ 0x1801D596C (_SpatialRimDeviceCollection--OnDdiDeviceAdded_--_1_--catch$3.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$0 @ 0x1801D59AB (_SpatialRimDeviceCollection--OnDdiDeviceUpdated_--_1_--catch$0.c)
 *     _LampArrayDevice::Initialize_::_1_::catch$0 @ 0x1801D613A (_LampArrayDevice--Initialize_--_1_--catch$0.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::catch$43 @ 0x1801D61D0 (_LampArrayDevice--ProcessLampState_--_1_--catch$43.c)
 *     _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$4 @ 0x1801D62BD (_HidLampMultiUpdateReportParser--TryCreateAndInitialize_--_1_--catch$4.c)
 *     _InputDestTarget::DeliverInput_::_1_::catch$3 @ 0x1801D65B4 (_InputDestTarget--DeliverInput_--_1_--catch$3.c)
 *     _RotationWatcher::Initialize_::_1_::catch$1 @ 0x1801D6FC1 (_RotationWatcher--Initialize_--_1_--catch$1.c)
 *     _RotationWatcher::RotationWnfCallback_::_1_::catch$0 @ 0x1801D6FFD (_RotationWatcher--RotationWnfCallback_--_1_--catch$0.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800CB394 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
