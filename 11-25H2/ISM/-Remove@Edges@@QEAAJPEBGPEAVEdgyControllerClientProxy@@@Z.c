/*
 * XREFs of ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2DFC
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x180154A50 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180067E10 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079864 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18007FAB0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180154528 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@0@@Z @ 0x1801A05D8 (--$_Destroy_range@V-$allocator@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@.c)
 *     ??$_Move_unchecked@PEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@00@Z @ 0x1801A1C20 (--$_Move_unchecked@PEAV-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801A1F3C (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801A22E8 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z @ 0x1801A2A58 (-IsClientPresent@Edge@@QEBA_NW4EdgyClient@@@Z.c)
 *     ?IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2A84 (-IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801A326C (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 */

__int64 __fastcall Edges::Remove(Edges *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  int Edge; // eax
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  struct EdgyControllerClientProxy **v8; // rcx
  const char *v9; // r9
  _WORD *v10; // rdx
  __int64 *v11; // rbx
  bool IsEdge; // al
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 *i; // rsi
  __int64 *v19; // rbx
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v22[32]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  Edge = Edges::FindEdge(this, a2);
  if ( Edge < 0 )
    return 2147942487LL;
  v6 = (__int64)Edge << 7;
  v7 = (_QWORD *)(v6 + *(_QWORD *)this);
  if ( Edge::IsClientPresent((__int64)v7, 2) )
  {
    v11 = (__int64 *)v7[13];
    IsEdge = Edge::IsEdge(v8, a3);
    if ( v11 == (__int64 *)v7[14] )
    {
      if ( IsEdge )
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v7 + 5);
    }
    else if ( IsEdge )
    {
      _mm_lfence();
      v13 = *(_QWORD *)this;
      v14 = *(__int64 **)(*(_QWORD *)this + v6 + 104);
      v15 = *v14;
      if ( *(_QWORD *)(*(_QWORD *)this + v6 + 40) != *v14 )
      {
        v21 = *v14;
        Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(&v21);
        v21 = *(_QWORD *)(v13 + v6 + 40);
        *(_QWORD *)(v13 + v6 + 40) = v15;
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v21);
      }
      v16 = *(_QWORD *)this;
      std::_Move_unchecked<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *>(
        *(_QWORD *)(*(_QWORD *)this + v6 + 104) + 8LL,
        *(_QWORD *)(*(_QWORD *)this + v6 + 112),
        *(_QWORD *)(*(_QWORD *)this + v6 + 104));
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease((__int64 *)(*(_QWORD *)(v16 + v6 + 112) - 8LL));
      *(_QWORD *)(v16 + v6 + 112) -= 8LL;
    }
    else
    {
      v17 = v7[14];
      while ( v11 != (__int64 *)v17 && (struct EdgyControllerClientProxy *)*v11 != a3 )
        ++v11;
      if ( v11 != (__int64 *)v17 )
      {
        for ( i = v11 + 1; i != (__int64 *)v17; ++i )
        {
          if ( (struct EdgyControllerClientProxy *)*i != a3 )
            Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::operator=(v11++, i);
        }
        if ( v11 != (__int64 *)v17 )
        {
          v19 = (__int64 *)std::_Move_unchecked<Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *,Microsoft::WRL::ComPtr<EdgyControllerClientProxy> *>(
                             v17,
                             v7[14],
                             (__int64)v11);
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>>(v19, (__int64 *)v7[14]);
          v7[14] = v19;
        }
      }
    }
  }
  else
  {
    if ( !Edge::IsEdge(v8, a3) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x196,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edges.cpp",
        v9);
    v10 = v7 + 1;
    if ( v7[4] > 7uLL )
      v10 = *(_WORD **)v10;
    std::wstring::wstring((__int64)v22, v10);
    std::vector<Edge>::erase(this, &v21, v6 + *(_QWORD *)this);
    std::wstring::_Tidy_deallocate((__int64)v22);
  }
  return 0LL;
}
