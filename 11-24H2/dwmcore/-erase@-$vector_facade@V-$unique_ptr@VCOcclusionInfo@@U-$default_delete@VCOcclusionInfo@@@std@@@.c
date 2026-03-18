/*
 * XREFs of ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x18009E4E0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateZFromValidParent@CWindowOcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x18009D1E0 (-UpdateZFromValidParent@CWindowOcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x18009D374 (-GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x18009DD10 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 *     ?GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z @ 0x18009FA70 (-GetSubtreeZ@CVisual@@QEBAHPEBVCVisualTree@@I@Z.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r9
  __int64 v6; // rbp
  unsigned __int64 v7; // r8
  __int64 v9; // rdx
  bool v10; // zf
  void *(__fastcall ****v11)(CSurfaceDrawListBrush *__hidden, unsigned int); // rdi
  void *(__fastcall ****v12)(CSurfaceDrawListBrush *__hidden, unsigned int); // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  void *(__fastcall ***v15)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall ***v16)(CSurfaceDrawListBrush *__hidden, unsigned int); // rcx
  void *(__fastcall *v17)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  void *(__fastcall ****v18)(CSurfaceDrawListBrush *__hidden, unsigned int); // rbx
  void *(__fastcall ***v19)(CSurfaceDrawListBrush *__hidden, unsigned int); // rcx
  void *(__fastcall *v20)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  _QWORD *result; // rax

  v3 = a1 + 1;
  v4 = *a1;
  v6 = (*a3 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v9 = v6 + 1;
  v10 = v6 + 1 == v7;
  if ( v6 + 1 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v11 = (void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))(v4 + 8 * v7);
  if ( !v10 )
  {
    if ( v6 && (!v4 || v6 < 0 || v7 < v6) )
LABEL_10:
      _invalid_parameter_noinfo_noreturn();
    v12 = (void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))(v4 + 8 * v9);
    v13 = v11 - v12;
    if ( v13 >= 0 )
    {
      if ( v13 > 0 && v7 - v6 < v13 )
        goto LABEL_10;
    }
    else if ( v6 < (unsigned __int64)-v13 )
    {
      goto LABEL_10;
    }
    v14 = 8 * v6 - 8 * v9;
    while ( v12 != v11 )
    {
      v15 = *v12;
      *v12 = 0LL;
      v16 = *(void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))((char *)v12 + v14);
      *(void *(__fastcall ****)(CSurfaceDrawListBrush *__hidden, unsigned int))((char *)v12 + v14) = v15;
      if ( v16 )
      {
        v17 = **v16;
        if ( v17 == CWindowOcclusionInfo::`vector deleting destructor' )
        {
          operator delete(v16, 0x38uLL);
        }
        else if ( v17 == CSurfaceDrawListBrush::`vector deleting destructor' )
        {
          CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v16, 1u);
        }
        else if ( v17 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
        {
          CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v16, 1u);
        }
        else
        {
          v17((CSurfaceDrawListBrush *)v16, 1u);
        }
      }
      ++v12;
    }
    v3 = a1 + 1;
  }
  v18 = v11 - 1;
  do
  {
    v19 = *v18;
    if ( *v18 )
    {
      v20 = **v19;
      if ( v20 == CWindowOcclusionInfo::`vector deleting destructor' )
      {
        operator delete(v19, 0x38uLL);
      }
      else if ( v20 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v19, 1u);
      }
      else if ( v20 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'((CMultiPrimitiveDrawListBrush *)v19, 1u);
      }
      else
      {
        v20((CSurfaceDrawListBrush *)v19, 1u);
      }
    }
    ++v18;
  }
  while ( v18 != v11 );
  a1[1] = *v3 - 8LL;
  result = a2;
  *a2 = *a1 + 8 * v6;
  return result;
}
