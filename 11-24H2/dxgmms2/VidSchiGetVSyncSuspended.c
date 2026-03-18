/*
 * XREFs of VidSchiGetVSyncSuspended @ 0x140036B60
 * Callers:
 *     ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004B488 (-VidSchiGetVSyncState@@YA-AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     VidSchIsVSyncEnabled @ 0x1400D53E0 (VidSchIsVSyncEnabled.c)
 *     VidSchiControlVSync @ 0x1400D5680 (VidSchiControlVSync.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiGetVSyncSuspended(__int64 a1, unsigned int a2)
{
  if ( *(_BYTE *)(a1 + 2468) )
    return *(_BYTE *)(a2 + a1 + 2469);
  else
    return *(_BYTE *)(a1 + 2469);
}
