/*
 * XREFs of ??1CBitmapRealization@@UEAA@XZ @ 0x180201564
 * Callers:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1801EE22C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1?$CDeviceResourceT@V?$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealization@@@@@@MEAA@XZ @ 0x1802061FC (--1-$CDeviceResourceT@V-$IBitmapRealizationMethodsT@VCBitmapRealization@@VIYUVSwapChainRealizati.c)
 *     ??_ECBitmapRealization@@UEAAPEAXI@Z @ 0x1802D6A90 (--_ECBitmapRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18020158C (--1-$com_ptr_t@VCDxHandleStereoBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this)
{
  wil::com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>::~com_ptr_t<CDxHandleStereoBitmapRealization,wil::err_returncode_policy>((char *)this + 288);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
