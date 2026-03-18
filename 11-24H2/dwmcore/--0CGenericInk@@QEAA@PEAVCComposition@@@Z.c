/*
 * XREFs of ??0CGenericInk@@QEAA@PEAVCComposition@@@Z @ 0x1802489D0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CSuperWetSource@@IEAA@PEAVCComposition@@@Z @ 0x180248A7C (--0CSuperWetSource@@IEAA@PEAVCComposition@@@Z.c)
 */

CGenericInk *__fastcall CGenericInk::CGenericInk(CGenericInk *this, struct CComposition *a2)
{
  __int64 v2; // r10

  CSuperWetSource::CSuperWetSource(this, a2);
  *(_QWORD *)(v2 + 144) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)v2 = &CGenericInk::`vftable'{for `CSuperWetSource'};
  *(_QWORD *)(v2 + 152) = &CDeviceResourceTable<CD2DGenericInk,CGenericInk>::`vftable';
  *(_QWORD *)(v2 + 160) = v2;
  *(_QWORD *)(v2 + 168) = v2 + 192;
  *(_QWORD *)(v2 + 176) = v2 + 192;
  *(_QWORD *)(v2 + 184) = v2 + 208;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_DWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_QWORD *)(v2 + 248) = 0LL;
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_DWORD *)(v2 + 264) = 0;
  *(_BYTE *)(v2 + 336) = 0;
  return (CGenericInk *)v2;
}
