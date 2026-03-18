/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x180206E18
 * Callers:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206B4C (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18027EF88 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18028EEAC (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x1802B207C (--0CVisualCapture@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180207184 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x18020723C (--0-$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z.c)
 *     ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x180207354 (-EnableTightDirtyRegion@-$CTargetDirtyBase@$07@@QEAAX_N@Z.c)
 */

unsigned __int64 __fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        unsigned __int64 a1,
        struct CComposition *a2,
        __int64 a3,
        int a4)
{
  __int128 *v6; // r10
  __int128 v7; // xmm0
  int v8; // r9d
  char v9; // al
  __int64 v10; // rdx
  unsigned __int64 result; // rax

  CRenderTarget::CRenderTarget((CRenderTarget *)a1, a2);
  *(_QWORD *)(a1 + 80) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)a1 = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *(_QWORD *)(a1 + 88) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(a1 + 96) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  v7 = *v6;
  *(_DWORD *)(a1 + 176) = v8;
  *(_DWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 160) = v7;
  *(_DWORD *)(a1 + 196) = 1;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 276) = 1065353216LL;
  *(_QWORD *)(a1 + 216) = 1065353216LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_DWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 236) = 1065353216LL;
  *(_QWORD *)(a1 + 244) = 0LL;
  *(_DWORD *)(a1 + 252) = 0;
  *(_QWORD *)(a1 + 256) = 1065353216LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 272) = 0;
  v9 = *(_BYTE *)(a1 + 281);
  *(_BYTE *)(a1 + 280) = -86;
  *(_BYTE *)(a1 + 281) = v9 & 0xC0 | 0x29;
  *(_QWORD *)(a1 + 284) = 0LL;
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 312) = -1LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  CTargetDirtyBase<8>::CTargetDirtyBase<8>(a1 + 320, (a1 + 88) & ((unsigned __int128)-(__int128)a1 >> 64));
  *(_QWORD *)(a1 + 320) = &CTargetDirtyBase<8>::`vftable';
  LOBYTE(v10) = a4 != 0;
  *(_QWORD *)(a1 + 2640) = a1 + 2672;
  *(_QWORD *)(a1 + 2648) = a1 + 2672;
  *(_DWORD *)(a1 + 2656) = 6;
  *(_QWORD *)(a1 + 2660) = 6LL;
  *(_QWORD *)(a1 + 2720) = 0LL;
  *(_WORD *)(a1 + 2728) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = 1065353216;
  CTargetDirtyBase<8>::EnableTightDirtyRegion(a1 + 320, v10);
  result = a1;
  *(_QWORD *)(a1 + 312) = 16 * g_qpcFrequency.QuadPart / 1000;
  return result;
}
