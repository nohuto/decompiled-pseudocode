/*
 * XREFs of NVMeReservationReleaseCommand @ 0x140023ED0
 * Callers:
 *     ScsiPersistentReserveOut @ 0x140026370 (ScsiPersistentReserveOut.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 */

__int64 __fastcall NVMeReservationReleaseCommand(__int64 a1, __int64 a2)
{
  _QWORD v5[5]; // [rsp+30h] [rbp-28h] BYREF

  GetSrbDataBuffer(a2, v5);
  v5[0] = 0LL;
  NVMeAllocateDmaBuffer(a1, 8u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
