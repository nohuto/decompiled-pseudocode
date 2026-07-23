/*
 * XREFs of MmInitializeHandBuiltProcess2 @ 0x140AA3638
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1404834D4 (MiGetWsAndMakePageTablesNx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiInitializeLockedPagesTracking @ 0x1407E7F80 (MiInitializeLockedPagesTracking.c)
 *     MiInsertProcessVads @ 0x14091A6A0 (MiInsertProcessVads.c)
 *     MiAllocateProcessVads @ 0x14091B168 (MiAllocateProcessVads.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess2(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *ProcessVads; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int inserted; // ebx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  MiGetWsAndMakePageTablesNx((__int64)BugCheckParameter1, a2, a3, a4);
  BugCheckParameter1[2].ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v10);
  ProcessVads = MiAllocateProcessVads((__int64)BugCheckParameter1, 0LL);
  if ( ProcessVads )
    inserted = MiInsertProcessVads((__int64)BugCheckParameter1, ProcessVads);
  else
    inserted = -1073741801;
  KiUnstackDetachProcess((__int64)v10, 0, v6, v7);
  if ( inserted >= 0 && (MmTrackLockedPages & 0x10000001) == 1 )
    MiInitializeLockedPagesTracking((__int64)BugCheckParameter1);
  return (unsigned int)inserted;
}
