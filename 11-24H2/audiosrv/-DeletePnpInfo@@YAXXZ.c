/*
 * XREFs of ?DeletePnpInfo@@YAXXZ @ 0x1800FE8D8
 * Callers:
 *     ?MME_ServiceStop@@YAXXZ @ 0x1800FEEB0 (-MME_ServiceStop@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void DeletePnpInfo(void)
{
  if ( g_pPnpInfoActual )
  {
    HeapFree(hHeap, 0, g_pPnpInfoActual);
    g_pPnpInfoActual = 0LL;
  }
  if ( g_pPnpInfoShared )
  {
    UnmapViewOfFile(g_pPnpInfoShared);
    g_pPnpInfoShared = 0LL;
  }
  if ( hPnpInfo )
  {
    CloseHandle(hPnpInfo);
    hPnpInfo = 0LL;
  }
  if ( gfPnpInfoResource )
  {
    RtlDeleteResource(&PnpInfoResource);
    gfPnpInfoResource = 0;
  }
}
