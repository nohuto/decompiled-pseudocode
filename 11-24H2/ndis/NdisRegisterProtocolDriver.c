/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1400B9070
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14004C300 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x140056920 (WPP_RECORDER_SF_qZL.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1400744D0 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140074F20 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     ??1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ @ 0x14008DAF0 (--1_NDIS_PROTOCOL_BLOCK@@QEAA@XZ.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     ndisRegisterProtocolTriageData @ 0x1400B8354 (ndisRegisterProtocolTriageData.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x140135CA0 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x14015D4F0 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x14015E250 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x140167070 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140167330 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1401689A0 (-ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@.c)
 *     ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140169330 (-ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERI.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  _NDIS_PROTOCOL_BLOCK *v3; // rdi
  int v7; // edx
  NDIS_STATUS v8; // ebx
  int v9; // r8d
  unsigned __int8 MajorNdisVersion; // al
  unsigned __int8 *p_MinorNdisVersion; // r14
  int v12; // edx
  _UNICODE_STRING *p_Name; // r15
  unsigned int v15; // ebx
  __int64 Pool2; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // dl
  unsigned int Flags; // eax
  unsigned __int16 Length; // ax
  __int64 v22; // r8
  __int64 ProtocolDriver; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  TriageData *v29; // r8
  NDIS_STATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  UNICODE_STRING String2; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v36; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v37; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v38; // [rsp+B8h] [rbp+48h] BYREF

  *(_QWORD *)&String2.Length = 786442LL;
  String2.Buffer = L"TCPIP";
  LOBYTE(v3) = 0;
  v38 = 0;
  v36.Buffer = L"TCPIP6";
  *(_QWORD *)&v36.Length = 917516LL;
  v37.Buffer = L"NDISTEST6";
  *(_QWORD *)&v37.Length = 1310738LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      &ProtocolCharacteristics->Name.Length);
  ndisIfEnsureNsiInitialized();
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v8 = ndisValidateProtocolDriverCharacteristicsHeader(ProtocolCharacteristics, &v38);
  if ( v8 )
    goto LABEL_12;
  v8 = -1073676283;
  if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics, v7, v9) == -1073676283 )
    goto LABEL_12;
  MajorNdisVersion = ProtocolCharacteristics->MajorNdisVersion;
  if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion >= 0x59u )
  {
    p_MinorNdisVersion = &ProtocolCharacteristics->MinorNdisVersion;
    if ( (ProtocolCharacteristics->Flags & 0xFFFFFF1) != 0 )
    {
LABEL_11:
      v8 = -1073741811;
      goto LABEL_12;
    }
  }
  else
  {
    p_MinorNdisVersion = &ProtocolCharacteristics->MinorNdisVersion;
    if ( MajorNdisVersion == 6
      && ProtocolCharacteristics->MinorNdisVersion >= 0x32u
      && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
    {
      goto LABEL_11;
    }
  }
  p_Name = &ProtocolCharacteristics->Name;
  v15 = ProtocolCharacteristics->Name.Length + 898;
  Pool2 = ExAllocatePool2(64LL, v15, 1651524686LL);
  v3 = (_NDIS_PROTOCOL_BLOCK *)Pool2;
  if ( !Pool2 )
    goto LABEL_17;
  *(_QWORD *)(Pool2 + 824) = 0LL;
  v17 = Pool2 + 832;
  v3->Triage.__ptr_.__value_ = 0LL;
  *(_QWORD *)(v17 + 40) = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
  *(_QWORD *)(v17 + 16) = KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
  *(_QWORD *)v17 = 0LL;
  *(_DWORD *)(v17 + 48) = 0;
  *(_QWORD *)(v17 + 32) = v3;
  *(_QWORD *)(v17 + 24) = v17;
  KeInitializeMutex(&v3->Mutex, 0xFFFFu);
  v18 = ProtocolCharacteristics->MajorNdisVersion;
  v19 = *p_MinorNdisVersion;
  v3->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
  v3->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
  v3->ProtocolDriverContext = ProtocolDriverContext;
  v3->Name.Buffer = (wchar_t *)&v3[1].Header.Type;
  Flags = ProtocolCharacteristics->Flags;
  v3->Flags = Flags;
  *(_WORD *)&v3->Header.Type = 259;
  v3->Header.Size = v15;
  v3->MajorNdisVersion = v18;
  v3->MinorNdisVersion = v19;
  if ( v18 <= 6u )
  {
    if ( v18 == 6 )
    {
      if ( v19 >= 0x32u )
        goto LABEL_23;
      p_MinorNdisVersion = &ProtocolCharacteristics->MinorNdisVersion;
    }
    v3->Flags = Flags & 0xF0000000;
  }
LABEL_23:
  Length = p_Name->Length;
  v3->Name.Length = p_Name->Length;
  v3->Name.MaximumLength = Length;
  RtlUpcaseUnicodeString(&v3->Name, &ProtocolCharacteristics->Name, 0);
  v3->IsIPv4 = RtlCompareUnicodeString(&v3->Name, &String2, 0) == 0;
  v3->IsIPv6 = RtlCompareUnicodeString(&v3->Name, &v36, 0) == 0;
  v3->IsNdisTest6 = RtlCompareUnicodeString(&v3->Name, &v37, 0) == 0;
  v3->BindAdapterHandlerEx = ProtocolCharacteristics->BindAdapterHandlerEx;
  v3->UnbindAdapterHandlerEx = ProtocolCharacteristics->UnbindAdapterHandlerEx;
  v3->OpenAdapterCompleteHandlerEx = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
  v3->CloseAdapterCompleteHandlerEx = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
  v3->PnPEventHandler = (int (__fastcall *)(void *, _NET_PNP_EVENT *))ProtocolCharacteristics->NetPnPEventHandler;
  v3->UninstallHandler = ProtocolCharacteristics->UninstallHandler;
  v3->StatusHandlerEx = ProtocolCharacteristics->StatusHandlerEx;
  v3->ReceiveNetBufferListsHandler = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
  v3->SendNetBufferListsCompleteHandler = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
  v3->OidRequestCompleteHandler = ProtocolCharacteristics->OidRequestCompleteHandler;
  if ( ProtocolCharacteristics->MajorNdisVersion > 6u
    || ProtocolCharacteristics->MajorNdisVersion == 6 && *p_MinorNdisVersion )
  {
    v3->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
  }
  ndisInitializeRef(&v3->Ref, 0x10u);
  LOBYTE(v22) = 1;
  ProtocolDriver = ndisBindGetProtocolDriver(&v38, &v3->Name, v22);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v3->Bind, ProtocolDriver);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v38, v24, v25);
  if ( !v3->Bind._p )
  {
    ndisDereferenceRef(&v3->Ref.SpinLock, 0xFFu);
    _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(v3, v26, v27);
    ExFreePoolWithTag(v3, 0);
LABEL_17:
    v8 = -1073741670;
    goto LABEL_12;
  }
  if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline()
    && (v30 = ndisRegisterProtocolTriageData((_LIST_ENTRY *)v3, v28, v29), (v8 = v30) != 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0xBu,
        (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
        (char)v3,
        v30);
    ndisDereferenceRef(&v3->Ref.SpinLock, 0xFFu);
    _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(v3, v31, v32);
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    *NdisProtocolHandle = v3;
    v8 = ndisInvokeSetOptions(v3, ProtocolCharacteristics);
    if ( v8 )
    {
      ndisDereferenceRef(&v3->Ref.SpinLock, 0xFFu);
      _NDIS_PROTOCOL_BLOCK::~_NDIS_PROTOCOL_BLOCK(v3, v33, v34);
      ExFreePoolWithTag(v3, 0);
      LOBYTE(v3) = 0;
      *NdisProtocolHandle = 0LL;
    }
    else
    {
      ndisWriteDriverNDISVersionToServiceKey(
        v3->MajorNdisVersion,
        v3->MinorNdisVersion,
        1,
        v3->MajorDriverVersion,
        v3->MinorDriverVersion,
        &v3->Name);
      ndisRegisterProtocolDriverCommon(v3);
      v8 = 0;
    }
  }
LABEL_12:
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      0xDu,
      0xCu,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)v3,
      &ProtocolCharacteristics->Name.Length,
      v8,
      *(_QWORD *)&String2.Length,
      String2.Buffer,
      *(_QWORD *)&v36.Length,
      v36.Buffer,
      *(_QWORD *)&v37.Length,
      v37.Buffer);
  return v8;
}
