/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C0015C48
 * Callers:
 *     PrepareHDCBITSBitmap @ 0x1C0016A3C (PrepareHDCBITSBitmap.c)
 *     NtGdiCreateDIBSection @ 0x1C0046FD0 (NtGdiCreateDIBSection.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00476E0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     BitBltSysBmp @ 0x1C0076710 (BitBltSysBmp.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C015C6A0 (NtGdiGetDCDpiScaleValue.c)
 *     NtUserBitBltSysBmp @ 0x1C01CC510 (NtUserBitBltSysBmp.c)
 * Callees:
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C0015C9C (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  unsigned int CachedDpiScaleValue; // ebx
  DC *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
  {
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v3[0]);
    DCOBJ::~DCOBJ((DCOBJ *)v3);
    return CachedDpiScaleValue;
  }
  else
  {
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v4);
    return 1LL;
  }
}
