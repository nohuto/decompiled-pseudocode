/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x1801861AC
 * Callers:
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x1801867E0 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802BB74C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?ColorConvertBitmap@CCursorState@@CA?AV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAVCSystemMemoryBitmap@@@Z @ 0x1802BBE78 (-ColorConvertBitmap@CCursorState@@CA-AV-$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x1802BD560 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x180186120 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1801887CC (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(
        void **this,
        unsigned int a2,
        unsigned int a3,
        enum DXGI_FORMAT *a4,
        bool a5)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // edi

  PixelFormatSize = GetPixelFormatSize(*a4);
  if ( PixelFormatSize && a2 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v10 = (((a2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v11 = HrMalloc(v10, a3, this + 17);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xEDu, 0LL);
    }
    else
    {
      *((_DWORD *)this + 22) = a2;
      *((_DWORD *)this + 23) = a3;
      this[13] = *(void **)a4;
      *((enum DXGI_FORMAT *)this + 28) = a4[2];
      *((_DWORD *)this + 36) = v10;
      if ( a5 )
        memset_0(this[17], 0, a3 * (unsigned int)v10);
    }
  }
  else
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xE7u, 0LL);
  }
  return v12;
}
