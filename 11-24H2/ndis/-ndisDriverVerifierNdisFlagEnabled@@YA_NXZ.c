/*
 * XREFs of ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140141E6C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A1C64 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400A6D4C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z @ 0x140166450 (-ndisDriverVerifierNdisFlagEnabledForCaller@@YA_NPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisOpenAdapterEx @ 0x140182720 (NdisOpenAdapterEx.c)
 * Callees:
 *     <none>
 */

bool ndisDriverVerifierNdisFlagEnabled(void)
{
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  VerifierFlags = 0;
  return !MmIsVerifierEnabled(&VerifierFlags) && (VerifierFlags & 0x200000) != 0;
}
