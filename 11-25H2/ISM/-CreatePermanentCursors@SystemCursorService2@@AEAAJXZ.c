/*
 * XREFs of ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800F816C
 * Callers:
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800F86B4 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18007FF1C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800908B4 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800F6AA8 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??$make_shared@VSystemCursor2@@V?$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@@std@@YA?AV?$shared_ptr@VSystemCursor2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAUCursorDeviceInfo@@@Z @ 0x1800F6DE0 (--$make_shared@VSystemCursor2@@V-$shared_ptr@VSystemCursorService2@@@std@@PEAUCursorDeviceInfo@@.c)
 *     ?CreateCursorVisual@SystemCursor2@@AEAAJXZ @ 0x1800F8030 (-CreateCursorVisual@SystemCursor2@@AEAAJXZ.c)
 *     ?GetCursorDeviceIdForInputType@@YA_KW4InputType@@@Z @ 0x1800F8670 (-GetCursorDeviceIdForInputType@@YA_KW4InputType@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemCursorService2::CreatePermanentCursors(SystemCursorService2 *this)
{
  _QWORD *v2; // rax
  int CursorVisual; // eax
  unsigned int v4; // ebx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  SystemCursor2 *v10; // rax
  std::_Ref_count_base *v11; // rdx
  std::_Ref_count_base *v12; // rbx
  std::_Ref_count_base *v13; // rcx
  SystemCursor2 *v14; // [rsp+20h] [rbp-19h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-11h]
  __int64 *v16; // [rsp+30h] [rbp-9h] BYREF
  __int64 CursorDeviceIdForInputType; // [rsp+38h] [rbp-1h] BYREF
  __int64 v18; // [rsp+40h] [rbp+7h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp+Fh]
  __int64 v20; // [rsp+50h] [rbp+17h] BYREF
  std::_Ref_count_base *v21; // [rsp+58h] [rbp+1Fh]
  char v22[16]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v23; // [rsp+70h] [rbp+37h] BYREF
  int v24; // [rsp+78h] [rbp+3Fh]
  int v25; // [rsp+7Ch] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  CursorDeviceIdForInputType = GetCursorDeviceIdForInputType(2LL);
  v24 = 0;
  v23 = CursorDeviceIdForInputType;
  v25 = 100;
  v16 = &v23;
  v2 = (_QWORD *)std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)this + 32, &v18);
  std::make_shared<SystemCursor2,std::shared_ptr<SystemCursorService2>,CursorDeviceInfo *>(&v14, v2, (__int64 *)&v16);
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  CursorVisual = SystemCursor2::CreateCursorVisual(v14);
  v4 = CursorVisual;
  if ( CursorVisual >= 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
      (float *)this + 14,
      (__int64)v22,
      &CursorDeviceIdForInputType);
    v6 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v20, &v14);
    v7 = *v6;
    *v6 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 24) = v7;
    v9 = v6[1];
    v6[1] = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 32) = v9;
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    v10 = 0LL;
    v11 = 0LL;
    v12 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 3);
      v10 = v14;
      v12 = v15;
      v11 = v15;
    }
    *((_QWORD *)this + 32) = v10;
    v13 = (std::_Ref_count_base *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = v11;
    if ( v13 )
      std::_Ref_count_base::_Decwref(v13);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)(unsigned int)CursorVisual);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
      (const char *)v4);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    return v4;
  }
}
