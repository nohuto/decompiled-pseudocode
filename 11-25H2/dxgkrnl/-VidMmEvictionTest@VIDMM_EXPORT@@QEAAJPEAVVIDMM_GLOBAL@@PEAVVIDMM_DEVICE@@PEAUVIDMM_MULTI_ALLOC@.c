/*
 * XREFs of ?VidMmEvictionTest@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MULTI_ALLOC@@PEAUVIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x140072180
 * Callers:
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x140405A98 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmEvictionTest(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DEVICE *a3,
        struct VIDMM_MULTI_ALLOC *a4)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_DEVICE *, struct VIDMM_MULTI_ALLOC *, _QWORD))(*((_QWORD *)this + 1) + 824LL))(
           a2,
           a3,
           a4,
           0LL);
}
