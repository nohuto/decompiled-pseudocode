/*
 * XREFs of _lambda_35797e26c2f113dffb458279a808fd40_::_lambda_invoker_cdecl_ @ 0x1801092E0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800108DC (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x1800605B0 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 */

void __fastcall lambda_35797e26c2f113dffb458279a808fd40_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_WAIT Wait,
        TP_WAIT_RESULT WaitResult)
{
  std::_Mutex_base::lock((std::_Mutex_base *)(Context + 8));
  if ( !*(_DWORD *)Context )
    CSebNotifier::PublishSebEvent((CSebNotifier *)Context, 0);
  _Mtx_unlock((_Mtx_t)(Context + 8));
}
