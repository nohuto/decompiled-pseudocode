/*
 * XREFs of IopDecrementCompletionContextUsageCount @ 0x140349B30
 * Callers:
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall IopDecrementCompletionContextUsageCount(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  unsigned __int64 v5; // rbp
  signed __int64 BugCheckParameter4; // rsi
  __int64 result; // rax
  __int64 v8; // rdx

  v1 = BugCheckParameter1 + 184;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v4 = *(_QWORD *)(BugCheckParameter1 + 176);
  v5 = v3;
  BugCheckParameter4 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = BugCheckParameter4 - 1;
  result = KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = v5;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
  }
  __writecr8(v5);
  if ( BugCheckParameter4 <= 0 )
    KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x82uLL, BugCheckParameter4);
  return result;
}
