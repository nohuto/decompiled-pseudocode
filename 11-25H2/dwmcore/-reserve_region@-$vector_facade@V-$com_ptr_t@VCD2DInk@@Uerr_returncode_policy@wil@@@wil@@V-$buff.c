/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801F75D0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1802A648C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801F7750 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$0.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802558A4 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil.c)
 */

__int64 *__fastcall detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
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
  __int64 *v12; // rdx
  __int64 *v13; // rbx
  __int64 *v15; // r11
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 *v19; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-30h]
  char v22[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
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
    goto LABEL_15;
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
        goto LABEL_15;
      if ( !v16 )
        goto LABEL_15;
      v16 = v17 - 1;
      v17 = v16;
      if ( v16 >= v20 )
        goto LABEL_15;
      v18 = *v5;
      *v5 = 0LL;
      v15[v16] = v18;
    }
    while ( v5 != v11 );
  }
  if ( v7 <= 1 )
    goto LABEL_10;
  if ( v6 && (!v4 || v6 < 0) )
LABEL_15:
    _invalid_parameter_noinfo_noreturn();
  v20 = v6;
  v21 = v6;
  v19 = v4;
  ((void (__fastcall *)(char *, __int64 *, __int64 *, __int64 **))std::move_backward<std::move_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy> *>>)(
    v22,
    &v4[a2],
    &v4[v6 - 1],
    &v19);
LABEL_10:
  v12 = &v4[a2 + 1];
  v13 = &v4[a2];
  if ( v8 < v12 )
    v12 = v8;
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    v13,
    v12);
  ++a1[1];
  return v13;
}
