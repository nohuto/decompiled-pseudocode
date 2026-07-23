/*
 * XREFs of IopDecrementCompletionContextUsageCount @ 0x140230564
 * Callers:
 *     IopCompleteRequest @ 0x1402D51F0 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1409C2A10 (NtLockFile.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
