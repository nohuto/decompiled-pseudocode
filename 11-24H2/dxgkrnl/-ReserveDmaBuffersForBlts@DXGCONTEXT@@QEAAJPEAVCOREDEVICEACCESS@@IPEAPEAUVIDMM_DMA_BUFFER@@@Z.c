/*
 * XREFs of ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAUVIDMM_DMA_BUFFER@@@Z @ 0x1402B6C18
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1402B67F4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1402B6DD8 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1402B6ED4 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAUVIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 */

__int64 __fastcall DXGCONTEXT::ReserveDmaBuffersForBlts(
        DXGCONTEXT *this,
        struct COREDEVICEACCESS *a2,
        unsigned int a3,
        struct VIDMM_DMA_BUFFER **a4)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  unsigned int i; // ebx
  int v11; // eax

  v6 = a3;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7923;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7923LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)this + 46) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7924;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_ppBltDmaBuffers", 7924LL, 0LL, 0LL, 0LL, 0LL);
  }
  LODWORD(v8) = 0;
  if ( (_DWORD)v6 )
  {
    memset(a4, 0, 8 * v6);
    *((_QWORD *)this + 46) = a4;
    *((_DWORD *)this + 94) = v6;
  }
  for ( i = 0; i < (unsigned int)v6; ++i )
  {
    v11 = DXGCONTEXT::AcquireDmaBuffer(this, &a4[i], a2, 1u);
    v8 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 7940;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to acquire DMA buffer 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGCONTEXT::UnreserveDmaBuffersForBlts(this);
      return (unsigned int)v8;
    }
  }
  return (unsigned int)v8;
}
