/*
 * XREFs of ??0CDelegatedInkCanvas@@QEAA@PEAVCComposition@@@Z @ 0x1802A2FD0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x180253C6C (--0CSuperWetSource@@IEAA@PEAVCComposition@@@Z.c)
 */

CDelegatedInkCanvas *__fastcall CDelegatedInkCanvas::CDelegatedInkCanvas(
        CDelegatedInkCanvas *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  CDelegatedInkCanvas *result; // rax

  CSuperWetSource::CSuperWetSource(this, a2);
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_DWORD *)(v2 + 152) = 0;
  *(_DWORD *)(v2 + 156) = 1065353216;
  *(_QWORD *)v2 = &CDelegatedInkCanvas::`vftable';
  result = (CDelegatedInkCanvas *)v2;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_QWORD *)(v2 + 192) = 0LL;
  return result;
}
