/*
 * XREFs of ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140042B68
 * Callers:
 *     VidSchiSetPagingHwContextPageDirectory @ 0x140090948 (VidSchiSetPagingHwContextPageDirectory.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400B6C90 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1400EAF40 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchSetPagingNodePageDirectory @ 0x1400F7EB4 (VidSchSetPagingNodePageDirectory.c)
 * Callees:
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x14010257C (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROO.c)
 */

void __fastcall VidMmRecordVaPagingHistorySetPageDirectory(
        struct VIDMM_GLOBAL *a1,
        const struct VIDMM_PROCESS *a2,
        const struct _DXGKARG_SETROOTPAGETABLE *a3,
        const void *a4)
{
  VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(a1, a2, a3, a4);
}
