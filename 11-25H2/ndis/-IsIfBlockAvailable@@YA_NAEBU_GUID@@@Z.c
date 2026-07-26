/*
 * XREFs of ?IsIfBlockAvailable@@YA_NAEBU_GUID@@@Z @ 0x140098690
 * Callers:
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x1401763C0 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 * Callees:
 *     ?ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z @ 0x14007C0C0 (-ndisIfFindInterfaceByInterfaceGuid@@YAPEAU_NDIS_IF_BLOCK@@PEBU_GUID@@@Z.c)
 */

_BOOL8 __fastcall IsIfBlockAvailable(const struct _GUID *a1)
{
  bool v2; // bl
  struct _NDIS_IF_BLOCK *InterfaceByInterfaceGuid; // rax
  KIRQL v4; // r8

  v2 = 0;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(a1);
  if ( InterfaceByInterfaceGuid )
    v2 = InterfaceByInterfaceGuid->MiniportAvailable == 0;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  return v2;
}
