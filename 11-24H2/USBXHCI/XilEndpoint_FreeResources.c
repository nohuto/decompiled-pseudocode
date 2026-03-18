/*
 * XREFs of XilEndpoint_FreeResources @ 0x14002D524
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x14002D310 (Endpoint_EvtEndpointCleanupCallback.c)
 *     XilEndpoint_Create @ 0x1400318C4 (XilEndpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilEndpoint_FreeResources(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 24) )
    *(_QWORD *)(a1 + 8) = 0LL;
  else
    *(_QWORD *)a1 = 0LL;
  return result;
}
