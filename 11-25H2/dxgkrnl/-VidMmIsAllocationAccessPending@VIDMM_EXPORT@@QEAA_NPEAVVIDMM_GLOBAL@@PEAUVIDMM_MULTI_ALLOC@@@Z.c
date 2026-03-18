/*
 * XREFs of ?VidMmIsAllocationAccessPending@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400520B4
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x140349230 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmIsAllocationAccessPending(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_MULTI_ALLOC *a3)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_MULTI_ALLOC *))(*((_QWORD *)this + 1) + 568LL))(
           a2,
           a3);
}
