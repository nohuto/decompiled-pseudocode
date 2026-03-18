/*
 * XREFs of ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802AD020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18029897C (-Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x1802AD3E0 (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTextVisualContent::Draw(
        CTextVisualContent *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CVisual *CurrentVisual; // rax
  __int64 v7; // rdx
  CTextVisualContent *v8; // rcx
  __int64 **TreeData; // r12
  __int64 v11; // rax
  unsigned int v12; // ebx
  CCompositionTextLine *v13; // rsi
  CCompositionTextLine *v14; // rax
  __int64 v15; // r13
  int DrawListCacheForTextObject; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  CCompositionTextLine **v23; // rsi
  CCompositionTextLine **v24; // r13
  CCompositionTextLine *v25; // rax
  __int64 v26; // rax
  CCompositionTextLine **v27; // rsi
  CCompositionTextLine **v28; // r15
  CCompositionTextLine *v29; // r13
  CCompositionTextLine *v30; // [rsp+30h] [rbp-10h]
  CCompositionTextLine *v31; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct CDrawListCache *v33; // [rsp+88h] [rbp+48h] BYREF
  struct D2D_SIZE_F *v34; // [rsp+90h] [rbp+50h]

  v34 = a3;
  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  TreeData = CVisual::FindTreeData(CurrentVisual, *(const struct CVisualTree **)(v7 + 7944));
  if ( TreeData )
  {
    v11 = *((_QWORD *)this + 9);
    v12 = 0;
    v13 = *(CCompositionTextLine **)(v11 + 680);
    v14 = *(CCompositionTextLine **)(v11 + 688);
    v30 = v14;
    while ( v13 != v14 )
    {
      v15 = *(_QWORD *)v13;
      v33 = 0LL;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(
                                     v8,
                                     a2,
                                     (struct CTreeData *)TreeData,
                                     v12,
                                     &v33);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 32LL;
LABEL_11:
        v20 = (unsigned int)DrawListCacheForTextObject;
        goto LABEL_12;
      }
      v18 = *(_QWORD *)(v15 + 88);
      if ( v18 )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v18 + 200LL))(
                v18,
                a2,
                v34,
                v33);
        v17 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x61,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
            (const char *)(unsigned int)v19);
          v20 = v17;
          v21 = 36LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
            (const char *)v20);
          wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v33);
          return v17;
        }
      }
      ++v12;
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v33);
      v14 = v30;
      v13 = (CCompositionTextLine *)((char *)v13 + 8);
    }
    v22 = *((_QWORD *)this + 9);
    v23 = *(CCompositionTextLine ***)(v22 + 728);
    v24 = *(CCompositionTextLine ***)(v22 + 736);
    while ( v23 != v24 )
    {
      v25 = *v23;
      v33 = 0LL;
      v31 = v25;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(
                                     v8,
                                     a2,
                                     (struct CTreeData *)TreeData,
                                     v12,
                                     &v33);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 46LL;
        goto LABEL_11;
      }
      DrawListCacheForTextObject = CCompositionTextLine::Draw(v31, a2, v34, v33);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 50LL;
        goto LABEL_11;
      }
      ++v12;
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v33);
      ++v23;
    }
    v26 = *((_QWORD *)this + 9);
    v27 = *(CCompositionTextLine ***)(v26 + 704);
    v28 = *(CCompositionTextLine ***)(v26 + 712);
    while ( v27 != v28 )
    {
      v29 = *v27;
      v33 = 0LL;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(
                                     v8,
                                     a2,
                                     (struct CTreeData *)TreeData,
                                     v12,
                                     &v33);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 60LL;
        goto LABEL_11;
      }
      DrawListCacheForTextObject = CCompositionTextLine::Draw(v29, a2, v34, v33);
      v17 = DrawListCacheForTextObject;
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 64LL;
        goto LABEL_11;
      }
      ++v12;
      wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>((volatile signed __int32 **)&v33);
      ++v27;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
      (const char *)0x88982F04LL);
    return 2291674884LL;
  }
}
