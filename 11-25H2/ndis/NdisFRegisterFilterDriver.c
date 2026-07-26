/*
 * XREFs of NdisFRegisterFilterDriver @ 0x1400A3F50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400105A0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qZ @ 0x1400291D0 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x140068600 (-ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     WPP_RECORDER_SF_Z @ 0x14006CDE0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1400812F0 (WPP_RECORDER_SF__guid_.c)
 *     ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x140090C40 (-ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x140096310 (McTemplateK0zq_EtwWriteTransfer.c)
 *     ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x140097E10 (-ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1400A3214 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ??$ndisSetContextVerifierDummyHandlers@U_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@@YAXPEAU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@Z @ 0x1400AA8C8 (--$ndisSetContextVerifierDummyHandlers@U_NDIS_FILTER_DRIVER_CHARACTERISTICS@@@@YAXPEAU_NDIS_FILT.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x140142E4C (-ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ?ndisDriverVerifierNdisFlagEnabled@@YA_NXZ @ 0x14014CB3C (-ndisDriverVerifierNdisFlagEnabled@@YA_NXZ.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x14014E244 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x14016AB10 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x14016AEA0 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 *     ?ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z @ 0x140173D80 (-ndisInitializeRef@@YAXPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x140174D60 (-ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  unsigned __int8 v4; // si
  int v9; // edx
  __int64 v10; // rcx
  NDIS_STATUS FilterDriverRegistry; // ebx
  int (__fastcall *DirectOidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rdx
  _BOOL8 v15; // rcx
  unsigned __int8 MajorNdisVersion; // dl
  int v17; // edx
  __int64 v18; // r8
  unsigned int Flags; // eax
  unsigned __int16 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 Pool2; // rax
  struct _NDIS_FILTER_DRIVER_BLOCK *v24; // rsi
  unsigned int v25; // eax
  size_t Length; // r8
  wchar_t *v27; // rdx
  wchar_t *v28; // rax
  wchar_t *Buffer; // rdx
  __int64 v30; // r8
  KRef<NDIS_BIND_FILTER_DRIVER> *FilterDriver; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rbx
  NDIS_STATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  KIRQL v38; // al
  enum CallRunMode v39; // r8d
  struct _UNICODE_STRING *v40; // [rsp+28h] [rbp-70h]
  size_t Size; // [rsp+40h] [rbp-58h] BYREF
  GUID Guid; // [rsp+48h] [rbp-50h] BYREF

  v4 = 1;
  LODWORD(Size) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)FilterDriverContext,
      1u,
      0xAu,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      (char)DriverObject,
      &FilterDriverCharacteristics->FriendlyName.Length);
  ndisWaitForKernelObject(&ndisPnPMutex);
  FilterDriverRegistry = ndisValidateFilterDriverCharacteristicsHeader(
                           FilterDriverCharacteristics,
                           (unsigned int *)&Size);
  if ( FilterDriverRegistry )
  {
    if ( (byte_140125102 & 4) != 0 )
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
    v15 = FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL;
    if ( v15 != (OidRequestHandler == 0LL) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          12,
          (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_140125102 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v15,
          &FilterRegistrationFailed,
          (__int64)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
      goto LABEL_6;
    }
    if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          13,
          (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_140125102 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v15,
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
      v15 = FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL;
      if ( v15 != (DirectOidRequestHandler == 0LL) )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            14,
            (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073676283;
        if ( (byte_140125102 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v15,
            &FilterRegistrationFailed,
            (__int64)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            4);
        goto LABEL_6;
      }
      if ( !DirectOidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            15,
            (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073676283;
        if ( (byte_140125102 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v15,
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
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          16,
          (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_140125102 & 4) != 0 )
        McTemplateK0zq_EtwWriteTransfer(
          v15,
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
        goto LABEL_58;
      if ( FilterDriverCharacteristics->MajorNdisVersion != 6 )
        goto LABEL_61;
      if ( FilterDriverCharacteristics->MinorNdisVersion >= 0x59u )
      {
LABEL_58:
        Flags = FilterDriverCharacteristics->Flags;
        if ( (Flags & 0xFFFFFFE0) != 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_57;
          v20 = 17;
          goto LABEL_56;
        }
      }
      else if ( FilterDriverCharacteristics->MinorNdisVersion >= 0x32u )
      {
        Flags = FilterDriverCharacteristics->Flags;
        if ( (Flags & 0xFFFFFFF8) != 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          {
LABEL_57:
            FilterDriverRegistry = -1073741811;
            goto LABEL_6;
          }
          v20 = FilterDriverRegistry + 18;
LABEL_56:
          LODWORD(v40) = Flags;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            v20,
            (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
            v40);
          goto LABEL_57;
        }
      }
LABEL_61:
      v21 = FilterDriverCharacteristics->UniqueName.Length
          + (unsigned int)FilterDriverCharacteristics->ServiceName.Length;
      v22 = v21 + FilterDriverCharacteristics->FriendlyName.Length + 360;
      if ( v22 > 0xFFFF )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v17,
            1,
            19,
            (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073741811;
        if ( (byte_140125102 & 4) != 0 )
          McTemplateK0zq_EtwWriteTransfer(
            v21,
            &FilterRegistrationFailed,
            v18,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            7);
        goto LABEL_6;
      }
      Pool2 = ExAllocatePool2(64LL, v22, 1986413646);
      v24 = (struct _NDIS_FILTER_DRIVER_BLOCK *)Pool2;
      if ( !Pool2 )
      {
        FilterDriverRegistry = -1073741670;
        goto LABEL_6;
      }
      *(_QWORD *)(Pool2 + 336) = 0LL;
      *(_WORD *)Pool2 = 260;
      *(_WORD *)(Pool2 + 2) = v22;
      *(_QWORD *)(Pool2 + 16) = DriverObject;
      *(_QWORD *)(Pool2 + 32) = FilterDriverContext;
      KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 40));
      ndisInitializeRef(&v24->Ref, 6u);
      v24->DeviceList.Blink = &v24->DeviceList;
      v24->DeviceList.Flink = &v24->DeviceList;
      if ( ndisNblContextVerifierMode == 1 )
      {
        if ( !MmIsDriverVerifyingByAddress(FilterDriverCharacteristics->AttachHandler)
          || !ndisDriverVerifierNdisFlagEnabled() )
        {
LABEL_74:
          memmove(&v24->DefaultFilterCharacteristics, FilterDriverCharacteristics, (unsigned int)Size);
          if ( v24->DefaultFilterCharacteristics.MajorNdisVersion <= 6u
            && (v24->DefaultFilterCharacteristics.MajorNdisVersion != 6
             || v24->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
          {
            v24->DefaultFilterCharacteristics.Flags &= 1u;
          }
          v25 = v24->DefaultFilterCharacteristics.Flags;
          Length = FilterDriverCharacteristics->FriendlyName.Length;
          v24->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v24[1].Header.Type;
          v27 = (wchar_t *)(&v24[1].Header.Type + Length);
          v24->Flags = v25;
          v28 = (wchar_t *)((char *)v27 + FilterDriverCharacteristics->UniqueName.Length);
          v24->DefaultFilterCharacteristics.UniqueName.Buffer = v27;
          Buffer = FilterDriverCharacteristics->FriendlyName.Buffer;
          v24->DefaultFilterCharacteristics.ServiceName.Buffer = v28;
          memmove(&v24[1], Buffer, Length);
          RtlUpcaseUnicodeString(
            &v24->DefaultFilterCharacteristics.UniqueName,
            &FilterDriverCharacteristics->UniqueName,
            0);
          memmove(
            v24->DefaultFilterCharacteristics.ServiceName.Buffer,
            FilterDriverCharacteristics->ServiceName.Buffer,
            FilterDriverCharacteristics->ServiceName.Length);
          Guid = 0LL;
          if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) >= 0 )
          {
            LOBYTE(v30) = 1;
            FilterDriver = (KRef<NDIS_BIND_FILTER_DRIVER> *)ndisBindGetFilterDriver(&Size, &Guid, v30);
            if ( &v24->Bind != FilterDriver )
            {
              p = FilterDriver->_p;
              FilterDriver->_p = 0LL;
              KRef<NDIS_BIND_FILTER_DRIVER>::unref(&v24->Bind, v32, v33);
              v24->Bind._p = p;
            }
            KRef<NDIS_BIND_FILTER_DRIVER>::unref(&Size, v32, v33);
            if ( v24->Bind._p )
            {
              *NdisFilterDriverHandle = v24;
              if ( !FilterDriverCharacteristics->SetOptionsHandler
                || (v35 = ndisFInvokeSetOptions(v24), (FilterDriverRegistry = v35) == 0) )
              {
                v38 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                v24->NextFilterDriver = (_NDIS_FILTER_DRIVER_BLOCK *)ndisFilterDriverList;
                ndisFilterDriverList = v24;
                KeReleaseSpinLock(&ndisFilterDriverListLock, v38);
                ObfReferenceObject(ndisDriverObject);
                ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v24->ImageName);
                ndisWriteDriverNDISVersionToServiceKey(
                  FilterDriverCharacteristics->MajorNdisVersion,
                  FilterDriverCharacteristics->MinorNdisVersion,
                  1,
                  FilterDriverCharacteristics->MajorDriverVersion,
                  FilterDriverCharacteristics->MinorDriverVersion,
                  &FilterDriverCharacteristics->ServiceName);
                FilterDriverRegistry = 0;
                NDIS_BIND_FILTER_DRIVER::SetRunningDriver(&v24->Bind._p->_t, v24, v39);
                goto LABEL_6;
              }
              if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v40) = v35;
                WPP_RECORDER_SF_d(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  1u,
                  0x16u,
                  (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
                  v40);
              }
              *NdisFilterDriverHandle = 0LL;
LABEL_92:
              ndisDereferenceRef(&v24->Ref.SpinLock, 0xFFu);
              _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v24, v36, v37);
              ExFreePoolWithTag(v24, 0);
              goto LABEL_6;
            }
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF__guid_(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                1u,
                0x15u,
                (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
                (__int64)&Guid);
          }
          else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_Z(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x14u,
              (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
              &FilterDriverCharacteristics->UniqueName.Length);
          }
          FilterDriverRegistry = -1073741823;
          goto LABEL_92;
        }
      }
      else if ( ndisNblContextVerifierMode != 2 )
      {
        goto LABEL_74;
      }
      ndisSetContextVerifierDummyHandlers<_NDIS_FILTER_DRIVER_CHARACTERISTICS>(FilterDriverCharacteristics);
      goto LABEL_74;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        1,
        11,
        (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
        (char)DriverObject);
    }
    FilterDriverRegistry = -1073676283;
    if ( (byte_140125102 & 4) != 0 )
      McTemplateK0zq_EtwWriteTransfer(
        v10,
        &FilterRegistrationFailed,
        (__int64)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        1);
  }
LABEL_6:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v40) = FilterDriverRegistry;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x17u,
      (struct _GUID *)&WPP_e0d861f0bf3937ec9935a7153c1d15e8_Traceguids,
      v40);
  }
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
