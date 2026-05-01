/*
 * XREFs of SnapInteraction::SendTelemetryAsync$_InitCoro$2 @ 0x18022441C
 * Callers:
 *     ?SendTelemetryAsync@SnapInteraction@@YA?AUfire_and_forget@winrt@@U?$com_ptr@UIApplicationView@@@3@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180224648 (-SendTelemetryAsync@SnapInteraction@@YA-AUfire_and_forget@winrt@@U-$com_ptr@UIApplicationView@@@.c)
 * Callees:
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180224510 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 *     _SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::_parameters_ @ 0x18066F988 (_SnapInteraction--SendTelemetryAsync_--_5_--_parameters_--_parameters_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapInteraction::SendTelemetryAsync__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  SnapInteraction::SendTelemetryAsync_::_5_::_parameters_::_parameters_(a3 + 34, a4, a5);
  *(_QWORD *)a3 = SnapInteraction::SendTelemetryAsync__ResumeCoro_1;
  *(_DWORD *)(a3 + 8) = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *(_BYTE *)(a3 + 33) = 0;
  return SnapInteraction::SendTelemetryAsync__ResumeCoro_1(a3);
}
