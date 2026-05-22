/*
 * XREFs of ?SetCursorShellMagnification@SystemCursorService2@@UEAAJ_KM@Z @ 0x1800F92C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800F6AA8 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ?SetShellMagnification@SystemCursor2@@QEAAJM@Z @ 0x1800F9918 (-SetShellMagnification@SystemCursor2@@QEAAJM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursorService2::SetCursorShellMagnification(SystemCursorService2 *this, __int64 a2, float a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(SystemCursorService2 *))(*(_QWORD *)this + 112LL))(this) )
  {
    v4 = -2147024809;
    v5 = 102LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         (float *)this + 12,
         (__int64)v8,
         &v10);
  v4 = SystemCursor2::SetShellMagnification(*(SystemCursor2 **)(*(_QWORD *)v7 + 24LL), a3);
  if ( v4 < 0 )
  {
    v5 = 104LL;
    goto LABEL_3;
  }
  return 0LL;
}
