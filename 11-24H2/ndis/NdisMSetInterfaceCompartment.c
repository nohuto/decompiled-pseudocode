/*
 * XREFs of NdisMSetInterfaceCompartment @ 0x1400C9030
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x140057D20 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1400C92F0 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall NdisMSetInterfaceCompartment(__int64 a1, const struct _GUID *a2)
{
  unsigned int v4; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  KIRQL v6; // r8
  struct _GUID v9; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0LL;
  v4 = 0;
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(a2);
  if ( CompartmentBlockByGuid )
  {
    v9 = *(struct _GUID *)(*((_QWORD *)CompartmentBlockByGuid + 7) + 32LL);
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
    if ( (int)ndisIfUpdateInterfaceIsolationNetworkId(*(struct _NDIS_IF_BLOCK **)(a1 + 4040), &v9, 1u) < 0 )
      return (unsigned int)-1073741823;
    return v4;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v6);
    return (unsigned int)-1073741823;
  }
}
