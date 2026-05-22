/*
 * XREFs of ?OnCursorParametersChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorParametersData@@@Z @ 0x1800FA820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800F8778 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_K$$QEA_K@Z @ 0x1800F9258 (--A-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800FA028 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 *     ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x1800FB2F8 (-SetRasterizationScale@SystemCursor2@@QEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursorService2::OnCursorParametersChanged(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  if ( !SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)a1, a2) )
  {
    v6 = -2147418113;
    v7 = 347LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v14 = v3;
  v9 = *(_QWORD *)std::unordered_map<unsigned __int64,unsigned __int64>::operator[]((_QWORD *)(a1 + 184), &v14);
  v10 = *(_QWORD *)(a1 + 8);
  v15 = v9;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(v10 + 112))(a1 + 8) )
  {
    v11 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
            (float *)(a1 + 56),
            (__int64)v12,
            &v15);
    v6 = SystemCursor2::SetRasterizationScale(*(SystemCursor2 **)(*(_QWORD *)v11 + 24LL), a3);
    if ( v6 < 0 )
    {
      v7 = 352LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
