/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140087B70
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x140087B50 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x14009CE60 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x14009EA00 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x14000F5C0 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x140068600 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x140088ED0 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140090C40 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1401431E0 (-ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAU_DRIVER_OBJECT@@KK@Z @ 0x140172AE0 (-ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERIST.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1401737F0 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140173D80 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x140175650 (-ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  struct _UNICODE_STRING *v5; // r12
  void **v7; // r13
  unsigned int *p_Flags; // r15
  unsigned int v10; // esi
  int v11; // edx
  unsigned int v12; // edi
  struct _NDIS_M_DRIVER_BLOCK *v13; // r12
  _UNICODE_STRING *p_DriverName; // rdx
  ULONG v16; // edi
  void *Pool2; // rax
  __int64 v18; // rdx
  struct _NDIS_M_DRIVER_BLOCK *v19; // rdi
  LOGICAL IsDriverVerifyingByAddress; // eax
  struct _NDIS_M_DRIVER_BLOCK *v21; // rax
  __int64 v22; // rcx
  int (__fastcall **MajorFunction)(_DEVICE_OBJECT *, _IRP *); // rax
  KIRQL v24; // di
  PVOID v25; // rcx
  size_t Size; // [rsp+30h] [rbp-58h] BYREF
  unsigned int *v27; // [rsp+38h] [rbp-50h]
  PVOID DriverObjectExtension; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+90h] [rbp+8h] BYREF
  void *v30; // [rsp+A0h] [rbp+18h]
  unsigned int v31; // [rsp+A8h] [rbp+20h] BYREF

  v30 = a3;
  v5 = a2;
  v7 = a5;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      105,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
  }
  p_Flags = &a4->Flags;
  v10 = a4->Flags & 0x20;
  ndisIfEnsureNsiInitialized();
  if ( !a1 && !v10 )
  {
    v12 = -1073741823;
LABEL_6:
    LOBYTE(v13) = 0;
    goto LABEL_7;
  }
  v31 = 0;
  v29 = 0;
  p_DriverName = 0LL;
  if ( !v10 )
    p_DriverName = &a1->DriverName;
  v12 = ndisValidateMiniportDriverCharacteristicsHeader(a4, p_DriverName, &v31, &v29, (unsigned int *)&Size);
  if ( v12 )
    goto LABEL_6;
  v12 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, a1, v31, v29);
  if ( v12 )
    goto LABEL_6;
  v16 = v5->Length + 1186;
  if ( !v10 )
  {
    v18 = 1313425732LL;
    if ( (*p_Flags & 1) == 0 )
      v18 = 1313687876LL;
    if ( IoAllocateDriverObjectExtension(a1, (PVOID)v18, v16, &DriverObjectExtension) >= 0 )
    {
      Pool2 = DriverObjectExtension;
      p_Flags = &a4->Flags;
      goto LABEL_22;
    }
LABEL_20:
    v12 = -1073741670;
    goto LABEL_6;
  }
  Pool2 = (void *)ExAllocatePool2(66LL, v16, 538985550);
  DriverObjectExtension = Pool2;
  if ( !Pool2 )
    goto LABEL_20;
LABEL_22:
  memset(Pool2, 0, v16);
  v19 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
  memset(DriverObjectExtension, 0, 0x4A0uLL);
  v19->MajorNdisVersion = v31;
  v19->MinorNdisVersion = v29;
  v19->MiniportDriverContext = v30;
  v19->Header = (_NDIS_OBJECT_HEADER)77594882;
  v19->ServiceRegPath.Buffer = (wchar_t *)&v19[1].Header.Type;
  v19->ServiceRegPath.Length = v5->Length;
  v19->ServiceRegPath.MaximumLength = v5->Length + 2;
  memmove(&v19[1], v5->Buffer, v5->Length);
  v13 = v19;
  ndisGetServiceNameFromRegPath(&v19->ServiceRegPath, &v19->ServiceName);
  if ( (*p_Flags & 1) != 0 )
  {
    v19->Flags |= 1u;
    KeInitializeMutex(&v19->IMStartRemoveMutex, 0xFFFFu);
    v27 = &a4->Flags;
  }
  else
  {
    v27 = p_Flags;
  }
  if ( (*p_Flags & 4) != 0 )
    v19->Flags |= 0x20u;
  else
    v27 = p_Flags;
  memmove(&v19->112, a4, (unsigned int)Size);
  v19->MiniportDriverCharacteristics.MajorNdisVersion = v31;
  v19->MiniportDriverCharacteristics.MinorNdisVersion = v29;
  if ( (*p_Flags & 0x10) != 0 )
    v19->Flags |= 0x40u;
  if ( (*v27 & 0x20) != 0 )
    v19->Flags |= 0x80u;
  v19->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
  if ( v10 )
    IsDriverVerifyingByAddress = MmIsDriverVerifyingByAddress(a4->RestartHandler);
  else
    IsDriverVerifyingByAddress = MmIsDriverVerifying(a1);
  if ( IsDriverVerifyingByAddress )
  {
    v19->Flags |= 2u;
    if ( (ndisFlags & 0x400) != 0 )
    {
      v21 = 0LL;
      if ( !ndisDriverTrackAlloc )
        v21 = v19;
      ndisDriverTrackAlloc = v21;
    }
  }
  v19->MiniportQueue = 0LL;
  if ( (a4->Flags & 0x30) == 0 )
  {
    v22 = 3LL;
    MajorFunction = a1->MajorFunction;
    do
    {
      *MajorFunction = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      MajorFunction[1] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      MajorFunction += 8;
      *(MajorFunction - 5) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      *(MajorFunction - 4) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      *(MajorFunction - 3) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      *(MajorFunction - 2) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      *(MajorFunction - 1) = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
      --v22;
    }
    while ( v22 );
    *MajorFunction = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
    MajorFunction[1] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
    MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
    MajorFunction[3] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDummyIrpHandler;
    a1->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
    a1->DriverUnload = ndisMUnloadEx;
    a1->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
    a1->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
    a1->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
    a1->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
    a1->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
    a1->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPowerDispatch;
    a1->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisWMIIrpDispatch;
  }
  KeInitializeEvent(&v19->MiniportsRemovedEvent, NotificationEvent, 0);
  v19->DriverObject = a1;
  v19->DeviceList.Blink = &v19->DeviceList;
  v19->DeviceList.Flink = &v19->DeviceList;
  ndisInitializeRef(&v19->Ref, 0xDu);
  *v7 = v19;
  v12 = ndisMInvokeSetOptions(v19);
  if ( !v12 )
  {
    if ( a4->OidRequestHandler || v13->CoOidRequestHandler )
    {
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      v25 = ndisDriverObject;
      v13->NextDriver = ndisMiniDriverList;
      ndisMiniDriverList = v13;
      ObfReferenceObject(v25);
      KeReleaseSpinLock(&ndisMiniDriverListLock, v24);
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
      ndisQueryDriverImageName(&v13->ServiceName, &v13->ImageName);
      ndisWriteDriverNDISVersionToServiceKey(
        v31,
        v29,
        1u,
        a4->MajorDriverVersion,
        a4->MinorDriverVersion,
        &v13->ServiceName);
      v12 = 0;
      goto LABEL_7;
    }
    v12 = -1073676283;
  }
  ndisDereferenceDriver(v13, 0, 0xFFu);
  *v7 = 0LL;
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset(&v13->UnhookedCharacteristics, 0LL);
  if ( v10 )
    ExFreePoolWithTag(v13, 0);
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1,
      106,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)v13);
  }
  return v12;
}
