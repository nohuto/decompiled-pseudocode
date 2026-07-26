/*
 * XREFs of NdisRegisterDeviceEx @ 0x14008A8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1401408C0 (WdmlibIoCreateDeviceSecure.c)
 */

NDIS_STATUS __stdcall NdisRegisterDeviceEx(
        NDIS_HANDLE NdisHandle,
        PNDIS_DEVICE_OBJECT_ATTRIBUTES DeviceObjectAttributes,
        PDEVICE_OBJECT *pDeviceObject,
        PNDIS_HANDLE NdisDeviceHandle)
{
  _QWORD *DriverObjectExtension; // rbx
  PNDIS_DEVICE_OBJECT_ATTRIBUTES v7; // rdi
  char v9; // al
  struct _DRIVER_OBJECT *v10; // r13
  _UNICODE_STRING *DeviceName; // r8
  const UNICODE_STRING *DefaultSDDLString; // r9
  unsigned int v13; // r15d
  NTSTATUS v14; // eax
  NTSTATUS SymbolicLink; // esi
  _DWORD *DeviceExtension; // r14
  int (__fastcall **MajorFunctions)(_DEVICE_OBJECT *, _IRP *); // rax
  __int128 v18; // xmm0
  char *v19; // rcx
  void *v20; // rcx
  KSPIN_LOCK *v21; // rdi
  KIRQL v22; // al
  KSPIN_LOCK v23; // rdx
  _QWORD *v24; // rbx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-78h]
  BOOLEAN Exclusive; // [rsp+28h] [rbp-70h]
  PDEVICE_OBJECT *DeviceObject; // [rsp+30h] [rbp-68h]
  const GUID *v29; // [rsp+38h] [rbp-60h]
  KSPIN_LOCK *v30; // [rsp+50h] [rbp-48h]
  ULONG Size; // [rsp+A0h] [rbp+8h]
  PDEVICE_OBJECT v33; // [rsp+B8h] [rbp+20h] BYREF

  DriverObjectExtension = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v7 = DeviceObjectAttributes;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(DeviceObjectAttributes) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)DeviceObjectAttributes,
      1,
      111,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)NdisHandle);
  }
  *pDeviceObject = 0LL;
  *NdisDeviceHandle = 0LL;
  v9 = *(_BYTE *)NdisHandle;
  if ( *(_BYTE *)NdisHandle == 2 )
  {
    v10 = (struct _DRIVER_OBJECT *)*((_QWORD *)NdisHandle + 5);
    DriverObjectExtension = NdisHandle;
  }
  else
  {
    switch ( v9 )
    {
      case 4:
        v10 = (struct _DRIVER_OBJECT *)*((_QWORD *)NdisHandle + 2);
        v30 = (KSPIN_LOCK *)NdisHandle;
        break;
      case 17:
        DriverObjectExtension = (_QWORD *)*((_QWORD *)NdisHandle + 470);
        v10 = (struct _DRIVER_OBJECT *)DriverObjectExtension[5];
        break;
      case -86:
        DriverObjectExtension = IoGetDriverObjectExtension(**((PDRIVER_OBJECT **)NdisHandle + 1), (PVOID)0x4E4D4944);
        v10 = (struct _DRIVER_OBJECT *)DriverObjectExtension[5];
        break;
      default:
        goto LABEL_27;
    }
  }
  if ( v10 )
  {
    DeviceName = v7->DeviceName;
    DefaultSDDLString = v7->DefaultSDDLString;
    v13 = (v7->ExtensionSize + 1) & 0xFFFFFFFE;
    Size = DeviceName->Length + 324 + v13 + v7->SymbolicName->Length;
    if ( DefaultSDDLString )
      v14 = WdmlibIoCreateDeviceSecure(
              v10,
              Size,
              DeviceName,
              (ULONG)DefaultSDDLString,
              DeviceCharacteristics,
              Exclusive,
              DefaultSDDLString,
              v29,
              &v33);
    else
      v14 = IoCreateDevice(v10, Size, DeviceName, 0x12u, 0x100u, 0, &v33);
    SymbolicLink = v14;
    if ( v14 < 0 )
      goto LABEL_28;
    v33->Flags &= ~0x80u;
    SymbolicLink = IoCreateSymbolicLink(v7->SymbolicName, v7->DeviceName);
    if ( SymbolicLink < 0 )
    {
      IoDeleteDevice(v33);
      goto LABEL_28;
    }
    DeviceExtension = v33->DeviceExtension;
    memset(DeviceExtension, 0, Size);
    *DeviceExtension = 19923209;
    *((_QWORD *)DeviceExtension + 5) = DeviceExtension + 80;
    *((_QWORD *)DeviceExtension + 2) = DeviceExtension + 2;
    *((_QWORD *)DeviceExtension + 1) = DeviceExtension + 2;
    *((_QWORD *)DeviceExtension + 3) = NdisHandle;
    *((_QWORD *)DeviceExtension + 4) = v33;
    MajorFunctions = v7->MajorFunctions;
    *((_OWORD *)DeviceExtension + 3) = *(_OWORD *)MajorFunctions;
    *((_OWORD *)DeviceExtension + 4) = *((_OWORD *)MajorFunctions + 1);
    *((_OWORD *)DeviceExtension + 5) = *((_OWORD *)MajorFunctions + 2);
    *((_OWORD *)DeviceExtension + 6) = *((_OWORD *)MajorFunctions + 3);
    *((_OWORD *)DeviceExtension + 7) = *((_OWORD *)MajorFunctions + 4);
    *((_OWORD *)DeviceExtension + 8) = *((_OWORD *)MajorFunctions + 5);
    *((_OWORD *)DeviceExtension + 9) = *((_OWORD *)MajorFunctions + 6);
    v18 = *((_OWORD *)MajorFunctions + 7);
    MajorFunctions += 16;
    *((_OWORD *)DeviceExtension + 10) = v18;
    *((_OWORD *)DeviceExtension + 11) = *(_OWORD *)MajorFunctions;
    *((_OWORD *)DeviceExtension + 12) = *((_OWORD *)MajorFunctions + 1);
    *((_OWORD *)DeviceExtension + 13) = *((_OWORD *)MajorFunctions + 2);
    *((_OWORD *)DeviceExtension + 14) = *((_OWORD *)MajorFunctions + 3);
    *((_OWORD *)DeviceExtension + 15) = *((_OWORD *)MajorFunctions + 4);
    *((_QWORD *)DeviceExtension + 32) = MajorFunctions[10];
    if ( v30 )
    {
      v10->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[1] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[3] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[4] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[5] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[6] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[7] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[8] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[9] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[10] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[11] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[12] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[13] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[16] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[17] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[18] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[19] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[20] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[21] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[24] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[25] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[26] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      v10->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
    }
    v19 = (char *)DeviceExtension + v13 + 320;
    *((_QWORD *)DeviceExtension + 35) = v19;
    *((_WORD *)DeviceExtension + 136) = v7->DeviceName->Length;
    *((_WORD *)DeviceExtension + 137) = v7->DeviceName->Length + 2;
    memmove(v19, v7->DeviceName->Buffer, v7->DeviceName->Length);
    v20 = (void *)(*((_QWORD *)DeviceExtension + 35) + *((unsigned __int16 *)DeviceExtension + 137));
    *((_QWORD *)DeviceExtension + 37) = v20;
    *((_WORD *)DeviceExtension + 144) = v7->SymbolicName->Length;
    *((_WORD *)DeviceExtension + 145) = v7->SymbolicName->Length + 2;
    memmove(v20, v7->SymbolicName->Buffer, v7->SymbolicName->Length);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    if ( DriverObjectExtension )
    {
      v21 = DriverObjectExtension + 49;
      *((_QWORD *)DeviceExtension + 3) = NdisHandle;
      v22 = KeAcquireSpinLockRaiseToDpc(DriverObjectExtension + 49);
      v23 = DriverObjectExtension[10];
      v24 = DriverObjectExtension + 10;
      if ( *(_QWORD **)(v23 + 8) == v24 )
        goto LABEL_22;
    }
    else
    {
      if ( !v30 )
        goto LABEL_23;
      v21 = v30 + 5;
      *((_QWORD *)DeviceExtension + 3) = v30;
      v22 = KeAcquireSpinLockRaiseToDpc(v30 + 5);
      v23 = v30[7];
      v24 = v30 + 7;
      if ( *(KSPIN_LOCK **)(v23 + 8) == v30 + 7 )
      {
LABEL_22:
        *((_QWORD *)DeviceExtension + 1) = v23;
        *((_QWORD *)DeviceExtension + 2) = v24;
        *(_QWORD *)(v23 + 8) = DeviceExtension + 2;
        *v24 = DeviceExtension + 2;
        KeReleaseSpinLock(v21, v22);
LABEL_23:
        MmUnlockPagableImageSection(ImageSectionHandle);
        _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
        *pDeviceObject = v33;
        *NdisDeviceHandle = DeviceExtension;
        goto LABEL_28;
      }
    }
    __fastfail(3u);
  }
LABEL_27:
  SymbolicLink = -1073741637;
LABEL_28:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(DeviceObject) = SymbolicLink;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x70u,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)NdisHandle,
      DeviceObject);
  }
  return SymbolicLink;
}
