/*
 * XREFs of ?IsRangeValid@@YAE_K00@Z @ 0x1400E48B0
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAUVIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1400E3BCC (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall IsRangeValid(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rcx

  if ( a2 <= a1 )
  {
    WdLogSingleEntry0(1LL);
    v4 = 24209LL;
  }
  else
  {
    if ( a2 <= a3 )
      return 1;
    WdLogSingleEntry0(1LL);
    v4 = 24214LL;
  }
  WdLogGlobalForLineNumber = v4;
  DxgkLogInternalTriageEvent(v4, 0x40000LL);
  return 0;
}
