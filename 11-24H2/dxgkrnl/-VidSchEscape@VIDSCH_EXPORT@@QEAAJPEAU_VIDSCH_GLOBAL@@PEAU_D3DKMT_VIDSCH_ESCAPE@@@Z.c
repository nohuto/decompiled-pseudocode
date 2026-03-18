/*
 * XREFs of ?VidSchEscape@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_VIDSCH_ESCAPE@@@Z @ 0x14006FA90
 * Callers:
 *     ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1400700C0 (-RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?ForceGpupTdrCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401CBD90 (-ForceGpupTdrCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchEscape(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct _D3DKMT_VIDSCH_ESCAPE *a3)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, struct _D3DKMT_VIDSCH_ESCAPE *))(*((_QWORD *)this + 1)
                                                                                            + 64LL))(
           a2,
           a3);
}
