/*
 * XREFs of ExRegisterCallback @ 0x1404B3D50
 * Callers:
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 *     DifExRegisterCallbackWrapper @ 0x14061FD00 (DifExRegisterCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x140702360 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x140702E94 (HalpMiscInitializeKsr.c)
 *     IoRegisterContainerNotification @ 0x140715330 (IoRegisterContainerNotification.c)
 *     IoRegisterBootDriverCallback @ 0x140720500 (IoRegisterBootDriverCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073C2D0 (KeRegisterProcessorChangeCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x14078E360 (SeRegisterImageVerificationCallback.c)
 *     PiCslInitialize @ 0x140C26098 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140C26320 (PiKsrNotifyInitialize.c)
 *     PopSetupKsrCallbacks @ 0x140C2EDFC (PopSetupKsrCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140C32438 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C326B4 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C34404 (SshpAlpcInitialize.c)
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 *     EtwpInitializeKsrSupport @ 0x140C3E954 (EtwpInitializeKsrSupport.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExRegisterCallback(
        PCALLBACK_OBJECT CallbackObject,
        PCALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext)
{
  __int64 Pool2; // rax
  _QWORD *v7; // rbx
  char v8; // si
  KIRQL v9; // al
  _QWORD *v10; // rcx
  KIRQL v11; // dl
  _QWORD *v12; // rax

  ObfReferenceObjectWithTag(CallbackObject, 0x746C6644u);
  Pool2 = ExAllocatePool2(0x40uLL);
  v7 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 40) = 0;
    *(_QWORD *)(Pool2 + 32) = CallbackContext;
    v8 = 0;
    *(_QWORD *)(Pool2 + 16) = CallbackObject;
    *(_QWORD *)(Pool2 + 24) = CallbackFunction;
    *(_BYTE *)(Pool2 + 44) = 0;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
    v10 = (_QWORD *)((char *)CallbackObject + 16);
    v11 = v9;
    if ( *((_BYTE *)CallbackObject + 32) || (_QWORD *)*v10 == v10 )
    {
      v12 = (_QWORD *)*((_QWORD *)CallbackObject + 3);
      v8 = 1;
      if ( (_QWORD *)*v12 != v10 )
        __fastfail(3u);
      *v7 = v10;
      v7[1] = v12;
      *v12 = v7;
      *((_QWORD *)CallbackObject + 3) = v7;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)CallbackObject + 1, v11);
    if ( !v8 )
    {
      ExFreePoolWithTag(v7, 0);
      ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
      return 0LL;
    }
    return v7;
  }
  else
  {
    ObfDereferenceObjectWithTag(CallbackObject, 0x746C6644u);
    return 0LL;
  }
}
