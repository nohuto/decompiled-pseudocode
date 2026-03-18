/*
 * XREFs of ??$_Destroy_range@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualData@CComposition@@QEAU12@AEAV?$allocator@UCursorVisualData@CComposition@@@0@@Z @ 0x180264648
 * Callers:
 *     ??$_Uninitialized_move@PEAUCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAPEAUCursorVisualData@CComposition@@QEAU12@0PEAU12@AEAV?$allocator@UCursorVisualData@CComposition@@@0@@Z @ 0x180264944 (--$_Uninitialized_move@PEAUCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CCompos.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180264D94 (--1CComposition@@MEAA@XZ.c)
 *     ?_Change_array@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@AEAAXQEAUCursorVisualData@CComposition@@_K1@Z @ 0x18026667C (-_Change_array@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposit.c)
 * Callees:
 *     ??1CursorVisualData@CComposition@@QEAA@XZ @ 0x18026547C (--1CursorVisualData@CComposition@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CComposition::CursorVisualData>>(
        CComposition::CursorVisualData *this,
        CComposition::CursorVisualData *a2)
{
  CComposition::CursorVisualData *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CComposition::CursorVisualData::~CursorVisualData(v3);
      v3 = (CComposition::CursorVisualData *)((char *)v3 + 32);
    }
    while ( v3 != a2 );
  }
}
