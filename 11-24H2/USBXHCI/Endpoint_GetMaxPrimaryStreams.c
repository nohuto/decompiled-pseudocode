/*
 * XREFs of Endpoint_GetMaxPrimaryStreams @ 0x1400330EC
 * Callers:
 *     UsbDevice_InitializeEndpointContext @ 0x14002B144 (UsbDevice_InitializeEndpointContext.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x140053ED0 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Endpoint_GetMaxPrimaryStreams(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 37) )
    return *(unsigned int *)(*(_QWORD *)(a1 + 144) + 12LL);
  else
    return 0LL;
}
