/*
 * XREFs of _lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_ @ 0x1400417D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Shutdown@CSerialWorkQueue@@QEAAXXZ @ 0x140041808 (-Shutdown@CSerialWorkQueue@@QEAAXXZ.c)
 */

void __fastcall lambda_c342fc516001507c28ba370cc30be3fa_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        CSerialWorkQueue **Context)
{
  std::_Ref_count_base *v3; // rcx

  CSerialWorkQueue::Shutdown(*Context);
  v3 = Context[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  operator delete(Context);
}
