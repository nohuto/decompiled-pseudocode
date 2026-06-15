/*
 * XREFs of wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_::___func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_ @ 0x1800D2574
 * Callers:
 *     wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1800D2990 (wistd--__function--__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl(void)_--_scalar.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl_void__::___func__lambda_b6ef742704f6e3ba5e1d5817de19ce35__void___cdecl_void__(
        _QWORD *a1)
{
  std::_Ref_count_base *v2; // rcx
  void **result; // rax

  v2 = (std::_Ref_count_base *)a1[2];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  result = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  return result;
}
