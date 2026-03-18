/*
 * XREFs of PopFxSetGlobalDeviceAccountingEnabled @ 0x1404BE2A8
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x140311B04 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14048A6A4 (PopFxResumeDeviceAccounting.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AF84C (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetGlobalDeviceAccountingEnabled(char a1)
{
  KIRQL v2; // r10

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( a1 )
  {
    if ( PopFxGlobalDeviceAccountingInfo )
      qword_140F0D7C8 = MEMORY[0xFFFFF78000000008];
    else
      *(_QWORD *)&xmmword_140F0D7E0 = xmmword_140F0D7E0 + 1;
  }
  else if ( PopFxGlobalDeviceAccountingInfo )
  {
    PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 0x47868C00uLL);
  }
  byte_140F0D7C1 = a1;
  KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v2);
}
