/*
 * XREFs of ??1Edge@@QEAA@XZ @ 0x1801A7C64
 * Callers:
 *     ??$_Destroy_range@V?$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801A7C20 (--$_Destroy_range@V-$allocator@VEdge@@@std@@@std@@YAXPEAVEdge@@QEAV1@AEAV-$allocator@VEdge@@@0@@.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A9680 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801A97A4 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801AA87C (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 *     _Edges::AddOrUpdate_::_1_::dtor$0 @ 0x1801D920B (_Edges--AddOrUpdate_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079504 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801A84D8 (-_Tidy@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 */

void __fastcall Edge::~Edge(Edge *this)
{
  std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy((char *)this + 104);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)this + 5);
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
