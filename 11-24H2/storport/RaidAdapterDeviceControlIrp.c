/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x14002B3B0
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14002B290 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x14000C1EC (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1400369D0 (RaAdapterProtocolCommandIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x14003E78C (RaidAdapterStorageResetBusIoctl.c)
 *     RaIsDeviceDFxPoweredDown @ 0x140045E40 (RaIsDeviceDFxPoweredDown.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline @ 0x1400565F4 (Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x140056884 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1400588F8 (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14005A5E4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x14005AB44 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterMFNDChildPFControl @ 0x14005B108 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x14005B548 (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterMFNDNameSpaceRead @ 0x14005B974 (RaidAdapterMFNDNameSpaceRead.c)
 *     RaidAdapterMFNDNameSpaceWrite @ 0x14005BE0C (RaidAdapterMFNDNameSpaceWrite.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x14005C628 (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x14005CAB0 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x14005D020 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterReconfigureMFND @ 0x14005DA44 (RaidAdapterReconfigureMFND.c)
 *     RaidAdapterRpmbRequest @ 0x14005E29C (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x14005E7D8 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x14005EB90 (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x14005F248 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterScsiRescanBusIoctl @ 0x1400600D0 (RaidAdapterScsiRescanBusIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x140060F48 (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x140061368 (RaidAdapterSetLedState.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x14006239C (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x140062A2C (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageInternalQueryPropertyIoctl @ 0x140062DCC (RaidAdapterStorageInternalQueryPropertyIoctl.c)
 *     RaidAdapterStorageInternalSetPropertyIoctl @ 0x140063594 (RaidAdapterStorageInternalSetPropertyIoctl.c)
 *     RaidAdapterStorageNotificationConfigureIoctl @ 0x140063BA8 (RaidAdapterStorageNotificationConfigureIoctl.c)
 *     RaidAdapterStorageNotificationGetInfoIoctl @ 0x140063FE8 (RaidAdapterStorageNotificationGetInfoIoctl.c)
 *     RaidAdapterStorageSetPciLinkBandwidthIoctl @ 0x1400643D4 (RaidAdapterStorageSetPciLinkBandwidthIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x14006484C (RaidAdapterStorageSetPropertyIoctl.c)
 *     WPP_SF_qqDD @ 0x140067ED4 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x14006C220 (RaInsertDFxQueue.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x14007B66C (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x14007BBD0 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x14007C21C (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x14007C7A8 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x14007CDC0 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x14007D338 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x14007D928 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x14007DE48 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x14007E2FC (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x14007E850 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x14007EE34 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x14007F3E0 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x14007F980 (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     StorageGetSystemFeatureSupportIoctl @ 0x14008FE40 (StorageGetSystemFeatureSupportIoctl.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1401831FC (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidAdapterPassThrough @ 0x1401B53BC (RaidAdapterPassThrough.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401BD85C (RaidAdapterStorageQueryPropertyIoctl.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v3; // rcx
  _BYTE *v5; // r14
  BOOLEAN v6; // si
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  unsigned __int64 v16; // rdx
  char v17; // r13
  unsigned __int8 v18; // r11
  char v19; // di
  char v20; // r12
  char v21; // r15
  unsigned __int8 *v22; // rsi
  unsigned int v23; // ebp
  unsigned int v24; // r10d
  __int64 v25; // rcx
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  int v28; // ecx
  int v29; // ecx
  unsigned __int64 v30; // rcx
  char *v31; // rcx
  char v32; // r8
  char *v33; // rax
  unsigned int v34; // eax
  unsigned int inserted; // esi
  unsigned int LockingObjectMetadata; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rcx
  _DWORD *v40; // rax
  __int64 v41; // r9
  char v42; // r12
  unsigned __int8 v43; // r11
  char v44; // r10
  char v45; // r13
  unsigned __int8 *v46; // r12
  unsigned int v47; // r15d
  unsigned int v48; // r10d
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // ecx
  int v52; // ecx
  char v53; // r15
  unsigned __int64 v54; // rcx
  char *v55; // rcx
  char v56; // r8
  char *v57; // rax
  unsigned int v58; // eax
  char v59; // al
  unsigned int v60; // edx
  char v61; // [rsp+60h] [rbp-78h]
  char v62[3]; // [rsp+61h] [rbp-77h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-74h]
  __int128 v64; // [rsp+68h] [rbp-70h] BYREF
  __int128 v65; // [rsp+78h] [rbp-60h] BYREF
  __int128 v66; // [rsp+88h] [rbp-50h] BYREF

  v62[0] = 0;
  v3 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 336);
  v66 = 0LL;
  v5 = 0LL;
  v6 = ExAcquireRundownProtectionCacheAware(v3);
  v8 = -1073741738;
  v9 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( v6 )
    v8 = 0;
  v63 = v8;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v66);
    if ( v9 == 315396
      || (v10 = v9 - 315412, (unsigned int)v10 <= 0x34) && (v11 = 0x11000011000001LL, _bittest64(&v11, v10)) )
    {
      if ( (byte_140171463 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)&v66,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v9);
    }
    else if ( (byte_140171462 & 2) != 0 )
    {
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)&v66,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v9);
    }
    v8 = v63;
  }
  if ( !v6 )
  {
    v12 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = v8;
    if ( v12 )
      goto LABEL_70;
    v64 = 0LL;
    IoGetActivityIdIrp(a2, &v64);
    v14 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v14 == 14 )
    {
      if ( (byte_140171462 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(
          *(unsigned int *)(a2 + 48),
          &EventNonReadWriteRequestComplete,
          &v64,
          a2,
          *(_DWORD *)(a2 + 48));
      goto LABEL_70;
    }
    if ( *(_BYTE *)v14 != 15 )
    {
      if ( *(_BYTE *)v14 == 27 )
      {
        if ( *(_BYTE *)(v14 + 1) != 7 || *(_DWORD *)(v14 + 8) )
        {
          if ( (byte_140171462 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v13, &EventPnpRequestComplete, &v64, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_140171462 & 0x40) != 0 )
        {
          v15 = *(_DWORD **)(a2 + 56);
          if ( v15 )
            LODWORD(v5) = *v15;
          McTemplateK0pqd_EtwWriteTransfer(v13, v14, (unsigned int)&v64, a2, (char)v5, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_70;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_70;
    v16 = *(_QWORD *)(v14 + 8);
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    if ( *(_BYTE *)(v16 + 2) == 40 )
    {
      v22 = 0LL;
      if ( *(_DWORD *)(v16 + 20) )
        goto LABEL_70;
      v23 = *(_DWORD *)(v16 + 56);
      v24 = 0;
      if ( !v23 )
        goto LABEL_47;
      while ( 1 )
      {
        v25 = *(unsigned int *)(v16 + 4LL * v24 + 120);
        if ( (unsigned int)v25 < 0x80 )
          goto LABEL_41;
        v26 = *(unsigned int *)(v16 + 16);
        if ( (unsigned int)v25 >= (unsigned int)v26 )
          goto LABEL_41;
        v27 = (unsigned int)v25;
        v28 = *(_DWORD *)(v25 + v16) - 64;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 == 1 && v27 + 40 <= v26 )
            {
              if ( *(_DWORD *)(v27 + v16 + 12) )
                v22 = (unsigned __int8 *)(v27 + v16 + 32);
              v5 = *(_BYTE **)(v27 + v16 + 24);
              goto LABEL_46;
            }
            goto LABEL_41;
          }
          v30 = v27 + 56;
        }
        else
        {
          v30 = v27 + 40;
        }
        if ( v30 <= v26 )
        {
          if ( *(_BYTE *)(v27 + v16 + 10) )
            v22 = (unsigned __int8 *)(v27 + v16 + 24);
          v5 = *(_BYTE **)(v27 + v16 + 16);
LABEL_46:
          v17 = *(_BYTE *)(v27 + v16 + 8);
          v18 = *(_BYTE *)(v27 + v16 + 9);
LABEL_47:
          if ( v22 )
          {
            LODWORD(v31) = *v22;
            goto LABEL_50;
          }
          goto LABEL_70;
        }
LABEL_41:
        if ( ++v24 >= v23 )
          goto LABEL_47;
      }
    }
    LODWORD(v31) = *(unsigned __int8 *)(v16 + 72);
    v5 = *(_BYTE **)(v16 + 32);
    v18 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_70;
LABEL_50:
    LOBYTE(v31) = (_BYTE)v31 - 8;
    if ( ((unsigned __int8)v31 & 0x5D) != 0 )
    {
LABEL_70:
      IofCompleteRequest((PIRP)a2, 0);
      return v63;
    }
    v32 = *(_BYTE *)(v16 + 3);
    if ( v32 == 1 || !v5 || !v18 )
      goto LABEL_66;
    LOBYTE(v16) = 0;
    v31 = &v5[v18];
    v33 = v5 + 8;
    if ( (unsigned __int8)((*v5 & 0x7F) - 114) <= 1u )
    {
      if ( v33 > v31 )
        goto LABEL_65;
      v20 = v5[2];
      v19 = v5[1] & 0xF;
      v21 = v5[3];
    }
    else
    {
      if ( v33 > v31 )
        goto LABEL_65;
      v19 = v5[2] & 0xF;
      v34 = v18;
      if ( (unsigned int)(unsigned __int8)v5[7] + 8 <= v18 )
        v34 = (unsigned __int8)v5[7] + 8;
      v31 = v5 + 13;
      v16 = (unsigned __int64)&v5[v34];
      if ( (unsigned __int64)(v5 + 13) <= v16 )
        v20 = v5[12];
      if ( (unsigned __int64)(v5 + 14) <= v16 )
        v21 = *v31;
    }
    LOBYTE(v16) = 1;
LABEL_65:
    if ( (_BYTE)v16 )
    {
LABEL_67:
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v31,
        v16,
        (unsigned int)&v64,
        a2,
        *(_DWORD *)(a2 + 48),
        v32,
        v17,
        v19,
        v20,
        v21,
        a2);
      goto LABEL_70;
    }
LABEL_66:
    v21 = 0;
    v20 = 0;
    v19 = 0;
    goto LABEL_67;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
      a1,
      a2,
      HIWORD(v9),
      (v9 >> 2) & 0xFFF);
  }
  inserted = -1073741822;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    inserted = ((__int64 (__fastcall *)(int *, __int64, __int64))ExtAdapterIoctlReplace)(&dword_1401701E8, a1, a2);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( inserted != -1073741822 )
    goto LABEL_326;
  if ( !DisableExtensionDriver && EnableExtensionCalls )
  {
    _InterlockedIncrement(&ExtRefCount);
    ((void (__fastcall *)(int *, __int64, __int64))ExtAdapterIoctlPre)(&dword_1401701E8, a1, a2);
    _InterlockedDecrement(&ExtRefCount);
  }
  if ( v9 > 0x2D5F90 )
  {
    if ( v9 > 0x2DDCD8 )
    {
      if ( v9 > 0x32C000 )
      {
        if ( v9 != 3326008 )
          goto LABEL_261;
      }
      else if ( v9 != 3325952 )
      {
        switch ( v9 )
        {
          case 0x2DDF84u:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgActivateLocking(a1, (PIRP)a2);
            break;
          case 0x2DDF88u:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgRevertConfig(a1, (PIRP)a2);
            break;
          case 0x2DDF8Cu:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgSetSpAuthorityKey(a1, (PIRP)a2);
            break;
          case 0x2DDF94u:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgAssignLockingObject(a1, (PIRP)a2);
            break;
          case 0x2DDF98u:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgDeassignLockingObject(a1, (PIRP)a2);
            break;
          case 0x2DDF9Cu:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObjectAuthKey(a1, (PIRP)a2);
            break;
          case 0x2DDFA0u:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgEraseLockingObject(a1, (PIRP)a2);
            break;
          case 0x2DDFA4u:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObject(a1, (PIRP)a2);
            break;
          case 0x2DDFACu:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgSetLockingObjectMetadata(a1, a2);
            break;
          case 0x2DDFB0u:
            if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
            {
              goto LABEL_257;
            }
            LockingObjectMetadata = RaidAdapterStorageTcgResetState(a1, a2);
            break;
          default:
            goto LABEL_261;
        }
        goto LABEL_321;
      }
      LockingObjectMetadata = RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
      goto LABEL_321;
    }
    if ( v9 == 3005656 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
        || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        LockingObjectMetadata = RaidAdapterMFNDNameSpacePageMapControl(a1, a2);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
    if ( v9 > 0x2DD044 )
    {
      if ( v9 > 0x2DD684 )
      {
        if ( v9 == 3005444 )
        {
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterHwFirmwareDownloadIoctl(a1, a2);
            goto LABEL_321;
          }
          goto LABEL_257;
        }
        if ( v9 == 3005448 )
        {
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterHwFirmwareActivateIoctl(a1, a2);
            goto LABEL_321;
          }
          goto LABEL_257;
        }
      }
      else
      {
        switch ( v9 )
        {
          case 0x2DD684u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterSetBootLunIoctl(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2DD04Cu:
            if ( !(unsigned int)Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline() )
            {
              inserted = -1073741637;
              goto LABEL_322;
            }
            LockingObjectMetadata = RaidAdapterStorageSetPciLinkBandwidthIoctl(a1, a2);
            goto LABEL_321;
          case 0x2DD200u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2DD3C0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaAdapterProtocolCommandIoctl(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
        }
      }
    }
    else
    {
      if ( v9 == 3002436 )
      {
        LockingObjectMetadata = RaidAdapterStorageNotificationConfigureIoctl(a1, a2);
        goto LABEL_321;
      }
      if ( v9 > 0x2D9CD0 )
      {
        if ( v9 == 2989268 )
        {
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterMFNDChildPFControl(a1, a2);
            goto LABEL_321;
          }
          goto LABEL_257;
        }
        if ( v9 == 2989282 )
        {
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaidAdapterMFNDNameSpaceWrite(a1, (PIRP)a2);
            goto LABEL_321;
          }
          goto LABEL_257;
        }
      }
      else
      {
        switch ( v9 )
        {
          case 0x2D9CD0u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterReconfigureMFND(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2D5FA8u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgGetLockingObjectMetadata(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2D93F4u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageInternalSetPropertyIoctl(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2D93FCu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageSetPropertyIoctl(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
        }
      }
    }
  }
  else
  {
    if ( v9 == 2973584 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
        || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        LockingObjectMetadata = RaidAdapterStorageTcgEnumerateLockingObjects(a1, a2);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
    if ( v9 > 0x2D1680 )
    {
      if ( v9 > 0x2D4C1C )
      {
        switch ( v9 )
        {
          case 0x2D5000u:
            LockingObjectMetadata = RaidAdapterStorageResetBusIoctl(a1, a2);
            goto LABEL_321;
          case 0x2D5014u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageBreakReservationIoctl(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          case 0x2D5020u:
            LockingObjectMetadata = RaidAdapterStorageDeviceResetIoctl(a1, a2);
            goto LABEL_321;
          case 0x2D5048u:
            LockingObjectMetadata = RaidAdapterStorageNotificationGetInfoIoctl(a1, a2);
            goto LABEL_321;
          case 0x2D5CDDu:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterMFNDNameSpaceRead(a1, (PIRP)a2);
              goto LABEL_321;
            }
            goto LABEL_257;
        }
      }
      else
      {
        if ( v9 == 2968604 )
        {
          LockingObjectMetadata = StorageGetSystemFeatureSupportIoctl((PIRP)a2);
          goto LABEL_321;
        }
        if ( v9 > 0x2D1CA0 )
        {
          if ( v9 == 2956492 )
          {
            LockingObjectMetadata = RaidAdapterSetLedState(a1, a2);
            goto LABEL_321;
          }
          if ( v9 == 2957184 )
          {
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterStorageTcgQueryCapability(a1, a2);
              goto LABEL_321;
            }
            goto LABEL_257;
          }
        }
        else
        {
          switch ( v9 )
          {
            case 0x2D1CA0u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaidAdapterDiagnosticIoctl(a1, a2);
                goto LABEL_321;
              }
              goto LABEL_257;
            case 0x2D1C00u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaidAdapterHwFirmwareGetInfoIoctl((_QWORD *)a1, a2);
                goto LABEL_321;
              }
              goto LABEL_257;
            case 0x2D1C94u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaidAdapterPowerCapIoctl(a1, a2);
                goto LABEL_321;
              }
              goto LABEL_257;
            case 0x2D1C98u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaidAdapterRpmbRequest(a1, a2);
                goto LABEL_321;
              }
              goto LABEL_257;
          }
        }
      }
      goto LABEL_261;
    }
    if ( v9 == 2954880 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
        || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        LockingObjectMetadata = RaidAdapterQueryBootLunsIoctl(a1, a2);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
    if ( v9 <= 0x4D014 )
    {
      if ( v9 != 315412 )
      {
        if ( v9 <= 0x4101C )
        {
          switch ( v9 )
          {
            case 0x4101Cu:
              LockingObjectMetadata = RaidAdapterScsiRescanBusIoctl(a1, a2);
              goto LABEL_321;
            case 0x4100Cu:
              LockingObjectMetadata = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
              goto LABEL_321;
            case 0x41010u:
              LockingObjectMetadata = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
              goto LABEL_321;
            case 0x41018u:
              LockingObjectMetadata = RaidAdapterScsiGetAddressIoctl(a1, a2);
LABEL_321:
              inserted = LockingObjectMetadata;
              goto LABEL_322;
          }
          goto LABEL_261;
        }
        if ( v9 != 315396 )
        {
          if ( v9 == 315400 )
          {
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidAdapterScsiMiniportIoctlWithAddress(a1, a2, 0, 0, 0, 2);
              goto LABEL_321;
            }
LABEL_257:
            inserted = RaInsertDFxQueue(*(_QWORD *)(a1 + 8), a2);
            if ( !inserted )
              inserted = 259;
            goto LABEL_322;
          }
          goto LABEL_261;
        }
LABEL_108:
        LockingObjectMetadata = RaidAdapterPassThrough(a1, a2, 0LL);
        goto LABEL_321;
      }
LABEL_107:
      LOBYTE(v7) = 1;
      LockingObjectMetadata = RaidAdapterPassThrough(a1, a2, v7);
      goto LABEL_321;
    }
    if ( v9 <= 0x2D11D4 )
    {
      switch ( v9 )
      {
        case 0x2D11D4u:
          LockingObjectMetadata = RaidAdapterStorageGetInternalDataIoctl(a1, a2);
          goto LABEL_321;
        case 0x4D038u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            return RaidAdapterMiniportProcessServiceRequest(a1, a2);
          }
          goto LABEL_257;
        case 0x4D044u:
          goto LABEL_108;
      }
      if ( v9 != 315464 )
        goto LABEL_261;
      goto LABEL_107;
    }
    if ( v9 == 2954232 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
        || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        LockingObjectMetadata = RaidAdapterStorageInternalQueryPropertyIoctl(a1, a2, v62);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
    if ( v9 == 2954240 )
    {
      if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
        || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
      {
        LockingObjectMetadata = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
        goto LABEL_321;
      }
      goto LABEL_257;
    }
  }
LABEL_261:
  v12 = StorEtwLoggingEnabled == 0;
  inserted = -1073741637;
  *(_DWORD *)(a2 + 48) = -1073741637;
  *(_BYTE *)(a2 + 141) = -84;
  if ( v12 )
    goto LABEL_317;
  v65 = 0LL;
  IoGetActivityIdIrp(a2, &v65);
  v39 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v39 == 14 )
  {
    if ( (byte_140171462 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v39, &EventNonReadWriteRequestComplete, &v65, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_317;
  }
  if ( *(_BYTE *)v39 != 15 )
  {
    if ( *(_BYTE *)v39 == 27 )
    {
      if ( *(_BYTE *)(v39 + 1) != 7 || *(_DWORD *)(v39 + 8) )
      {
        if ( (byte_140171462 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v39, &EventPnpRequestComplete, &v65, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140171462 & 0x40) != 0 )
      {
        v40 = *(_DWORD **)(a2 + 56);
        if ( v40 )
          LODWORD(v5) = *v40;
        McTemplateK0pqd_EtwWriteTransfer(v39, v38, (unsigned int)&v65, a2, (char)v5, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_317;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_317;
  v41 = *(_QWORD *)(v39 + 8);
  v42 = 0;
  v43 = 0;
  v61 = 0;
  v44 = 0;
  v45 = 0;
  if ( *(_BYTE *)(v41 + 2) != 40 )
  {
    LODWORD(v55) = *(unsigned __int8 *)(v41 + 72);
    v5 = *(_BYTE **)(v41 + 32);
    v43 = *(_BYTE *)(v41 + 11);
    v53 = *(_BYTE *)(v41 + 4);
    if ( !*(_BYTE *)(v41 + 2) )
      goto LABEL_297;
    goto LABEL_317;
  }
  v46 = 0LL;
  if ( *(_DWORD *)(v41 + 20) )
    goto LABEL_317;
  v47 = *(_DWORD *)(v41 + 56);
  v48 = 0;
  if ( !v47 )
  {
LABEL_290:
    v53 = 0;
    goto LABEL_291;
  }
  while ( 1 )
  {
    v49 = *(unsigned int *)(v41 + 4LL * v48 + 120);
    if ( (unsigned int)v49 < 0x80 )
      goto LABEL_289;
    v38 = *(unsigned int *)(v41 + 16);
    if ( (unsigned int)v49 >= (unsigned int)v38 )
      goto LABEL_289;
    v50 = (unsigned int)v49;
    v51 = *(_DWORD *)(v41 + v49) - 64;
    if ( !v51 )
      break;
    v52 = v51 - 1;
    if ( !v52 )
    {
      v54 = v50 + 56;
      goto LABEL_288;
    }
    if ( v52 == 1 && v50 + 40 <= v38 )
    {
      if ( *(_DWORD *)(v41 + v50 + 12) )
        v46 = (unsigned __int8 *)(v50 + v41 + 32);
      v53 = *(_BYTE *)(v41 + v50 + 8);
      v5 = *(_BYTE **)(v41 + v50 + 24);
      v43 = *(_BYTE *)(v41 + v50 + 9);
      goto LABEL_291;
    }
LABEL_289:
    if ( ++v48 >= v47 )
      goto LABEL_290;
  }
  v54 = v50 + 40;
LABEL_288:
  if ( v54 > v38 )
    goto LABEL_289;
  if ( *(_BYTE *)(v41 + v50 + 10) )
    v46 = (unsigned __int8 *)(v50 + v41 + 24);
  v53 = *(_BYTE *)(v41 + v50 + 8);
  v5 = *(_BYTE **)(v41 + v50 + 16);
  v43 = *(_BYTE *)(v41 + v50 + 9);
LABEL_291:
  if ( v46 )
  {
    LODWORD(v55) = *v46;
    v44 = 0;
    v42 = 0;
LABEL_297:
    LOBYTE(v55) = (_BYTE)v55 - 8;
    if ( ((unsigned __int8)v55 & 0x5D) == 0 )
    {
      v56 = *(_BYTE *)(v41 + 3);
      if ( v56 == 1 || !v5 || !v43 )
        goto LABEL_315;
      LOBYTE(v38) = 0;
      v55 = &v5[v43];
      v57 = v5 + 8;
      if ( (unsigned __int8)((*v5 & 0x7F) - 114) <= 1u )
      {
        if ( v57 <= v55 )
        {
          LOBYTE(v38) = 1;
          v42 = v5[2];
          v44 = v5[1] & 0xF;
          v45 = v5[3];
        }
      }
      else
      {
        if ( v57 <= v55 )
        {
          v44 = v5[2] & 0xF;
          v58 = v43;
          if ( (unsigned int)(unsigned __int8)v5[7] + 8 <= v43 )
            v58 = (unsigned __int8)v5[7] + 8;
          v55 = v5 + 13;
          v38 = (unsigned __int64)&v5[v58];
          if ( (unsigned __int64)(v5 + 13) > v38 )
            v59 = 0;
          else
            v59 = v5[12];
          v61 = v59;
          if ( (unsigned __int64)(v5 + 14) <= v38 )
            v45 = *v55;
          LOBYTE(v38) = 1;
        }
        v42 = v61;
      }
      if ( !(_BYTE)v38 )
      {
LABEL_315:
        v45 = 0;
        v42 = 0;
        v44 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v55,
        v38,
        (unsigned int)&v65,
        a2,
        *(_DWORD *)(a2 + 48),
        v56,
        v53,
        v44,
        v42,
        v45,
        a2);
    }
  }
LABEL_317:
  IofCompleteRequest((PIRP)a2, 0);
LABEL_322:
  if ( !DisableExtensionDriver )
  {
    if ( EnableExtensionCalls )
    {
      _InterlockedIncrement(&ExtRefCount);
      v60 = ((__int64 (__fastcall *)(int *, __int64, __int64))ExtAdapterIoctlPost)(&dword_1401701E8, a1, a2);
      _InterlockedDecrement(&ExtRefCount);
      if ( v60 != -1073741822 )
        inserted = v60;
    }
  }
LABEL_326:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
      a1,
      a2,
      v9,
      inserted);
  }
  if ( !v62[0] )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
  return inserted;
}
