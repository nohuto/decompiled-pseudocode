/*
 * XREFs of DpiDxgkDdiDisplayMuxSwitchCanceled @ 0x14008C9D8
 * Callers:
 *     ?SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z @ 0x140087EB8 (-SwitchCanceled@DISPLAY_MUX_SWTICH_DDI_TRACKING@@QEAAX_N@Z.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013524 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxSwitchCanceled(__int64 a1, __int64 a2, __int64 a3)
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

  v4 = (unsigned __int8)a3;
  v5 = (unsigned int)a2;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 5968))(*(_QWORD *)(a1 + 48), a2, a3);
  v11 = v6;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v16 = v6;
    v15 = v4;
    v14 = v5;
    McTemplateK0pqtq_EtwWriteTransfer(v8, &EventDdiDisplayMuxSwitchCanceled, v9, *(_QWORD *)(a1 + 48), v14, v15, v16);
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v12[7] = 0LL;
  v12[4] = v5;
  v12[5] = v4;
  v12[6] = v11;
  v12[3] = a1;
  result = (unsigned int)v11;
  WdLogGlobalForLineNumber = 1227;
  return result;
}
