/*
 * XREFs of ?VidMmAcquireDmaBuffer@VIDMM_EXPORT@@QEAAJPEAUVIDMM_DMA_POOL@@_N1PEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x140042450
 * Callers:
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x140300250 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034562C (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmAcquireDmaBuffer(
        VIDMM_EXPORT *this,
        struct VIDMM_DMA_POOL *a2,
        __int64 a3,
        char a4,
        struct VIDMM_DMA_BUFFER **a5)
{
  char v5; // r11
  struct VIDMM_DMA_POOL *v6; // rbx

  v5 = a3;
  v6 = a2;
  LOBYTE(a3) = a4;
  LOBYTE(a2) = v5;
  return (*(__int64 (__fastcall **)(struct VIDMM_DMA_POOL *, struct VIDMM_DMA_POOL *, __int64, struct VIDMM_DMA_BUFFER **))(*((_QWORD *)this + 1) + 464LL))(
           v6,
           a2,
           a3,
           a5);
}
