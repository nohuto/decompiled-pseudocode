/*
 * XREFs of ?TakePowerReference@TARGET_POWER_REFERENCE@@QEAAXQEAXU_DISPLAYCONFIG_DISPLAYMUX_TARGET@@@Z @ 0x140087F20
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085690 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z @ 0x140186FC8 (-DmmGetVidPnTargetPowerComponentIndex@@YAJQEAXIPEAI@Z.c)
 */

int __fastcall TARGET_POWER_REFERENCE::TakePowerReference(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // eax
  int result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)a1 = *(_QWORD *)a3;
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = v3;
  result = DmmGetVidPnTargetPowerComponentIndex(a2, v3, (unsigned int *)(a1 + 12));
  if ( result >= 0 )
  {
    v8 = *(_DWORD *)(a1 + 12);
    if ( v8 != -1 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        {
          v11 = 1;
          v10 = *(_DWORD *)(a1 + 12);
          McTemplateK0pqq_EtwWriteTransfer(v6, (__int64)&Dxgk_ReportPowerComponentState, v7, v9, v10, v11);
        }
      }
      result = PoFxActivateComponent(*(_QWORD *)(v9 + 3232), v8, 0LL);
      *(_BYTE *)(a1 + 32) = 1;
    }
  }
  return result;
}
