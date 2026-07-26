/*
 * XREFs of ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x14005AF00
 * Callers:
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140012F50 (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x140051A10 (NdisCmRegisterAddressFamilyEx.c)
 *     NdisCoOidRequest @ 0x140052810 (NdisCoOidRequest.c)
 *     NdisClOpenAddressFamilyEx @ 0x14005A060 (NdisClOpenAddressFamilyEx.c)
 *     ?ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x14005AD70 (-ndisSendPacketsWithPause@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z @ 0x14005B2F0 (-ndisMDoProtocolRequest@@YAKPEAU_NDIS_OPEN_BLOCK@@EKPEAXJJE@Z.c)
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400768C0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x140079080 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x140093540 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1400A6920 (-ndisMReset@@YAHPEAX@Z.c)
 *     ndisMapOpenByName @ 0x1400AB468 (ndisMapOpenByName.c)
 *     ?ndisPktMonRegisterAllOpens@@YAXXZ @ 0x1400B9D50 (-ndisPktMonRegisterAllOpens@@YAXXZ.c)
 *     NdisUnbindAdapter @ 0x1400C07D0 (NdisUnbindAdapter.c)
 *     ndisCoIndicateStatusInternal @ 0x1400DB1E0 (ndisCoIndicateStatusInternal.c)
 *     ?ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400DF710 (-ndisMSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY@@PEAPEAU_NDIS_AF_NOTIFY@@@Z @ 0x140182A70 (-ndisCreateNotifyQueue@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAUCO_ADDRESS_FAMILY.c)
 *     ?ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14018B420 (-ndisMOpenAdapter@@YAXPEAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x14000E820 (NdisReferenceWithTag.c)
 */

void __fastcall ndisMReferenceOpen(__int64 a1, unsigned __int8 a2)
{
  KIRQL v4; // bl

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
  NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 592), a2);
  ++*(_DWORD *)(a1 + 228);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 600), v4);
}
