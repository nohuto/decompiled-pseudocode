/*
 * XREFs of WmsgpDisconnect @ 0x1402C4678
 * Callers:
 *     ?CleanupWinlogonRpcHandleWorker@@YAXXZ @ 0x1401B3320 (-CleanupWinlogonRpcHandleWorker@@YAXXZ.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall WmsgpDisconnect(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(*Binding);
  if ( !result )
  {
    result = RpcBindingFree(Binding);
    if ( !result )
      *Binding = 0LL;
  }
  return result;
}
