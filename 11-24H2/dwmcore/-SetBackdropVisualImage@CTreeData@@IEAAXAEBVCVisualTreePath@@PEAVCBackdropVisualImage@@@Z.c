/*
 * XREFs of ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1801FDA6C
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000A138 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ @ 0x1801FDB78 (-CleanUpStaleBackdropVisualImages@CTreeData@@IEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801FDC40 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@.c)
 *     ??4?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdropVisualImage@@@Z @ 0x1801FDE0C (--4-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdrop.c)
 */

void __fastcall CTreeData::SetBackdropVisualImage(
        CTreeData *this,
        const struct CVisualTreePath *a2,
        struct CBackdropVisualImage *a3)
{
  __int64 i; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx

  for ( i = *((_QWORD *)this + 18); ; i += 8LL )
  {
    if ( i == *((_QWORD *)this + 19) )
    {
      if ( a3 )
        CMILRefCountImpl::AddReference((struct CBackdropVisualImage *)((char *)a3 + 8));
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)this + 144,
                   (__int64)(*((_QWORD *)this + 19) - *((_QWORD *)this + 18)) >> 3) = a3;
      *((_QWORD *)a3 + 279) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 888LL);
      CTreeData::CleanUpStaleBackdropVisualImages(this);
      return;
    }
    v7 = *(_QWORD **)a2;
    v8 = *(_QWORD *)(*(_QWORD *)i + 2072LL);
    if ( *(_QWORD *)(*(_QWORD *)i + 2080LL) - v8 == *((_QWORD *)a2 + 1) - *(_QWORD *)a2 )
      break;
LABEL_13:
    ;
  }
  v9 = v8 - (_QWORD)v7;
  while ( (_QWORD *)((char *)v7 + v9) != *(_QWORD **)(*(_QWORD *)i + 2080LL) )
  {
    if ( *(_QWORD *)((char *)v7 + v9) != *v7 || *(_QWORD *)((char *)v7 + v9 + 8) != v7[1] )
      goto LABEL_13;
    v7 += 2;
  }
  wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::operator=(i, a3);
  *(_QWORD *)(*(_QWORD *)i + 2232LL) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 888LL);
}
