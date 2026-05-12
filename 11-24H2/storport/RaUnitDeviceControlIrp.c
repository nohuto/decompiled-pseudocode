/*
 * XREFs of RaUnitDeviceControlIrp @ 0x14002C620
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14002B290 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x14000C75C (RaUnitHwFirmwareGetInfoIoctl.c)
 *     RaUnitScsiMiniportIoctl @ 0x140035FB8 (RaUnitScsiMiniportIoctl.c)
 *     RaUnitStoragePowerIdle @ 0x140036D80 (RaUnitStoragePowerIdle.c)
 *     RaUnitProtocolCommandIoctl @ 0x1400395D0 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitStorageEnableIdlePower @ 0x1400399E0 (RaUnitStorageEnableIdlePower.c)
 *     RaUnitTelemetryIdIoctl @ 0x14003A938 (RaUnitTelemetryIdIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x14003E78C (RaidAdapterStorageResetBusIoctl.c)
 *     RaIsDeviceDFxPoweredDown @ 0x140045E40 (RaIsDeviceDFxPoweredDown.c)
 *     RaUnitAtaPassThroughIoctl @ 0x14004D8C4 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x140055624 (WPP_SF_qqD.c)
 *     Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline @ 0x1400565F4 (Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x140056884 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x140062A2C (RaidAdapterStorageDeviceResetIoctl.c)
 *     WPP_SF_qqDD @ 0x140067ED4 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x14006C220 (RaInsertDFxQueue.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x14007FF0C (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x140080484 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140080ADC (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x14008108C (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400816AC (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140081C48 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x14008223C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x14008277C (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x140082C44 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1400831B4 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1400837CC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x140083DA0 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x140084368 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     StorageGetSystemFeatureSupportIoctl @ 0x14008FE40 (StorageGetSystemFeatureSupportIoctl.c)
 *     RaUnitAttributeManagement @ 0x140091724 (RaUnitAttributeManagement.c)
 *     RaUnitGetContiguousPhysicalAddressIoctl @ 0x140093884 (RaUnitGetContiguousPhysicalAddressIoctl.c)
 *     RaUnitGetQOSIoctl @ 0x140093D3C (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x140094194 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x14009455C (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x140094920 (RaUnitPowerCapIoctl.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitSetPciLinkBandwidthIoctl @ 0x140097340 (RaUnitSetPciLinkBandwidthIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1400976F0 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x140098118 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1400987C8 (RaUnitSmartDataIoctl.c)
 *     RaUnitStorageNotificationConfigureIoctl @ 0x14009A3C4 (RaUnitStorageNotificationConfigureIoctl.c)
 *     RaUnitStorageNotificationGetInfoIoctl @ 0x14009A790 (RaUnitStorageNotificationGetInfoIoctl.c)
 *     RaUnitStoragePowerActive @ 0x14009AB70 (RaUnitStoragePowerActive.c)
 *     RaUnitStreamsIoctl @ 0x14009CC74 (RaUnitStreamsIoctl.c)
 *     RaUnitUnlockContiguousPhysicalPagesIoctl @ 0x14009D110 (RaUnitUnlockContiguousPhysicalPagesIoctl.c)
 *     RaidUnitSetLedState @ 0x1400A0B24 (RaidUnitSetLedState.c)
 *     RaidUnitTestDeviceQueue @ 0x1400A0F68 (RaidUnitTestDeviceQueue.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x140187988 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDataCollectionIoctl @ 0x140187D70 (RaUnitStorageDataCollectionIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x140188188 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageDumpNotification @ 0x1401888A8 (RaUnitStorageDumpNotification.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x140188924 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x140188E14 (RaUnitStorageGetIdlePowerUpReason.c)
 *     RaUnitStorageGetInternalDataIoctl @ 0x1401891D4 (RaUnitStorageGetInternalDataIoctl.c)
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1401896B8 (RaUnitStorageInternalQueryPropertyIoctl.c)
 *     RaUnitStorageInternalSetPropertyIoctl @ 0x140189B04 (RaUnitStorageInternalSetPropertyIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x140189F08 (RaUnitStorageManageBypassIOIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x14018A9A8 (RaUnitStorageSetPropertyIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1401B5DF8 (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1401B5FE8 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B63D0 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401BEAB0 (RaUnitStorageQueryPropertyIoctl.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v5; // r15d
  bool v6; // zf
  unsigned int inserted; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rsi
  void *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r9
  _BYTE *v14; // rsi
  unsigned __int8 v15; // r11
  char v16; // di
  char v17; // r13
  unsigned __int8 *v18; // r15
  unsigned int v19; // r12d
  unsigned int v20; // r10d
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  int v25; // ecx
  unsigned __int64 v26; // rcx
  char *v27; // rcx
  char v28; // r8
  char *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  _BYTE *v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  _DWORD *v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int8 v37; // r11
  char v38; // di
  char v39; // r13
  char v40; // r12
  unsigned __int8 *v41; // r14
  unsigned int v42; // r15d
  unsigned int v43; // r10d
  __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // r9
  int v47; // ecx
  int v48; // ecx
  unsigned __int64 v49; // rcx
  char *v50; // rcx
  char v51; // r8
  char *v52; // rax
  unsigned int v53; // eax
  __int64 v55; // rcx
  __int64 v56; // rdx
  _DWORD *v57; // rax
  void *v58; // rdx
  unsigned __int64 v59; // rdx
  unsigned __int8 v60; // r11
  char v61; // di
  char v62; // r13
  char v63; // r12
  unsigned __int8 *v64; // r14
  unsigned int v65; // r15d
  unsigned int v66; // r10d
  __int64 v67; // rcx
  unsigned __int64 v68; // r8
  __int64 v69; // r9
  int v70; // ecx
  int v71; // ecx
  unsigned __int64 v72; // rcx
  char *v73; // rcx
  char v74; // r8
  char *v75; // rax
  unsigned int v76; // eax
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  int v79; // eax
  _BYTE *v80; // rsi
  __int64 v81; // rcx
  __int64 v82; // rdx
  _DWORD *v83; // rax
  void *v84; // rdx
  unsigned __int64 v85; // rdx
  unsigned __int8 v86; // r11
  char v87; // di
  char v88; // r13
  char v89; // r12
  unsigned __int8 *v90; // r14
  unsigned int v91; // r15d
  unsigned int v92; // r10d
  __int64 v93; // rcx
  unsigned __int64 v94; // r8
  __int64 v95; // r9
  int v96; // ecx
  int v97; // ecx
  unsigned __int64 v98; // rcx
  char *v99; // rcx
  char v100; // r8
  char *v101; // rax
  unsigned int v102; // eax
  NTSTATUS LockingObjectMetadata; // eax
  __int64 v104; // r8
  __int64 v105; // rcx
  unsigned __int64 v106; // rdx
  __int64 v107; // rcx
  _DWORD *v108; // rsi
  __int64 v109; // r10
  char v110; // r12
  char v111; // r9
  _BYTE *v112; // rsi
  unsigned __int8 v113; // r11
  char v114; // r8
  unsigned __int8 *v115; // r13
  unsigned int v116; // r12d
  unsigned int v117; // r9d
  __int64 v118; // rcx
  __int64 v119; // r8
  int v120; // ecx
  int v121; // ecx
  unsigned __int64 v122; // rcx
  char *v123; // rcx
  char v124; // r13
  char *v125; // rax
  unsigned int v126; // eax
  char v127; // al
  unsigned int v128; // edx
  unsigned __int64 v129; // r8
  signed __int32 v130; // eax
  signed __int32 v131; // ett
  char v132; // [rsp+60h] [rbp-19h]
  char v133; // [rsp+60h] [rbp-19h]
  char v134; // [rsp+62h] [rbp-17h]
  char v135; // [rsp+63h] [rbp-16h] BYREF
  unsigned int v136; // [rsp+64h] [rbp-15h]
  __int128 v137; // [rsp+68h] [rbp-11h] BYREF
  __int128 v138; // [rsp+78h] [rbp-1h] BYREF
  __int128 v139; // [rsp+88h] [rbp+Fh] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v139 = 0LL;
  v135 = 0;
  v5 = *(_DWORD *)(v2 + 24);
  if ( v5 != 2955532 )
  {
    if ( StorEtwLoggingEnabled )
    {
      IoGetActivityIdIrp(a2, &v139);
      if ( v5 == 315396
        || (v77 = v5 - 315412, (unsigned int)v77 <= 0x34) && (v78 = 0x11000011000001LL, _bittest64(&v78, v77)) )
      {
        if ( (byte_140171463 & 1) != 0 )
          McTemplateK0pddd_EtwWriteTransfer(
            *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
            (unsigned int)&EventPassThrough,
            (unsigned int)&v139,
            a2,
            **(_BYTE **)(a2 + 184),
            *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
            v5);
      }
      else if ( (byte_140171462 & 2) != 0 )
      {
        McTemplateK0pddd_EtwWriteTransfer(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventIOCTL,
          (unsigned int)&v139,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v5);
      }
    }
    v79 = RaUnitAcquireRemoveLock(a1, a2, 1);
    v136 = v79;
    if ( v79 < 0 )
    {
      v80 = 0LL;
      *(_BYTE *)(a2 + 141) = -84;
      v6 = StorEtwLoggingEnabled == 0;
      *(_QWORD *)(a2 + 56) = 0LL;
      *(_DWORD *)(a2 + 48) = v79;
      if ( v6 )
        goto LABEL_245;
      v137 = 0LL;
      IoGetActivityIdIrp(a2, &v137);
      v82 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v82 == 14 )
      {
        if ( (byte_140171462 & 8) == 0 )
          goto LABEL_245;
        v84 = &EventNonReadWriteRequestComplete;
        goto LABEL_244;
      }
      if ( *(_BYTE *)v82 != 15 )
      {
        if ( *(_BYTE *)v82 != 27 )
          goto LABEL_245;
        if ( *(_BYTE *)(v82 + 1) == 7 && !*(_DWORD *)(v82 + 8) )
        {
          if ( (byte_140171462 & 0x40) != 0 )
          {
            v83 = *(_DWORD **)(a2 + 56);
            if ( v83 )
              LODWORD(v80) = *v83;
            McTemplateK0pqd_EtwWriteTransfer(v81, v82, (unsigned int)&v137, a2, (char)v80, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_245;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_245;
        v84 = &EventPnpRequestComplete;
LABEL_244:
        McTemplateK0pd_EtwWriteTransfer(v81, v84, &v137, a2, *(_DWORD *)(a2 + 48));
        goto LABEL_245;
      }
      if ( byte_140171461 >= 0 )
        goto LABEL_245;
      v85 = *(_QWORD *)(v82 + 8);
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = 0;
      if ( *(_BYTE *)(v85 + 2) == 40 )
      {
        v90 = 0LL;
        if ( *(_DWORD *)(v85 + 20) )
          goto LABEL_245;
        v91 = *(_DWORD *)(v85 + 56);
        v92 = 0;
        if ( !v91 )
          goto LABEL_218;
        while ( 1 )
        {
          v93 = *(unsigned int *)(v85 + 4LL * v92 + 120);
          if ( (unsigned int)v93 < 0x80 )
            goto LABEL_216;
          v94 = *(unsigned int *)(v85 + 16);
          if ( (unsigned int)v93 >= (unsigned int)v94 )
            goto LABEL_216;
          v95 = (unsigned int)v93;
          v96 = *(_DWORD *)(v93 + v85) - 64;
          if ( v96 )
          {
            v97 = v96 - 1;
            if ( v97 )
            {
              if ( v97 == 1 && v95 + 40 <= v94 )
              {
                if ( *(_DWORD *)(v95 + v85 + 12) )
                  v90 = (unsigned __int8 *)(v95 + v85 + 32);
                LOBYTE(v92) = *(_BYTE *)(v95 + v85 + 8);
                v80 = *(_BYTE **)(v95 + v85 + 24);
                v86 = *(_BYTE *)(v95 + v85 + 9);
                goto LABEL_218;
              }
              goto LABEL_216;
            }
            v98 = v95 + 56;
          }
          else
          {
            v98 = v95 + 40;
          }
          if ( v98 <= v94 )
          {
            if ( *(_BYTE *)(v95 + v85 + 10) )
              v90 = (unsigned __int8 *)(v95 + v85 + 24);
            LOBYTE(v92) = *(_BYTE *)(v95 + v85 + 8);
            v80 = *(_BYTE **)(v95 + v85 + 16);
            v86 = *(_BYTE *)(v95 + v85 + 9);
LABEL_218:
            if ( v90 )
            {
              LODWORD(v99) = *v90;
              goto LABEL_224;
            }
            goto LABEL_245;
          }
LABEL_216:
          if ( ++v92 >= v91 )
          {
            LOBYTE(v92) = 0;
            goto LABEL_218;
          }
        }
      }
      LODWORD(v99) = *(unsigned __int8 *)(v85 + 72);
      v80 = *(_BYTE **)(v85 + 32);
      v86 = *(_BYTE *)(v85 + 11);
      LOBYTE(v92) = *(_BYTE *)(v85 + 4);
      if ( *(_BYTE *)(v85 + 2) )
        goto LABEL_245;
LABEL_224:
      LOBYTE(v99) = (_BYTE)v99 - 8;
      if ( ((unsigned __int8)v99 & 0x5D) != 0 )
      {
LABEL_245:
        IofCompleteRequest((PIRP)a2, 0);
        return v136;
      }
      v100 = *(_BYTE *)(v85 + 3);
      if ( v100 == 1 || !v80 || !v86 )
        goto LABEL_240;
      LOBYTE(v85) = 0;
      v99 = &v80[v86];
      v101 = v80 + 8;
      if ( (unsigned __int8)((*v80 & 0x7F) - 114) <= 1u )
      {
        if ( v101 > v99 )
          goto LABEL_239;
        v88 = v80[2];
        v87 = v80[1] & 0xF;
        v89 = v80[3];
      }
      else
      {
        if ( v101 > v99 )
          goto LABEL_239;
        v87 = v80[2] & 0xF;
        v102 = v86;
        if ( (unsigned int)(unsigned __int8)v80[7] + 8 <= v86 )
          v102 = (unsigned __int8)v80[7] + 8;
        v99 = v80 + 13;
        v85 = (unsigned __int64)&v80[v102];
        if ( (unsigned __int64)(v80 + 13) <= v85 )
          v88 = v80[12];
        if ( (unsigned __int64)(v80 + 14) <= v85 )
          v89 = *v99;
      }
      LOBYTE(v85) = 1;
LABEL_239:
      if ( (_BYTE)v85 )
      {
LABEL_241:
        McTemplateK0pduuuuup_EtwWriteTransfer(
          (_DWORD)v99,
          v85,
          (unsigned int)&v137,
          a2,
          *(_DWORD *)(a2 + 48),
          v100,
          v92,
          v87,
          v88,
          v89,
          a2);
        goto LABEL_245;
      }
LABEL_240:
      v89 = 0;
      v88 = 0;
      v87 = 0;
      goto LABEL_241;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_e6323699744f33baefc587a6e43a33df_Traceguids, a1, a2, v5);
    }
    inserted = -1073741822;
    if ( !DisableExtensionDriver && EnableExtensionCalls )
    {
      _InterlockedIncrement(&ExtRefCount);
      inserted = ((__int64 (__fastcall *)(int *, __int64, __int64))ExtUnitIoctlReplace)(&dword_1401701E8, a1, a2);
      _InterlockedDecrement(&ExtRefCount);
    }
    if ( inserted != -1073741822 )
    {
LABEL_526:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_qqDD(
          WPP_GLOBAL_Control->AttachedDevice,
          26LL,
          &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
          a1,
          a2,
          v5,
          inserted);
      }
      if ( !v135 )
      {
        v129 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
        v130 = *(_DWORD *)(v129 + *(_QWORD *)(a1 + 40));
        while ( (v130 & 1) == 0 )
        {
          v131 = v130;
          v130 = _InterlockedCompareExchange((volatile signed __int32 *)(v129 + *(_QWORD *)(a1 + 40)), v130 - 2, v130);
          if ( v131 == v130 )
            return inserted;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
      }
      return inserted;
    }
    if ( !DisableExtensionDriver && EnableExtensionCalls )
    {
      _InterlockedIncrement(&ExtRefCount);
      ((void (__fastcall *)(int *, __int64, __int64))ExtUnitIoctlPre)(&dword_1401701E8, a1, a2);
      _InterlockedDecrement(&ExtRefCount);
    }
    if ( v5 > 0x2D282C )
    {
      if ( v5 > 0x2DD3C0 )
      {
        if ( v5 > 0x2DDF84 )
        {
          if ( v5 > 0x2DDFA0 )
          {
            switch ( v5 )
            {
              case 0x2DDFA4u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgSetLockingObject(a1, (PIRP)a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2DDFACu:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgSetLockingObjectMetadata(a1, a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2DDFB0u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgResetState(a1, a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2DE814u:
                LockingObjectMetadata = RaUnitSetQOSIoctl(a1, a2);
                goto LABEL_521;
            }
          }
          else
          {
            switch ( v5 )
            {
              case 0x2DDFA0u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgEraseLockingObject(a1, (PIRP)a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2DDF88u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgRevertConfig(a1, (PIRP)a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2DDF8Cu:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgSetSpAuthorityKey(a1, (PIRP)a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2DDF94u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgAssignLockingObject(a1, (PIRP)a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2DDF98u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgDeassignLockingObject(a1, (PIRP)a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2DDF9Cu:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgSetLockingObjectAuthKey(a1, (PIRP)a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
            }
          }
        }
        else
        {
          switch ( v5 )
          {
            case 0x2DDF84u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaidUnitStorageTcgActivateLocking(a1, (PIRP)a2);
                goto LABEL_521;
              }
              goto LABEL_518;
            case 0x2DD684u:
              goto LABEL_413;
            case 0x2DDC04u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaUnitHwFirmwareDownloadIoctl(a1, a2);
                goto LABEL_521;
              }
              goto LABEL_518;
            case 0x2DDC08u:
              if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
              {
                LockingObjectMetadata = RaUnitHwFirmwareActivateIoctl(a1, a2);
                goto LABEL_521;
              }
              goto LABEL_518;
            case 0x2DDC9Cu:
              LockingObjectMetadata = RaUnitAttributeManagement(a1, a2);
              goto LABEL_521;
          }
        }
      }
      else
      {
        if ( v5 == 3003328 )
        {
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitProtocolCommandIoctl(a1, a2);
            goto LABEL_521;
          }
          goto LABEL_518;
        }
        if ( v5 > 0x2D5FA8 )
        {
          if ( v5 > 0x2DD040 )
          {
            switch ( v5 )
            {
              case 0x2DD044u:
                LockingObjectMetadata = RaUnitStorageNotificationConfigureIoctl(a1, a2);
                goto LABEL_521;
              case 0x2DD04Cu:
                if ( (unsigned int)Feature_SetPciLinkBandwidthIoctl__private_IsEnabledDeviceUsageNoInline() )
                {
                  LockingObjectMetadata = RaUnitSetPciLinkBandwidthIoctl(a1, a2);
                  goto LABEL_521;
                }
                inserted = -1073741637;
                goto LABEL_522;
              case 0x2DD200u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaUnitSetTemperatureThresholdIoctl(a1, a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
            }
          }
          else
          {
            switch ( v5 )
            {
              case 0x2DD040u:
                LockingObjectMetadata = RaidUnitTestDeviceQueue(a1, a2);
                goto LABEL_521;
              case 0x2D93F4u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaUnitStorageInternalSetPropertyIoctl(a1, a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2D93FCu:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaUnitStorageSetPropertyIoctl(a1, a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2D9404u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaUnitStorageDataSetManagementIoctl(a1, a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
            }
          }
        }
        else
        {
          if ( v5 == 2973608 )
          {
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgGetLockingObjectMetadata(a1, a2);
              goto LABEL_521;
            }
            goto LABEL_518;
          }
          if ( v5 > 0x2D5020 )
          {
            switch ( v5 )
            {
              case 0x2D5048u:
                LockingObjectMetadata = RaUnitStorageNotificationGetInfoIoctl(a1, a2);
                goto LABEL_521;
              case 0x2D5644u:
                LockingObjectMetadata = RaUnitStorageDumpNotification(a1, a2);
                goto LABEL_521;
              case 0x2D5F90u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidUnitStorageTcgEnumerateLockingObjects(a1, a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
            }
          }
          else
          {
            switch ( v5 )
            {
              case 0x2D5020u:
                if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                  || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                {
                  LockingObjectMetadata = RaidAdapterStorageDeviceResetIoctl(*(_QWORD *)(a1 + 24), a2);
                  goto LABEL_521;
                }
                goto LABEL_518;
              case 0x2D2830u:
                goto LABEL_341;
              case 0x2D4C1Cu:
                LockingObjectMetadata = StorageGetSystemFeatureSupportIoctl((PIRP)a2);
                goto LABEL_521;
              case 0x2D5000u:
                LockingObjectMetadata = RaidAdapterStorageResetBusIoctl(*(_QWORD *)(a1 + 24), a2);
                goto LABEL_521;
              case 0x2D5014u:
                LockingObjectMetadata = RaUnitStorageBreakReservationIoctl(a1, a2);
                goto LABEL_521;
            }
          }
        }
      }
    }
    else
    {
      if ( v5 == 2959404 )
        goto LABEL_341;
      if ( v5 <= 0x2D1680 )
      {
        if ( v5 != 2954880 )
        {
          if ( v5 > 0x4D044 )
          {
            if ( v5 > 0x2D11D4 )
            {
              switch ( v5 )
              {
                case 0x2D13F8u:
                  if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                    || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                  {
                    LockingObjectMetadata = RaUnitStorageInternalQueryPropertyIoctl(a1, a2, &v135);
                    goto LABEL_521;
                  }
                  goto LABEL_518;
                case 0x2D1400u:
                  if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                    || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                  {
                    LockingObjectMetadata = RaUnitStorageQueryPropertyIoctl(a1, a2);
                    goto LABEL_521;
                  }
                  goto LABEL_518;
                case 0x2D164Bu:
                  LockingObjectMetadata = RaUnitStorageGetDumpInfoIoctl(a1, a2);
                  goto LABEL_521;
              }
            }
            else
            {
              switch ( v5 )
              {
                case 0x2D11D4u:
                  LockingObjectMetadata = RaUnitStorageGetInternalDataIoctl(a1, a2);
                  goto LABEL_521;
                case 0x4D048u:
                  goto LABEL_269;
                case 0x2D08C0u:
                  LockingObjectMetadata = RaUnitStorageManageBypassIOIoctl(a1, a2);
                  goto LABEL_521;
                case 0x2D11D0u:
                  LockingObjectMetadata = RaUnitStorageDataCollectionIoctl(a1, a2);
                  goto LABEL_521;
              }
            }
          }
          else
          {
            if ( v5 == 315460 )
              goto LABEL_269;
            if ( v5 > 0x4D008 )
            {
              switch ( v5 )
              {
                case 0x4D014u:
                  goto LABEL_269;
                case 0x4D02Cu:
                  if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                    || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                  {
                    LockingObjectMetadata = RaUnitAtaPassThroughIoctl(a1, a2, 0LL);
                    goto LABEL_521;
                  }
                  goto LABEL_518;
                case 0x4D030u:
                  if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                    || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                  {
                    LOBYTE(v104) = 1;
                    LockingObjectMetadata = RaUnitAtaPassThroughIoctl(a1, a2, v104);
                    goto LABEL_521;
                  }
                  goto LABEL_518;
              }
            }
            else
            {
              switch ( v5 )
              {
                case 0x4D008u:
                  if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                    || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                  {
                    LockingObjectMetadata = RaUnitScsiMiniportIoctl(a1, a2);
                    goto LABEL_521;
                  }
                  goto LABEL_518;
                case 0x41018u:
                  LockingObjectMetadata = RaUnitScsiGetAddressIoctl(a1, a2);
                  goto LABEL_521;
                case 0x41020u:
                  LockingObjectMetadata = RaUnitScsiGetDumpPointersIoctl(a1, a2);
                  goto LABEL_521;
                case 0x41024u:
                  LockingObjectMetadata = RaUnitScsiFreeDumpPointersIoctl(a1, a2);
                  goto LABEL_521;
                case 0x4D004u:
LABEL_269:
                  if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                    || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
                  {
                    LockingObjectMetadata = RaUnitScsiPassThroughIoctl(a1, a2);
LABEL_521:
                    inserted = LockingObjectMetadata;
                    goto LABEL_522;
                  }
LABEL_518:
                  inserted = RaInsertDFxQueue(*(_QWORD *)(a1 + 8), a2);
                  if ( !inserted )
                    inserted = 259;
                  goto LABEL_522;
              }
            }
          }
          goto LABEL_448;
        }
LABEL_413:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          v105 = *(_QWORD *)(a1 + 24);
          ++*(_BYTE *)(a2 + 67);
          *(_QWORD *)(a2 + 184) += 72LL;
          LockingObjectMetadata = IofCallDriver(*(PDEVICE_OBJECT *)(v105 + 8), (PIRP)a2);
          goto LABEL_521;
        }
        goto LABEL_518;
      }
      if ( v5 <= 0x2D1C80 )
      {
        if ( v5 == 2956416 )
        {
          LockingObjectMetadata = RaUnitStorageEnableIdlePower(a1, a2);
          goto LABEL_521;
        }
        if ( v5 == 2956288 )
        {
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            LockingObjectMetadata = RaUnitHwFirmwareGetInfoIoctl((_QWORD *)a1, a2);
            goto LABEL_521;
          }
          goto LABEL_518;
        }
        goto LABEL_448;
      }
      if ( v5 <= 0x2D1CCC )
      {
        if ( v5 == 2956492 )
        {
          LockingObjectMetadata = RaidUnitSetLedState(a1, a2);
        }
        else
        {
          switch ( v5 )
          {
            case 0x2D1C84u:
              LockingObjectMetadata = RaUnitStorageGetIdlePowerUpReason(a1, a2);
              goto LABEL_521;
            case 0x2D1C88u:
              if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
              {
                goto LABEL_518;
              }
              LockingObjectMetadata = RaUnitStoragePowerActive(a1, a2);
              break;
            case 0x2D1C8Cu:
              LockingObjectMetadata = RaUnitStoragePowerIdle(a1, a2);
              goto LABEL_521;
            case 0x2D1C94u:
              if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
              {
                goto LABEL_518;
              }
              LockingObjectMetadata = RaUnitPowerCapIoctl(a1, a2);
              break;
            case 0x2D1CA0u:
              LockingObjectMetadata = RaUnitStorageDiagnosticIoctl(a1, a2);
              goto LABEL_521;
            case 0x2D1CC8u:
              if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
                && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
              {
                goto LABEL_518;
              }
              LockingObjectMetadata = RaUnitSmartDataIoctl(a1, a2);
              break;
            default:
              goto LABEL_448;
          }
        }
        goto LABEL_521;
      }
      if ( v5 <= 0x2D280C )
      {
        switch ( v5 )
        {
          case 0x2D280Cu:
            LockingObjectMetadata = RaUnitTelemetryIdIoctl(a1, a2);
            goto LABEL_521;
          case 0x2D1D00u:
            LockingObjectMetadata = RaUnitGetContiguousPhysicalAddressIoctl(a1, a2);
            goto LABEL_521;
          case 0x2D1D04u:
            LockingObjectMetadata = RaUnitUnlockContiguousPhysicalPagesIoctl(a1, a2);
            goto LABEL_521;
          case 0x2D1F80u:
            if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
              || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
            {
              LockingObjectMetadata = RaidUnitStorageTcgQueryCapability(a1, a2);
              goto LABEL_521;
            }
            goto LABEL_518;
        }
        goto LABEL_448;
      }
      if ( v5 == 2959376 )
      {
        LockingObjectMetadata = RaUnitGetQOSIoctl(a1, a2);
        goto LABEL_521;
      }
      if ( v5 == 2959400 )
      {
LABEL_341:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          LockingObjectMetadata = RaUnitStreamsIoctl(a1, a2);
          goto LABEL_521;
        }
        goto LABEL_518;
      }
    }
LABEL_448:
    v6 = StorEtwLoggingEnabled == 0;
    inserted = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v6 )
      goto LABEL_458;
    v138 = 0LL;
    IoGetActivityIdIrp(a2, &v138);
    v107 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v107 == 14 )
    {
      if ( (byte_140171462 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(v107, &EventNonReadWriteRequestComplete, &v138, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_458;
    }
    if ( *(_BYTE *)v107 != 15 )
    {
      if ( *(_BYTE *)v107 == 27 )
      {
        if ( *(_BYTE *)(v107 + 1) != 7 || *(_DWORD *)(v107 + 8) )
        {
          if ( (byte_140171462 & 0x20) != 0 )
            McTemplateK0pd_EtwWriteTransfer(v107, &EventPnpRequestComplete, &v138, a2, *(_DWORD *)(a2 + 48));
        }
        else if ( (byte_140171462 & 0x40) != 0 )
        {
          v108 = *(_DWORD **)(a2 + 56);
          if ( v108 )
            LODWORD(v108) = *v108;
          McTemplateK0pqd_EtwWriteTransfer(v107, v106, (unsigned int)&v138, a2, (char)v108, *(_DWORD *)(a2 + 48));
        }
      }
      goto LABEL_458;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_458;
    v109 = *(_QWORD *)(v107 + 8);
    v110 = 0;
    v111 = 0;
    v133 = 0;
    v112 = 0LL;
    v134 = 0;
    v113 = 0;
    v114 = 0;
    if ( *(_BYTE *)(v109 + 2) == 40 )
    {
      v115 = 0LL;
      if ( *(_DWORD *)(v109 + 20) )
        goto LABEL_458;
      v116 = *(_DWORD *)(v109 + 56);
      v117 = 0;
      if ( !v116 )
        goto LABEL_484;
      while ( 1 )
      {
        v118 = *(unsigned int *)(v109 + 4LL * v117 + 120);
        if ( (unsigned int)v118 < 0x80 )
          goto LABEL_477;
        v106 = *(unsigned int *)(v109 + 16);
        if ( (unsigned int)v118 >= (unsigned int)v106 )
          goto LABEL_477;
        v119 = (unsigned int)v118;
        v120 = *(_DWORD *)(v118 + v109) - 64;
        if ( v120 )
        {
          v121 = v120 - 1;
          if ( v121 )
          {
            if ( v121 == 1 && v119 + 40 <= v106 )
            {
              if ( *(_DWORD *)(v119 + v109 + 12) )
                v115 = (unsigned __int8 *)(v119 + v109 + 32);
              v112 = *(_BYTE **)(v119 + v109 + 24);
              goto LABEL_482;
            }
            goto LABEL_477;
          }
          v122 = v119 + 56;
        }
        else
        {
          v122 = v119 + 40;
        }
        if ( v122 <= v106 )
        {
          if ( *(_BYTE *)(v119 + v109 + 10) )
            v115 = (unsigned __int8 *)(v119 + v109 + 24);
          v112 = *(_BYTE **)(v119 + v109 + 16);
LABEL_482:
          LODWORD(v106) = *(unsigned __int8 *)(v119 + v109 + 8);
          v113 = *(_BYTE *)(v119 + v109 + 9);
          v133 = *(_BYTE *)(v119 + v109 + 8);
LABEL_483:
          v114 = 0;
LABEL_484:
          if ( v115 )
          {
            LODWORD(v123) = *v115;
            v111 = 0;
            v124 = v133;
            v110 = 0;
            goto LABEL_487;
          }
          goto LABEL_458;
        }
LABEL_477:
        if ( ++v117 >= v116 )
          goto LABEL_483;
      }
    }
    LODWORD(v123) = *(unsigned __int8 *)(v109 + 72);
    v112 = *(_BYTE **)(v109 + 32);
    v113 = *(_BYTE *)(v109 + 11);
    v124 = *(_BYTE *)(v109 + 4);
    if ( *(_BYTE *)(v109 + 2) )
      goto LABEL_458;
LABEL_487:
    LOBYTE(v123) = (_BYTE)v123 - 8;
    if ( ((unsigned __int8)v123 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v109 + 3) == 1 || !v112 || !v113 )
        goto LABEL_505;
      LOBYTE(v106) = 0;
      v123 = &v112[v113];
      v125 = v112 + 8;
      if ( (unsigned __int8)((*v112 & 0x7F) - 114) <= 1u )
      {
        if ( v125 <= v123 )
        {
          LOBYTE(v106) = 1;
          v110 = v112[2];
          v114 = v112[1] & 0xF;
          v111 = v112[3];
        }
      }
      else
      {
        if ( v125 <= v123 )
        {
          v114 = v112[2] & 0xF;
          v126 = v113;
          if ( (unsigned int)(unsigned __int8)v112[7] + 8 <= v113 )
            v126 = (unsigned __int8)v112[7] + 8;
          v123 = v112 + 13;
          v106 = (unsigned __int64)&v112[v126];
          if ( (unsigned __int64)(v112 + 13) > v106 )
            v127 = 0;
          else
            v127 = v112[12];
          v134 = v127;
          if ( (unsigned __int64)(v112 + 14) <= v106 )
          {
            LOBYTE(v106) = 1;
            v110 = v127;
            v111 = *v123;
            goto LABEL_504;
          }
          LOBYTE(v106) = 1;
        }
        v111 = 0;
        v110 = v134;
      }
LABEL_504:
      if ( (_BYTE)v106 )
      {
LABEL_506:
        McTemplateK0pduuuuup_EtwWriteTransfer(
          (_DWORD)v123,
          v106,
          (unsigned int)&v138,
          a2,
          *(_DWORD *)(a2 + 48),
          *(_BYTE *)(v109 + 3),
          v124,
          v114,
          v110,
          v111,
          a2);
        goto LABEL_458;
      }
LABEL_505:
      v111 = 0;
      v110 = 0;
      v114 = 0;
      goto LABEL_506;
    }
LABEL_458:
    IofCompleteRequest((PIRP)a2, 0);
LABEL_522:
    if ( !DisableExtensionDriver )
    {
      if ( EnableExtensionCalls )
      {
        _InterlockedIncrement(&ExtRefCount);
        v128 = ((__int64 (__fastcall *)(int *, __int64, __int64))ExtUnitIoctlPost)(&dword_1401701E8, a1, a2);
        _InterlockedDecrement(&ExtRefCount);
        if ( v128 != -1073741822 )
          inserted = v128;
      }
    }
    goto LABEL_526;
  }
  if ( *(_BYTE *)(a2 + 64) )
  {
    v6 = StorEtwLoggingEnabled == 0;
    inserted = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v6 )
      goto LABEL_62;
    v137 = 0LL;
    IoGetActivityIdIrp(a2, &v137);
    v9 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v9 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_62;
      v11 = &EventNonReadWriteRequestComplete;
      goto LABEL_61;
    }
    if ( *(_BYTE *)v9 != 15 )
    {
      if ( *(_BYTE *)v9 != 27 )
        goto LABEL_62;
      if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v10 = *(_DWORD **)(a2 + 56);
          if ( v10 )
            LODWORD(v10) = *v10;
          McTemplateK0pqd_EtwWriteTransfer(v8, v9, (unsigned int)&v137, a2, (char)v10, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_62;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_62;
      v11 = &EventPnpRequestComplete;
LABEL_61:
      McTemplateK0pd_EtwWriteTransfer(v8, v11, &v137, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_62;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_62;
    v12 = *(_QWORD *)(v9 + 8);
    v13 = 0;
    v14 = 0LL;
    v132 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( *(_BYTE *)(v12 + 2) != 40 )
    {
      LODWORD(v27) = *(unsigned __int8 *)(v12 + 72);
      v14 = *(_BYTE **)(v12 + 32);
      v15 = *(_BYTE *)(v12 + 11);
      LOBYTE(v20) = *(_BYTE *)(v12 + 4);
      if ( !*(_BYTE *)(v12 + 2) )
        goto LABEL_39;
      goto LABEL_62;
    }
    v18 = 0LL;
    if ( *(_DWORD *)(v12 + 20) )
      goto LABEL_62;
    v19 = *(_DWORD *)(v12 + 56);
    v20 = 0;
    if ( !v19 )
      goto LABEL_33;
    while ( 1 )
    {
      v21 = *(unsigned int *)(v12 + 4LL * v20 + 120);
      if ( (unsigned int)v21 < 0x80 )
        goto LABEL_31;
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v21 >= (unsigned int)v22 )
        goto LABEL_31;
      v23 = (unsigned int)v21;
      v24 = *(_DWORD *)(v21 + v12) - 64;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 == 1 && v23 + 40 <= v22 )
          {
            if ( *(_DWORD *)(v23 + v12 + 12) )
              v18 = (unsigned __int8 *)(v23 + v12 + 32);
            LOBYTE(v20) = *(_BYTE *)(v23 + v12 + 8);
            v14 = *(_BYTE **)(v23 + v12 + 24);
            v15 = *(_BYTE *)(v23 + v12 + 9);
            v13 = 0;
            goto LABEL_33;
          }
          goto LABEL_31;
        }
        v26 = v23 + 56;
      }
      else
      {
        v26 = v23 + 40;
      }
      if ( v26 <= v22 )
      {
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v18 = (unsigned __int8 *)(v23 + v12 + 24);
        LOBYTE(v20) = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
        v13 = 0;
LABEL_33:
        if ( v18 )
        {
          LODWORD(v27) = *v18;
LABEL_39:
          LOBYTE(v27) = (_BYTE)v27 - 8;
          if ( ((unsigned __int8)v27 & 0x5D) == 0 )
          {
            v28 = *(_BYTE *)(v12 + 3);
            if ( v28 == 1 || !v14 || !v15 )
              goto LABEL_57;
            LOBYTE(v12) = 0;
            v27 = &v14[v15];
            v29 = v14 + 8;
            if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
            {
              if ( v29 <= v27 )
              {
                LOBYTE(v12) = 1;
                v13 = v14[2];
                v16 = v14[1] & 0xF;
                v17 = v14[3];
              }
            }
            else
            {
              if ( v29 <= v27 )
              {
                v16 = v14[2] & 0xF;
                v30 = v15;
                if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
                  v30 = (unsigned __int8)v14[7] + 8;
                v27 = v14 + 13;
                v12 = (unsigned __int64)&v14[v30];
                if ( (unsigned __int64)(v14 + 13) > v12 )
                  v31 = 0;
                else
                  v31 = v14[12];
                v132 = v31;
                if ( (unsigned __int64)(v14 + 14) <= v12 )
                  v17 = *v27;
                LOBYTE(v12) = 1;
              }
              v13 = v132;
            }
            if ( !(_BYTE)v12 )
            {
LABEL_57:
              v17 = 0;
              v13 = 0;
              v16 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              (_DWORD)v27,
              v12,
              (unsigned int)&v137,
              a2,
              *(_DWORD *)(a2 + 48),
              v28,
              v20,
              v16,
              v13,
              v17,
              a2);
          }
        }
LABEL_62:
        IofCompleteRequest((PIRP)a2, 0);
        return inserted;
      }
LABEL_31:
      if ( ++v20 >= v19 )
      {
        v13 = 0;
        LOBYTE(v20) = 0;
        goto LABEL_33;
      }
    }
  }
  v32 = 0LL;
  if ( *(_DWORD *)(v2 + 8) )
  {
    v6 = StorEtwLoggingEnabled == 0;
    **(_BYTE **)(a2 + 24) = (*(_BYTE *)(a1 + 504) & 4) == 0;
    *(_QWORD *)(a2 + 56) = 1LL;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = 0;
    if ( v6 )
      goto LABEL_178;
    v137 = 0LL;
    IoGetActivityIdIrp(a2, &v137);
    v56 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v56 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_178;
      v58 = &EventNonReadWriteRequestComplete;
      goto LABEL_177;
    }
    if ( *(_BYTE *)v56 != 15 )
    {
      if ( *(_BYTE *)v56 != 27 )
        goto LABEL_178;
      if ( *(_BYTE *)(v56 + 1) == 7 && !*(_DWORD *)(v56 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v57 = *(_DWORD **)(a2 + 56);
          if ( v57 )
            LODWORD(v32) = *v57;
          McTemplateK0pqd_EtwWriteTransfer(v55, v56, (unsigned int)&v137, a2, (char)v32, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_178;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_178;
      v58 = &EventPnpRequestComplete;
LABEL_177:
      McTemplateK0pd_EtwWriteTransfer(v55, v58, &v137, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_178;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_178;
    v59 = *(_QWORD *)(v56 + 8);
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    if ( *(_BYTE *)(v59 + 2) == 40 )
    {
      v64 = 0LL;
      if ( *(_DWORD *)(v59 + 20) )
        goto LABEL_178;
      v65 = *(_DWORD *)(v59 + 56);
      v66 = 0;
      if ( !v65 )
        goto LABEL_151;
      while ( 1 )
      {
        v67 = *(unsigned int *)(v59 + 4LL * v66 + 120);
        if ( (unsigned int)v67 < 0x80 )
          goto LABEL_149;
        v68 = *(unsigned int *)(v59 + 16);
        if ( (unsigned int)v67 >= (unsigned int)v68 )
          goto LABEL_149;
        v69 = (unsigned int)v67;
        v70 = *(_DWORD *)(v59 + v67) - 64;
        if ( v70 )
        {
          v71 = v70 - 1;
          if ( v71 )
          {
            if ( v71 == 1 && v69 + 40 <= v68 )
            {
              if ( *(_DWORD *)(v59 + v69 + 12) )
                v64 = (unsigned __int8 *)(v69 + v59 + 32);
              LOBYTE(v66) = *(_BYTE *)(v59 + v69 + 8);
              v32 = *(_BYTE **)(v59 + v69 + 24);
              v60 = *(_BYTE *)(v59 + v69 + 9);
              goto LABEL_151;
            }
            goto LABEL_149;
          }
          v72 = v69 + 56;
        }
        else
        {
          v72 = v69 + 40;
        }
        if ( v72 <= v68 )
        {
          if ( *(_BYTE *)(v59 + v69 + 10) )
            v64 = (unsigned __int8 *)(v69 + v59 + 24);
          LOBYTE(v66) = *(_BYTE *)(v59 + v69 + 8);
          v32 = *(_BYTE **)(v59 + v69 + 16);
          v60 = *(_BYTE *)(v59 + v69 + 9);
LABEL_151:
          if ( v64 )
          {
            LODWORD(v73) = *v64;
            goto LABEL_157;
          }
          goto LABEL_178;
        }
LABEL_149:
        if ( ++v66 >= v65 )
        {
          LOBYTE(v66) = 0;
          goto LABEL_151;
        }
      }
    }
    LODWORD(v73) = *(unsigned __int8 *)(v59 + 72);
    v32 = *(_BYTE **)(v59 + 32);
    v60 = *(_BYTE *)(v59 + 11);
    LOBYTE(v66) = *(_BYTE *)(v59 + 4);
    if ( *(_BYTE *)(v59 + 2) )
      goto LABEL_178;
LABEL_157:
    LOBYTE(v73) = (_BYTE)v73 - 8;
    if ( ((unsigned __int8)v73 & 0x5D) != 0 )
    {
LABEL_178:
      IofCompleteRequest((PIRP)a2, 0);
      return 0LL;
    }
    v74 = *(_BYTE *)(v59 + 3);
    if ( v74 == 1 || !v32 || !v60 )
      goto LABEL_173;
    LOBYTE(v59) = 0;
    v73 = &v32[v60];
    v75 = v32 + 8;
    if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
    {
      if ( v75 > v73 )
        goto LABEL_172;
      v62 = v32[2];
      v61 = v32[1] & 0xF;
      v63 = v32[3];
    }
    else
    {
      if ( v75 > v73 )
        goto LABEL_172;
      v61 = v32[2] & 0xF;
      v76 = v60;
      if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v60 )
        v76 = (unsigned __int8)v32[7] + 8;
      v73 = v32 + 13;
      v59 = (unsigned __int64)&v32[v76];
      if ( (unsigned __int64)(v32 + 13) <= v59 )
        v62 = v32[12];
      if ( (unsigned __int64)(v32 + 14) <= v59 )
        v63 = *v73;
    }
    LOBYTE(v59) = 1;
LABEL_172:
    if ( (_BYTE)v59 )
    {
LABEL_174:
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v73,
        v59,
        (unsigned int)&v137,
        a2,
        *(_DWORD *)(a2 + 48),
        v74,
        v66,
        v61,
        v62,
        v63,
        a2);
      goto LABEL_178;
    }
LABEL_173:
    v63 = 0;
    v62 = 0;
    v61 = 0;
    goto LABEL_174;
  }
  v6 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = -1073741789;
  if ( v6 )
    goto LABEL_120;
  v137 = 0LL;
  IoGetActivityIdIrp(a2, &v137);
  v34 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v34 == 14 )
  {
    if ( (byte_140171462 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(
        *(unsigned int *)(a2 + 48),
        &EventNonReadWriteRequestComplete,
        &v137,
        a2,
        *(_DWORD *)(a2 + 48));
    goto LABEL_120;
  }
  if ( *(_BYTE *)v34 != 15 )
  {
    if ( *(_BYTE *)v34 == 27 )
    {
      if ( *(_BYTE *)(v34 + 1) != 7 || *(_DWORD *)(v34 + 8) )
      {
        if ( (byte_140171462 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v33, &EventPnpRequestComplete, &v137, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140171462 & 0x40) != 0 )
      {
        v35 = *(_DWORD **)(a2 + 56);
        if ( v35 )
          LODWORD(v32) = *v35;
        McTemplateK0pqd_EtwWriteTransfer(v33, v34, (unsigned int)&v137, a2, (char)v32, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_120;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_120;
  v36 = *(_QWORD *)(v34 + 8);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  if ( *(_BYTE *)(v36 + 2) == 40 )
  {
    v41 = 0LL;
    if ( *(_DWORD *)(v36 + 20) )
      goto LABEL_120;
    v42 = *(_DWORD *)(v36 + 56);
    v43 = 0;
    if ( !v42 )
      goto LABEL_94;
    while ( 1 )
    {
      v44 = *(unsigned int *)(v36 + 4LL * v43 + 120);
      if ( (unsigned int)v44 < 0x80 )
        goto LABEL_92;
      v45 = *(unsigned int *)(v36 + 16);
      if ( (unsigned int)v44 >= (unsigned int)v45 )
        goto LABEL_92;
      v46 = (unsigned int)v44;
      v47 = *(_DWORD *)(v36 + v44) - 64;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          if ( v48 == 1 && v46 + 40 <= v45 )
          {
            if ( *(_DWORD *)(v36 + v46 + 12) )
              v41 = (unsigned __int8 *)(v46 + v36 + 32);
            LOBYTE(v43) = *(_BYTE *)(v36 + v46 + 8);
            v32 = *(_BYTE **)(v36 + v46 + 24);
            v37 = *(_BYTE *)(v36 + v46 + 9);
            goto LABEL_94;
          }
          goto LABEL_92;
        }
        v49 = v46 + 56;
      }
      else
      {
        v49 = v46 + 40;
      }
      if ( v49 <= v45 )
      {
        if ( *(_BYTE *)(v36 + v46 + 10) )
          v41 = (unsigned __int8 *)(v46 + v36 + 24);
        LOBYTE(v43) = *(_BYTE *)(v36 + v46 + 8);
        v32 = *(_BYTE **)(v36 + v46 + 16);
        v37 = *(_BYTE *)(v36 + v46 + 9);
LABEL_94:
        if ( v41 )
        {
          LODWORD(v50) = *v41;
          goto LABEL_100;
        }
        goto LABEL_120;
      }
LABEL_92:
      if ( ++v43 >= v42 )
      {
        LOBYTE(v43) = 0;
        goto LABEL_94;
      }
    }
  }
  LODWORD(v50) = *(unsigned __int8 *)(v36 + 72);
  v32 = *(_BYTE **)(v36 + 32);
  v37 = *(_BYTE *)(v36 + 11);
  LOBYTE(v43) = *(_BYTE *)(v36 + 4);
  if ( *(_BYTE *)(v36 + 2) )
    goto LABEL_120;
LABEL_100:
  LOBYTE(v50) = (_BYTE)v50 - 8;
  if ( ((unsigned __int8)v50 & 0x5D) == 0 )
  {
    v51 = *(_BYTE *)(v36 + 3);
    if ( v51 == 1 || !v32 || !v37 )
      goto LABEL_116;
    LOBYTE(v36) = 0;
    v50 = &v32[v37];
    v52 = v32 + 8;
    if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
    {
      if ( v52 > v50 )
        goto LABEL_115;
      v39 = v32[2];
      v38 = v32[1] & 0xF;
      v40 = v32[3];
    }
    else
    {
      if ( v52 > v50 )
        goto LABEL_115;
      v38 = v32[2] & 0xF;
      v53 = v37;
      if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v37 )
        v53 = (unsigned __int8)v32[7] + 8;
      v50 = v32 + 13;
      v36 = (unsigned __int64)&v32[v53];
      if ( (unsigned __int64)(v32 + 13) <= v36 )
        v39 = v32[12];
      if ( (unsigned __int64)(v32 + 14) <= v36 )
        v40 = *v50;
    }
    LOBYTE(v36) = 1;
LABEL_115:
    if ( (_BYTE)v36 )
    {
LABEL_117:
      McTemplateK0pduuuuup_EtwWriteTransfer(
        (_DWORD)v50,
        v36,
        (unsigned int)&v137,
        a2,
        *(_DWORD *)(a2 + 48),
        v51,
        v43,
        v38,
        v39,
        v40,
        a2);
      goto LABEL_120;
    }
LABEL_116:
    v40 = 0;
    v39 = 0;
    v38 = 0;
    goto LABEL_117;
  }
LABEL_120:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225507LL;
}
