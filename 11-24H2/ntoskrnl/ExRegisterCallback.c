/*
 * XREFs of ExRegisterCallback @ 0x1404AE560
 * Callers:
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 *     DifExRegisterCallbackWrapper @ 0x14061E2C0 (DifExRegisterCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x1406FFFA0 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x140700AD4 (HalpMiscInitializeKsr.c)
 *     IoRegisterContainerNotification @ 0x140712EC0 (IoRegisterContainerNotification.c)
 *     IoRegisterBootDriverCallback @ 0x14071E090 (IoRegisterBootDriverCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x14073A200 (KeRegisterProcessorChangeCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x14078E290 (SeRegisterImageVerificationCallback.c)
 *     PiCslInitialize @ 0x140C280E8 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140C28370 (PiKsrNotifyInitialize.c)
 *     PopSetupKsrCallbacks @ 0x140C30F1C (PopSetupKsrCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140C34578 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C347F4 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C36544 (SshpAlpcInitialize.c)
 *     EtwpInitialize @ 0x140C3F24C (EtwpInitialize.c)
 *     EtwpInitializeKsrSupport @ 0x140C40AA4 (EtwpInitializeKsrSupport.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  Pool2 = ExAllocatePool2(0x40uLL, 0x30uLL, 0x65524243u);
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
