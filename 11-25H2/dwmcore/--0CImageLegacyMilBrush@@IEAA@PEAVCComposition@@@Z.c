/*
 * XREFs of ??0CImageLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x180215BD0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::CImageLegacyMilBrush(
        CImageLegacyMilBrush *this,
        struct CComposition *a2)
{
  CImageLegacyMilBrush *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 10) |= 1u;
  *(_QWORD *)this = &CImageLegacyMilBrush::`vftable';
  *((_DWORD *)this + 50) = 1065353216;
  *((_DWORD *)this + 51) = 1065353216;
  *((_DWORD *)this + 52) = 1065353216;
  *(_QWORD *)((char *)this + 212) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *((_DWORD *)this + 57) = 0;
  *((_BYTE *)this + 232) = 0;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *(_QWORD *)((char *)this + 252) = 0LL;
  return result;
}
