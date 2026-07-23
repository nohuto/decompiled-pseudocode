/*
 * XREFs of PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140858944
 * Callers:
 *     PiUEventHandleRegistration @ 0x140857A2C (PiUEventHandleRegistration.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x14025D974 (PnpGetRelatedTargetDevice.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsIsProcessAppContainer @ 0x1408592D0 (PsIsProcessAppContainer.c)
 */

__int64 __fastcall PiUEventGetDeviceInstanceIdFromUserHandle(void *a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v7; // ebx
  int RelatedTargetDevice; // eax
  __int64 v10; // rcx
  char IsProcessAppContainer; // al
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v12 = 0LL;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)Object, &v12);
    v10 = v12;
    v7 = RelatedTargetDevice;
    if ( RelatedTargetDevice >= 0 )
    {
      *a2 = v12 + 40;
      IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
      v10 = v12;
      if ( IsProcessAppContainer )
        *a3 = *(_QWORD *)(v12 + 32);
    }
    if ( v10 )
      ObfDereferenceObject(*(PVOID *)(v10 + 32));
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
