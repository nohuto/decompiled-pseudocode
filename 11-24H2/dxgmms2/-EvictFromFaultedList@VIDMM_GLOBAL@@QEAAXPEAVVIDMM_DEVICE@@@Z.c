/*
 * XREFs of ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x140090AD0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E11C8 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400AD020 (-EvictResources@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@EEEPEAUVIDMM_LOCAL_ALLOC@.c)
 */

void __fastcall VIDMM_GLOBAL::EvictFromFaultedList(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2)
{
  char *v2; // rdi
  __int64 i; // rbx
  __int64 v5; // rsi
  struct VIDMM_PHYSICAL_ALLOC *v6; // rbp

  v2 = (char *)a2 + 136;
  for ( i = *((_QWORD *)a2 + 18); (char *)i != v2; i = *(_QWORD *)(i + 8) )
  {
    v5 = **(_QWORD **)(i - 56);
    v6 = *(struct VIDMM_PHYSICAL_ALLOC **)v5;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace() + 24) = i - 56;
      WdLogGlobalForLineNumber = 10300;
    }
    if ( *(_DWORD *)(v5 + 72) == 1 )
    {
      VIDMM_PHYSICAL_ADAPTER::EvictResources(
        *(VIDMM_PHYSICAL_ADAPTER **)(*((_QWORD *)this + 5029) + 8LL * (*(_DWORD *)(v5 + 24) & 0x3F)),
        v6,
        1u,
        0,
        0,
        0LL);
      if ( (byte_140081241 & 1) != 0 )
        McTemplateK0p_EtwWriteTransfer();
    }
  }
}
