/*
 * XREFs of IopGetBasicInformationFile @ 0x14096DFD0
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x14096C6C4 (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     MmIsDriverVerifying @ 0x14049E430 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopGetFileInformation @ 0x14096E140 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x140BA9450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BA97CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  ULONG_PTR FastIoQueryBasicInfo; // rdi
  void *v8; // rbx
  __int64 v9; // rdx
  char v10; // bp
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, (__int64)&v13);
  FastIoQueryBasicInfo = (ULONG_PTR)FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, (__int64)&v13);
  v8 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(RelatedDeviceObject->DriverObject)
     ? (void *)VfFastIoSnapState(DriverObject)
     : 0LL;
  v9 = Object->Flags >> 1;
  LOBYTE(v9) = (Object->Flags & 2) != 0;
  v10 = guard_dispatch_icall_no_overrides(Object, v9, a2, &v12);
  if ( v8 )
    VfFastIoCheckState(v8, FastIoQueryBasicInfo);
  if ( v10 )
    return (unsigned int)v12;
  else
    return IopGetFileInformation(Object, (__int64)&v13);
}
