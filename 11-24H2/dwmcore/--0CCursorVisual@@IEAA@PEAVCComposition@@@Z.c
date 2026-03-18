/*
 * XREFs of ??0CCursorVisual@@IEAA@PEAVCComposition@@@Z @ 0x18028F9A8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A081C (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CCursorVisual *__fastcall CCursorVisual::CCursorVisual(CCursorVisual *this, struct CComposition *a2)
{
  CVisual::CVisual(this, a2);
  *((_BYTE *)this + 696) = 1;
  *(_QWORD *)this = &CCursorVisual::`vftable';
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_WORD *)this + 372) = 0;
  return this;
}
