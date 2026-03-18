/*
 * XREFs of ?FlushDrawListCache@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180243AE8
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18013A760 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18004FDB0 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180051250 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x18013A190 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
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
