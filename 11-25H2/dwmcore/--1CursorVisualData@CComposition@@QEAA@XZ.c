/*
 * XREFs of ??1CursorVisualData@CComposition@@QEAA@XZ @ 0x18026547C
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180198818 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualData@CComposition@@QEAU12@AEAV?$allocator@UCursorVisualData@CComposition@@@0@@Z @ 0x180264648 (--$_Destroy_range@V-$allocator@UCursorVisualData@CComposition@@@std@@@std@@YAXPEAUCursorVisualDa.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x180266908 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CComposition::CursorVisualData::~CursorVisualData(CComposition::CursorVisualData *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 3);
  CExcludeVisualReference::~CExcludeVisualReference(this);
}
