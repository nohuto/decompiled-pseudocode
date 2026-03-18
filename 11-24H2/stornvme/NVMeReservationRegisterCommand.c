/*
 * XREFs of NVMeReservationRegisterCommand @ 0x140023CF8
 * Callers:
 *     ScsiPersistentReserveOut @ 0x140026370 (ScsiPersistentReserveOut.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     GetSrbDataBuffer @ 0x14000B970 (GetSrbDataBuffer.c)
 */

__int64 __fastcall NVMeReservationRegisterCommand(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+38h] [rbp-8h] BYREF

  GetSrbDataBuffer(a2, &v5);
  v5 = 0LL;
  NVMeAllocateDmaBuffer(a1, 0x10u);
  *(_BYTE *)(a2 + 3) = 38;
  return 3238002691LL;
}
