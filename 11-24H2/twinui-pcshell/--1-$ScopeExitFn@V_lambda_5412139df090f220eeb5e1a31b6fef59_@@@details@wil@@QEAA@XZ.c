/*
 * XREFs of ??1?$ScopeExitFn@V_lambda_5412139df090f220eeb5e1a31b6fef59_@@@details@wil@@QEAA@XZ @ 0x180578AC8
 * Callers:
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$4 @ 0x1806F3F90 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806F3F90.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::dtor$9 @ 0x1806F4058 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1806F4058.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x180578C1C (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 *     ??4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x180578D14 (--4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA?AV12@XZ @ 0x18057BD2C (-TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA-AV12@XZ.c)
 */

void __fastcall wil::details::ScopeExitFn<_lambda_5412139df090f220eeb5e1a31b6fef59_>::~ScopeExitFn<_lambda_5412139df090f220eeb5e1a31b6fef59_>(
        __int64 a1)
{
  __int64 v2; // rax
  _BYTE v3[336]; // [rsp+20h] [rbp-168h] BYREF

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v2 = DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToCurrentThread(*(_QWORD *)(a1 + 8), v3);
    DragDropSimulatorTelemetryProvider::OnSimulateDrop::operator=(*(_QWORD *)a1, v2);
    DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)v3);
  }
}
