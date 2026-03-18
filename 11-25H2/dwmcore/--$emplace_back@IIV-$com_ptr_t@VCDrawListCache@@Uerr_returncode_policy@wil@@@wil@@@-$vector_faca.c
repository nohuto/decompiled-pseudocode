/*
 * XREFs of ??$emplace_back@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXIIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801DA638
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014C600 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J@Z @ 0x18012504C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@_J.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18014BD30 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1801DA59C (--$uninitialized_move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_arra.c)
 *     ??$_Move_backward_unchecked@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAUContentEntry@CDrawListCacheSet@@@std@@YAPEAUContentEntry@CDrawListCacheSet@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0PEAU12@@Z @ 0x1801DA954 (--$_Move_backward_unchecked@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@PEAUConte.c)
 *     ??$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSet@@0@Z @ 0x1801DA9C0 (--$destruct_range@UContentEntry@CDrawListCacheSet@@@detail@@YAXPEAUContentEntry@CDrawListCacheSe.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

void __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace_back<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        detail::liberal_expansion_policy *a1,
        int a2,
        int a3,
        volatile signed __int32 **a4)
{
  volatile signed __int32 *v4; // r12
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r11
  unsigned __int64 v18; // rbx
  unsigned __int64 i; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  LPVOID v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // rdx
  LPVOID v26; // rbx
  void *v27; // rcx
  bool v28; // zf
  unsigned __int64 v29; // r9
  _QWORD *v30; // rdx
  __int64 v31; // rax
  __int128 v32; // [rsp+28h] [rbp-59h] BYREF
  __int64 v33; // [rsp+38h] [rbp-49h]
  __int128 v34; // [rsp+48h] [rbp-39h] BYREF
  __int64 v35; // [rsp+58h] [rbp-29h]
  __int64 v36; // [rsp+78h] [rbp-9h]
  char v37[88]; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  volatile signed __int32 *v39; // [rsp+E8h] [rbp+67h] BYREF
  int v40; // [rsp+F0h] [rbp+6Fh]
  int v41; // [rsp+F8h] [rbp+77h]
  volatile signed __int32 **v42; // [rsp+100h] [rbp+7Fh]

  v42 = a4;
  v41 = a3;
  v40 = a2;
  v4 = *a4;
  *a4 = 0LL;
  v6 = *((_QWORD *)a1 + 1);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *(_QWORD *)a1;
  v9 = v6 - *(_QWORD *)a1;
  v39 = v4;
  v10 = v9 >> 4;
  if ( !((v7 - v6) >> 4) )
  {
    if ( v10 + 1 < v10 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_18:
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v32);
      goto LABEL_15;
    }
    v22 = detail::liberal_expansion_policy::expand(a1, (v7 - v8) >> 4, v10 + 1);
    v23 = operator new[](saturated_mul(v22, 0x10uLL));
    v24 = (_QWORD *)*((_QWORD *)a1 + 1);
    v25 = *(_QWORD *)a1;
    *(_QWORD *)&v32 = v23;
    *((_QWORD *)&v32 + 1) = v10;
    v26 = v23;
    v33 = 0LL;
    v34 = v32;
    v35 = 0LL;
    std::uninitialized_move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
      (__int64)v37,
      v25,
      v24,
      &v34);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(*(_QWORD *)a1, *((_QWORD *)a1 + 1));
    v27 = *(void **)a1;
    v28 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v26;
    if ( v28 )
      v27 = 0LL;
    operator delete(v27);
    v8 = *(_QWORD *)a1;
    v6 = *(_QWORD *)a1 + 16 * v10;
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v22;
    *((_QWORD *)a1 + 1) = v6;
  }
  v33 = 0LL;
  v11 = (v6 - v8) >> 4;
  *((_QWORD *)&v32 + 1) = 1LL;
  v12 = 16 * v11;
  v13 = v11 - v10;
  v36 = 0LL;
  v14 = 16 * v11 + v8;
  *(_QWORD *)&v32 = v14;
  if ( !v14 )
    goto LABEL_10;
  v36 = 1LL;
  v15 = ((v6 - v8) >> 4) - v10;
  if ( v13 > 1 )
    v15 = 1LL;
  v16 = 16 * v15;
  v17 = v6 - v16;
  v33 = 1LL;
  if ( v6 != v6 - v16 )
  {
    v29 = v33;
    v30 = (_QWORD *)(v12 + v8 + 24);
    do
    {
      v6 -= 16LL;
      if ( !(_QWORD)v32 )
        goto LABEL_10;
      if ( !v29 )
        goto LABEL_10;
      --v29;
      v30 -= 2;
      if ( v29 >= *((_QWORD *)&v32 + 1) )
        goto LABEL_10;
      *((_DWORD *)v30 - 2) = *(_DWORD *)v6;
      *((_DWORD *)v30 - 1) = *(_DWORD *)(v6 + 4);
      v31 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)(v6 + 8) = 0LL;
      *v30 = v31;
    }
    while ( v6 != v17 );
  }
  if ( v13 <= 1 )
    goto LABEL_7;
  if ( v11 && (!v8 || v11 < 0) )
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v32 + 1) = v11;
  v33 = v11;
  *(_QWORD *)&v32 = v8;
  v21 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
          &v32,
          -((__int64)(v12 - 16 - 16 * v10) >> 4));
  std::_Move_backward_unchecked<std::move_iterator<CDrawListCacheSet::ContentEntry *>,CDrawListCacheSet::ContentEntry *>(
    v8 + 16 * v10,
    v12 + v8 - 16,
    v21);
LABEL_7:
  v18 = v8 + 16 * (v10 + 1);
  if ( v14 < v18 )
    v18 = v14;
  for ( i = v8 + 16 * v10; i != v18; i += 16LL )
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)(i + 8));
  *((_QWORD *)a1 + 1) += 16LL;
  v20 = 2 * v10;
  *(_DWORD *)(v8 + 8 * v20) = v40;
  *(_DWORD *)(v8 + 8 * v20 + 4) = v41;
  *(_QWORD *)(v8 + 8 * v20 + 8) = v4;
  if ( v4 && _InterlockedAdd(v4 + 2, 1u) <= 0 )
    goto LABEL_18;
LABEL_15:
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(&v39);
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v42);
}
