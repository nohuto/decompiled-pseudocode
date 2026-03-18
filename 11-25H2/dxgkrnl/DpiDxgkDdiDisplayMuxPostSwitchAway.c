/*
 * XREFs of DpiDxgkDdiDisplayMuxPostSwitchAway @ 0x14008B4C4
 * Callers:
 *     ?FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z @ 0x140084288 (-FinishSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxPostSwitchAway(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 5976))(*(_QWORD *)(a1 + 48));
  v9 = v4;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v13 = v4;
    v12 = v3;
    McTemplateK0pqq_EtwWriteTransfer(v6, (__int64)&EventDdiDisplayMuxPostSwitchAway, v7, *(_QWORD *)(a1 + 48), v12, v13);
  }
  v10 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  *(_QWORD *)(v10 + 24) = a1;
  *(_QWORD *)(v10 + 32) = v3;
  *(_QWORD *)(v10 + 40) = v9;
  *(_OWORD *)(v10 + 48) = 0LL;
  WdLogGlobalForLineNumber = 1248;
  return (unsigned int)v9;
}
