/*
 * XREFs of ?VidMmCreateContextAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x14004F9B4
 * Callers:
 *     DxgCreateContextAllocationCB @ 0x1403B41D0 (DxgCreateContextAllocationCB.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmCreateContextAllocation(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        struct _DXGK_CREATECONTEXTALLOCATIONFLAGS a4,
        struct DXGDEVICE *a5,
        struct DXGCONTEXT *a6,
        void *a7,
        unsigned __int64 a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11,
        struct _D3DDDI_SEGMENTPREFERENCE a12,
        struct _DXGK_SEGMENTBANKPREFERENCE a13,
        struct _DXGK_ALLOCATIONINFOFLAGS a14,
        struct VIDMM_CONTEXT_ALLOC **a15)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, _QWORD, struct DXGDEVICE *, struct DXGCONTEXT *, void *, unsigned __int64, unsigned int, unsigned int, unsigned int, struct _D3DDDI_SEGMENTPREFERENCE::$F972DAF4C5B61B4C701096F96A6C826A::$59FADADC9B5649AD99C3978E94186D1F, struct _DXGK_SEGMENTBANKPREFERENCE::$C6C7745BB49F41DCAE1615122A006DD8::$0FD2D93B789A5FCF458225CD4A369FB3, struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D, struct VIDMM_CONTEXT_ALLOC **))(*((_QWORD *)this + 1) + 600LL))(
           a2,
           a3,
           a4.Value,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12.0,
           a13.0,
           a14.0,
           a15);
}
