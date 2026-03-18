/*
 * XREFs of DpiDxgkDdiDisplayMuxPostSwitchToPhase1 @ 0x14008C518
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0pqqjq_EtwWriteTransfer @ 0x14008D0A4 (McTemplateK0pqqjq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxPostSwitchToPhase1(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 result; // rax

  v6 = a3;
  v7 = a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 5984))(*(_QWORD *)(a1 + 48));
  v13 = v8;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqqjq_EtwWriteTransfer(
      v10,
      (unsigned int)&EventDdiDisplayMuxPostSwitchToPhase1,
      v11,
      *(_QWORD *)(a1 + 48),
      v7,
      v6,
      a5,
      v8);
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14[7] = 0LL;
  v14[3] = a1;
  v14[4] = v7;
  v14[5] = v6;
  v14[6] = v13;
  result = (unsigned int)v13;
  WdLogGlobalForLineNumber = 1272;
  return result;
}
