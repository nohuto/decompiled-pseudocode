/*
 * XREFs of ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800F3984
 * Callers:
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::catch$5 @ 0x1801CFCDA (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--catch$5.c)
 *     _GameInputProcessor::OnDeviceAttach_::_1_::catch$0 @ 0x1801D2046 (_GameInputProcessor--OnDeviceAttach_--_1_--catch$0.c)
 *     _SystemCursorController2::OnStubDisconnected_::_1_::catch$1 @ 0x1801D2FD8 (_SystemCursorController2--OnStubDisconnected_--_1_--catch$1.c)
 *     _SystemCursorController2::AttachApplication2_::_1_::catch$6 @ 0x1801D6695 (_SystemCursorController2--AttachApplication2_--_1_--catch$6.c)
 *     _SystemCursorController2::CreateCursorForDevice_::_1_::catch$0 @ 0x1801D66CF (_SystemCursorController2--CreateCursorForDevice_--_1_--catch$0.c)
 *     _SystemCursorController2::CreateCursorShape_::_1_::catch$2 @ 0x1801D672D (_SystemCursorController2--CreateCursorShape_--_1_--catch$2.c)
 *     _SystemCursorController2::DestroyCursorShape_::_1_::catch$4 @ 0x1801D677C (_SystemCursorController2--DestroyCursorShape_--_1_--catch$4.c)
 *     _SystemCursorController2::EnsureServiceAndRegisterClient_::_1_::catch$5 @ 0x1801D67B6 (_SystemCursorController2--EnsureServiceAndRegisterClient_--_1_--catch$5.c)
 *     _SystemCursorController2::SetCursorShellMagnification_::_1_::catch$0 @ 0x1801D67F0 (_SystemCursorController2--SetCursorShellMagnification_--_1_--catch$0.c)
 *     _SystemCursorController2::SetCursorShellVisibility_::_1_::catch$0 @ 0x1801D682A (_SystemCursorController2--SetCursorShellVisibility_--_1_--catch$0.c)
 *     _TestCommandHost::OnCoreMessageStatic_::_1_::catch$0 @ 0x1801D6F05 (_TestCommandHost--OnCoreMessageStatic_--_1_--catch$0.c)
 *     _TestCommandHost::RegisterForTestCommandMessage_::_1_::catch$0 @ 0x1801D6F3F (_TestCommandHost--RegisterForTestCommandMessage_--_1_--catch$0.c)
 *     _HapticDeviceManager::AttachRIMDevice_::_1_::catch$3 @ 0x1801D8740 (_HapticDeviceManager--AttachRIMDevice_--_1_--catch$3.c)
 *     _PenInterface::Initialize_::_1_::catch$1 @ 0x1801D8A0C (_PenInterface--Initialize_--_1_--catch$1.c)
 * Callees:
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1800F35EC (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException<2>((int)this, (int)a2, a3);
}
