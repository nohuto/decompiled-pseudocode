/*
 * XREFs of _lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_ @ 0x180109330
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800108DC (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        __int64 *Context,
        PTP_TIMER Timer)
{
  std::_Mutex_base::lock((std::_Mutex_base *)(Context + 5));
  if ( !*((_DWORD *)Context + 8) )
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(Context + 11);
  _Mtx_unlock((_Mtx_t)(Context + 5));
}
