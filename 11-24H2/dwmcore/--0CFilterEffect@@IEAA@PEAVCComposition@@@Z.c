/*
 * XREFs of ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x180274568
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x180274354 (--0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x180274D60 (--0CShadowEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18029EF40 (--0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1802A7518 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x1802A7F1C (--0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CFilterEffect *__fastcall CFilterEffect::CFilterEffect(CFilterEffect *this, struct CComposition *a2)
{
  CFilterEffect *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CFilterEffect::`vftable';
  *((_QWORD *)this + 10) = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  *((_QWORD *)this + 11) = this;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_QWORD *)this + 13) = (char *)this + 120;
  *((_QWORD *)this + 14) = (char *)this + 136;
  result = this;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return result;
}
