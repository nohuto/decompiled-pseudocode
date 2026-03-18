/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18008C510
 * Callers:
 *     ?FinalRelease@CVisualTree@@MEAAXXZ @ 0x18008CD20 (-FinalRelease@CVisualTree@@MEAAXXZ.c)
 *     ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z @ 0x18008D168 (-RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18022EBD0 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18024A554 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 */

__int64 *__fastcall detail::vector_facade<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 **a1,
        __int64 a2)
{
  __int64 *v4; // rbx
  __int64 *v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // r11
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rbx
  __int64 *v19; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-30h]
  char v22[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *a1;
  v21 = 0LL;
  v5 = a1[1];
  v20 = 1LL;
  v6 = v5 - v4;
  v23 = 0LL;
  v7 = v6 - a2;
  v8 = &v4[v6];
  v19 = v8;
  if ( !v8 )
    goto LABEL_18;
  v23 = 1LL;
  v9 = v6 - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = 8 * v9;
  v11 = &v5[v10 / 0xFFFFFFFFFFFFFFF8uLL];
  v21 = 1LL;
  if ( v5 != &v5[v10 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v12 = v19;
    v13 = 1LL;
    v14 = v21;
    while ( 1 )
    {
      --v5;
      if ( !v12 )
        break;
      if ( !v13 )
        break;
      v13 = v14 - 1;
      v14 = v13;
      if ( v13 >= v20 )
        break;
      v15 = *v5;
      *v5 = 0LL;
      v12[v13] = v15;
      if ( v5 == v11 )
        goto LABEL_10;
    }
LABEL_18:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_10:
  if ( v7 > 1 )
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_18;
    v20 = v6;
    v21 = v6;
    v19 = v4;
    ((void (__fastcall *)(char *, __int64 *, __int64 *, __int64 **))std::move_backward<std::move_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>>)(
      v22,
      &v4[a2],
      &v4[v6 - 1],
      &v19);
  }
  v16 = &v4[a2 + 1];
  v17 = &v4[a2];
  if ( v8 < v16 )
    v16 = v8;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    v17,
    v16);
  ++a1[1];
  return v17;
}
