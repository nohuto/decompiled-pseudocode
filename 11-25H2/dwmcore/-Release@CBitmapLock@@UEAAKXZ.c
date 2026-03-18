/*
 * XREFs of ?Release@CBitmapLock@@UEAAKXZ @ 0x1801DD4C0
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z @ 0x1801D531C (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNPEAPEAUIWICBitmap@@@Z.c)
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1801DCBB8 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?Release@?$CMILCOMBaseT@VICompositionSurfaceStatistics@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180218920 (-Release@-$CMILCOMBaseT@VICompositionSurfaceStatistics@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?Release@CBitmapLock@@WBA@EAAKXZ @ 0x180261600 (-Release@CBitmapLock@@WBA@EAAKXZ.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802E5E94 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?RemoveReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800CF050 (-RemoveReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapLock::Release(CBitmapLock *this)
{
  CMILRefCountImpl *v1; // rsi
  unsigned int v3; // ebx

  v1 = (CBitmapLock *)((char *)this + 8);
  v3 = CMILRefCountImpl::RemoveReference((CBitmapLock *)((char *)this + 8));
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference(v1);
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)this + 72LL))(this);
    v3 = CMILRefCountImpl::RemoveReference(v1);
    if ( !v3 )
    {
      CMILRefCountImpl::RemoveReference(v1);
      (*(void (__fastcall **)(CBitmapLock *, __int64))(*(_QWORD *)this + 64LL))(this, 1LL);
    }
  }
  return v3;
}
