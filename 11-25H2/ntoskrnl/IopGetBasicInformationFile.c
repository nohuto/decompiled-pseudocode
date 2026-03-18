/*
 * XREFs of IopGetBasicInformationFile @ 0x1408ED534
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1408ED610 (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14035CFA0 (IoGetRelatedDeviceObject.c)
 *     MmIsDriverVerifying @ 0x14049F5C0 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopGetFileInformation @ 0x1408ECAD0 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x140B99470 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140B997F8 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object, struct _IRP *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  ULONG_PTR FastIoQueryBasicInfo; // rdi
  void *v8; // rbx
  char v9; // bp
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v11);
  FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v11);
  v8 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(RelatedDeviceObject->DriverObject)
     ? (void *)VfFastIoSnapState(DriverObject)
     : 0LL;
  v9 = guard_dispatch_icall_no_overrides(Object);
  if ( v8 )
    VfFastIoCheckState(v8, FastIoQueryBasicInfo);
  if ( v9 )
    return 0LL;
  else
    return IopGetFileInformation(Object, 0x28u, 4u, a2, &v11);
}
