/*
 * XREFs of ?FreeFlipManagerSyncContext@CAdapter@@AEAAXPEAUFlipManagerSyncContext@1@@Z @ 0x14009B6D8
 * Callers:
 *     ?DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA_N@Z @ 0x14009A6BC (-DestroySyncContextForFlipManager@CAdapterCollection@@QEAAXAEAU_LUID@@PEAUFlipManagerObject@@PEA.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x14009B090 (--1CAdapter@@IEAA@XZ.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009B808 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     ?IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x14009B944 (-IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET.c)
 *     ?IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z @ 0x14009BA40 (-IssueFlipManagerWaitForFrameRenderingComplete@CAdapter@@QEAAJPEAUFlipManagerObject@@_K@Z.c)
 * Callees:
 *     DxgkDestroyContextInternal @ 0x14018C558 (DxgkDestroyContextInternal.c)
 */

void __fastcall CAdapter::FreeFlipManagerSyncContext(CAdapter *this, struct CAdapter::FlipManagerSyncContext *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)a2 + 2) )
  {
    v4 = *((_DWORD *)a2 + 2);
    DxgkDestroyContextInternal(&v4);
  }
  RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 120), a2);
}
