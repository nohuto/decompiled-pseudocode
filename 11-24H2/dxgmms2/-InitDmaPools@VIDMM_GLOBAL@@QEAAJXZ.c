/*
 * XREFs of ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x140090678
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400D339C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x14001C0B0 (--_GVIDMM_DMA_POOL@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z @ 0x1400383E8 (-VidMmReleaseDmaBuffer@@YAXPEAUVIDMM_DMA_BUFFER@@_N@Z.c)
 *     VidMmAcquireDmaBuffer @ 0x1400B7930 (VidMmAcquireDmaBuffer.c)
 *     VidMmInitDmaPool @ 0x1400B87A0 (VidMmInitDmaPool.c)
 *     ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKK_N@Z @ 0x14010553C (--0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKK_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitDmaPools(VIDMM_GLOBAL *this)
{
  struct VIDMM_DEVICE *v1; // r14
  unsigned int i; // esi
  char v4; // al
  unsigned int v5; // ebp
  VIDMM_DMA_POOL *v6; // rax
  VIDMM_DMA_POOL *v7; // rax
  int inited; // eax
  __int64 v9; // r8
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int j; // esi
  __int64 v15; // rbx
  struct VIDMM_DMA_BUFFER *v16; // rcx
  VIDMM_DMA_POOL *v17; // rcx

  v1 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5049);
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 1736) )
    {
      *((_DWORD *)this + 10024) = 1;
      return 0LL;
    }
    v4 = *((_BYTE *)this + i + 52);
    v5 = v4 ? 1 << (v4 - 1) : 0;
    v6 = (VIDMM_DMA_POOL *)operator new(128LL, 0x39326956u, 64LL);
    v7 = v6
       ? VIDMM_DMA_POOL::VIDMM_DMA_POOL(
           v6,
           this,
           i,
           v1,
           0LL,
           *((_DWORD *)this + i + 29),
           0,
           0,
           v5,
           *((_DWORD *)this + i + 93),
           1)
       : 0LL;
    *((_QWORD *)this + i + 79) = v7;
    if ( !v7 )
      break;
    inited = VidMmInitDmaPool(v7);
    v10 = inited;
    if ( inited < 0 )
    {
      _InterlockedIncrement(&dword_140081744);
      WdLogSingleEntry1(6LL, inited);
      WdLogGlobalForLineNumber = 1844;
      DxgkLogInternalTriageEvent(v12, 262145LL);
      goto LABEL_14;
    }
    LOBYTE(v9) = 1;
    VidMmAcquireDmaBuffer(*((_QWORD *)this + i + 79), 0LL, v9, (char *)this + 8 * i + 1144);
    v11 = *((_QWORD *)this + i + 143);
    *(_DWORD *)(v11 + 32) = 1;
  }
  _InterlockedIncrement(&dword_140081740);
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 1834;
  DxgkLogInternalTriageEvent(v13, 262145LL);
  v10 = -1073741801;
LABEL_14:
  for ( j = 0; j < *((_DWORD *)this + 1736); *((_QWORD *)this + v15 + 79) = 0LL )
  {
    v15 = j;
    if ( *((_QWORD *)this + j + 79) )
    {
      v16 = (struct VIDMM_DMA_BUFFER *)*((_QWORD *)this + j + 143);
      if ( v16 )
      {
        VidMmReleaseDmaBuffer(v16, 1);
        *((_QWORD *)this + j + 143) = 0LL;
      }
    }
    v17 = (VIDMM_DMA_POOL *)*((_QWORD *)this + j + 79);
    if ( v17 )
      VIDMM_DMA_POOL::`scalar deleting destructor'(v17);
    ++j;
  }
  return v10;
}
