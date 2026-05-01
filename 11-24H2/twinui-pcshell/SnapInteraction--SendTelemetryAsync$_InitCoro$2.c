/*
 * XREFs of SnapInteraction::SendTelemetryAsync$_InitCoro$2 @ 0x1802716BC
 * Callers:
 *     ?SendTelemetryAsync@SnapInteraction@@YA?AUfire_and_forget@winrt@@U?$com_ptr@UIApplicationView@@@3@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1801A9FE4 (-SendTelemetryAsync@SnapInteraction@@YA-AUfire_and_forget@winrt@@U-$com_ptr@UIApplicationView@@@.c)
 * Callees:
 *     SnapInteraction::SendTelemetryAsync$_ResumeCoro$1 @ 0x180271730 (SnapInteraction--SendTelemetryAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SnapInteraction::SendTelemetryAsync__InitCoro_2(
        _BYTE *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v5; // rax

  v5 = *a4;
  *a4 = 0LL;
  *(_QWORD *)(a3 + 17) = v5;
  *(_QWORD *)(a3 + 25) = *a5;
  *(_QWORD *)a3 = SnapInteraction::SendTelemetryAsync__ResumeCoro_1;
  *(_DWORD *)(a3 + 8) = *a2 != 0 ? 2 : 65538;
  *a1 = 0;
  *(_BYTE *)(a3 + 16) = 0;
  return SnapInteraction::SendTelemetryAsync__ResumeCoro_1(a3);
}
