/*
 * XREFs of ??0CGlobalComposition@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1802633E4
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z @ 0x1800ED334 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVCConnection@@PEAPEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1801F4850 (--0CComposition@@IEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     ?SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z @ 0x18021AEF0 (-SetCompositionCapabilities@CComposition@@QEAAXAEBUCOMPOSITION_CAPABILITY_INFO@@@Z.c)
 */

CGlobalComposition *__fastcall CGlobalComposition::CGlobalComposition(
        CGlobalComposition *this,
        struct CTransport *a2,
        struct CConnection *a3)
{
  __m128i si128; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  CComposition::CComposition(this, a2, a3);
  *(_QWORD *)this = &CGlobalComposition::`vftable';
  *((_QWORD *)this + 816) = 0LL;
  *((_QWORD *)this + 817) = 0LL;
  *((_QWORD *)this + 818) = 0LL;
  if ( *((_QWORD *)a2 + 3) )
  {
    v7 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    CComposition::SetCompositionCapabilities(this, (const struct COMPOSITION_CAPABILITY_INFO *)&si128);
  }
  return this;
}
