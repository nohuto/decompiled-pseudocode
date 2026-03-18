/*
 * XREFs of ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x14006CCF8
 * Callers:
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1401867B8 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1401B8408 (-EvictAllAllocations@DXGDEVICE@@QEAAJXZ.c)
 *     ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1401E6BCC (-EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x140405A98 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmEvictAllocation(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MULTI_ALLOC *a3,
        struct VIDMM_MULTI_GLOBAL_ALLOC *a4,
        struct _D3DKMT_EVICTION_CRITERIA *a5)
{
  (*(void (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_MULTI_ALLOC *, struct VIDMM_MULTI_GLOBAL_ALLOC *, struct _D3DKMT_EVICTION_CRITERIA *))(*((_QWORD *)this + 1) + 672LL))(
    a2,
    a3,
    a4,
    a5);
}
