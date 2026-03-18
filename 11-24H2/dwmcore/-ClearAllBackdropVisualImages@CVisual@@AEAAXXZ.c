/*
 * XREFs of ?ClearAllBackdropVisualImages@CVisual@@AEAAXXZ @ 0x180033174
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18003941C (--1CVisual@@MEAA@XZ.c)
 *     ?UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ @ 0x18006AD64 (-UpdateBackdropVisualImageForWindowBackgroundTreatment@CVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1801B2BB0 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x1801D8E70 (-UpdateHasBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180032CD4 (-clear@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180032D1C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 */

void __fastcall CVisual::ClearAllBackdropVisualImages(CVisual *this)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  unsigned int i; // eax
  _QWORD ***v6; // rdi
  _QWORD **v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *j; // rbx
  __int64 v11; // rbx

  v1 = *((_QWORD *)this + 29);
  if ( *(int *)v1 < 0 )
  {
    v3 = *(unsigned int *)(v1 + 4);
    v4 = (_BYTE *)(v1 + 8);
    for ( i = 0; i < (unsigned int)v3; ++v4 )
    {
      if ( *v4 == 1 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v3 )
      v6 = 0LL;
    else
      v6 = (_QWORD ***)(v3 + 15 + v1 + 8LL * i - (((_BYTE)v3 + 15) & 7));
    v7 = *v6;
    if ( v7 )
    {
      for ( j = *v7; j != v7; j = (_QWORD *)*j )
        detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::clear(j - 26);
    }
  }
  v8 = *((_QWORD *)this + 59);
  v9 = (*((_QWORD *)this + 60) - v8) >> 3;
  if ( v9 )
  {
    v11 = 8 * v9;
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
      v8,
      v11 + v8);
    *((_QWORD *)this + 60) -= v11;
  }
}
