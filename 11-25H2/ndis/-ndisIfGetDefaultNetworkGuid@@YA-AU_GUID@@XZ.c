/*
 * XREFs of ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1400D4850
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1400D04AC (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x140167650 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x140062240 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 */

struct _GUID *__fastcall ndisIfGetDefaultNetworkGuid(struct _GUID *__return_ptr retstr)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  KIRQL v3; // dl
  struct _GUID v4; // xmm6

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  CompartmentBlock = ndisIfFindCompartmentBlock(1u);
  if ( CompartmentBlock )
  {
    v4 = *(struct _GUID *)(*((_QWORD *)CompartmentBlock + 7) + 32LL);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v3);
    *retstr = v4;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v3);
    *retstr = ndisDefaultNetworkGuid;
  }
  return retstr;
}
