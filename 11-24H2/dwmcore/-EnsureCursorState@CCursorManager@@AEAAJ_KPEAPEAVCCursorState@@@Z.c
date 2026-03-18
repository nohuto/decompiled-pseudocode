/*
 * XREFs of ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x1802B04A0
 * Callers:
 *     ?MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x180259580 (-MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z.c)
 *     ?TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z @ 0x1802B05C0 (-TryClaimCursorState@CCursorManager@@QEAA_N_KPEAVCCursorVisual@@0PEAPEAVCCursorState@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ??$_Find_lower_bound@_K@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@@1@AEB_K@Z @ 0x180205578 (--$_Find_lower_bound@_K@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$less@_K@std@@V-$allocator.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802702F0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace@U?$pair@_KPEAVCCursorState@@@std@@@?$_Tree@V?$_Tmap_traits@_KPEAVCCursorState@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KPEAVCCursorState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@std@@_N@1@$$QEAU?$pair@_KPEAVCCursorState@@@1@@Z @ 0x1802B03A4 (--$_Emplace@U-$pair@_KPEAVCCursorState@@@std@@@-$_Tree@V-$_Tmap_traits@_KPEAVCCursorState@@U-$le.c)
 *     ??0CCursorState@@QEAA@XZ @ 0x1802B16FC (--0CCursorState@@QEAA@XZ.c)
 */

__int64 __fastcall CCursorManager::EnsureCursorState(
        CCursorManager *this,
        unsigned __int64 a2,
        struct CCursorState **a3)
{
  __int64 v6; // rdx
  struct CCursorState *v7; // rbx
  CCursorState *v8; // rax
  const char *v9; // r9
  __int64 v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct CCursorState *v14; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+28h] BYREF

  v15 = a2;
  v14 = 0LL;
  if ( a2 )
  {
    std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Find_lower_bound<unsigned __int64>(
      (__int64 *)&xmmword_1803FAA60,
      v11,
      &v15);
    v6 = v12;
    if ( *(_BYTE *)(v12 + 25) || a2 < *(_QWORD *)(v12 + 32) )
      v6 = xmmword_1803FAA60;
    if ( v6 == (_QWORD)xmmword_1803FAA60 )
    {
      v8 = (CCursorState *)DefaultHeap::AllocClear(0x128uLL);
      if ( v8 )
        v8 = CCursorState::CCursorState(v8);
      wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((__int64 *)&v14, (__int64)v8);
      v7 = v14;
      if ( !v14 )
        wil::details::in1diag3::_FailFast_NullAlloc(
          retaddr,
          43LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
          v9);
      v10[0] = a2;
      v10[1] = (__int64)v14;
      std::_Tree<std::_Tmap_traits<unsigned __int64,CCursorState *,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CCursorState *>>,0>>::_Emplace<std::pair<unsigned __int64,CCursorState *>>(
        (__int64 *)&xmmword_1803FAA60,
        (__int64)v11,
        v10);
    }
    else
    {
      wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(
        (__int64 *)&v14,
        *(_QWORD *)(v6 + 40));
      v7 = v14;
    }
    v14 = 0LL;
    *a3 = v7;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
      (const char *)0x80070057LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
    return 2147942487LL;
  }
}
