/*
 * XREFs of IopDecrementCompletionContextUsageCount @ 0x14027AFD4
 * Callers:
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall IopDecrementCompletionContextUsageCount(ULONG_PTR BugCheckParameter1)
{
  volatile signed __int64 *v1; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  unsigned __int64 v5; // rbp
  signed __int64 BugCheckParameter4; // rsi
  __int64 result; // rax
  __int64 v8; // rdx

  v1 = (volatile signed __int64 *)(BugCheckParameter1 + 184);
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
