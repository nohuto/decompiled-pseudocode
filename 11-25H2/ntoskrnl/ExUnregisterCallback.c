/*
 * XREFs of ExUnregisterCallback @ 0x1404AC6F0
 * Callers:
 *     IopCleanupNotifications @ 0x1404A559C (IopCleanupNotifications.c)
 *     DifExUnregisterCallbackWrapper @ 0x1406156D0 (DifExUnregisterCallbackWrapper.c)
 *     IoRegisterContainerNotification @ 0x140709230 (IoRegisterContainerNotification.c)
 *     IoUnregisterContainerNotification @ 0x1407094F0 (IoUnregisterContainerNotification.c)
 *     KeDeregisterProcessorChangeCallback @ 0x140730020 (KeDeregisterProcessorChangeCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x140730040 (KeRegisterProcessorChangeCallback.c)
 *     SeUnregisterImageVerificationCallback @ 0x14077F130 (SeUnregisterImageVerificationCallback.c)
 *     IoUnregisterBootDriverCallback @ 0x140C11930 (IoUnregisterBootDriverCallback.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C215B0 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
