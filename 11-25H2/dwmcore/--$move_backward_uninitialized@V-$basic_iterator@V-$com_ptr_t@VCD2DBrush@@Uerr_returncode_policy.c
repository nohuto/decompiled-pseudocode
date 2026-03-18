/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@detail@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@detail@@YAXV?$basic_iterator@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@0@0V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@Z @ 0x18006DB64
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18006D498 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DPixelShader@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18019EE38 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801DD5D4 (-reserve_region@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buf.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801FAE4C (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$b.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy>>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r11
  __int64 *v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  result = *a2;
  if ( *a2 != *a1 )
  {
    v5 = *a3;
    do
    {
      v6 = (__int64 *)(result - 8);
      *a2 = result - 8;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      v9 = *v6;
      *v6 = 0LL;
      *(_QWORD *)(v5 + 8 * v8) = v9;
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
