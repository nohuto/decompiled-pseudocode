/*
 * XREFs of ??$destruct_range@UEffectInput@@@detail@@YAXPEAUEffectInput@@0@Z @ 0x180202208
 * Callers:
 *     ??$_Reallocate@$0A@@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z @ 0x18007D444 (--$_Reallocate@$0A@@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18007DF10 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ??$emplace_back@UEffectInput@@@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUEffectInput@@@Z @ 0x18007F7BC (--$emplace_back@UEffectInput@@@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00.c)
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x1801EE5E4 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 */

void __fastcall detail::destruct_range<EffectInput>(CDrawListBitmap *this, CDrawListBitmap *a2)
{
  CDrawListBitmap *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CDrawListBitmap::~CDrawListBitmap(v3);
      v3 = (CDrawListBitmap *)((char *)v3 + 112);
    }
    while ( v3 != a2 );
  }
}
