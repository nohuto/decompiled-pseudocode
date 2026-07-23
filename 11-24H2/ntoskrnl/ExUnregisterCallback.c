/*
 * XREFs of ExUnregisterCallback @ 0x1404A8640
 * Callers:
 *     IopCleanupNotifications @ 0x1404A0DB4 (IopCleanupNotifications.c)
 *     DifExUnregisterCallbackWrapper @ 0x14061FC50 (DifExUnregisterCallbackWrapper.c)
 *     IoRegisterContainerNotification @ 0x140712EC0 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x140713180 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x14073A1E0 (KeDeregisterProcessorChangeCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073A200 (KeRegisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x14078E320 (SeUnregisterImageVerificationCallback.c)
 *     IoUnregisterBootDriverCallback @ 0x140C24A40 (IoUnregisterBootDriverCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C347F4 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __stdcall ExUnregisterCallback(PVOID CallbackRegistration)
{
  KSPIN_LOCK *v1; // rsi
  KIRQL v3; // bp
  _QWORD *v4; // rdx
  PVOID *v5; // rax

  v1 = (KSPIN_LOCK *)*((_QWORD *)CallbackRegistration + 2);
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(v1 + 1);
    if ( !*((_DWORD *)CallbackRegistration + 10) )
      break;
    *((_BYTE *)CallbackRegistration + 44) = 1;
    KeResetEvent(&ExpCallbackEvent);
    KeReleaseSpinLock(v1 + 1, v3);
    KeWaitForSingleObject(&ExpCallbackEvent, Executive, 0, 0, 0LL);
  }
  v4 = *(_QWORD **)CallbackRegistration;
  if ( *(PVOID *)(*(_QWORD *)CallbackRegistration + 8LL) != CallbackRegistration
    || (v5 = (PVOID *)*((_QWORD *)CallbackRegistration + 1), *v5 != CallbackRegistration) )
  {
    __fastfail(3u);
  }
  *v5 = v4;
  v4[1] = v5;
  KeReleaseSpinLock(v1 + 1, v3);
  ExFreePoolWithTag(CallbackRegistration, 0);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
}
