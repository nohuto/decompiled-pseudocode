/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1408B2B50
 * Callers:
 *     PiDmListRemoveObject @ 0x1406F8D1C (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x140724BA4 (PiDmListRemoveList.c)
 *     PiDmListAddObject @ 0x1408B0CE4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B2184 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B2214 (PiDmAddCacheReferenceForObject.c)
 *     PiDqQueryAppendActionEntry @ 0x1408B26E0 (PiDqQueryAppendActionEntry.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CE800 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListAddList @ 0x140A80DA0 (PiDmListAddList.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall PiDmGetObjectManagerForObjectType(int a1)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 == 3 )
    return &PiDmDeviceInterfaceManager;
  v2 = a1 - 1;
  if ( !v2 )
    return (struct _ERESOURCE *)&PiDmDeviceManager;
  v3 = v2 - 1;
  if ( !v3 )
    return (struct _ERESOURCE *)&PiDmDeviceInstallerClassManager;
  v4 = v3 - 2;
  if ( !v4 )
    return (struct _ERESOURCE *)&PiDmDeviceInterfaceClassManager;
  v5 = v4 - 1;
  if ( !v5 )
    return (struct _ERESOURCE *)&PiDmDeviceContainerManager;
  if ( v5 == 1 )
    return (struct _ERESOURCE *)&PiDmDevicePanelManager;
  return 0LL;
}
