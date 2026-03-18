/*
 * XREFs of ExSaAllocate @ 0x14047B8B4
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14047B80C (ExpAllocateFannedOutPushLock.c)
 *     RtlpHpEnvTlsAlloc @ 0x140605E4C (RtlpHpEnvTlsAlloc.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B1F9C (EtwpCovSampCaptureContextStart.c)
 *     KeInitializeProcess @ 0x140A4EB18 (KeInitializeProcess.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExpSaAllocatorAllocate @ 0x14047B930 (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
