/*
 * XREFs of ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400D74A4
 * Callers:
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x14008FF64 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140090368 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1400D68C8 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1400D6BC4 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400E2548 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     VidMmSuspendDevices @ 0x1400EA5C0 (VidMmSuspendDevices.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D758C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::FaultAllAllocations(VIDMM_DEVICE *this)
{
  unsigned __int16 i; // di
  unsigned __int16 v3; // si
  _QWORD *v4; // r15
  _QWORD **v5; // rbp
  _QWORD *v6; // r14
  struct VIDMM_ALLOC *v7; // rdx

  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    WdLogGlobalForLineNumber = 1025;
  }
  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 15); ++i )
  {
    v3 = 0;
    v4 = *(_QWORD **)(*((_QWORD *)this + 5) + 8LL * i);
    if ( *(_DWORD *)(*v4 + 64LL) )
    {
      do
      {
        v5 = (_QWORD **)(56LL * v3 + v4[2] + 32LL);
        v6 = *v5;
        while ( v6 != v5 )
        {
          v7 = (struct VIDMM_ALLOC *)(v6 - 7);
          v6 = (_QWORD *)*v6;
          if ( (*(_DWORD *)(**(_QWORD **)v7 + 24LL) & 0x100) == 0 )
            VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)this, v7);
        }
        ++v3;
      }
      while ( (unsigned int)v3 < *(_DWORD *)(*v4 + 64LL) );
    }
  }
}
