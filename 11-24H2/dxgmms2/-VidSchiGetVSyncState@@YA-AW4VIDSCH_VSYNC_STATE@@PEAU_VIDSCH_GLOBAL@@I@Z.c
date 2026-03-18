/*
 * XREFs of ?VidSchiGetVSyncState@@YA?AW4VIDSCH_VSYNC_STATE@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14004B488
 * Callers:
 *     VidSchCollectDbgInfo @ 0x1401056E0 (VidSchCollectDbgInfo.c)
 * Callees:
 *     VidSchiGetVSyncSuspended @ 0x140036B60 (VidSchiGetVSyncSuspended.c)
 */

__int64 __fastcall VidSchiGetVSyncState(__int64 a1, unsigned int a2)
{
  if ( a2 >= *(_DWORD *)(a1 + 40) )
    return 0x10000LL;
  if ( *(_BYTE *)(a1 + 2468) ? *(_BYTE *)(a2 + a1 + 2064) : *(_BYTE *)(a1 + 2064) )
    return 0x10000LL;
  else
    return VidSchiGetVSyncSuspended(a1, a2) != 0 ? 3 : 0;
}
