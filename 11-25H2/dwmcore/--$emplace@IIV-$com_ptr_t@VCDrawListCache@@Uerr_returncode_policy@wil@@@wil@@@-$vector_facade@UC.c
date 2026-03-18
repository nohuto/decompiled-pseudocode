/*
 * XREFs of ??$emplace@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UContentEntry@CDrawListCacheSet@@@1@V?$basic_iterator@$$CBUContentEntry@CDrawListCacheSet@@@1@IIV?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180012998
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18000E560 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x180010960 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
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

_QWORD *__fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::emplace<unsigned int,unsigned int,wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>>(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // rbx
  __int64 v7; // r15
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r10
  unsigned __int64 v17; // rbx
  __int64 i; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  void *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  void *v29; // rbx
  void *v30; // rcx
  bool v31; // zf
  __int64 v32; // rdi
  unsigned __int64 v33; // r9
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int128 v36; // [rsp+28h] [rbp-59h] BYREF
  __int64 v37; // [rsp+38h] [rbp-49h]
  __int128 v38; // [rsp+48h] [rbp-39h] BYREF
  __int64 v39; // [rsp+58h] [rbp-29h]
  __int64 v40; // [rsp+78h] [rbp-9h]
  _BYTE v41[72]; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+4Fh]

  v6 = 0LL;
  v7 = *(_QWORD *)a1;
  v9 = *((_QWORD *)a1 + 1);
  v10 = (__int64)(*a3 - *(_QWORD *)a1) >> 4;
  if ( !((*((_QWORD *)a1 + 2) - v9) >> 4) )
  {
    v22 = (v9 - v7) >> 4;
    if ( v22 + 1 < v22 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_18:
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v36);
      goto LABEL_15;
    }
    v25 = detail::liberal_expansion_policy::expand(a1, (*((_QWORD *)a1 + 2) - v7) >> 4, v22 + 1);
    v26 = operator new[](saturated_mul(v25, 0x10uLL));
    v27 = *((_QWORD *)a1 + 1);
    v28 = *(_QWORD *)a1;
    v37 = 0LL;
    v29 = v26;
    *(_QWORD *)&v36 = v26;
    *((_QWORD *)&v36 + 1) = v22;
    v39 = 0LL;
    v38 = v36;
    std::uninitialized_move<std::move_iterator<CDrawListCacheSet::ContentEntry *>,stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *>>(
      v41,
      v28,
      v27,
      &v38);
    detail::destruct_range<CDrawListCacheSet::ContentEntry>(*(_QWORD *)a1, *((_QWORD *)a1 + 1));
    v30 = *(void **)a1;
    v31 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v29;
    if ( v31 )
      v30 = 0LL;
    operator delete(v30);
    v7 = *(_QWORD *)a1;
    v9 = *(_QWORD *)a1 + 16 * v22;
    v32 = *(_QWORD *)a1 + 16 * v25;
    *((_QWORD *)a1 + 1) = v9;
    *((_QWORD *)a1 + 2) = v32;
  }
  v37 = 0LL;
  v11 = (v9 - v7) >> 4;
  *((_QWORD *)&v36 + 1) = 1LL;
  v40 = 0LL;
  v12 = v11 - v10;
  v13 = v7 + 16 * v11;
  *(_QWORD *)&v36 = v13;
  if ( !v13 )
    goto LABEL_10;
  v40 = 1LL;
  v14 = ((v9 - v7) >> 4) - v10;
  if ( v12 > 1 )
    v14 = 1LL;
  v15 = 16 * v14;
  v16 = v9 - v15;
  v37 = 1LL;
  if ( v9 != v9 - v15 )
  {
    v33 = v37;
    v34 = (_QWORD *)(v7 + 16 * ((v9 - v7) >> 4) + 24);
    do
    {
      v9 -= 16LL;
      if ( !(_QWORD)v36 )
        goto LABEL_10;
      if ( !v33 )
        goto LABEL_10;
      --v33;
      v34 -= 2;
      if ( v33 >= *((_QWORD *)&v36 + 1) )
        goto LABEL_10;
      *((_DWORD *)v34 - 2) = *(_DWORD *)v9;
      *((_DWORD *)v34 - 1) = *(_DWORD *)(v9 + 4);
      v35 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)(v9 + 8) = 0LL;
      *v34 = v35;
    }
    while ( v9 != v16 );
  }
  if ( v12 <= 1 )
    goto LABEL_7;
  if ( v11 && (!v7 || v11 < 0) )
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  v23 = v7 + 16 * v11;
  *((_QWORD *)&v36 + 1) = v11;
  v37 = v11;
  *(_QWORD *)&v36 = v7;
  v24 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListCacheSet::ContentEntry *> &,__int64>(
          &v36,
          -((16 * v11 - 16 - 16 * v10) >> 4));
  std::_Move_backward_unchecked<std::move_iterator<CDrawListCacheSet::ContentEntry *>,CDrawListCacheSet::ContentEntry *>(
    v7 + 16 * v10,
    v23 - 16,
    v24);
LABEL_7:
  v17 = v7 + 16 * (v10 + 1);
  if ( v13 < v17 )
    v17 = v13;
  for ( i = v7 + 16 * v10; i != v17; i += 16LL )
    wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(i + 8);
  *((_QWORD *)a1 + 1) += 16LL;
  v19 = 2 * v10;
  v6 = a6;
  *(_DWORD *)(v7 + 8 * v19) = a4;
  *(_DWORD *)(v7 + 8 * v19 + 4) = a5;
  v20 = *a6;
  *(_QWORD *)(v7 + 8 * v19 + 8) = *a6;
  if ( v20 && _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u) <= 0 )
    goto LABEL_18;
LABEL_15:
  *a2 = *(_QWORD *)a1 + 16 * v10;
  wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v6);
  return a2;
}
