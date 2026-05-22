/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D4FC8
 * Callers:
 *     _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$4 @ 0x1801CBC0C (_HidLampArrayDevice--ExtractReportDescriptorsFromPreparsedData_--_1_--catch$4.c)
 *     _HotkeyRegistrationForwarder::ForwardHotkeyRegistration_::_1_::catch$0 @ 0x1801CBF2B (_HotkeyRegistrationForwarder--ForwardHotkeyRegistration_--_1_--catch$0.c)
 *     _SpatialRimDeviceCollection::Initialize_::_1_::catch$1 @ 0x1801CE26B (_SpatialRimDeviceCollection--Initialize_--_1_--catch$1.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceAdded_::_1_::catch$3 @ 0x1801CE2BF (_SpatialRimDeviceCollection--OnDdiDeviceAdded_--_1_--catch$3.c)
 *     _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$0 @ 0x1801CE2FE (_SpatialRimDeviceCollection--OnDdiDeviceUpdated_--_1_--catch$0.c)
 *     _LampArrayDevice::Initialize_::_1_::catch$0 @ 0x1801CEA8D (_LampArrayDevice--Initialize_--_1_--catch$0.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::catch$41 @ 0x1801CEB11 (_LampArrayDevice--ProcessLampState_--_1_--catch$41.c)
 *     _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$4 @ 0x1801CEBFE (_HidLampMultiUpdateReportParser--TryCreateAndInitialize_--_1_--catch$4.c)
 *     _InputDestTarget::DeliverInput_::_1_::catch$3 @ 0x1801CED1C (_InputDestTarget--DeliverInput_--_1_--catch$3.c)
 *     _RotationWatcher::Initialize_::_1_::catch$1 @ 0x1801CF779 (_RotationWatcher--Initialize_--_1_--catch$1.c)
 *     _RotationWatcher::RotationWnfCallback_::_1_::catch$0 @ 0x1801CF7B5 (_RotationWatcher--RotationWnfCallback_--_1_--catch$0.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800D12BC (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<1>((int)this, (int)a2, a3);
}
