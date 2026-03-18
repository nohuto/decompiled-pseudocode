/*
 * XREFs of ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAIPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAUVIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x14003DDDC
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14042303C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReferenceDmaBuffer(
        VIDMM_EXPORT *this,
        struct VIDMM_DMA_BUFFER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        __int64 a4,
        char a5,
        int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        unsigned __int64 *a9,
        struct VIDMM_ALLOC **a10,
        struct VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  unsigned int v12; // r11d

  v12 = a4;
  LOBYTE(a4) = a5;
  return (*(__int64 (__fastcall **)(struct VIDMM_DMA_BUFFER *, struct _D3DDDI_ALLOCATIONLIST *, _QWORD, __int64, int, unsigned int *, union _LARGE_INTEGER *, unsigned __int64 *, struct VIDMM_ALLOC **, struct VIDMM_PRIMARIES_REFERENCES *, struct DXGALLOCATION **))(*((_QWORD *)this + 1) + 536LL))(
           a2,
           a3,
           v12,
           a4,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
