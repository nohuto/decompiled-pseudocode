/*
 * XREFs of ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x180043074
 * Callers:
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x180042E18 (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18004312C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Create@CDecodeBitmap@@SAJPEAPEAV1@@Z @ 0x180043968 (-Create@CDecodeBitmap@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap@@@Z @ 0x1802E3B24 (-Create@CStereoRenderTargetBitmap@@SAJPEAVIDeviceTextureTarget@@PEAPEAVIStereoRenderTargetBitmap.c)
 * Callees:
 *     ??$?0$$V@?$CDeviceResourceT@VIRenderTargetBitmap@@@@IEAA@XZ @ 0x1800430EC (--$-0$$V@-$CDeviceResourceT@VIRenderTargetBitmap@@@@IEAA@XZ.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::CRenderTargetBitmap(CRenderTargetBitmap *this, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rcx
  CRenderTargetBitmap *result; // rax
  __int64 v5; // r10
  char v6; // dl

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  CDeviceResourceT<IRenderTargetBitmap>::CDeviceResourceT<IRenderTargetBitmap>((char *)this + 80, a2, this);
  *(_QWORD *)(v2 + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)v2 = &CRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *v3 = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v2 + 88) = &CStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  result = (CRenderTargetBitmap *)v2;
  *(_QWORD *)(v2 + 120) = v5;
  *(_BYTE *)(v2 + 128) = v6;
  return result;
}
