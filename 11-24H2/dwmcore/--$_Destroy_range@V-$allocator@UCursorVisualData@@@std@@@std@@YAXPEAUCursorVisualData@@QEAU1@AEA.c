/*
 * XREFs of ??$_Destroy_range@V?$allocator@UCursorVisualData@@@std@@@std@@YAXPEAUCursorVisualData@@QEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259708
 * Callers:
 *     ??$_Uninitialized_move@PEAUCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@YAPEAUCursorVisualData@@QEAU1@0PEAU1@AEAV?$allocator@UCursorVisualData@@@0@@Z @ 0x180259A04 (--$_Uninitialized_move@PEAUCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@YAPEAUC.c)
 *     ??1?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA@XZ @ 0x180259D30 (--1-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@AEAAXQEAUCursorVisualData@@_K1@Z @ 0x18025C6A8 (-_Change_array@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@AEAAXQEAU.c)
 *     ?clear@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAAXXZ @ 0x18025C834 (-clear@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAAXXZ.c)
 * Callees:
 *     ??1CursorVisualData@@QEAA@XZ @ 0x18025A508 (--1CursorVisualData@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CursorVisualData>>(CursorVisualData *this, CursorVisualData *a2)
{
  CursorVisualData *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CursorVisualData::~CursorVisualData(v3);
      v3 = (CursorVisualData *)((char *)v3 + 32);
    }
    while ( v3 != a2 );
  }
}
