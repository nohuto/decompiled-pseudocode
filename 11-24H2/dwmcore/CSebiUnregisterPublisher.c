/*
 * XREFs of CSebiUnregisterPublisher @ 0x180215E70
 * Callers:
 *     PubSebRegisterRpc @ 0x180215CA0 (PubSebRegisterRpc.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall CSebiUnregisterPublisher(__int64 a1, __int64 a2)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo, 2u, 0LL, a1, a2);
}
