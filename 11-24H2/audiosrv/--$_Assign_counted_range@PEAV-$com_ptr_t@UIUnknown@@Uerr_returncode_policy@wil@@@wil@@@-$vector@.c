/*
 * XREFs of ??$_Assign_counted_range@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x18008F4D4
 * Callers:
 *     ??4?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F3F0C (--4-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_ptr_t@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180019110 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18008F5B0 (-_Clear_and_reserve_geometric@-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ??$_Uninitialized_copy_n@PEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@PEAV12@_K0AEAV?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18008F648 (--$_Uninitialized_copy_n@PEAV-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800A0888 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::_Assign_counted_range<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *>(
        __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rbp
  __int64 *i; // rbp
  __int64 result; // rax

  v3 = *a1;
  v4 = a3;
  if ( a3 > (a1[2] - *a1) >> 3 )
  {
    std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::_Clear_and_reserve_geometric(a1, a3);
    v7 = *a1;
LABEL_11:
    result = std::_Uninitialized_copy_n<wil::com_ptr_t<IUnknown,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>>(
               a2,
               v4,
               v7);
    i = (__int64 *)result;
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = (v7 - v3) >> 3;
  if ( v4 > v8 )
  {
    while ( v3 != v7 )
    {
      wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=(v3, *a2);
      v7 = a1[1];
      v3 += 8LL;
      ++a2;
    }
    v4 -= v8;
    goto LABEL_11;
  }
  for ( i = (__int64 *)(v3 + 8 * v4); v4; --v4 )
  {
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=(v3, *a2);
    v3 += 8LL;
    ++a2;
  }
  result = std::_Destroy_range<std::allocator<wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>>(
             i,
             (__int64 *)a1[1]);
LABEL_7:
  a1[1] = (__int64)i;
  return result;
}
