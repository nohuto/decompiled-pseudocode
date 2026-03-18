/*
 * XREFs of PopFxSetDripsBlockedByDeviceActivity @ 0x1403CAC3C
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x1403CAA54 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1403CACC0 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AF84C (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetDripsBlockedByDeviceActivity(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di

  v3 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( byte_140F0D7C1 )
  {
    if ( PopFxGlobalDeviceAccountingInfo == a1 )
      goto LABEL_7;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( a1 )
      qword_140F0D7C8 = MEMORY[0xFFFFF78000000008];
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
