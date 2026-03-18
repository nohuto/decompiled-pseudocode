/*
 * XREFs of DpiDxgkDdiDisplayMuxPreSwitchTo @ 0x14008C7F0
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013524 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxPreSwitchTo(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  v4 = a3;
  v5 = a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 5960))(*(_QWORD *)(a1 + 48));
  v11 = v6;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v16 = v6;
    v15 = v4;
    v14 = v5;
    McTemplateK0pqtq_EtwWriteTransfer(v8, &EventDdiDisplayMuxPreSwitchTo, v9, *(_QWORD *)(a1 + 48), v14, v15, v16);
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v12[7] = 0LL;
  v12[4] = v5;
  v12[5] = v4;
  v12[6] = v11;
  v12[3] = a1;
  result = (unsigned int)v11;
  WdLogGlobalForLineNumber = 1205;
  return result;
}
