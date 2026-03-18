/*
 * XREFs of DpiDxgkDdiDisplayMuxSetInternalPanelInfo @ 0x14008C928
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DpiMdmProcessAdapterBrightness @ 0x140088E5C (DpiMdmProcessAdapterBrightness.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013524 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall DpiDxgkDdiDisplayMuxSetInternalPanelInfo(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  _QWORD *v13; // rax
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  result = *(_QWORD *)(a1 + 6016);
  v5 = a2;
  if ( result )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD))result)(*(_QWORD *)(a1 + 48), a2);
    v12 = v7;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v16 = v7;
        v15 = *a3;
        v14 = v5;
        McTemplateK0pqtq_EtwWriteTransfer(
          *a3,
          &EventDdiDisplayMuxSetInternalPanelInfo,
          v10,
          *(_QWORD *)(a1 + 48),
          v14,
          v15,
          v16);
      }
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v13[7] = 0LL;
    v13[3] = a1;
    v13[4] = v5;
    v13[5] = a3;
    v13[6] = v12;
    result = (unsigned int)v12;
    WdLogGlobalForLineNumber = 1318;
  }
  return result;
}
