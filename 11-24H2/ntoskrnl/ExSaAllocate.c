/*
 * XREFs of ExSaAllocate @ 0x14026E1D4
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14026FE3C (ExpAllocateFannedOutPushLock.c)
 *     RtlpHpEnvTlsAlloc @ 0x14060348C (RtlpHpEnvTlsAlloc.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B23EC (EtwpCovSampCaptureContextStart.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 * Callees:
 *     ExpSaAllocatorAllocate @ 0x14026E250 (ExpSaAllocatorAllocate.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // rcx
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x16Du, a2, 0LL, 0LL, 0LL);
  v2 = ExSaNonPagedSlotAllocator;
  if ( (a2 & 1) != 0 )
    v2 = ExSaPagedSlotAllocator;
  v3 = -1LL;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v3 = ExpSaAllocatorAllocate(v2);
    KeLeaveGuardedRegion();
  }
  return v3;
}
