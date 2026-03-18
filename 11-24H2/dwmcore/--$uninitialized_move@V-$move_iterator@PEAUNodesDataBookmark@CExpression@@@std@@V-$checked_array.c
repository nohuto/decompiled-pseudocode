/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@0@0V12@@Z @ 0x18029A424
 * Callers:
 *     ?clear_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18029B924 (-clear_region@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18029B9F4 (-ensure_extra_capacity@-$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@_J@Z @ 0x18025990C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_poli.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CExpression::NodesDataBookmark *>,stdext::checked_array_iterator<CExpression::NodesDataBookmark *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        _QWORD *a4)
{
  size_t v5; // rsi
  void *v8; // rdi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v5 = a3 - (_QWORD)a2;
  v8 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *> &,__int64>(
                 a4,
                 (a3 - (__int64)a2) >> 3);
  memmove_0(v8, a2, v5);
  result = a1;
  a4[2] = (__int64)((__int64)v8 + v5 - *a4) >> 3;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
