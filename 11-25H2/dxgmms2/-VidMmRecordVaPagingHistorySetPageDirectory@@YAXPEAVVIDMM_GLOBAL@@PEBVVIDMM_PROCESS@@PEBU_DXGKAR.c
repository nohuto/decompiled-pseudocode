/*
 * XREFs of ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043F04
 * Callers:
 *     VidSchiSetPagingHwContextPageDirectory @ 0x140090950 (VidSchiSetPagingHwContextPageDirectory.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400AE8E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x1400EF500 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchSetPagingNodePageDirectory @ 0x140104BCC (VidSchSetPagingNodePageDirectory.c)
 * Callees:
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x1401036F4 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROO.c)
 */

void __fastcall VidMmRecordVaPagingHistorySetPageDirectory(
        struct VIDMM_GLOBAL *a1,
        const struct VIDMM_PROCESS *a2,
        const struct _DXGKARG_SETROOTPAGETABLE *a3,
        const void *a4)
{
  VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(a1, a2, a3, a4);
}
