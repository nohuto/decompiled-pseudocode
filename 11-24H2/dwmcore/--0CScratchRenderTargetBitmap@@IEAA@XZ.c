/*
 * XREFs of ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x18005BA30
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z @ 0x18005B998 (-Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18005BC84 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(
        CScratchRenderTargetBitmap *this)
{
  __int64 v1; // r11
  CScratchRenderTargetBitmap *result; // rax

  CRenderTargetBitmap::CRenderTargetBitmap(this, 1);
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_QWORD *)(v1 + 16) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)v1 = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *(_QWORD *)(v1 + 80) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v1 + 88) = &CStereoRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  result = (CScratchRenderTargetBitmap *)v1;
  *(_WORD *)(v1 + 144) = 257;
  return result;
}
