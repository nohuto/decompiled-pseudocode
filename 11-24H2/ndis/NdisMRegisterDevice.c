/*
 * XREFs of NdisMRegisterDevice @ 0x1401711B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDevice(
        NDIS_HANDLE NdisWrapperHandle,
        PNDIS_STRING DeviceName,
        PNDIS_STRING SymbolicName,
        PDRIVER_DISPATCH *MajorFunctions,
        PDEVICE_OBJECT *pDeviceObject,
        NDIS_HANDLE *NdisDeviceHandle)
{
  PDEVICE_OBJECT *v6; // r15
  NDIS_HANDLE *v7; // r12
  PDRIVER_OBJECT *DriverObjectExtension; // rax
  PDRIVER_OBJECT *v11; // rbp
  NTSTATUS SymbolicLink; // edi
  unsigned int v13; // ebx
  _WORD *DeviceExtension; // r13
  struct _DRIVER_OBJECT *v15; // rbx
  PDRIVER_DISPATCH *v16; // rax
  __int128 v17; // xmm0
  void *v18; // rcx
  KSPIN_LOCK *v19; // rsi
  KIRQL v20; // al
  PDRIVER_OBJECT *v21; // rbp
  PDRIVER_OBJECT v22; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp+8h] BYREF
  PDRIVER_DISPATCH *v25; // [rsp+98h] [rbp+20h]

  v25 = MajorFunctions;
  v6 = pDeviceObject;
  v7 = NdisDeviceHandle;
  DeviceObject = 0LL;
  *pDeviceObject = 0LL;
  *v7 = 0LL;
  DriverObjectExtension = (PDRIVER_OBJECT *)IoGetDriverObjectExtension(
                                              *(PDRIVER_OBJECT *)NdisWrapperHandle,
                                              (PVOID)0x4E4D4944);
  v11 = DriverObjectExtension;
  if ( !DriverObjectExtension )
    return -1073741637;
  SymbolicLink = IoCreateDevice(
                   DriverObjectExtension[5],
                   DeviceName->Length + 308 + SymbolicName->Length,
                   DeviceName,
                   0x12u,
                   0x100u,
                   0,
                   &DeviceObject);
  if ( SymbolicLink >= 0 )
  {
    DeviceObject->Flags &= ~0x80u;
    SymbolicLink = IoCreateSymbolicLink(SymbolicName, DeviceName);
    if ( SymbolicLink >= 0 )
    {
      v13 = DeviceName->Length + 308 + SymbolicName->Length;
      DeviceExtension = DeviceObject->DeviceExtension;
      memset(DeviceExtension, 0, v13);
      DeviceExtension[1] = v13;
      *DeviceExtension = 265;
      v15 = (struct _DRIVER_OBJECT *)(DeviceExtension + 4);
      *((_QWORD *)DeviceExtension + 2) = DeviceExtension + 4;
      *((_QWORD *)DeviceExtension + 1) = DeviceExtension + 4;
      *((_QWORD *)DeviceExtension + 3) = v11;
      *((_QWORD *)DeviceExtension + 4) = DeviceObject;
      v16 = v25;
      *((_OWORD *)DeviceExtension + 3) = *(_OWORD *)v25;
      *((_OWORD *)DeviceExtension + 4) = *((_OWORD *)v16 + 1);
      *((_OWORD *)DeviceExtension + 5) = *((_OWORD *)v16 + 2);
      *((_OWORD *)DeviceExtension + 6) = *((_OWORD *)v16 + 3);
      *((_OWORD *)DeviceExtension + 7) = *((_OWORD *)v16 + 4);
      *((_OWORD *)DeviceExtension + 8) = *((_OWORD *)v16 + 5);
      *((_OWORD *)DeviceExtension + 9) = *((_OWORD *)v16 + 6);
      v17 = *((_OWORD *)v16 + 7);
      v16 += 16;
      *((_OWORD *)DeviceExtension + 10) = v17;
      *((_OWORD *)DeviceExtension + 11) = *(_OWORD *)v16;
      *((_OWORD *)DeviceExtension + 12) = *((_OWORD *)v16 + 1);
      *((_OWORD *)DeviceExtension + 13) = *((_OWORD *)v16 + 2);
      *((_OWORD *)DeviceExtension + 14) = *((_OWORD *)v16 + 3);
      *((_OWORD *)DeviceExtension + 15) = *((_OWORD *)v16 + 4);
      *((_QWORD *)DeviceExtension + 32) = v16[10];
      *((_QWORD *)DeviceExtension + 35) = DeviceExtension + 152;
      DeviceExtension[136] = DeviceName->Length;
      DeviceExtension[137] = DeviceName->Length + 2;
      memmove(DeviceExtension + 152, DeviceName->Buffer, DeviceName->Length);
      v18 = (void *)(*((_QWORD *)DeviceExtension + 35) + (unsigned __int16)DeviceExtension[137]);
      *((_QWORD *)DeviceExtension + 37) = v18;
      DeviceExtension[144] = SymbolicName->Length;
      DeviceExtension[145] = SymbolicName->Length + 2;
      memmove(v18, SymbolicName->Buffer, SymbolicName->Length);
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v19 = (KSPIN_LOCK *)(v11 + 49);
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 49);
      v21 = v11 + 10;
      v22 = *v21;
      if ( (PDRIVER_OBJECT *)(*v21)->DeviceObject != v21 )
        __fastfail(3u);
      *(_QWORD *)&v15->Type = v22;
      *((_QWORD *)DeviceExtension + 2) = v21;
      v22->DeviceObject = (_DEVICE_OBJECT *)v15;
      *v21 = v15;
      KeReleaseSpinLock(v19, v20);
      ndisDereferencePackage((PVOID *)&ndisPkgs);
      *v6 = DeviceObject;
      *v7 = DeviceExtension;
    }
    else
    {
      IoDeleteDevice(DeviceObject);
    }
  }
  return SymbolicLink;
}
