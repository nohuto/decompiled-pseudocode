/*
 * XREFs of ??0CTextVisual@@QEAA@PEAVCComposition@@@Z @ 0x1802A7B5C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A081C (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CTextVisual *__fastcall CTextVisual::CTextVisual(CTextVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *(_QWORD *)this = &CTextVisual::`vftable';
  return this;
}
