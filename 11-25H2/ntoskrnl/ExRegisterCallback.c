/*
 * XREFs of ExRegisterCallback @ 0x1404B44B0
 * Callers:
 *     HvlPhase2Initialize @ 0x14057F3D0 (HvlPhase2Initialize.c)
 *     DifExRegisterCallbackWrapper @ 0x140613D40 (DifExRegisterCallbackWrapper.c)
 *     HaliInitPowerManagement @ 0x1406F6570 (HaliInitPowerManagement.c)
 *     HalpMiscInitializeKsr @ 0x1406F70A4 (HalpMiscInitializeKsr.c)
 *     IoRegisterContainerNotification @ 0x140709230 (IoRegisterContainerNotification.c)
 *     IoRegisterBootDriverCallback @ 0x140714400 (IoRegisterBootDriverCallback.c)
 *     KeRegisterProcessorChangeCallback @ 0x140730040 (KeRegisterProcessorChangeCallback.c)
 *     SeRegisterImageVerificationCallback @ 0x14077F0A0 (SeRegisterImageVerificationCallback.c)
 *     PiCslInitialize @ 0x140C15008 (PiCslInitialize.c)
 *     PiKsrNotifyInitialize @ 0x140C15290 (PiKsrNotifyInitialize.c)
 *     PopSetupKsrCallbacks @ 0x140C1DD00 (PopSetupKsrCallbacks.c)
 *     PopUmpoInitializeChannel @ 0x140C21334 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140C215B0 (PopUmpoInitializeMonitorChannel.c)
 *     SshpAlpcInitialize @ 0x140C23138 (SshpAlpcInitialize.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 *     EtwpInitializeKsrSupport @ 0x140C2D678 (EtwpInitializeKsrSupport.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
