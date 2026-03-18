/*
 * XREFs of ?VidSchExitIndependentFlip@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@IPEBU_LUID@@_KPEBII_NPEAHPEA_K@Z @ 0x140051228
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1403AC16C (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall VIDSCH_EXPORT::VidSchExitIndependentFlip(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        const struct _LUID *a4,
        unsigned __int64 a5,
        const unsigned int *a6,
        unsigned int a7,
        bool a8,
        int *a9,
        unsigned __int64 *a10)
{
  (*(void (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD, const struct _LUID *, unsigned __int64, const unsigned int *, unsigned int, bool, int *, unsigned __int64 *))(*((_QWORD *)this + 1) + 408LL))(
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
}
