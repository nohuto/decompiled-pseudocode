/*
 * XREFs of ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x14035E2D0
 * Callers:
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@PEAUDXGK_PRESENT_PARAMS@@1@Z @ 0x1401EB208 (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1401F65B0 (-SignalSynchronizationObjectInternal_Fixed@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAV.c)
 *     ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1402B0C60 (-IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::GetRenderHwQueueCount(DXGCONTEXT *this)
{
  unsigned int v1; // edx
  _QWORD **v2; // rcx
  _QWORD *v3; // rax

  v1 = 0;
  v2 = (_QWORD **)((char *)this + 400);
  v3 = *v2;
  while ( v3 != v2 && v3 )
  {
    v3 = (_QWORD *)*v3;
    ++v1;
  }
  return v1;
}
