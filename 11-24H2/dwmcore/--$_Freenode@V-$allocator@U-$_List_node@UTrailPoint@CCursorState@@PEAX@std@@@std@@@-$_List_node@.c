/*
 * XREFs of ??$_Freenode@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@PEAU01@@Z @ 0x1802B0BEC
 * Callers:
 *     ??1CCursorState@@UEAA@XZ @ 0x1802B19D8 (--1CCursorState@@UEAA@XZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall std::_List_node<CCursorState::TrailPoint,void *>::_Freenode<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        __int64 a1,
        _QWORD *a2)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(a2 + 3);
  std::_Deallocate<16,0>(a2, 0x50uLL);
}
