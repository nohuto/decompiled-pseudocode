/*
 * XREFs of ??1CCommonRenderingEffect@@MEAA@XZ @ 0x18004D5E8
 * Callers:
 *     ??_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z @ 0x1801CD5C0 (--_GCProjectedShadowRenderingEffect@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 */

void __fastcall CCommonRenderingEffect::~CCommonRenderingEffect(CCommonRenderingEffect *this)
{
  __int64 v1; // rbx
  CDrawListBitmap *v2; // rdi

  v1 = 2LL;
  v2 = (CCommonRenderingEffect *)((char *)this + 64);
  do
  {
    v2 = (CDrawListBitmap *)((char *)v2 - 24);
    CDrawListBitmap::~CDrawListBitmap(v2);
    --v1;
  }
  while ( v1 );
}
