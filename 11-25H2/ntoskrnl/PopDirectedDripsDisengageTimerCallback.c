/*
 * XREFs of PopDirectedDripsDisengageTimerCallback @ 0x1405CB2E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x14046DFD4 (PopDirectedDripsClearDisengageReason.c)
 */

void __fastcall PopDirectedDripsDisengageTimerCallback(__int64 a1, __int64 a2)
{
  KIRQL v3; // al
  bool v4; // zf
  KIRQL v5; // si

  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 8));
  v4 = (*(_DWORD *)(a2 + 20))-- == 1;
  v5 = v3;
  if ( v4 )
    PopDirectedDripsClearDisengageReason(*(_DWORD *)a2);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 8), v5);
}
