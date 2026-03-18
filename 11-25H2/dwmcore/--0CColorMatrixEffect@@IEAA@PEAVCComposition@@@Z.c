/*
 * XREFs of ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x18027EB5C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180110938 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18027ED70 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CColorMatrixEffect *__fastcall CColorMatrixEffect::CColorMatrixEffect(
        CColorMatrixEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CColorMatrixEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  result = (CColorMatrixEffect *)v2;
  *(_QWORD *)v2 = &CColorMatrixEffect::`vftable';
  *(_QWORD *)(v2 + 176) = 1065353216LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_DWORD *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 196) = 1065353216LL;
  *(_QWORD *)(v2 + 204) = 0LL;
  *(_DWORD *)(v2 + 212) = 0;
  *(_QWORD *)(v2 + 216) = 1065353216LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_DWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 236) = 1065353216LL;
  *(_QWORD *)(v2 + 244) = 0LL;
  *(_DWORD *)(v2 + 252) = 0;
  *(_QWORD *)(v2 + 256) = 1LL;
  return result;
}
