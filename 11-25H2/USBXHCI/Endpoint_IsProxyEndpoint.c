/*
 * XREFs of Endpoint_IsProxyEndpoint @ 0x140034F38
 * Callers:
 *     TR_Create @ 0x14008313C (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Endpoint_IsProxyEndpoint(__int64 a1)
{
  return *(_BYTE *)(a1 + 1344);
}
