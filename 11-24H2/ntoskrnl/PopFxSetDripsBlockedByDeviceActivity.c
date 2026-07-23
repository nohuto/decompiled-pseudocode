/*
 * XREFs of PopFxSetDripsBlockedByDeviceActivity @ 0x1403A57D0
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x1403A5E38 (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1403A5854 (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AA23C (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetDripsBlockedByDeviceActivity(char a1)
{
  __int64 v2; // rcx
  KIRQL v3; // di

  v3 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( byte_140F0D941 )
  {
    if ( PopFxGlobalDeviceAccountingInfo == a1 )
      goto LABEL_7;
    v2 = MEMORY[0xFFFFF78000000008];
    if ( a1 )
      qword_140F0D948 = MEMORY[0xFFFFF78000000008];
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
