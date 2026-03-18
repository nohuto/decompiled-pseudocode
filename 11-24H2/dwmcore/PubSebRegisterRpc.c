/*
 * XREFs of PubSebRegisterRpc @ 0x180215CA0
 * Callers:
 *     ?EnsureWNFHandles@CFSVPProvider@@AEAAJXZ @ 0x18009B5D0 (-EnsureWNFHandles@CFSVPProvider@@AEAAJXZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18009B6D0 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180096750 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x180215DD0 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     CSebiUnregisterPublisher @ 0x180215E70 (CSebiUnregisterPublisher.c)
 *     ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x180215EA4 (-Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z.c)
 */

__int64 __fastcall PubSebRegisterRpc(__int64 a1, struct _SEB_RPC_PUBLISH_DATA **a2)
{
  int RpcBindingHandle; // ebx
  struct _SEB_RPC_PUBLISH_DATA *Heap; // rax
  struct _SEB_RPC_PUBLISH_DATA *v6; // rsi
  CLIENT_CALL_RETURN v7; // rcx
  void *v8; // r8
  void *v10; // [rsp+60h] [rbp+18h] BYREF
  void *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v10);
  if ( !RpcBindingHandle )
  {
    Heap = (struct _SEB_RPC_PUBLISH_DATA *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
    v6 = Heap;
    if ( !Heap )
    {
      LOWORD(RpcBindingHandle) = 8;
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    }
    *(_OWORD *)Heap = 0LL;
    RtlInitializeSRWLock(Heap);
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       0,
                                       0LL,
                                       v10,
                                       a1,
                                       &v11).Pointer;
    if ( RpcBindingHandle )
      goto LABEL_13;
    v8 = v11;
    if ( !v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgs();
      v8 = v11;
    }
    RpcBindingHandle = ContextTable::Insert((ContextTable *)v7.Pointer, v6, v8);
    if ( !RpcBindingHandle )
    {
      *a2 = v6;
      goto LABEL_9;
    }
    RpcBindingHandle = CSebiUnregisterPublisher(v10, &v11);
    if ( RpcBindingHandle )
LABEL_13:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
LABEL_9:
  if ( RpcBindingHandle > 0 )
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  return (unsigned int)RpcBindingHandle;
}
