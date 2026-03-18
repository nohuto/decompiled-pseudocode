/*
 * XREFs of ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180008640
 * Callers:
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x18000C350 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800F76F0 (-CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180007B40 (-clear_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePat.c)
 *     ??$construct@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@?$_Default_allocator_traits@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@std@@@std@@SAXAEAV?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@1@QEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@$$QEAU31@@Z @ 0x180007C2C (--$construct@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@U12@@-$_Default_allocator_traits@V.c)
 *     ?push_back@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@2@@Z @ 0x180008100 (-push_back@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@PEBVCV.c)
 *     ??0?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@AEBV01@@Z @ 0x1800083C0 (--0-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext@@_J@Z @ 0x180008E64 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVisualTreePathUnit@CVisualTreePath@@@stdext.c)
 *     ??$_Emplace_reallocate@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@AEAAPEAU?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@1@QEAU21@$$QEAU21@@Z @ 0x180008EAC (--$_Emplace_reallocate@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@-$vector@U-$pair@PEBVCV.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180009080 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180009360 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ?clear@?$vector@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V?$allocator@U?$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@@2@@std@@QEAAXXZ @ 0x1800093D0 (-clear@-$vector@U-$pair@PEBVCVisual@@$$CBVCVisualTreePath@@@std@@V-$allocator@U-$pair@PEBVCVisua.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall CBackdropVisualImage::EnsureAncestorList(CBackdropVisualImage *this)
{
  char *v1; // r15
  CBackdropVisualImage *v2; // r13
  __int128 *v3; // r9
  detail::liberal_expansion_policy *v4; // rcx
  __int64 v5; // rax
  __int128 *v6; // rax
  __int128 *v7; // rdi
  __int128 *v8; // rsi
  char *v9; // rbx
  unsigned __int64 v10; // r13
  char *v11; // rdx
  __int64 v12; // r8
  char *v13; // r10
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  detail::liberal_expansion_policy *v16; // rcx
  char *v17; // rax
  __int128 *v18; // rax
  __int128 **v19; // rsi
  __int128 *v20; // rdx
  char *v21; // rdi
  char *v22; // r12
  unsigned __int64 v23; // r13
  __int128 *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rcx
  unsigned __int64 v27; // r8
  __int128 *v28; // rax
  __int128 *v29; // rax
  _BYTE *v30; // rbx
  __int64 v31; // rax
  signed __int64 v32; // r14
  __int64 v33; // rax
  signed __int64 v34; // rsi
  __int64 v35; // rax
  HANDLE ProcessHeap; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rax
  __int128 *v39; // rdi
  __int128 *v40; // rbx
  _OWORD *v41; // rax
  __int128 v42; // xmm0
  int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rdi
  unsigned __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // r15
  SIZE_T v50; // r9
  unsigned __int64 v51; // r12
  SIZE_T v52; // rax
  void *v53; // rax
  const void *v54; // rbx
  void *v55; // r15
  size_t v56; // r14
  void *v57; // rax
  _BYTE *v58; // rax
  void *v59; // rcx
  unsigned __int64 v60; // r15
  __int128 *v61; // rax
  __int128 *v62; // rbx
  __int128 *v63; // rsi
  __int128 *v64; // r14
  signed __int64 v65; // rsi
  void *v66; // rax
  __int128 *v67; // rcx
  __int128 *v68; // rax
  bool v69; // zf
  __int128 *v70; // rcx
  __int128 v71; // xmm0
  __int128 *v72; // rbx
  _OWORD *v73; // rax
  detail::liberal_expansion_policy *v74; // rcx
  __int128 v75; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v76; // [rsp+30h] [rbp-D0h]
  char *v77; // [rsp+40h] [rbp-C0h]
  __int128 **v78; // [rsp+48h] [rbp-B8h]
  __int128 *v79; // [rsp+50h] [rbp-B0h]
  CBackdropVisualImage *v80; // [rsp+58h] [rbp-A8h]
  __int128 *v81; // [rsp+60h] [rbp-A0h]
  detail::liberal_expansion_policy *v82; // [rsp+68h] [rbp-98h]
  __int128 v83; // [rsp+70h] [rbp-90h] BYREF
  __int64 v84; // [rsp+80h] [rbp-80h]
  char *v85; // [rsp+90h] [rbp-70h] BYREF
  __int128 ***v86; // [rsp+98h] [rbp-68h] BYREF
  char *v87; // [rsp+A0h] [rbp-60h]
  __int128 **v88; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v89[24]; // [rsp+B0h] [rbp-50h] BYREF
  char v90; // [rsp+C8h] [rbp-38h] BYREF
  __int128 *v91; // [rsp+D0h] [rbp-30h] BYREF
  LPVOID lpMem; // [rsp+D8h] [rbp-28h]
  char *v93; // [rsp+E0h] [rbp-20h]
  __int64 *v94; // [rsp+E8h] [rbp-18h]
  _BYTE Src[32]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v96; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v97[7]; // [rsp+118h] [rbp+18h] BYREF

  v1 = (char *)this + 2208;
  v80 = this;
  v2 = this;
  v77 = (char *)this + 2208;
  std::vector<std::pair<CVisual const *,CVisualTreePath const>>::clear((char *)this + 2208);
  v4 = *(detail::liberal_expansion_policy **)(*((_QWORD *)v2 + 260) - 8LL);
  v5 = *((_QWORD *)v2 + 258);
  v82 = v4;
  v6 = *(__int128 **)(v5 + 88);
  v79 = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = (__int128 *)*((_QWORD *)v2 + 260);
      if ( v6 == *((__int128 **)v4 + 9) )
        break;
      v8 = (__int128 *)*((_QWORD *)v2 + 259);
      v9 = Src;
      v91 = v6;
      lpMem = Src;
      v10 = v7 - v8;
      v11 = Src;
      v93 = Src;
      v94 = &v96;
      if ( v10 > 2 )
      {
        v51 = detail::liberal_expansion_policy::expand(v4, 2uLL, v7 - v8);
        v52 = 16 * v51;
        if ( !is_mul_ok(v51, 0x10uLL) )
          v52 = v50;
        v53 = operator new[](v52);
        v54 = lpMem;
        v55 = v53;
        v76 = 0LL;
        v56 = v93 - (_BYTE *)lpMem;
        v75 = (unsigned __int64)v53;
        v84 = 0LL;
        v83 = (unsigned __int64)v53;
        v57 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                        &v83,
                        (v93 - (_BYTE *)lpMem) >> 4);
        memmove_0(v57, v54, v56);
        v58 = lpMem;
        v59 = 0LL;
        lpMem = v55;
        if ( v58 != Src )
          v59 = v58;
        operator delete(v59);
        v9 = (char *)lpMem;
        v1 = v77;
        v11 = (char *)lpMem;
        v93 = (char *)lpMem;
        v94 = (__int64 *)((char *)lpMem + 16 * v51);
      }
      v12 = (v11 - v9) >> 4;
      v13 = &v9[16 * v12];
      if ( v10 && (!v13 || (v10 & 0x8000000000000000uLL) != 0LL) )
        goto LABEL_18;
      v14 = (v11 - v9) >> 4;
      v15 = v7 - v8;
      if ( v10 < v12 )
        v14 = v7 - v8;
      v16 = (detail::liberal_expansion_policy *)(16 * v14);
      v17 = (char *)(v11 - (char *)v16);
      if ( v11 != (char *)(v11 - (char *)v16) )
      {
        v16 = (detail::liberal_expansion_policy *)&v13[16 * v10];
        do
        {
          v11 -= 16;
          if ( !v13 )
            goto LABEL_18;
          if ( !v15 )
            goto LABEL_18;
          --v15;
          v16 = (detail::liberal_expansion_policy *)((char *)v16 - 16);
          if ( v15 >= v10 )
            goto LABEL_18;
          *(_OWORD *)v16 = *(_OWORD *)v11;
        }
        while ( v11 != v17 );
        v11 = v93;
      }
      if ( v12 > v10 )
      {
        if ( v12 && (!v9 || v12 < 0) )
          goto LABEL_18;
        *(_QWORD *)&v75 = v9;
        v32 = 16 * v12 - 16 * v10;
        *((_QWORD *)&v75 + 1) = v12;
        v76 = v12;
        v33 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                &v75,
                -(v32 >> 4));
        memmove_0((void *)(v33 - v32), v9, v32);
        v11 = v93;
      }
      v93 = &v11[16 * v10];
      while ( 1 )
      {
        v18 = v8;
        if ( v8 == v7 )
          break;
        ++v8;
        *(_OWORD *)v9 = *v18;
        v9 += 16;
      }
      v19 = (__int128 **)*((_QWORD *)v1 + 1);
      v78 = v19;
      if ( v19 == *((__int128 ***)v1 + 2) )
      {
        std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
          v1,
          v19,
          &v91);
      }
      else
      {
        v20 = (__int128 *)(v19 + 4);
        *v19 = v91;
        v19[3] = (__int128 *)(v19 + 8);
        v19[1] = (__int128 *)(v19 + 4);
        v19[2] = (__int128 *)(v19 + 4);
        v21 = v93;
        v22 = (char *)lpMem;
        v81 = (__int128 *)(v19 + 4);
        v23 = (v93 - (_BYTE *)lpMem) >> 4;
        if ( v23 > 2 )
        {
          v60 = detail::liberal_expansion_policy::expand(v16, 2uLL, (v93 - (_BYTE *)lpMem) >> 4);
          v61 = (__int128 *)operator new[](saturated_mul(v60, 0x10uLL));
          v62 = v19[1];
          v63 = v19[2];
          v64 = v61;
          v75 = (unsigned __int64)v61;
          v65 = (char *)v63 - (char *)v62;
          v76 = 0LL;
          v83 = (unsigned __int64)v61;
          v84 = 0LL;
          v66 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                          &v83,
                          v65 >> 4);
          memmove_0(v66, v62, v65);
          v19 = v78;
          v67 = 0LL;
          v68 = v78[1];
          v69 = v68 == v81;
          v78[1] = v64;
          if ( !v69 )
            v67 = v68;
          operator delete(v67);
          v20 = v19[1];
          v19[2] = v20;
          v19[3] = &v20[v60];
          v1 = v77;
        }
        v24 = v19[1];
        v25 = v20 - v24;
        v3 = &v24[v25];
        if ( v23 && (!v3 || (v23 & 0x8000000000000000uLL) != 0LL) )
          goto LABEL_18;
        v26 = v20 - v24;
        v27 = v23;
        if ( v23 < v25 )
          v26 = v23;
        v28 = &v20[-v26];
        if ( v20 != v28 )
        {
          v70 = &v3[v23];
          while ( 1 )
          {
            --v20;
            if ( !v3 )
              break;
            if ( !v27 )
              break;
            --v27;
            --v70;
            if ( v27 >= v23 )
              break;
            *v70 = *v20;
            if ( v20 == v28 )
              goto LABEL_23;
          }
LABEL_18:
          _invalid_parameter_noinfo_noreturn();
        }
LABEL_23:
        if ( v25 > v23 )
        {
          if ( v25 && (!v24 || v25 < 0) )
            goto LABEL_18;
          *((_QWORD *)&v75 + 1) = v25;
          v76 = v25;
          v34 = -16LL * v23 + 16 * v25;
          *(_QWORD *)&v75 = v24;
          v35 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CVisualTreePath::VisualTreePathUnit *> &,__int64>(
                  &v75,
                  -(v34 >> 4));
          memmove_0((void *)(v35 - v34), v24, v34);
        }
        v78[2] += v23;
        while ( 1 )
        {
          v29 = (__int128 *)v22;
          if ( v22 == v21 )
            break;
          v22 += 16;
          *v24++ = *v29;
        }
        *((_QWORD *)v1 + 1) += 64LL;
      }
      v30 = lpMem;
      v31 = (v93 - (_BYTE *)lpMem) >> 4;
      if ( v31 )
        v93 -= 16 * v31;
      lpMem = 0LL;
      if ( v30 != Src && v30 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v30);
      }
      v2 = v80;
      v6 = (__int128 *)*((_QWORD *)v79 + 11);
      v79 = v6;
      if ( !v6 )
        goto LABEL_48;
      v4 = v82;
    }
    v72 = (__int128 *)*((_QWORD *)v2 + 259);
    v85 = (char *)v6;
    v86 = (__int128 ***)v89;
    v87 = v89;
    v88 = &v91;
    v73 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                      &v86,
                      0LL,
                      v7 - v72,
                      -1LL);
    while ( v72 != v7 )
    {
      v71 = *v72++;
      *v73++ = v71;
    }
    v37 = (_QWORD *)*((_QWORD *)v2 + 277);
    if ( v37 == *((_QWORD **)v2 + 278) )
    {
      std::vector<std::pair<CVisual const *,CVisualTreePath const>>::_Emplace_reallocate<std::pair<CVisual const *,CVisualTreePath const>>(
        (char *)v2 + 2208,
        v37,
        &v85);
    }
    else
    {
      std::_Default_allocator_traits<std::allocator<std::pair<CVisual const *,CVisualTreePath const>>>::construct<std::pair<CVisual const *,CVisualTreePath const>,std::pair<CVisual const *,CVisualTreePath const>>(
        v74,
        v37,
        &v85);
      *((_QWORD *)v2 + 277) += 64LL;
    }
    v38 = (v87 - (char *)v86) >> 4;
    if ( v38 )
      v87 -= 16 * v38;
    detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(&v86);
  }
LABEL_48:
  v39 = (__int128 *)*((_QWORD *)v2 + 260);
  v40 = (__int128 *)*((_QWORD *)v2 + 259);
  v85 = (char *)&v88;
  v86 = &v88;
  v87 = &v90;
  v41 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                    &v85,
                    0LL,
                    v39 - v40,
                    v3);
  while ( v40 != v39 )
  {
    v42 = *v40++;
    *v41++ = v42;
  }
  v43 = ((__int64)(*((_QWORD *)v2 + 260) - *((_QWORD *)v2 + 259)) >> 4) - 1;
  if ( v43 > 0 )
  {
    v44 = v43;
    v45 = 16LL * v43;
    v46 = v43 - 1LL;
    do
    {
      if ( v44 >= (unsigned __int64)((__int64)(*((_QWORD *)v2 + 260) - *((_QWORD *)v2 + 259)) >> 4)
        || (_mm_lfence(),
            v47 = *((_QWORD *)v2 + 259),
            v48 = *(_QWORD *)(v45 + v47),
            v46 >= (*((_QWORD *)v2 + 260) - v47) >> 4) )
      {
        std::_Xout_of_range("index too big");
        __debugbreak();
        JUMPOUT(0x180008E5DLL);
      }
      _mm_lfence();
      v49 = *(_QWORD *)(*((_QWORD *)v2 + 259) + v45 - 8);
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::clear_region(
        (__int64 *)&v85,
        ((char *)(v86 - 2) - v85) >> 4,
        1LL);
      for ( ; v48 != *(_QWORD *)(v49 + 72); v48 = *(_QWORD *)(v48 + 88) )
      {
        v96 = v48;
        detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(
          v97,
          (__int128 **)&v85);
        std::vector<std::pair<CVisual const *,CVisualTreePath const>>::push_back(
          (CBackdropVisualImage *)((char *)v2 + 2208),
          &v96);
        detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(v97);
      }
      v96 = v48;
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(
        v97,
        (__int128 **)&v85);
      std::vector<std::pair<CVisual const *,CVisualTreePath const>>::push_back(
        (CBackdropVisualImage *)((char *)v2 + 2208),
        &v96);
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(v97);
      --v44;
      v45 -= 16LL;
      --v46;
    }
    while ( v44 > 0 );
  }
  detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(&v85);
}
