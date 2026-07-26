/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140071C40
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x140071C20 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140093240 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x140094EA0 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ?ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z @ 0x140012F00 (-ndisDereferenceDriver@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@EW4_NDIS_MDRV_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x14004C490 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x14006CD40 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140074F20 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ?Make@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU?$TriageDataCollector@U_NDIS_M_DRIVER_BLOCK@@@@_KPEAPEAVTriageData@@@Z @ 0x140092274 (-Make@-$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@SAJPEAU_NDIS_M_DRIVER_BLOCK@@PEBU-$TriageDataC.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x140092EB0 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z @ 0x1401381C0 (-ndisMInvokeSetOptions@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAU_DRIVER_OBJECT@@KK@Z @ 0x140166250 (-ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERIST.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x140167070 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140167330 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x140168790 (-ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  struct _NDIS_M_DRIVER_BLOCK *v5; // rdi
  unsigned int v8; // r15d
  int v9; // edx
  unsigned int v10; // ebx
  _UNICODE_STRING *p_DriverName; // rdx
  unsigned __int8 v12; // r12
  unsigned __int8 v13; // r13
  ULONG v14; // ebx
  PVOID Pool2; // rax
  __int64 v16; // rdx
  struct _UNICODE_STRING *v17; // rdx
  LOGICAL IsDriverVerifyingByAddress; // eax
  struct _NDIS_M_DRIVER_BLOCK *v19; // rax
  __int64 v20; // rcx
  int (__fastcall **MajorFunction)(_DEVICE_OBJECT *, _IRP *); // rax
  __int64 v22; // r8
  int v23; // eax
  void (__fastcall ***v24)(void *, _QWORD); // r14
  void **v25; // r14
  TriageData *value; // rsi
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *v27; // rcx
  KIRQL v28; // bl
  PVOID v29; // rcx
  unsigned int v31; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+4Ch] [rbp-BCh] BYREF
  size_t Size; // [rsp+50h] [rbp-B8h] BYREF
  PVOID DriverObjectExtension; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING *v35; // [rsp+60h] [rbp-A8h]
  void **p_value; // [rsp+68h] [rbp-A0h]
  void *v37; // [rsp+70h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h]
  void *v39; // [rsp+80h] [rbp-88h]
  void **v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+98h] [rbp-70h] BYREF
  __int64 (__fastcall *v42)(void *, TriageDataArray *); // [rsp+A0h] [rbp-68h]
  int v43; // [rsp+A8h] [rbp-60h]
  void *v44; // [rsp+B0h] [rbp-58h]
  int v45; // [rsp+B8h] [rbp-50h]
  void *v46; // [rsp+C0h] [rbp-48h]
  int v47; // [rsp+C8h] [rbp-40h]
  void *v48; // [rsp+D0h] [rbp-38h]
  int v49; // [rsp+D8h] [rbp-30h]
  void *v50; // [rsp+E0h] [rbp-28h]

  LOBYTE(v5) = 0;
  v40 = a5;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  v39 = a3;
  v35 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      106,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
  }
  v8 = a4->Flags & 0x20;
  ndisIfEnsureNsiInitialized();
  if ( a1 || v8 )
  {
    v32 = 0;
    p_DriverName = 0LL;
    v31 = 0;
    if ( !v8 )
      p_DriverName = &a1->DriverName;
    v10 = ndisValidateMiniportDriverCharacteristicsHeader(a4, p_DriverName, &v32, &v31, (unsigned int *)&Size);
    if ( !v10 )
    {
      v12 = v31;
      v13 = v32;
      v10 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, a1, v32, v31);
      if ( !v10 )
      {
        v14 = v35->Length + 1194;
        if ( v8 )
        {
          Pool2 = (PVOID)ExAllocatePool2(66LL, v14, 538985550LL);
          DriverObjectExtension = Pool2;
          if ( !Pool2 )
          {
            v10 = -1073741670;
            goto LABEL_68;
          }
        }
        else
        {
          v16 = 1313425732LL;
          if ( (a4->Flags & 1) == 0 )
            v16 = 1313687876LL;
          if ( IoAllocateDriverObjectExtension(a1, (PVOID)v16, v14, &DriverObjectExtension) < 0 )
          {
            v10 = -1073741670;
            goto LABEL_68;
          }
          Pool2 = DriverObjectExtension;
        }
        memset(Pool2, 0, v14);
        v5 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
        memset(DriverObjectExtension, 0, 0x4A8uLL);
        v17 = v35;
        v5->MiniportDriverContext = v39;
        v5->Header = (_NDIS_OBJECT_HEADER)78119170;
        v5->MajorNdisVersion = v13;
        v5->MinorNdisVersion = v12;
        v5->ServiceRegPath.Buffer = (wchar_t *)&v5[1].Header.Type;
        v5->ServiceRegPath.Length = v17->Length;
        v5->ServiceRegPath.MaximumLength = v17->Length + 2;
        memmove(&v5[1], v17->Buffer, v17->Length);
        ndisGetServiceNameFromRegPath(&v5->ServiceRegPath, &v5->ServiceName);
        if ( (a4->Flags & 1) != 0 )
        {
          v5->Flags |= 1u;
          KeInitializeMutex(&v5->IMStartRemoveMutex, 0xFFFFu);
        }
        if ( (a4->Flags & 4) != 0 )
          v5->Flags |= 0x20u;
        memmove(&v5->112, a4, (unsigned int)Size);
        v5->MiniportDriverCharacteristics.MajorNdisVersion = v13;
        v5->MiniportDriverCharacteristics.MinorNdisVersion = v12;
        if ( (a4->Flags & 0x10) != 0 )
        {
          v5->Flags |= 0x40u;
          if ( (unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (a4->Flags & 0x40) != 0 )
              v5->Flags |= 0x100u;
          }
        }
        if ( (a4->Flags & 0x20) != 0 )
          v5->Flags |= 0x80u;
        v5->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
        if ( v8 )
          IsDriverVerifyingByAddress = MmIsDriverVerifyingByAddress(a4->RestartHandler);
        else
          IsDriverVerifyingByAddress = MmIsDriverVerifying(a1);
        if ( IsDriverVerifyingByAddress )
        {
          v5->Flags |= 2u;
          if ( (ndisFlags & 0x400) != 0 )
          {
            v19 = 0LL;
            if ( !ndisDriverTrackAlloc )
              v19 = v5;
            ndisDriverTrackAlloc = v19;
          }
        }
        v5->MiniportQueue = 0LL;
        if ( (a4->Flags & 0x30) == 0 )
        {
          v20 = 3LL;
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
            --v20;
          }
          while ( v20 );
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
        KeInitializeEvent(&v5->MiniportsRemovedEvent, NotificationEvent, 0);
        v5->DriverObject = a1;
        v5->DeviceList.Blink = &v5->DeviceList;
        v5->DeviceList.Flink = &v5->DeviceList;
        ndisInitializeRef(&v5->Ref, 0xDu);
        if ( !(unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_55;
        v41 = 1;
        v42 = StructSliceDataCollector<_NDIS_M_DRIVER_BLOCK,0,352>::AddTriageBlocks;
        v43 = 1;
        v44 = &StructFieldDataCollector<_NDIS_M_DRIVER_BLOCK,_UNICODE_STRING,488>::AddTriageBlocks;
        v45 = 1;
        v46 = &UnicodeStringDataCollector<_NDIS_M_DRIVER_BLOCK,488>::AddTriageBlocks;
        v47 = 1;
        v48 = &StructFieldDataCollector<_NDIS_M_DRIVER_BLOCK,_UNICODE_STRING,872>::AddTriageBlocks;
        v50 = &UnicodeStringDataCollector<_NDIS_M_DRIVER_BLOCK,872>::AddTriageBlocks;
        p_value = (void **)&v5->Triage.__ptr_.__value_;
        v49 = 1;
        v37 = 0LL;
        LOBYTE(v38) = 1;
        v23 = ObjectTriageData<_NDIS_M_DRIVER_BLOCK>::Make(v5, &v41, v22, &v37);
        v10 = v23;
        if ( v23 < 0 )
        {
          if ( v23 == -1073741789 )
            v10 = -1073676266;
        }
        else if ( v23 != 259 && v23 != 1076035585 )
        {
          v10 = 0;
        }
        if ( (_BYTE)v38 )
        {
          v24 = (void (__fastcall ***)(void *, _QWORD))*p_value;
          *p_value = v37;
          if ( v24 )
          {
            (**v24)(v24, 0LL);
            ExFreePoolWithTag(v24, 0);
          }
        }
        if ( v10 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x6Bu,
              (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
              (char)v5,
              v10);
          ndisDereferenceDriver(v5, 0, 0xFFu);
        }
        else
        {
LABEL_55:
          v25 = v40;
          *v40 = v5;
          v10 = ndisMInvokeSetOptions(v5);
          if ( v10 )
          {
            ndisDereferenceDriver(v5, 0, 0xFFu);
          }
          else
          {
            if ( a4->OidRequestHandler || v5->CoOidRequestHandler )
            {
              ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
              v28 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
              v29 = ndisDriverObject;
              v5->NextDriver = ndisMiniDriverList;
              ndisMiniDriverList = v5;
              ObfReferenceObject(v29);
              KeReleaseSpinLock(&ndisMiniDriverListLock, v28);
              MmUnlockPagableImageSection(ImageSectionHandle);
              _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
              ndisQueryDriverImageName(&v5->ServiceName, &v5->ImageName);
              ndisWriteDriverNDISVersionToServiceKey(
                v32,
                v31,
                1u,
                a4->MajorDriverVersion,
                a4->MinorDriverVersion,
                &v5->ServiceName);
              v10 = 0;
              goto LABEL_68;
            }
            ndisDereferenceDriver(v5, 0, 0xFFu);
            v10 = -1073676283;
          }
          *v25 = 0LL;
        }
        value = v5->Triage.__ptr_.__value_;
        v5->Triage.__ptr_.__value_ = 0LL;
        if ( value )
        {
          ((void (__fastcall *)(TriageData *, _QWORD))value->~TriageData)(value, 0LL);
          ExFreePoolWithTag(value, 0);
        }
        v27 = v5->UnhookedCharacteristics.__ptr_.__value_;
        v5->UnhookedCharacteristics.__ptr_.__value_ = 0LL;
        if ( v27 )
          ExFreePoolWithTag(v27, 0);
        if ( v8 )
          ExFreePoolWithTag(v5, 0);
      }
    }
  }
  else
  {
    v10 = -1073741823;
  }
LABEL_68:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      108,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)v5);
  }
  return v10;
}
