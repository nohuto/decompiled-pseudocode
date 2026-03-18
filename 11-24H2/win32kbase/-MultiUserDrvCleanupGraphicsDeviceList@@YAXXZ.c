/*
 * XREFs of ?MultiUserDrvCleanupGraphicsDeviceList@@YAXXZ @ 0x14008A468
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14004F7E8 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1401475E0 (-GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z.c)
 */

void __fastcall MultiUserDrvCleanupGraphicsDeviceList(__int64 a1)
{
  __int64 v1; // rbx
  char *v2; // rcx
  __int64 v3; // rbx
  char *v4; // rcx
  char *v5; // rcx

  v1 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  DrvCleanupGraphicsDeviceList(*(char **)(v1 + 1192));
  v2 = *(char **)(v1 + 1184);
  *(_QWORD *)(v1 + 1192) = 0LL;
  DrvCleanupGraphicsDeviceList(v2);
  *(_QWORD *)(v1 + 1184) = 0LL;
  *(_QWORD *)(v1 + 1096) = 0LL;
  v3 = v1 + 2856;
  v4 = *(char **)(v3 + 40);
  if ( v4 )
  {
    GreDeleteFastMutex(v4);
    *(_QWORD *)(v3 + 40) = 0LL;
  }
  v5 = *(char **)(v3 + 56);
  if ( v5 )
  {
    GreDeleteFastMutex(v5);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  GreCleanupRemoteAdapterContext((struct tagREMOTE_CONTEXT *)v3);
}
