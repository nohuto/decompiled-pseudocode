/*
 * XREFs of DrvCleanupOneGraphicsDevice @ 0x14004F730
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14004E238 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14004F7E8 (-DrvCleanupGraphicsDeviceList@@YAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1401C96B4 (DrvCleanupGraphicsDevices.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     bSetDeviceSessionUsage @ 0x14004E670 (bSetDeviceSessionUsage.c)
 */

void __fastcall DrvCleanupOneGraphicsDevice(__int64 Buffer)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx

  v2 = *(char **)(Buffer + 176);
  if ( v2 )
    GreDeleteFastMutex(v2);
  v3 = *(char **)(Buffer + 192);
  if ( v3 )
    GreDeleteFastMutex(v3);
  v4 = *(char **)(Buffer + 208);
  if ( v4 )
    GreDeleteFastMutex(v4);
  v5 = *(char **)(Buffer + 200);
  if ( v5 )
    GreDeleteFastMutex(v5);
  if ( *(_QWORD *)(Buffer + 224) )
  {
    if ( (*(_DWORD *)(Buffer + 164) & 2) != 0 )
      bSetDeviceSessionUsage(Buffer, 0);
    ObfDereferenceObject(*(PVOID *)(Buffer + 224));
  }
  v6 = *(char **)(Buffer + 264);
  if ( v6 )
  {
    GreDeleteFastMutex(v6);
    *(_QWORD *)(Buffer + 264) = 0LL;
  }
  GreDeleteFastMutex((char *)Buffer);
}
