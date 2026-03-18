/*
 * XREFs of ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1802A7518
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801AAAD0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x180274568 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1802A763C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::CTableTransferEffect(
        CTableTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v3; // rsi
  char *v4; // rbx

  CFilterEffect::CFilterEffect(this, a2);
  v3 = 4LL;
  *(_QWORD *)this = &CTableTransferEffect::`vftable';
  v4 = (char *)this + 184;
  `vector constructor iterator'(
    (char *)this + 184,
    40LL,
    4LL,
    (CDirtyRegionAnnotation *(__fastcall *)(CDirtyRegionAnnotation *))DynArrayIA<float,2,0>::DynArrayIA<float,2,0>);
  do
  {
    DynArray<float,0>::AddMultipleAndSet(v4, &unk_1803BC8C0, 2LL);
    v4 += 40;
    --v3;
  }
  while ( v3 );
  return this;
}
