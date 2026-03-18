/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801DD53C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x1800ACB80 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801BD1E4 (-clear@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802649A0 (--$move@V-$move_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V-$c.c)
 */

void __fastcall detail::vector_facade<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,8,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned __int64 v7; // rax
  _QWORD v8[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v9[40]; // [rsp+40h] [rbp-28h] BYREF

  v5 = *a1;
  v7 = (a1[1] - *a1) >> 3;
  if ( a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_5;
  }
  v3 = (__int64 *)(v5 + 8 * v7);
  v4 = 8 * a3;
  if ( a3 != v7 )
  {
LABEL_5:
    v8[2] = 0LL;
    v8[0] = v5;
    v8[1] = v7;
    ((void (__fastcall *)(_BYTE *, __int64, __int64 *, _QWORD *))std::move<std::move_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>>)(
      v9,
      v4 + v5,
      v3,
      v8);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
    &v3[v4 / 0xFFFFFFFFFFFFFFF8uLL],
    v3);
  a1[1] -= v4;
}
