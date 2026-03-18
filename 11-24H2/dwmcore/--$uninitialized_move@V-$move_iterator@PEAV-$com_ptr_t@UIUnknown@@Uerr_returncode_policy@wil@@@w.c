/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802A8E8C
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801CF504 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@stdext@@_J@Z @ 0x18025990C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_poli.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v4; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a2;
  v8 = (_QWORD *)std::_Get_unwrapped_n<stdext::checked_array_iterator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *> &,__int64>(
                   a4,
                   a3 - a2);
  while ( v4 != a3 )
  {
    v9 = *v4;
    *v4 = 0LL;
    *v8++ = v9;
    ++v4;
  }
  a4[2] = ((__int64)v8 - *a4) >> 3;
  result = a1;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
