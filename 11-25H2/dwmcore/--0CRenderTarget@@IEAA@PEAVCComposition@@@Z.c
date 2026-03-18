/*
 * XREFs of ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180207184
 * Callers:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x180206E18 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180206FFC (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027EBEC (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027EEE4 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F1E4 (--0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F33C (--0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x18029004C (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     <none>
 */

CRenderTarget *__fastcall CRenderTarget::CRenderTarget(CRenderTarget *this, struct CComposition *a2)
{
  CRenderTarget *result; // rax

  *(_QWORD *)this = &CBaseAnimation::`vftable'{for `IAnimationResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  result = this;
  *((_BYTE *)this + 156) = 0;
  *((_DWORD *)this + 32) = 28;
  *(_QWORD *)((char *)this + 132) = 3LL;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 1065353216;
  return result;
}
