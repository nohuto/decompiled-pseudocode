/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140AA8538
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488384 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiInitializeLockedPagesTracking @ 0x1407E79B0 (MiInitializeLockedPagesTracking.c)
 *     MiInsertProcessVads @ 0x1408F8BD8 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x1408F8DC8 (MiAllocateProcessVads.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1)
{
  _QWORD *ProcessVads; // rax
  int inserted; // ebx
  _OWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  MiGetWsAndMakePageTablesNx();
  BugCheckParameter1[2].ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v5);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((__int64)BugCheckParameter1, ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v5, 0);
  if ( inserted >= 0 && (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking((__int64)BugCheckParameter1);
  return (unsigned int)inserted;
}
