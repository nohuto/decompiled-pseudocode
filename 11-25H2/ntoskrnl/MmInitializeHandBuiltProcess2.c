/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140AA4AB4
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140488518 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MiInitializeLockedPagesTracking @ 0x1407D7AF8 (MiInitializeLockedPagesTracking.c)
 *     MiInsertProcessVads @ 0x140905110 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x140905300 (MiAllocateProcessVads.c)
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
  KiUnstackDetachProcess((__int64)v5, 0LL);
  if ( inserted >= 0 && (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking((__int64)BugCheckParameter1);
  return (unsigned int)inserted;
}
