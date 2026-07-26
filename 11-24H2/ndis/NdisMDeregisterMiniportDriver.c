/*
 * XREFs of NdisMDeregisterMiniportDriver @ 0x140093A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x140136BAC (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __stdcall NdisMDeregisterMiniportDriver(NDIS_HANDLE NdisMiniportDriverHandle)
{
  if ( *((char *)NdisMiniportDriverHandle + 26) < 0 )
    ndisBugCheckEx(0x2AuLL, 1uLL, (ULONG_PTR)NdisMiniportDriverHandle, 0LL);
  ndisInternalDeregisterMiniportDriver((_NDIS_M_DRIVER_BLOCK *)NdisMiniportDriverHandle);
}
