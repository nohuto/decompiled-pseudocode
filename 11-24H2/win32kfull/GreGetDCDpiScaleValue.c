/*
 * XREFs of GreGetDCDpiScaleValue @ 0x14018D780
 * Callers:
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x140204940 (NtUserBitBltSysBmp.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x140204AAC (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     NtGdiCreateDIBSection @ 0x14025E4E0 (NtGdiCreateDIBSection.c)
 *     NtGdiGetDCDpiScaleValue @ 0x14026DD90 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14005C3CC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x14018D7E0 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  int CachedDpiScaleValue; // eax
  unsigned int v2; // ebx
  DC *v4[15]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v5; // [rsp+A8h] [rbp+10h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v4, a1);
  if ( v4[0] )
  {
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v4[0]);
    ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(&v5, CachedDpiScaleValue);
    v2 = v5;
  }
  else
  {
    v2 = 1;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v4);
  return v2;
}
