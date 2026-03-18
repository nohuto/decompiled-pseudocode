/*
 * XREFs of ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x180221870
 * Callers:
 *     PubSebUnregisterRpc @ 0x180221610 (PubSebUnregisterRpc.c)
 *     PubSebRegisterRpc @ 0x180221740 (PubSebRegisterRpc.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180259200 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PubSebiGetRpcBindingHandle(void **a1)
{
  unsigned int v1; // ebx
  RPC_WSTR StringBinding; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  StringBinding = 0LL;
  if ( !PubSebiServiceHandle )
  {
    v1 = RpcStringBindingComposeW(
           0LL,
           (RPC_WSTR)L"ncalrpc",
           0LL,
           (RPC_WSTR)L"csebpub",
           L"Security=Impersonation Dynamic True",
           &StringBinding);
    if ( !v1 )
    {
      v1 = RpcBindingFromStringBindingW(StringBinding, &PubSebiServiceHandle);
      RpcStringFreeW(&StringBinding);
    }
  }
  *a1 = PubSebiServiceHandle;
  return v1;
}
