/*
 * XREFs of ?OnCursorGlyphChanged@SystemCursorService2@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800FA6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CF1C8 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800F8778 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_K$$QEA_K@Z @ 0x1800F9258 (--A-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ?CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z @ 0x1800FA028 (-CursorManagerCursorIdExists@SystemCursorService2@@QEAA_N_K@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800FB358 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursorService2::OnCursorGlyphChanged(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10[2]; // [rsp+20h] [rbp-38h] BYREF
  SystemCursor2 *v11; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v12; // [rsp+30h] [rbp-28h]
  _BYTE v13[32]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+6Ch] [rbp+14h]
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = HIDWORD(a2);
  v5 = (unsigned int)a2;
  if ( !SystemCursorService2::CursorManagerCursorIdExists((SystemCursorService2 *)a1, (unsigned int)a2) )
  {
    v6 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)0x8000FFFFLL);
    return v6;
  }
  v16 = v5;
  *(_QWORD *)v10 = *(_QWORD *)std::unordered_map<unsigned __int64,unsigned __int64>::operator[](
                                (_QWORD *)(a1 + 184),
                                &v16);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 112LL))(a1 + 8) )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
           (float *)(a1 + 56),
           (__int64)v13,
           v10);
    std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(
      &v11,
      (_QWORD *)(*(_QWORD *)v8 + 24LL));
    if ( *((_QWORD *)v11 + 23) != v15 )
    {
      v6 = -2147024891;
      v9 = 336LL;
      goto LABEL_7;
    }
    v6 = SystemCursor2::SetShape(v11, a3, 0);
    if ( (v6 & 0x80000000) != 0 )
    {
      v9 = 337LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
        (const char *)v6);
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      return v6;
    }
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  return 0LL;
}
