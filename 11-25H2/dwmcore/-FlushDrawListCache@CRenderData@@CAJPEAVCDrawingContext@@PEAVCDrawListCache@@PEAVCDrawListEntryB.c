/*
 * XREFs of ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18024CA20
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18000DF90 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800D2800 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800D3CA0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderData::FlushDrawListCache(
        struct CDrawingContext *this,
        struct CDrawListCache *a2,
        struct CDrawListEntryBuilder *a3)
{
  unsigned int v3; // edi
  int v7; // eax

  v3 = 0;
  if ( (unsigned int)((__int64)(*((_QWORD *)a3 + 15) - *((_QWORD *)a3 + 14)) >> 3) )
    CDrawListCache::Update(a2, this, a3);
  CDrawListEntryBuilder::Reset(a3);
  if ( *((_QWORD *)a2 + 3) )
  {
    v7 = CDrawingContext::EmitDrawListCache(this, a2);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x4F5u, 0LL);
  }
  if ( (*((_BYTE *)a2 + 72) & 0x40) != 0 )
    CDrawListCache::Invalidate(a2);
  return v3;
}
