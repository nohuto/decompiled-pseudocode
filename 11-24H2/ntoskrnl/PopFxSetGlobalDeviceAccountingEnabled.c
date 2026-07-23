/*
 * XREFs of PopFxSetGlobalDeviceAccountingEnabled @ 0x1404B9468
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x1403A67DC (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1404854CC (PopFxResumeDeviceAccounting.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AA23C (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetGlobalDeviceAccountingEnabled(char a1)
{
  KIRQL v2; // r10

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( a1 )
  {
    if ( PopFxGlobalDeviceAccountingInfo )
      qword_140F0D948 = MEMORY[0xFFFFF78000000008];
    else
      *(_QWORD *)&xmmword_140F0D960 = xmmword_140F0D960 + 1;
  }
  else if ( PopFxGlobalDeviceAccountingInfo )
  {
    PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 0x47868C00uLL);
  }
  byte_140F0D941 = a1;
  KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v2);
}
