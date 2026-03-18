/*
 * XREFs of PiDmGetObjectManagerForObjectType @ 0x140968CF0
 * Callers:
 *     PiDmListRemoveObject @ 0x1406EF29C (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x14071B094 (PiDmListRemoveList.c)
 *     PiDmEnumObjectsWithCallback @ 0x1408CCFCC (PiDmEnumObjectsWithCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x1408D1A38 (PiDqQueryAppendActionEntry.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140968AC8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140968B58 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x14096AA08 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x140A81AD0 (PiDmListAddList.c)
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
