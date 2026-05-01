/*
 * XREFs of _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$82 @ 0x180219DAC
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z @ 0x18062986C (--$FailureTrace@AEAY0BE@$$CBDJ@DragDropSimulatorTelemetryProvider@@SAXAEAY0BE@$$CBD$$QEAJ@Z.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop__ResumeCoro_1_::_1_::catch_82(
        wil *a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 56);
  *(_DWORD *)(v4 + 1384) = v3;
  DragDropSimulatorTelemetryProvider::FailureTrace<char const (&)[20],long>(v5, v4 + 1384);
  throw;
}
