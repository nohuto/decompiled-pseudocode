/*
 * XREFs of ?VidMmMapCpuVA@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x14004A310
 * Callers:
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x140180884 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D4BC8 (-Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmMapCpuVA(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        void **a4,
        unsigned int a5)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_MONITORED_FENCE_STORAGE *, void **, _QWORD))(*((_QWORD *)this + 1) + 880LL))(
           a2,
           a3,
           a4,
           a5);
}
