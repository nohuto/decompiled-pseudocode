/*
 * XREFs of PopDripsWatchdogGetDeviceActiveTime @ 0x1404C82E4
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x140752EE0 (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 */

__int64 __fastcall PopDripsWatchdogGetDeviceActiveTime(__int64 a1)
{
  KSPIN_LOCK *v1; // rsi
  __int64 v3; // rbx
  KIRQL v4; // dl

  v1 = (KSPIN_LOCK *)(a1 + 640);
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 640));
  if ( *(_BYTE *)(a1 + 648) )
    v3 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 664);
  KeReleaseSpinLock(v1, v4);
  return v3;
}
