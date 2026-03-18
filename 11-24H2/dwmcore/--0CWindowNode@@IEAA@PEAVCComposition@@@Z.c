/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x1802012F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A081C (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *(_QWORD *)this = &CWindowNode::`vftable';
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  *((_DWORD *)this + 212) = 1065353216;
  *((_DWORD *)this + 213) = 1065353216;
  *((_DWORD *)this + 214) = 1065353216;
  *(_QWORD *)((char *)this + 860) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 868) = 0LL;
  *((_DWORD *)this + 219) = 0;
  *((_BYTE *)this + 880) = 0;
  return result;
}
