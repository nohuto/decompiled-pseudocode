/*
 * XREFs of ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140090100
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140069920 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x140152578 (-ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memcmp @ 0x1400EE8A0 (memcmp.c)
 */

char __fastcall ndisIfUpdateCurrentMacAddress(struct _NDIS_IF_BLOCK *a1, const struct _IF_PHYSICAL_ADDRESS_LH *a2)
{
  KIRQL v4; // al
  unsigned __int16 Length; // si
  KIRQL v6; // bp

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  Length = a2->Length;
  v6 = v4;
  if ( a1->ifPhysAddress.Length == a2->Length && !memcmp(a1->ifPhysAddress.Address, a2->Address, a2->Length) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
    return 0;
  }
  else
  {
    a1->ifPhysAddress.Length = Length;
    memmove(a1->ifPhysAddress.Address, a2->Address, a2->Length);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
    return 1;
  }
}
