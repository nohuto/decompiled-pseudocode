/*
 * XREFs of SignalASLEvent @ 0x140055F48
 * Callers:
 *     ResetSignal @ 0x140030AC0 (ResetSignal.c)
 * Callees:
 *     DequeueAndReadyContext @ 0x140005CE4 (DequeueAndReadyContext.c)
 */

void __fastcall SignalASLEvent(__int64 a1)
{
  KIRQL v2; // si

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  if ( !DequeueAndReadyContext((_QWORD **)(a1 + 8)) )
    ++*(_DWORD *)a1;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 24), v2);
}
