/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A7BE8
 * Callers:
 *     ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801A84D8 (-_Tidy@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 *     ??$_Construct_n@AEBQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEBQEAV123@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAX_KAEBQEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@1@Z @ 0x1801A8D10 (--$_Construct_n@AEBQEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEBQEAV123@@-$vector.c)
 *     ??$_Emplace_reallocate@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV234@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x1801A8E14 (--$_Emplace_reallocate@AEAPEAVEdgyControllerClientProxy@@@-$vector@V-$ComPtr@VEdgyControllerClie.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A92FC (--$_Uninitialized_move@PEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA40C (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     _std::vector_Microsoft::WRL::ComPtr_EdgyControllerClientProxy__std::allocator_Microsoft::WRL::ComPtr_EdgyControllerClientProxy_____::_Emplace_reallocate_EdgyControllerClientProxy___&__::_1_::catch$0 @ 0x1801D9121 (_std--vector_Microsoft--WRL--ComPtr_EdgyControllerClientProxy__std--allocator_Microsoft--WRL--Co.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079504 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
