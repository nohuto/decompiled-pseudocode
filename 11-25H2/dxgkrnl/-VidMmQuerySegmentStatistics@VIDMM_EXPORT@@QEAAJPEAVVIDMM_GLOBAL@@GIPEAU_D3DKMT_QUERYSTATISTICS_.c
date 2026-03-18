/*
 * XREFs of ?VidMmQuerySegmentStatistics@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@GIPEAU_D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION@@@Z @ 0x14004E4CC
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1402110B0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmQuerySegmentStatistics(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *a5)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, _QWORD, struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *))(*((_QWORD *)this + 1) + 296LL))(
           a2,
           a3,
           a4,
           a5);
}
