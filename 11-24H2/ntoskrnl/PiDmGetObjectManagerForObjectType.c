/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x1408B5260
 * Callers:
 *     PiDmListRemoveObject @ 0x1406FB0DC (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x140727014 (PiDmListRemoveList.c)
 *     PiDmListAddObject @ 0x1408B33F4 (PiDmListAddObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1408B4894 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1408B4924 (PiDmAddCacheReferenceForObject.c)
 *     PiDqQueryAppendActionEntry @ 0x1408B4DF0 (PiDqQueryAppendActionEntry.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408D0E10 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListAddList @ 0x140A86260 (PiDmListAddList.c)
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
