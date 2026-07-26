/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x14014CB3C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1400A3F50 (NdisFRegisterFilterDriver.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A9E14 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400AEEFC (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x140172CE0 (-ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140189A40 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x14018CF00 (NdisOpenAdapterEx.c)
 * Callees:
 *     <none>
 */

bool ndisDriverVerifierNdisFlagEnabled(void)
{
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  VerifierFlags = 0;
  return !MmIsVerifierEnabled(&VerifierFlags) && (VerifierFlags & 0x200000) != 0;
}
