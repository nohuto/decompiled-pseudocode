/*
 * XREFs of XilEndpoint_FreeResources @ 0x140002654
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x140002440 (Endpoint_EvtEndpointCleanupCallback.c)
 *     XilEndpoint_Create @ 0x140032E00 (XilEndpoint_Create.c)
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
