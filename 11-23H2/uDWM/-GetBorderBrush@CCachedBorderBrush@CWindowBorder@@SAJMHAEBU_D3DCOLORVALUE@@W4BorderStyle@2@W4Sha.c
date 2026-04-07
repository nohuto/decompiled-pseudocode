/*
 * XREFs of ?GetBorderBrush@CCachedBorderBrush@CWindowBorder@@SAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180033374
 * Callers:
 *     ?CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z @ 0x1800331B4 (-CreateAndAttachBorderBrush@CWindowBorder@@AEAAJPEAUISpriteVisual@Composition@UI@Windows@@@Z.c)
 * Callees:
 *     ?erase@?$list@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V?$allocator@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@std@@@std@@@2@@Z @ 0x180008B08 (-erase@-$list@V-$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@V-$allocator@V-$weak_ptr@VCCa.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180032238 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@V-$weak_ptr@VCCachedBorderBrush@CWindowBo.c)
 *     ??$?0AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@V?$weak_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@PEAX@std@@@1@AEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@1@@Z @ 0x180032268 (--$-0AEAV-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@-$_List_node_emplace_op2@V-$allo.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180032448 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180033668 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4ShadowStyle@2@PEAV?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@@Z @ 0x180043FC4 (-CreateBorderBrush@CCachedBorderBrush@CWindowBorder@@CAJMHAEBU_D3DCOLORVALUE@@W4BorderStyle@2@W4.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x18010DD40 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWindowBorder::CCachedBorderBrush::GetBorderBrush(
        __int64 a1,
        int a2,
        float *a3,
        int a4,
        int a5,
        __int64 *a6)
{
  float v6; // xmm0_4
  __int64 *v10; // rbx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  volatile signed __int32 *v14; // rdi
  std::_Ref_count_base *v15; // rcx
  int BorderBrush; // eax
  const char *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  const char *v25; // rcx
  __int64 v26; // rbx
  _QWORD *v27; // rcx
  _QWORD *v28; // rax
  int v29; // [rsp+20h] [rbp-60h]
  __int128 v30; // [rsp+30h] [rbp-50h] BYREF
  __int64 v31; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-38h]
  __int128 *v33; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v34; // [rsp+58h] [rbp-28h]
  __int64 v35; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v10 = (__int64 *)CWindowBorder::CCachedBorderBrush::s_cache;
  while ( 1 )
  {
    v10 = (__int64 *)*v10;
    if ( v10 == (__int64 *)CWindowBorder::CCachedBorderBrush::s_cache )
      break;
    v30 = 0LL;
    v11 = v10[3];
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      while ( v12 )
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12);
        if ( v13 == v12 )
        {
          a1 = v10[2];
          *(_QWORD *)&v30 = a1;
          v14 = (volatile signed __int32 *)v10[3];
          *((_QWORD *)&v30 + 1) = v14;
          goto LABEL_8;
        }
      }
    }
    v14 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
    a1 = v30;
LABEL_8:
    if ( *(float *)a1 == v6
      && *(_DWORD *)(a1 + 4) == a2
      && *(float *)_mm_loadu_si128((const __m128i *)(a1 + 12)).m128i_i32 == *a3
      && *(float *)(a1 + 16) == a3[1]
      && *(float *)(a1 + 20) == a3[2]
      && *(float *)(a1 + 24) == a3[3]
      && *(_DWORD *)(a1 + 28) == a4
      && *(_DWORD *)(a1 + 8) == a5 )
    {
      if ( v10 != *(__int64 **)CWindowBorder::CCachedBorderBrush::s_cache )
      {
        std::list<std::weak_ptr<CWindowBorder::CCachedBorderBrush>>::erase(a1, &v35, v10);
        v26 = *(_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache;
        if ( *((_QWORD *)&CWindowBorder::CCachedBorderBrush::s_cache + 1) == 0x7FFFFFFFFFFFFFFLL )
          std::_Dwm_Xlength_error(v25);
        std::_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>(
          &v31,
          (__int64)&CWindowBorder::CCachedBorderBrush::s_cache,
          &v30);
        ++*((_QWORD *)&CWindowBorder::CCachedBorderBrush::s_cache + 1);
        v27 = *(_QWORD **)(v26 + 8);
        *v32 = v26;
        v32[1] = v27;
        v28 = v32;
        v32 = 0LL;
        *(_QWORD *)(v26 + 8) = v28;
        *v27 = v28;
        std::_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>((__int64)&v31);
        v14 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
        a1 = v30;
      }
      if ( v14 )
      {
        _InterlockedIncrement(v14 + 2);
        v14 = (volatile signed __int32 *)*((_QWORD *)&v30 + 1);
        a1 = v30;
      }
      *a6 = a1;
      v15 = (std::_Ref_count_base *)a6[1];
      a6[1] = (__int64)v14;
      if ( v15 )
        std::_Ref_count_base::_Decref(v15);
      if ( v14 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
      return 0LL;
    }
    if ( v14 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
  }
  BorderBrush = CWindowBorder::CCachedBorderBrush::CreateBorderBrush(a1, a2, (_DWORD)a3, a4, a5, (__int64)a6);
  v19 = BorderBrush;
  if ( BorderBrush >= 0 )
  {
    v20 = *(_QWORD *)CWindowBorder::CCachedBorderBrush::s_cache;
    if ( *((_QWORD *)&CWindowBorder::CCachedBorderBrush::s_cache + 1) == 0x7FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(v18);
    v33 = &CWindowBorder::CCachedBorderBrush::s_cache;
    v21 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    v22 = (_QWORD *)v21;
    v34 = (_QWORD *)v21;
    *(_QWORD *)(v21 + 16) = 0LL;
    *(_QWORD *)(v21 + 24) = 0LL;
    if ( a6[1] )
    {
      *(_QWORD *)(v21 + 16) = *a6;
      v23 = a6[1];
      v22[3] = v23;
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 12));
      v22 = v34;
    }
    ++*((_QWORD *)&CWindowBorder::CCachedBorderBrush::s_cache + 1);
    v24 = *(_QWORD **)(v20 + 8);
    *v22 = v20;
    v22[1] = v24;
    v34 = 0LL;
    *(_QWORD *)(v20 + 8) = v22;
    *v24 = v22;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::weak_ptr<CWindowBorder::CCachedBorderBrush>,void *>>>((__int64)&v33);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x132,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)BorderBrush,
    v29);
  return v19;
}
