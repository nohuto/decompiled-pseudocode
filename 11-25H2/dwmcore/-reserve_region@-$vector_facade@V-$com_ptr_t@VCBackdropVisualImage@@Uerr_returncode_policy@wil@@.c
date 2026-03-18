/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180209FC4
 * Callers:
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x180209DF0 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010807C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18020A120 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x180272CF0 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>>::reserve_region(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rbx
  __int64 *v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-30h]
  char v22[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>,1,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *a1;
  v21 = 0LL;
  v5 = (__int64 *)a1[1];
  v20 = 1LL;
  v6 = (__int64)((__int64)v5 - v4) >> 3;
  v23 = 0LL;
  v7 = v6 - a2;
  v8 = v4 + 8 * v6;
  v19 = v8;
  if ( !v8 )
    goto LABEL_11;
  v23 = 1LL;
  v9 = v6 - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = 8 * v9;
  v11 = &v5[v10 / 0xFFFFFFFFFFFFFFF8uLL];
  v21 = 1LL;
  if ( v5 != &v5[v10 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v15 = v19;
    v16 = 1LL;
    v17 = v21;
    do
    {
      --v5;
      if ( !v15 )
        goto LABEL_11;
      if ( !v16 )
        goto LABEL_11;
      v16 = v17 - 1;
      v17 = v16;
      if ( v16 >= v20 )
        goto LABEL_11;
      v18 = *v5;
      *v5 = 0LL;
      *(_QWORD *)(v15 + 8 * v16) = v18;
    }
    while ( v5 != v11 );
  }
  if ( v7 <= 1 )
    goto LABEL_6;
  if ( v6 && (!v4 || v6 < 0) )
LABEL_11:
    _invalid_parameter_noinfo_noreturn();
  v20 = v6;
  v21 = v6;
  v19 = v4;
  ((void (__fastcall *)(char *, unsigned __int64, unsigned __int64, unsigned __int64 *))std::move_backward<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>>)(
    v22,
    v4 + 8 * a2,
    v4 + 8 * (v6 - 1),
    &v19);
LABEL_6:
  v12 = v4 + 8 * (a2 + 1);
  v13 = v4 + 8 * a2;
  if ( v8 < v12 )
    v12 = v8;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(v13, v12);
  a1[1] += 8LL;
  return v13;
}
