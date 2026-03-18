/*
 * XREFs of ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEBUVIDMM_MULTI_ALLOC@@@Z @ 0x14006B77C
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1401B1978 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmQueryAllocationResidency(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        const struct VIDMM_MULTI_ALLOC *a3)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, const struct VIDMM_MULTI_ALLOC *))(*((_QWORD *)this + 1)
                                                                                            + 152LL))(
           a2,
           a3);
}
