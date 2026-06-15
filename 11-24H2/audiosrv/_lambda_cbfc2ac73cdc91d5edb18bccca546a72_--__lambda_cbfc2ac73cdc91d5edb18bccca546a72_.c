/*
 * XREFs of _lambda_cbfc2ac73cdc91d5edb18bccca546a72_::__lambda_cbfc2ac73cdc91d5edb18bccca546a72_ @ 0x18009E614
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$8 @ 0x18016B9CA (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$8.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011640 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_cbfc2ac73cdc91d5edb18bccca546a72_::__lambda_cbfc2ac73cdc91d5edb18bccca546a72_(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
