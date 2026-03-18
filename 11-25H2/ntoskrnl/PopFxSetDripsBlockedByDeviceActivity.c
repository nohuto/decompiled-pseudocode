/*
 * XREFs of PopFxSetDripsBlockedByDeviceActivity @ 0x1403559B0
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x140355F24 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x140355A34 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AE9AC (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetDripsBlockedByDeviceActivity(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di

  v3 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( byte_140F0CE81 )
  {
    if ( PopFxGlobalDeviceAccountingInfo == a1 )
      goto LABEL_7;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( a1 )
      qword_140F0CE88 = MEMORY[0xFFFFF78000000008];
    else
      PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 0LL);
  }
  if ( PopFxGlobalDeviceAccountingInfo != a1 )
  {
    LOBYTE(v2) = a1;
    PopFxGlobalDeviceAccountingInfo = a1;
    PopFxUpdateDeviceIRPhaseAccounting(v2);
  }
LABEL_7:
  KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v3);
}
