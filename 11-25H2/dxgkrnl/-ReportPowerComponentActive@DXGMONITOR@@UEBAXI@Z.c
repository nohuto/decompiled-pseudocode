/*
 * XREFs of ?ReportPowerComponentActive@DXGMONITOR@@UEBAXI@Z @ 0x14026EB00
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

void __fastcall DXGMONITOR::ReportPowerComponentActive(DXGMONITOR *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  int v7; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(*((_QWORD *)this + 19) + 24LL);
  v5 = *(_QWORD *)(v4 + 16);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
  {
    v7 = 1;
    McTemplateK0pqq_EtwWriteTransfer(v4, (__int64)&Dxgk_ReportPowerComponentState, a3, v5, a2, v7);
  }
  PoFxActivateComponent(*(_QWORD *)(v5 + 3232), a2, 0LL);
}
