/*
 * XREFs of ?Create@CCompositionSwapchainBuffer@@SAJ_NPEAUFlipManagerObject@@_K_KPEAPEAV1@@Z @ 0x14009F390
 * Callers:
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009D4BC (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@_K@Z @ 0x14009DA2C (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 * Callees:
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x140009074 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@CCompositionSwapchainBuffer@@AEAAJ_NPEAUFlipManagerObject@@_K2@Z @ 0x14009F564 (-Initialize@CCompositionSwapchainBuffer@@AEAAJ_NPEAUFlipManagerObject@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSwapchainBuffer::Create(
        bool a1,
        struct FlipManagerObject *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct CCompositionSwapchainBuffer **a5)
{
  CFlipExBuffer *v9; // rax
  CFlipExBuffer *v10; // rbx
  int v11; // edi

  *a5 = 0LL;
  v9 = (CFlipExBuffer *)operator new(0x2F0uLL, 0x624D5343u, 256LL, a4);
  v10 = v9;
  if ( v9 )
  {
    CFlipExBuffer::CFlipExBuffer(v9);
    *((_QWORD *)v10 + 89) = 0LL;
    *((_QWORD *)v10 + 90) = 0LL;
    *((_QWORD *)v10 + 91) = 0LL;
    *((_QWORD *)v10 + 92) = 0LL;
    *(_QWORD *)v10 = &CCompositionSwapchainBuffer::`vftable';
    *((_BYTE *)v10 + 744) = 0;
    v11 = CCompositionSwapchainBuffer::Initialize(v10, a1, a2, a3, a4);
    if ( v11 < 0 )
      (**(void (__fastcall ***)(CFlipExBuffer *, __int64))v10)(v10, 1LL);
    else
      *a5 = v10;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
