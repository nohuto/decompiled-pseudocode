/*
 * XREFs of ?SetCursorShellVisibility@SystemCursorService2@@UEAAJ_K_N@Z @ 0x1800F9350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800F6AA8 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ?GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ @ 0x1800F8690 (-GetEffectiveVisibiltyState@SystemCursor2@@AEBA_NXZ.c)
 *     ?SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z @ 0x1800F94F4 (-SetEffectiveVisibility@SystemCursor2@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursorService2::SetCursorShellVisibility(SystemCursorService2 *this, __int64 a2, char a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rax
  SystemCursor2 *v9; // rcx
  char EffectiveVisibiltyState; // al
  SystemCursor2 *v11; // rcx
  char v12; // dl
  int v13; // eax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(SystemCursorService2 *))(*(_QWORD *)this + 112LL))(this) )
  {
    v5 = -2147024809;
    v6 = 92LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)v5);
    return v5;
  }
  v8 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         (float *)this + 12,
         (__int64)v14,
         &v16);
  SystemCursor2::GetEffectiveVisibiltyState(*(SystemCursor2 **)(*(_QWORD *)v8 + 24LL));
  *((_BYTE *)v9 + 176) = a3;
  EffectiveVisibiltyState = SystemCursor2::GetEffectiveVisibiltyState(v9);
  if ( v12 != EffectiveVisibiltyState )
  {
    v13 = SystemCursor2::SetEffectiveVisibility(v11, EffectiveVisibiltyState);
    v5 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice2.cpp",
        (const char *)(unsigned int)v13);
      v6 = 94LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
