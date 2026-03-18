/*
 * XREFs of ?VidMmiUpdateGpuVirtualAddress@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1400DA5B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x14001CEC4 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmiUpdateGpuVirtualAddress(VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this)
{
  __int64 v2; // rdx
  VIDMM_GLOBAL *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD v6[13]; // [rsp+50h] [rbp-68h] BYREF

  memset(v6, 0, 0x58uLL);
  v2 = *((unsigned int *)this + 4);
  v3 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v6[1] = *(_QWORD *)(*((_QWORD *)this + 11) + 16LL);
  LODWORD(v6[0]) = 119;
  v4 = *(_QWORD *)(v6[1] + 72LL);
  v6[4] = this;
  if ( (int)VIDMM_GLOBAL::QueueDeferredCommand(
              v3,
              *(struct VIDMM_PAGING_QUEUE **)(32 * v2 + v4),
              (struct _VIDMM_DEFERRED_COMMAND *)v6,
              0,
              0LL) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 24590;
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    VIDMM_DEVICE_COMMAND_UPDATEGPUVA::`scalar deleting destructor'(this);
  }
}
