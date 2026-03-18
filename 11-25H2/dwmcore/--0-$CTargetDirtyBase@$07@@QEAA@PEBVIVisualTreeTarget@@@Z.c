/*
 * XREFs of ??0?$CTargetDirtyBase@$07@@QEAA@PEBVIVisualTreeTarget@@@Z @ 0x18020723C
 * Callers:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x180206E18 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206FFC (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027EBEC (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F1E4 (--0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F33C (--0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x18029004C (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ??0COcclusionContext@@QEAA@XZ @ 0x180083198 (--0COcclusionContext@@QEAA@XZ.c)
 *     ??0?$CMergedRectBase@$07@@QEAA@_N@Z @ 0x1800C5118 (--0-$CMergedRectBase@$07@@QEAA@_N@Z.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::CTargetDirtyBase<8>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &CTargetDirtyBase<8>::`vftable';
  CMergedRectBase<8>::CMergedRectBase<8>(a1 + 16, 1);
  *(_QWORD *)(a1 + 464) = 0LL;
  COcclusionContext::COcclusionContext((COcclusionContext *)(a1 + 472));
  result = a1;
  *(_WORD *)(a1 + 2312) = 256;
  return result;
}
