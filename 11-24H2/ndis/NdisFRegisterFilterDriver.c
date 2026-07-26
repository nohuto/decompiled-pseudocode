/*
 * XREFs of NdisFRegisterFilterDriver @ 0x14009AD80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x14004C490 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400657A0 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140074F20 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x14008B0B0 (McTemplateK0zq_EtwWriteTransfer.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x14008C660 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 *     Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline @ 0x140092F58 (Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline.c)
 *     ??1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ @ 0x1400999E4 (--1_NDIS_FILTER_DRIVER_BLOCK@@QEAA@XZ.c)
 *     ndisRegisterFilterDriverTriageData @ 0x14009A1DC (ndisRegisterFilterDriverTriageData.c)
 *     ??$ndisSetContextVerifierDummyHandlers@U_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@@YAXPEAU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@Z @ 0x1400A2718 (--$ndisSetContextVerifierDummyHandlers@U_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@@YAXPEAU_NDIS_FILT.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 *     ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x140137E2C (-ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x140141E6C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x140143584 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x14015DBC0 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14015DF50 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140167330 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x140168620 (-ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  unsigned __int8 v4; // si
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rdx
  __int64 v10; // rcx
  NDIS_STATUS FilterDriverRegistry; // ebx
  int (__fastcall *DirectOidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  _BOOL8 v14; // rcx
  unsigned __int8 MajorNdisVersion; // dl
  __int64 v16; // r8
  unsigned int Flags; // eax
  int v18; // r9d
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 Pool2; // rax
  struct _NDIS_FILTER_DRIVER_BLOCK *v22; // rsi
  unsigned int v23; // eax
  size_t Length; // r8
  wchar_t *v25; // rdx
  wchar_t *v26; // rax
  wchar_t *Buffer; // rdx
  __int64 v28; // r8
  KRef<NDIS_BIND_FILTER_DRIVER> *FilterDriver; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rbx
  __int64 v33; // rdx
  TriageData *v34; // r8
  NDIS_STATUS v35; // eax
  NDIS_STATUS v36; // eax
  int v37; // edx
  KIRQL v38; // al
  enum CallRunMode v39; // r8d
  __int64 v40; // [rsp+30h] [rbp-68h]
  size_t Size; // [rsp+40h] [rbp-58h] BYREF
  GUID Guid; // [rsp+48h] [rbp-50h] BYREF

  v4 = 1;
  LODWORD(Size) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)FilterDriverContext,
      1u,
      0xAu,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      (char)DriverObject,
      &FilterDriverCharacteristics->FriendlyName.Length);
  ndisWaitForKernelObject(&ndisPnPMutex);
  FilterDriverRegistry = ndisValidateFilterDriverCharacteristicsHeader(
                           FilterDriverCharacteristics,
                           (unsigned int *)&Size);
  if ( FilterDriverRegistry )
  {
    if ( (byte_14011B102 & 4) != 0 )
      McTemplateK0zq_EtwWriteTransfer(
        v10,
        &FilterRegistrationFailed,
        (__int64)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        0);
    goto LABEL_6;
  }
  if ( FilterDriverCharacteristics->AttachHandler
    && FilterDriverCharacteristics->DetachHandler
    && FilterDriverCharacteristics->RestartHandler
    && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v14 = FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL;
    if ( v14 != (OidRequestHandler == 0LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          12,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_14011B102 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v14,
          &FilterRegistrationFailed,
          (__int64)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
      goto LABEL_6;
    }
    if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          13,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_14011B102 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v14,
          &FilterRegistrationFailed,
          (__int64)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          3);
      goto LABEL_6;
    }
    MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion )
    {
      DirectOidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
      v14 = FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL;
      if ( v14 != (DirectOidRequestHandler == 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            14,
            (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073676283;
        if ( (byte_14011B102 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v14,
            &FilterRegistrationFailed,
            (__int64)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            4);
        goto LABEL_6;
      }
      if ( !DirectOidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            15,
            (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073676283;
        if ( (byte_14011B102 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v14,
            &FilterRegistrationFailed,
            (__int64)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            5);
        goto LABEL_6;
      }
    }
    if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
      && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          16,
          (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_14011B102 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v14,
          &FilterRegistrationFailed,
          (__int64)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          6);
      goto LABEL_6;
    }
    if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || FilterDriverCharacteristics->MinorNdisVersion < 0x28u) )
      v4 = 0;
    FilterDriverRegistry = ndisCreateFilterDriverRegistry(&FilterDriverCharacteristics->ServiceName, v4);
    if ( !FilterDriverRegistry )
    {
      if ( FilterDriverCharacteristics->MajorNdisVersion > 6u )
        goto LABEL_59;
      if ( FilterDriverCharacteristics->MajorNdisVersion != 6 )
        goto LABEL_62;
      if ( FilterDriverCharacteristics->MinorNdisVersion >= 0x59u )
      {
LABEL_59:
        Flags = FilterDriverCharacteristics->Flags;
        if ( (Flags & 0xFFFFFFE0) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_58;
          v18 = 17;
          goto LABEL_57;
        }
      }
      else if ( FilterDriverCharacteristics->MinorNdisVersion >= 0x32u )
      {
        Flags = FilterDriverCharacteristics->Flags;
        if ( (Flags & 0xFFFFFFF8) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_58:
            FilterDriverRegistry = -1073741811;
            goto LABEL_6;
          }
          v18 = 18;
LABEL_57:
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            v18,
            (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
            Flags);
          goto LABEL_58;
        }
      }
LABEL_62:
      v19 = FilterDriverCharacteristics->UniqueName.Length
          + (unsigned int)FilterDriverCharacteristics->ServiceName.Length;
      v20 = v19 + FilterDriverCharacteristics->FriendlyName.Length + 368;
      if ( v20 > 0xFFFF )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            19,
            (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073741811;
        if ( (byte_14011B102 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v19,
            &FilterRegistrationFailed,
            v16,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            7);
        goto LABEL_6;
      }
      Pool2 = ExAllocatePool2(64LL, v20, 1986413646LL);
      v22 = (struct _NDIS_FILTER_DRIVER_BLOCK *)Pool2;
      if ( !Pool2 )
      {
        FilterDriverRegistry = -1073741670;
        goto LABEL_6;
      }
      *(_QWORD *)(Pool2 + 336) = 0LL;
      *(_QWORD *)(Pool2 + 360) = 0LL;
      *(_WORD *)Pool2 = 260;
      *(_WORD *)(Pool2 + 2) = v20;
      *(_QWORD *)(Pool2 + 16) = DriverObject;
      *(_QWORD *)(Pool2 + 32) = FilterDriverContext;
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 40));
      ndisInitializeRef(&v22->Ref, 6u);
      v22->DeviceList.Blink = &v22->DeviceList;
      v22->DeviceList.Flink = &v22->DeviceList;
      if ( ndisNblContextVerifierMode == 1 )
      {
        if ( !MmIsDriverVerifyingByAddress(FilterDriverCharacteristics->AttachHandler)
          || !ndisDriverVerifierNdisFlagEnabled() )
        {
LABEL_75:
          memmove(&v22->DefaultFilterCharacteristics, FilterDriverCharacteristics, (unsigned int)Size);
          if ( v22->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
            && (v22->DefaultFilterCharacteristics.MajorNdisVersion != 6
             || v22->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
          {
            v22->DefaultFilterCharacteristics.Flags &= 1u;
          }
          v23 = v22->DefaultFilterCharacteristics.Flags;
          Length = FilterDriverCharacteristics->FriendlyName.Length;
          v22->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v22[1].Header.Type;
          v25 = (wchar_t *)(&v22[1].Header.Type + Length);
          v22->Flags = v23;
          v26 = (wchar_t *)((char *)v25 + FilterDriverCharacteristics->UniqueName.Length);
          v22->DefaultFilterCharacteristics.UniqueName.Buffer = v25;
          Buffer = FilterDriverCharacteristics->FriendlyName.Buffer;
          v22->DefaultFilterCharacteristics.ServiceName.Buffer = v26;
          memmove(&v22[1], Buffer, Length);
          RtlUpcaseUnicodeString(
            &v22->DefaultFilterCharacteristics.UniqueName,
            &FilterDriverCharacteristics->UniqueName,
            0);
          memmove(
            v22->DefaultFilterCharacteristics.ServiceName.Buffer,
            FilterDriverCharacteristics->ServiceName.Buffer,
            FilterDriverCharacteristics->ServiceName.Length);
          Guid = 0LL;
          if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) >= 0 )
          {
            LOBYTE(v28) = 1;
            FilterDriver = (KRef<NDIS_BIND_FILTER_DRIVER> *)ndisBindGetFilterDriver(&Size, &Guid, v28);
            if ( &v22->Bind != FilterDriver )
            {
              p = FilterDriver->_p;
              FilterDriver->_p = 0LL;
              KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v22->Bind, v30, v31);
              v22->Bind._p = p;
            }
            KRef<NDIS_BIND_FILTER_DRIVER>::unref(&Size, v30, v31);
            if ( v22->Bind._p )
            {
              if ( (unsigned int)Feature_NdisTriageData__private_IsEnabledDeviceUsageNoInline()
                && (v35 = ndisRegisterFilterDriverTriageData((_LIST_ENTRY *)v22, v33, v34),
                    (FilterDriverRegistry = v35) != 0) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v40) = v35;
                  WPP_RECORDER_SF_qD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    2u,
                    1u,
                    0x16u,
                    (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
                    (char)v22,
                    v40);
                }
              }
              else
              {
                *NdisFilterDriverHandle = v22;
                if ( !FilterDriverCharacteristics->SetOptionsHandler
                  || (v36 = ndisFInvokeSetOptions(v22), (FilterDriverRegistry = v36) == 0) )
                {
                  v38 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                  v22->NextFilterDriver = (_NDIS_FILTER_DRIVER_BLOCK *)ndisFilterDriverList;
                  ndisFilterDriverList = v22;
                  KeReleaseSpinLock(&ndisFilterDriverListLock, v38);
                  ObfReferenceObject(ndisDriverObject);
                  ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v22->ImageName);
                  ndisWriteDriverNDISVersionToServiceKey(
                    FilterDriverCharacteristics->MajorNdisVersion,
                    FilterDriverCharacteristics->MinorNdisVersion,
                    1,
                    FilterDriverCharacteristics->MajorDriverVersion,
                    FilterDriverCharacteristics->MinorDriverVersion,
                    &FilterDriverCharacteristics->ServiceName);
                  FilterDriverRegistry = 0;
                  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(&v22->Bind._p->_t, v22, v39);
                  goto LABEL_6;
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v37) = 2;
                  WPP_RECORDER_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v37,
                    1,
                    23,
                    (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
                    v36);
                }
                *NdisFilterDriverHandle = 0LL;
              }
LABEL_97:
              ndisDereferenceRef(&v22->Ref.SpinLock, 0xFFu);
              _NDIS_FILTER_DRIVER_BLOCK::~_NDIS_FILTER_DRIVER_BLOCK(v22);
              ExFreePoolWithTag(v22, 0);
              goto LABEL_6;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF__guid_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x15u,
                (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
                (__int64)&Guid);
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_Z(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x14u,
              (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
              &FilterDriverCharacteristics->UniqueName.Length);
          }
          FilterDriverRegistry = -1073741823;
          goto LABEL_97;
        }
      }
      else if ( ndisNblContextVerifierMode != 2 )
      {
        goto LABEL_75;
      }
      ndisSetContextVerifierDummyHandlers<_NDIS_FILTER_DRIVER_CHARACTERISTICS>(FilterDriverCharacteristics);
      goto LABEL_75;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(OidRequestHandler) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequestHandler,
        1,
        11,
        (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
        (char)DriverObject);
    }
    FilterDriverRegistry = -1073676283;
    if ( (byte_14011B102 & 4) != 0 )
      McTemplateK0zq_EtwWriteTransfer(
        v10,
        &FilterRegistrationFailed,
        (__int64)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        1);
  }
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OidRequestHandler) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequestHandler,
      1,
      24,
      (struct _GUID *)&WPP_eb6c2b45b1cb37f84b883a16c84334bd_Traceguids,
      FilterDriverRegistry);
  }
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
