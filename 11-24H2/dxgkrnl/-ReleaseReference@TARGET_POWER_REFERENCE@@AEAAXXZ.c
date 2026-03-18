/*
 * XREFs of ?ReleaseReference@TARGET_POWER_REFERENCE@@AEAAXXZ @ 0x1400872B4
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x140085D20 (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall TARGET_POWER_REFERENCE::ReleaseReference(TARGET_POWER_REFERENCE *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+28h] [rbp-10h]

  if ( *((_BYTE *)this + 32) )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = *((_QWORD *)this + 2);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      v8 = 0;
      v7 = *((_DWORD *)this + 3);
      McTemplateK0pqq_EtwWriteTransfer((__int64)this, (__int64)&Dxgk_ReportPowerComponentState, a3, v5, v7, v8);
    }
    v6 = *(_QWORD *)(v5 + 3232);
    if ( v6 )
      PoFxIdleComponent(v6, v4, 0LL);
    *((_BYTE *)this + 32) = 0;
  }
}
