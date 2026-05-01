/*
 * XREFs of ??R_lambda_5412139df090f220eeb5e1a31b6fef59_@@QEBA@XZ @ 0x180578E48
 * Callers:
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1 @ 0x18057AE90 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_18057AE90.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ @ 0x180578C1C (--1OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA@XZ.c)
 *     ??4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z @ 0x180578D14 (--4OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA?AV12@XZ @ 0x18057BD2C (-TransferToCurrentThread@OnSimulateDrop@DragDropSimulatorTelemetryProvider@@QEAA-AV12@XZ.c)
 */

void __fastcall _lambda_5412139df090f220eeb5e1a31b6fef59_::operator()(__int64 *a1)
{
  __int64 v2; // rax
  _BYTE v3[336]; // [rsp+20h] [rbp-168h] BYREF

  v2 = DragDropSimulatorTelemetryProvider::OnSimulateDrop::TransferToCurrentThread(a1[1], v3);
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::operator=(*a1, v2);
  DragDropSimulatorTelemetryProvider::OnSimulateDrop::~OnSimulateDrop((DragDropSimulatorTelemetryProvider::OnSimulateDrop *)v3);
}
