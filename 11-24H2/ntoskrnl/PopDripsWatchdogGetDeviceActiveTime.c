/*
 * XREFs of PopDripsWatchdogGetDeviceActiveTime @ 0x1404C8F64
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14075FAE0 (PopDripsWatchdogCallbackHandler.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
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
