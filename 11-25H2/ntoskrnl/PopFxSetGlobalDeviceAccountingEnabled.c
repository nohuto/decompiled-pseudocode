/*
 * XREFs of PopFxSetGlobalDeviceAccountingEnabled @ 0x140355C34
 * Callers:
 *     PopFxResumeDeviceAccounting @ 0x140355A94 (PopFxResumeDeviceAccounting.c)
 *     PopFxPauseDeviceAccounting @ 0x1403561B8 (PopFxPauseDeviceAccounting.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AE9AC (PopFxUpdateGlobalDeviceAccountingInfo.c)
 */

void __fastcall PopFxSetGlobalDeviceAccountingEnabled(char a1)
{
  KIRQL v2; // r10

  v2 = KeAcquireSpinLockRaiseToDpc(&PopFxGlobalDeviceAccountingLock);
  if ( a1 )
  {
    if ( PopFxGlobalDeviceAccountingInfo )
      qword_140F0CE88 = MEMORY[0xFFFFF78000000008];
    else
      *(_QWORD *)&xmmword_140F0CEA0 = xmmword_140F0CEA0 + 1;
  }
  else if ( PopFxGlobalDeviceAccountingInfo )
  {
    PopFxUpdateGlobalDeviceAccountingInfo(MEMORY[0xFFFFF78000000008], 1200000000LL);
  }
  byte_140F0CE81 = a1;
  KeReleaseSpinLock(&PopFxGlobalDeviceAccountingLock, v2);
}
