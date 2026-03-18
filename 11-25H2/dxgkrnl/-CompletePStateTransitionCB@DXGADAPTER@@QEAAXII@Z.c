/*
 * XREFs of ?CompletePStateTransitionCB@DXGADAPTER@@QEAAXII@Z @ 0x1400657F8
 * Callers:
 *     DxgkCompletePStateTransitionCB @ 0x14006C4D0 (DxgkCompletePStateTransitionCB.c)
 * Callees:
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140016724 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     ?RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z @ 0x140076CD8 (-RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXI@Z.c)
 */

void __fastcall DXGADAPTER::CompletePStateTransitionCB(DXGADAPTER *this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r8
  __int64 v5; // rdi

  if ( *((_QWORD *)this + 404) )
  {
    v4 = (unsigned __int16)a2 + (unsigned int)*((unsigned __int16 *)this + ((unsigned __int64)a2 >> 16) + 1620);
    v5 = *(_QWORD *)(520 * v4 + *((_QWORD *)this + 403) + 512);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0pqtq_EtwWriteTransfer(
          (__int64)this,
          &Dxgk_PowerPStateCompleted,
          v4,
          this,
          v4,
          *(_DWORD *)(v5 + 192),
          a3);
    }
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordPStateChange((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v5 + 136), a3);
  }
}
