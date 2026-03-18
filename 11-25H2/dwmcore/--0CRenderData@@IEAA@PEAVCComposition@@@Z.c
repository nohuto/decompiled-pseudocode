/*
 * XREFs of ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x1802029BC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CRenderData *__fastcall CRenderData::CRenderData(CRenderData *this, struct CComposition *a2)
{
  char v2; // al
  CRenderData *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CRenderData::`vftable';
  *((_QWORD *)this + 10) = (char *)this + 72;
  *((_QWORD *)this + 9) = (char *)this + 72;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 12) = (char *)this + 88;
  *((_QWORD *)this + 11) = (char *)this + 88;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = &CRenderDataBounds::`vftable';
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *(_QWORD *)((char *)this + 276) = 1065353216LL;
  *((_QWORD *)this + 27) = 1065353216LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  *(_QWORD *)((char *)this + 236) = 1065353216LL;
  *(_QWORD *)((char *)this + 244) = 0LL;
  *((_DWORD *)this + 63) = 0;
  *((_QWORD *)this + 32) = 1065353216LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  v2 = *((_BYTE *)this + 281);
  *((_BYTE *)this + 280) = -86;
  *((_BYTE *)this + 281) = v2 & 0xC0 | 0x29;
  result = this;
  *((_DWORD *)this + 71) = 0;
  *((_BYTE *)this + 288) = 0;
  *((_WORD *)this + 148) = 257;
  *((_BYTE *)this + 298) = 1;
  return result;
}
