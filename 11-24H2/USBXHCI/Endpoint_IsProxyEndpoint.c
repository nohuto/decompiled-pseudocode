/*
 * XREFs of Endpoint_IsProxyEndpoint @ 0x140033288
 * Callers:
 *     TR_Create @ 0x140082E54 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Endpoint_IsProxyEndpoint(__int64 a1)
{
  return *(_BYTE *)(a1 + 1352);
}
