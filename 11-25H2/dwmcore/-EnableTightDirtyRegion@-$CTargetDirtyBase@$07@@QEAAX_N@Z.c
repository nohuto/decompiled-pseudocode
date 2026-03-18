/*
 * XREFs of ?EnableTightDirtyRegion@?$CTargetDirtyBase@$07@@QEAAX_N@Z @ 0x180207354
 * Callers:
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x1800C3598 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z @ 0x180206E18 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@W4DirtyRegionMode@0@@Z.c)
 *     ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18027F33C (--0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessSetDirtyRegionMode@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETDIRTYREGIONMODE@@@Z @ 0x18028D938 (-ProcessSetDirtyRegionMode@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURER.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x18029004C (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall CTargetDirtyBase<8>::EnableTightDirtyRegion(__int64 a1, char a2)
{
  _QWORD **v2; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rdx
  _DWORD *result; // rax

  v2 = (_QWORD **)(a1 + 464);
  if ( !a2 )
  {
    v4 = 0LL;
    return (_DWORD *)std::unique_ptr<CRegion>::reset(v2, v4);
  }
  if ( !*v2 )
  {
    v3 = operator new(0x48uLL);
    if ( v3 )
    {
      *(_QWORD *)v3 = v3 + 2;
      v3[2] = 0;
    }
    v4 = v3;
    return (_DWORD *)std::unique_ptr<CRegion>::reset(v2, v4);
  }
  result = (_DWORD *)**v2;
  *result = 0;
  return result;
}
