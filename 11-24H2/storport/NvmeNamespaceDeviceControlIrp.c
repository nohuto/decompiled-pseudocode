/*
 * XREFs of NvmeNamespaceDeviceControlIrp @ 0x1401A2234
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14002B290 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaIsDeviceDFxPoweredDown @ 0x140045E40 (RaIsDeviceDFxPoweredDown.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x140056884 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorageGetSystemFeatureSupportIoctl @ 0x14008FE40 (StorageGetSystemFeatureSupportIoctl.c)
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x1400FB9D8 (NvmeNamespaceAcquireRemoveLock.c)
 *     NvmeNamespaceAttributeManagementIoctl @ 0x1400FBA28 (NvmeNamespaceAttributeManagementIoctl.c)
 *     NvmeNamespaceEnableIdlePower @ 0x1400FF5A0 (NvmeNamespaceEnableIdlePower.c)
 *     NvmeNamespaceFirmwareActivateIoctl @ 0x1401015B4 (NvmeNamespaceFirmwareActivateIoctl.c)
 *     NvmeNamespaceFirmwareDownloadIoctl @ 0x140101960 (NvmeNamespaceFirmwareDownloadIoctl.c)
 *     NvmeNamespaceFirmwareGetInfoIoctl @ 0x140101D0C (NvmeNamespaceFirmwareGetInfoIoctl.c)
 *     NvmeNamespaceGetQOSIoctl @ 0x1401046D8 (NvmeNamespaceGetQOSIoctl.c)
 *     NvmeNamespaceInternalQueryPropertyIoctl @ 0x140104CC4 (NvmeNamespaceInternalQueryPropertyIoctl.c)
 *     NvmeNamespacePersistentReserveInIoctl @ 0x140105350 (NvmeNamespacePersistentReserveInIoctl.c)
 *     NvmeNamespacePersistentReserveOutIoctl @ 0x14010575C (NvmeNamespacePersistentReserveOutIoctl.c)
 *     NvmeNamespacePowerCapIoctl @ 0x140106310 (NvmeNamespacePowerCapIoctl.c)
 *     NvmeNamespaceQueryFinalRemovePendingIoctl @ 0x140108944 (NvmeNamespaceQueryFinalRemovePendingIoctl.c)
 *     NvmeNamespaceReinitializeMediaIoctl @ 0x14010B154 (NvmeNamespaceReinitializeMediaIoctl.c)
 *     NvmeNamespaceReleaseRemoveLock @ 0x14010C0B0 (NvmeNamespaceReleaseRemoveLock.c)
 *     NvmeNamespaceSetQOSIoctl @ 0x140111AB4 (NvmeNamespaceSetQOSIoctl.c)
 *     NvmeNamespaceTelemetryIdIoctl @ 0x140113F68 (NvmeNamespaceTelemetryIdIoctl.c)
 *     NvmeNamespaceAttemptQueueIrpForDfxPowerDown @ 0x140132DA0 (NvmeNamespaceAttemptQueueIrpForDfxPowerDown.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     NvmeNativeDumpStorageDumpNotification @ 0x14019FD84 (NvmeNativeDumpStorageDumpNotification.c)
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x14019FE00 (NvmeDumpStorageGetDumpInfoIoctl.c)
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A0D80 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 *     NvmeNamespaceDataSetManagementIoctl @ 0x1401A15F8 (NvmeNamespaceDataSetManagementIoctl.c)
 *     NvmeNamespaceDiskGetCacheInformationIoctl @ 0x1401A3CA0 (NvmeNamespaceDiskGetCacheInformationIoctl.c)
 *     NvmeNamespaceDiskIsWritableIoctl @ 0x1401A4090 (NvmeNamespaceDiskIsWritableIoctl.c)
 *     NvmeNamespaceDiskSetCacheInformationIoctl @ 0x1401A443C (NvmeNamespaceDiskSetCacheInformationIoctl.c)
 *     NvmeNamespaceDiskVerifyIoctl @ 0x1401A47F8 (NvmeNamespaceDiskVerifyIoctl.c)
 *     NvmeNamespaceGetDeviceInternalLogIoctl @ 0x1401A4DEC (NvmeNamespaceGetDeviceInternalLogIoctl.c)
 *     NvmeNamespaceManageBypassIO @ 0x1401A57D8 (NvmeNamespaceManageBypassIO.c)
 *     NvmeNamespaceScsiGetAddressIoctl @ 0x1401A822C (NvmeNamespaceScsiGetAddressIoctl.c)
 *     NvmeNamespaceScsiPassThroughIoctl @ 0x1401A85FC (NvmeNamespaceScsiPassThroughIoctl.c)
 *     NvmeNamespaceSetLedState @ 0x1401A92B0 (NvmeNamespaceSetLedState.c)
 *     NvmeNamespaceStorageCheckVerifyIoctl @ 0x1401AA0D0 (NvmeNamespaceStorageCheckVerifyIoctl.c)
 *     NvmeNamespaceStorageNotificationGetInfoIoctl @ 0x1401AA488 (NvmeNamespaceStorageNotificationGetInfoIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401AF820 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 *     NvmeNamespaceStorageSetPropertyIoctl @ 0x1401B0F1C (NvmeNamespaceStorageSetPropertyIoctl.c)
 */

__int64 __fastcall NvmeNamespaceDeviceControlIrp(_QWORD *Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v3; // ebx
  unsigned int LowPart; // esi
  __int64 v7; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  _IO_STACK_LOCATION *v11; // rdx
  int *v12; // rax
  const GUID *v13; // r8
  const GUID *v14; // r8
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 ProviderId; // rdx
  char v17; // r12
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r13
  char *v23; // r11
  unsigned int v24; // r15d
  unsigned __int64 v25; // r14
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  const GUID *v33; // r8
  int v34; // eax
  int *Information; // rax
  char v36; // r12
  _BYTE *v37; // r9
  unsigned __int8 v38; // r10
  char v39; // si
  char v40; // r11
  char v41; // r13
  char *v42; // r11
  unsigned int v43; // r15d
  unsigned __int64 v44; // r14
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // esi
  unsigned int v55; // esi
  unsigned int v56; // esi
  unsigned int v57; // esi
  unsigned int v58; // esi
  unsigned int v59; // esi
  unsigned int v60; // esi
  unsigned int v61; // esi
  unsigned int v62; // esi
  unsigned int AddressIoctl; // eax
  __int64 v64; // rcx
  _IO_STACK_LOCATION *v65; // rdx
  int v66; // eax
  unsigned int *v67; // rax
  __int64 v68; // rcx
  const EVENT_DESCRIPTOR *v69; // rdx
  unsigned __int64 v70; // rdx
  _BYTE *v71; // r9
  unsigned __int8 v72; // r10
  char v73; // r13
  char v74; // r12
  unsigned __int8 v75; // r11
  char *v76; // r11
  unsigned int v77; // r12d
  __int64 v78; // rcx
  unsigned __int64 v79; // r15
  __int64 v80; // r8
  int v81; // ecx
  int v82; // ecx
  char v83; // r15
  char v84; // cl
  char v85; // r8
  _BYTE *v86; // rcx
  _BYTE *v87; // rax
  unsigned int v88; // eax
  char v89; // al
  __int64 v90; // rcx
  unsigned int v91; // esi
  unsigned int v92; // esi
  unsigned int v93; // esi
  unsigned int v94; // esi
  unsigned int v95; // esi
  unsigned int v96; // esi
  unsigned int v97; // esi
  unsigned int v98; // esi
  unsigned __int8 v99; // r10
  int v100; // eax
  char *v101; // r11
  unsigned int v102; // r12d
  __int64 v103; // rcx
  unsigned __int64 v104; // r15
  __int64 v105; // r8
  int v106; // ecx
  int v107; // ecx
  char v108; // cl
  unsigned int v109; // eax
  NTSTATUS InfoIoctl; // eax
  __int64 v111; // rcx
  unsigned int v112; // esi
  unsigned int v113; // esi
  unsigned int v114; // esi
  unsigned int v115; // esi
  unsigned int v116; // esi
  unsigned int v117; // esi
  unsigned int v118; // esi
  unsigned int v119; // esi
  unsigned int v120; // esi
  unsigned int v121; // esi
  unsigned int v122; // esi
  unsigned int v123; // esi
  unsigned int v124; // esi
  unsigned int v125; // esi
  unsigned int v126; // esi
  unsigned int v127; // esi
  unsigned int v128; // r12d
  __int64 v129; // rcx
  unsigned __int64 v130; // r15
  __int64 v131; // r8
  int v132; // ecx
  int v133; // ecx
  __int64 v134; // rcx
  unsigned int v135; // r12d
  __int64 v136; // rcx
  unsigned __int64 v137; // r15
  int v138; // ecx
  int v139; // ecx
  __int64 v140; // [rsp+20h] [rbp-69h]
  __int64 v141; // [rsp+28h] [rbp-61h]
  __int64 v142; // [rsp+30h] [rbp-59h]
  char v143; // [rsp+38h] [rbp-51h]
  char v144; // [rsp+40h] [rbp-49h]
  char v145; // [rsp+48h] [rbp-41h]
  PIRP v146; // [rsp+50h] [rbp-39h]
  char v147; // [rsp+60h] [rbp-29h] BYREF
  char v148; // [rsp+61h] [rbp-28h]
  unsigned __int8 v149; // [rsp+62h] [rbp-27h]
  char v150; // [rsp+63h] [rbp-26h]
  unsigned int v151; // [rsp+64h] [rbp-25h]
  unsigned int v152; // [rsp+68h] [rbp-21h]
  GUID v153; // [rsp+70h] [rbp-19h] BYREF
  __int128 v154; // [rsp+80h] [rbp-9h] BYREF
  GUID v155; // [rsp+90h] [rbp+7h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v147 = 1;
  v155 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v155);
    if ( (byte_140171462 & 2) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        v7,
        &EventIOCTL,
        &v155,
        Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
  }
  if ( LowPart == 2955532 )
    return NvmeNamespaceQueryFinalRemovePendingIoctl((__int64)Context, (__int64)Irp);
  if ( (Context[14] & 2) != 0 )
  {
    v34 = NvmeNamespaceAcquireRemoveLock((__int64)Context, (__int64)Irp);
    v152 = v34;
    if ( v34 < 0 )
    {
      v9 = StorEtwLoggingEnabled == 0;
      Irp->IoStatus.Information = 0LL;
      *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
      Irp->IoStatus.Status = v34;
      if ( v9 )
        goto LABEL_139;
      v153 = 0LL;
      IoGetActivityIdIrp(Irp, &v153);
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      if ( v11->MajorFunction != 14 )
      {
        if ( v11->MajorFunction == 15 )
        {
          if ( byte_140171461 >= 0 )
            goto LABEL_139;
          ProviderId = v11->Parameters.WMI.ProviderId;
          v36 = 0;
          v37 = 0LL;
          v147 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          if ( *(_BYTE *)(ProviderId + 2) != 40 )
          {
            v47 = *(_BYTE *)(ProviderId + 72);
            v37 = *(_BYTE **)(ProviderId + 32);
            v38 = *(_BYTE *)(ProviderId + 11);
            v36 = *(_BYTE *)(ProviderId + 4);
            if ( *(_BYTE *)(ProviderId + 2) )
              goto LABEL_139;
            goto LABEL_114;
          }
          v42 = 0LL;
          v148 = 0;
          if ( *(_DWORD *)(ProviderId + 20) )
            goto LABEL_139;
          v43 = 0;
          v151 = *(_DWORD *)(ProviderId + 56);
          if ( !v151 )
            goto LABEL_111;
          while ( 1 )
          {
            v10 = *(unsigned int *)(ProviderId + 4LL * v43 + 120);
            if ( (unsigned int)v10 >= 0x80 )
            {
              v44 = *(unsigned int *)(ProviderId + 16);
              if ( (unsigned int)v10 < (unsigned int)v44 )
              {
                v45 = (unsigned int)v10;
                v46 = *(_DWORD *)(v10 + ProviderId) - 64;
                if ( v46 )
                {
                  v10 = (unsigned int)(v46 - 1);
                  if ( (_DWORD)v10 )
                  {
                    if ( (_DWORD)v10 == 1 )
                    {
                      v10 = v45 + 40;
                      if ( v45 + 40 <= v44 )
                      {
                        if ( *(_DWORD *)(v45 + ProviderId + 12) )
                          v42 = (char *)(v45 + ProviderId + 32);
                        v37 = *(_BYTE **)(v45 + ProviderId + 24);
                        goto LABEL_110;
                      }
                    }
                  }
                  else
                  {
                    v10 = v45 + 56;
                    if ( v45 + 56 <= v44 )
                    {
                      v148 = 1;
                      if ( *(_BYTE *)(v45 + ProviderId + 10) )
                        v42 = (char *)(v45 + ProviderId + 24);
                      v36 = *(_BYTE *)(v45 + ProviderId + 8);
                      v37 = *(_BYTE **)(v45 + ProviderId + 16);
                      v38 = *(_BYTE *)(v45 + ProviderId + 9);
                    }
                  }
                }
                else
                {
                  v10 = v45 + 40;
                  if ( v45 + 40 <= v44 )
                  {
                    if ( *(_BYTE *)(v45 + ProviderId + 10) )
                      v42 = (char *)(v45 + ProviderId + 24);
                    v37 = *(_BYTE **)(v45 + ProviderId + 16);
LABEL_110:
                    v38 = *(_BYTE *)(v45 + ProviderId + 9);
                    v36 = *(_BYTE *)(v45 + ProviderId + 8);
LABEL_111:
                    if ( !v42 )
                      goto LABEL_139;
                    v47 = *v42;
                    v40 = 0;
LABEL_114:
                    LOBYTE(v10) = v47 - 8;
                    if ( (v10 & 0x5D) != 0 )
                      goto LABEL_139;
                    v48 = *(_BYTE *)(ProviderId + 3);
                    if ( v48 == 1 || !v37 || !v38 )
                      goto LABEL_133;
                    LOBYTE(ProviderId) = 0;
                    v10 = (unsigned __int64)&v37[v38];
                    v49 = v37 + 8;
                    if ( (unsigned __int8)((*v37 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v49 <= v10 )
                      {
                        LOBYTE(ProviderId) = 1;
                        v40 = v37[2];
                        v39 = v37[1] & 0xF;
                        v41 = v37[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v49 <= v10 )
                      {
                        v39 = v37[2] & 0xF;
                        v50 = v38;
                        if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
                          v50 = (unsigned __int8)v37[7] + 8;
                        v10 = (unsigned __int64)(v37 + 13);
                        ProviderId = (unsigned __int64)&v37[v50];
                        if ( (unsigned __int64)(v37 + 13) > ProviderId )
                          v147 = 0;
                        else
                          v147 = v37[12];
                        if ( (unsigned __int64)(v37 + 14) <= ProviderId )
                          v41 = *(_BYTE *)v10;
                        LOBYTE(ProviderId) = 1;
                      }
                      v40 = v147;
                    }
                    if ( (_BYTE)ProviderId )
                    {
                      LOBYTE(v3) = v40;
                      v51 = v41;
                    }
                    else
                    {
LABEL_133:
                      v39 = 0;
                      v51 = 0;
                    }
                    v146 = Irp;
                    v145 = v51;
                    v144 = v3;
                    v143 = v39;
                    LOBYTE(v142) = v36;
                    LOBYTE(v141) = v48;
                    v33 = &v153;
LABEL_70:
                    LODWORD(v140) = Irp->IoStatus.Status;
                    McTemplateK0pduuuuup_EtwWriteTransfer(
                      v10,
                      ProviderId,
                      v33,
                      Irp,
                      v140,
                      v141,
                      v142,
                      v143,
                      v144,
                      v145,
                      v146);
                    goto LABEL_139;
                  }
                }
                if ( v148 )
                  goto LABEL_111;
              }
            }
            if ( ++v43 >= v151 )
              goto LABEL_111;
          }
        }
        if ( v11->MajorFunction != 27 )
          goto LABEL_139;
        if ( v11->MinorFunction == 7 && !v11->Parameters.Read.Length )
        {
          if ( (byte_140171462 & 0x40) == 0 )
            goto LABEL_139;
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v3 = *Information;
          v13 = &v153;
LABEL_17:
          LODWORD(v141) = Irp->IoStatus.Status;
          LODWORD(v140) = v3;
          McTemplateK0pqd_EtwWriteTransfer(v10, (__int64)v11, v13, Irp, v140, v141);
          goto LABEL_139;
        }
        if ( (byte_140171462 & 0x20) == 0 )
          goto LABEL_139;
        v14 = &v153;
        goto LABEL_20;
      }
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_139;
      v14 = &v153;
LABEL_137:
      v15 = &EventNonReadWriteRequestComplete;
      goto LABEL_138;
    }
    if ( RaIsDeviceDFxPoweredDown(Context[1])
      && NvmeNamespaceAttemptQueueIrpForDfxPowerDown((__int64)Context, (__int64)Irp, LowPart) )
    {
      v54 = 259;
LABEL_394:
      NvmeNamespaceReleaseRemoveLock((__int64)Context);
LABEL_395:
      if ( StorEtwLoggingEnabled && (byte_140171462 & 8) != 0 )
      {
        LODWORD(v140) = v54;
        McTemplateK0pd_EtwWriteTransfer(v111, &EventNonReadWriteRequestComplete, &v155, Irp, v140);
      }
      return v54;
    }
    if ( LowPart <= 0x2D280C )
    {
      if ( LowPart == 2959372 )
      {
        AddressIoctl = NvmeNamespaceTelemetryIdIoctl((__int64)Context, (__int64)Irp);
        goto LABEL_157;
      }
      if ( LowPart <= 0x2D0800 )
      {
        if ( LowPart != 2951168 )
        {
          v55 = LowPart - 266264;
          if ( !v55 )
          {
            AddressIoctl = NvmeNamespaceScsiGetAddressIoctl(Context, Irp);
            goto LABEL_157;
          }
          v56 = v55 - 49132;
          if ( v56 )
          {
            v57 = v56 - 16;
            if ( v57 )
            {
              v58 = v57 - 48;
              if ( v58 )
              {
                v59 = v58 - 4;
                if ( v59 )
                {
                  v60 = v59 - 143308;
                  if ( !v60 )
                  {
                    AddressIoctl = NvmeNamespaceDiskVerifyIoctl(Context, Irp);
                    goto LABEL_157;
                  }
                  v61 = v60 - 16;
                  if ( !v61 )
                  {
                    AddressIoctl = NvmeNamespaceDiskIsWritableIoctl(Context, Irp);
                    goto LABEL_157;
                  }
                  v62 = v61 - 16560;
                  if ( !v62 )
                  {
                    AddressIoctl = NvmeNamespaceDiskGetCacheInformationIoctl(Context, Irp);
                    goto LABEL_157;
                  }
                  if ( v62 == 32772 )
                  {
                    AddressIoctl = NvmeNamespaceDiskSetCacheInformationIoctl(Context, Irp);
LABEL_157:
                    v54 = AddressIoctl;
                    goto LABEL_394;
                  }
LABEL_333:
                  v9 = StorEtwLoggingEnabled == 0;
                  v54 = -1073741637;
                  Irp->IoStatus.Status = -1073741637;
                  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
                  if ( v9 )
                    goto LABEL_231;
                  v153 = 0LL;
                  IoGetActivityIdIrp(Irp, &v153);
                  v65 = Irp->Tail.Overlay.CurrentStackLocation;
                  if ( v65->MajorFunction != 14 )
                  {
                    v66 = v65->MajorFunction - 15;
                    if ( v65->MajorFunction == 15 )
                    {
                      if ( byte_140171461 >= 0 )
                        goto LABEL_231;
                      v70 = v65->Parameters.WMI.ProviderId;
                      v71 = 0LL;
                      v148 = 0;
                      v99 = 0;
                      v73 = 0;
                      v147 = 0;
                      v74 = 0;
                      v149 = 0;
                      v100 = *(unsigned __int8 *)(v70 + 2);
                      v75 = 0;
                      if ( (_BYTE)v100 == 40 )
                      {
                        v101 = 0LL;
                        v150 = 0;
                        if ( *(_DWORD *)(v70 + 20) )
                          goto LABEL_231;
                        v128 = 0;
                        v151 = *(_DWORD *)(v70 + 56);
                        if ( v151 )
                        {
                          while ( 1 )
                          {
                            v129 = *(unsigned int *)(v70 + 4LL * v128 + 120);
                            if ( (unsigned int)v129 >= 0x80 )
                            {
                              v130 = *(unsigned int *)(v70 + 16);
                              if ( (unsigned int)v129 < (unsigned int)v130 )
                              {
                                v131 = (unsigned int)v129;
                                v132 = *(_DWORD *)(v129 + v70) - 64;
                                if ( v132 )
                                {
                                  v133 = v132 - 1;
                                  if ( v133 )
                                  {
                                    if ( v133 == 1 && v131 + 40 <= v130 )
                                      goto LABEL_346;
                                  }
                                  else if ( v131 + 56 <= v130 )
                                  {
                                    v150 = 1;
                                    if ( *(_BYTE *)(v131 + v70 + 10) )
                                      v101 = (char *)(v131 + v70 + 24);
                                    v71 = *(_BYTE **)(v131 + v70 + 16);
                                    v99 = *(_BYTE *)(v131 + v70 + 9);
                                    v148 = *(_BYTE *)(v131 + v70 + 8);
                                  }
                                }
                                else if ( v131 + 40 <= v130 )
                                {
                                  goto LABEL_358;
                                }
                                if ( v150 )
                                  goto LABEL_267;
                              }
                            }
                            if ( ++v128 >= v151 )
                              goto LABEL_267;
                          }
                        }
                        goto LABEL_273;
                      }
LABEL_274:
                      v108 = *(_BYTE *)(v70 + 72);
                      v71 = *(_BYTE **)(v70 + 32);
                      v99 = *(_BYTE *)(v70 + 11);
                      v83 = *(_BYTE *)(v70 + 4);
                      if ( v100 )
                        goto LABEL_231;
LABEL_275:
                      if ( ((v108 - 8) & 0x5D) != 0 )
                      {
LABEL_231:
                        IofCompleteRequest(Irp, 0);
                        goto LABEL_394;
                      }
                      v85 = *(_BYTE *)(v70 + 3);
                      if ( v85 == 1 || !v71 || !v99 )
                        goto LABEL_226;
                      LOBYTE(v70) = 0;
                      v86 = &v71[v99];
                      v87 = v71 + 8;
                      if ( (unsigned __int8)((*v71 & 0x7F) - 114) > 1u )
                      {
                        if ( v87 <= v86 )
                        {
                          v73 = v71[2] & 0xF;
                          v109 = v99;
                          if ( (unsigned int)(unsigned __int8)v71[7] + 8 <= v99 )
                            v109 = (unsigned __int8)v71[7] + 8;
                          v70 = (unsigned __int64)&v71[v109];
                          if ( (unsigned __int64)(v71 + 13) > v70 )
                            v147 = 0;
                          else
                            v147 = v71[12];
                          if ( (unsigned __int64)(v71 + 14) > v70 )
                            v149 = 0;
                          else
                            v149 = v71[13];
                          LOBYTE(v70) = 1;
                        }
                        v74 = v147;
LABEL_221:
                        v75 = v149;
                        goto LABEL_224;
                      }
                      goto LABEL_222;
                    }
                    goto LABEL_166;
                  }
LABEL_228:
                  if ( (byte_140171462 & 8) == 0 )
                    goto LABEL_231;
                  v69 = &EventNonReadWriteRequestComplete;
                  goto LABEL_230;
                }
              }
            }
          }
          if ( FeatureFixTRIMAddSCSIPassthrough )
          {
            AddressIoctl = NvmeNamespaceScsiPassThroughIoctl(Context, Irp);
            goto LABEL_157;
          }
          v9 = StorEtwLoggingEnabled == 0;
          v54 = -1073741637;
          Irp->IoStatus.Status = -1073741637;
          *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
          if ( v9 )
            goto LABEL_231;
          v153 = 0LL;
          IoGetActivityIdIrp(Irp, &v153);
          v65 = Irp->Tail.Overlay.CurrentStackLocation;
          if ( v65->MajorFunction == 14 )
            goto LABEL_228;
          v66 = v65->MajorFunction - 15;
          if ( v65->MajorFunction == 15 )
          {
            if ( byte_140171461 >= 0 )
              goto LABEL_231;
            v70 = v65->Parameters.WMI.ProviderId;
            v71 = 0LL;
            v147 = 0;
            v72 = 0;
            v73 = 0;
            v148 = 0;
            v74 = 0;
            v149 = 0;
            v75 = 0;
            if ( *(_BYTE *)(v70 + 2) == 40 )
            {
              v76 = 0LL;
              v150 = 0;
              if ( *(_DWORD *)(v70 + 20) )
                goto LABEL_231;
              v77 = 0;
              v151 = *(_DWORD *)(v70 + 56);
              if ( v151 )
              {
                do
                {
                  v78 = *(unsigned int *)(v70 + 4LL * v77 + 120);
                  if ( (unsigned int)v78 >= 0x80 )
                  {
                    v79 = *(unsigned int *)(v70 + 16);
                    if ( (unsigned int)v78 < (unsigned int)v79 )
                    {
                      v80 = (unsigned int)v78;
                      v81 = *(_DWORD *)(v78 + v70) - 64;
                      if ( v81 )
                      {
                        v82 = v81 - 1;
                        if ( v82 )
                        {
                          if ( v82 == 1 && v80 + 40 <= v79 )
                          {
                            if ( *(_DWORD *)(v80 + v70 + 12) )
                              v76 = (char *)(v80 + v70 + 32);
                            v71 = *(_BYTE **)(v80 + v70 + 24);
LABEL_189:
                            v83 = *(_BYTE *)(v80 + v70 + 8);
                            v72 = *(_BYTE *)(v80 + v70 + 9);
                            goto LABEL_198;
                          }
                        }
                        else if ( v80 + 56 <= v79 )
                        {
                          v150 = 1;
                          if ( *(_BYTE *)(v80 + v70 + 10) )
                            v76 = (char *)(v80 + v70 + 24);
                          v71 = *(_BYTE **)(v80 + v70 + 16);
                          v72 = *(_BYTE *)(v80 + v70 + 9);
                          v147 = *(_BYTE *)(v80 + v70 + 8);
                        }
                      }
                      else if ( v80 + 40 <= v79 )
                      {
                        if ( *(_BYTE *)(v80 + v70 + 10) )
                          v76 = (char *)(v80 + v70 + 24);
                        v71 = *(_BYTE **)(v80 + v70 + 16);
                        goto LABEL_189;
                      }
                      if ( v150 )
                        break;
                    }
                  }
                  ++v77;
                }
                while ( v77 < v151 );
                v83 = v147;
              }
              else
              {
                v83 = 0;
              }
LABEL_198:
              if ( !v76 )
                goto LABEL_231;
              v84 = *v76;
              v74 = 0;
              v75 = 0;
            }
            else
            {
              v84 = *(_BYTE *)(v70 + 72);
              v71 = *(_BYTE **)(v70 + 32);
              v72 = *(_BYTE *)(v70 + 11);
              v83 = *(_BYTE *)(v70 + 4);
              if ( *(_BYTE *)(v70 + 2) )
                goto LABEL_231;
            }
            if ( ((v84 - 8) & 0x5D) != 0 )
              goto LABEL_231;
            v85 = *(_BYTE *)(v70 + 3);
            if ( v85 == 1 || !v71 || !v72 )
              goto LABEL_226;
            LOBYTE(v70) = 0;
            v86 = &v71[v72];
            v87 = v71 + 8;
            if ( (unsigned __int8)((*v71 & 0x7F) - 114) > 1u )
            {
              if ( v87 <= v86 )
              {
                v73 = v71[2] & 0xF;
                v88 = v72;
                if ( (unsigned int)(unsigned __int8)v71[7] + 8 <= v72 )
                  v88 = (unsigned __int8)v71[7] + 8;
                v70 = (unsigned __int64)&v71[v88];
                if ( (unsigned __int64)(v71 + 13) > v70 )
                  v148 = 0;
                else
                  v148 = v71[12];
                if ( (unsigned __int64)(v71 + 14) > v70 )
                  v149 = 0;
                else
                  v149 = v71[13];
                LOBYTE(v70) = 1;
              }
              v74 = v148;
              goto LABEL_221;
            }
LABEL_222:
            if ( v87 <= v86 )
            {
              LOBYTE(v70) = 1;
              v74 = v71[2];
              v73 = v71[1] & 0xF;
              v75 = v71[3];
            }
LABEL_224:
            if ( (_BYTE)v70 )
            {
              v89 = v74;
              v90 = v75;
LABEL_227:
              LOBYTE(v142) = v83;
              LOBYTE(v141) = v85;
              LODWORD(v140) = Irp->IoStatus.Status;
              McTemplateK0pduuuuup_EtwWriteTransfer(v90, v70, &v153, Irp, v140, v141, v142, v73, v89, v90, Irp);
              goto LABEL_231;
            }
LABEL_226:
            v73 = 0;
            v89 = 0;
            v90 = 0LL;
            goto LABEL_227;
          }
LABEL_166:
          if ( v66 != 12 )
            goto LABEL_231;
          if ( v65->MinorFunction == 7 && !v65->Parameters.Read.Length )
          {
            if ( (byte_140171462 & 0x40) != 0 )
            {
              v67 = (unsigned int *)Irp->IoStatus.Information;
              if ( v67 )
                v68 = *v67;
              else
                v68 = 0LL;
              LODWORD(v141) = Irp->IoStatus.Status;
              LODWORD(v140) = v68;
              McTemplateK0pqd_EtwWriteTransfer(v68, (__int64)v65, &v153, Irp, v140, v141);
            }
            goto LABEL_231;
          }
          if ( (byte_140171462 & 0x20) == 0 )
            goto LABEL_231;
          v69 = &EventPnpRequestComplete;
LABEL_230:
          LODWORD(v140) = Irp->IoStatus.Status;
          McTemplateK0pd_EtwWriteTransfer(v64, v69, &v153, Irp, v140);
          goto LABEL_231;
        }
LABEL_321:
        AddressIoctl = NvmeNamespaceStorageCheckVerifyIoctl(v52, Irp);
        goto LABEL_157;
      }
      v91 = LowPart - 2951360;
      if ( !v91 )
      {
        AddressIoctl = NvmeNamespaceManageBypassIO(Context, Irp);
        goto LABEL_157;
      }
      v92 = v91 - 2872;
      if ( v92 )
      {
        v93 = v92 - 8;
        if ( v93 )
        {
          v94 = v93 - 587;
          if ( !v94 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(Context[2] + 1048LL) + 24LL) & 0x40000000) != 0 )
              AddressIoctl = NvmeDumpStorageGetDumpInfoIoctl((__int64)Context, (__int64)Irp);
            else
              AddressIoctl = NvmeNativeDumpStorageGetDumpInfoIoctl((__int64)Context, (__int64)Irp);
            goto LABEL_157;
          }
          v95 = v94 - 1461;
          if ( v95 )
          {
            v96 = v95 - 128;
            if ( !v96 )
            {
              AddressIoctl = NvmeNamespaceEnableIdlePower((__int64)Context, (__int64)Irp);
              goto LABEL_157;
            }
            v97 = v96 - 20;
            if ( !v97 )
            {
              AddressIoctl = NvmeNamespacePowerCapIoctl((__int64)Context, (__int64)Irp);
              goto LABEL_157;
            }
            v98 = v97 - 48;
            if ( !v98 )
            {
              AddressIoctl = NvmeNamespaceGetDeviceInternalLogIoctl(Context, Irp);
              goto LABEL_157;
            }
            if ( v98 != 8 )
              goto LABEL_333;
            if ( (*(_BYTE *)(Context[2] + 136LL) & 2) == 0 )
            {
              AddressIoctl = NvmeNamespaceSetLedState(Context, Irp);
              goto LABEL_157;
            }
            v9 = StorEtwLoggingEnabled == 0;
            v54 = -1073741637;
            Irp->IoStatus.Status = -1073741637;
            Irp->IoStatus.Information = 0LL;
            *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
            if ( v9 )
              goto LABEL_231;
            v153 = 0LL;
            IoGetActivityIdIrp(Irp, &v153);
            v65 = Irp->Tail.Overlay.CurrentStackLocation;
            if ( v65->MajorFunction == 14 )
              goto LABEL_228;
            v66 = v65->MajorFunction - 15;
            if ( v65->MajorFunction != 15 )
              goto LABEL_166;
            if ( byte_140171461 >= 0 )
              goto LABEL_231;
            v70 = v65->Parameters.WMI.ProviderId;
            v71 = 0LL;
            v148 = 0;
            v99 = 0;
            v73 = 0;
            v147 = 0;
            v74 = 0;
            v149 = 0;
            v100 = *(unsigned __int8 *)(v70 + 2);
            v75 = 0;
            if ( (_BYTE)v100 != 40 )
              goto LABEL_274;
            v101 = 0LL;
            v150 = 0;
            if ( *(_DWORD *)(v70 + 20) )
              goto LABEL_231;
            v102 = 0;
            v151 = *(_DWORD *)(v70 + 56);
            if ( v151 )
            {
              while ( 1 )
              {
                v103 = *(unsigned int *)(v70 + 4LL * v102 + 120);
                if ( (unsigned int)v103 >= 0x80 )
                {
                  v104 = *(unsigned int *)(v70 + 16);
                  if ( (unsigned int)v103 < (unsigned int)v104 )
                  {
                    v105 = (unsigned int)v103;
                    v106 = *(_DWORD *)(v70 + v103) - 64;
                    if ( v106 )
                    {
                      v107 = v106 - 1;
                      if ( v107 )
                      {
                        if ( v107 == 1 && v105 + 40 <= v104 )
                        {
                          if ( *(_DWORD *)(v70 + v105 + 12) )
                            v101 = (char *)(v105 + v70 + 32);
                          v71 = *(_BYTE **)(v70 + v105 + 24);
                          goto LABEL_259;
                        }
                      }
                      else if ( v105 + 56 <= v104 )
                      {
                        v150 = 1;
                        if ( *(_BYTE *)(v70 + v105 + 10) )
                          v101 = (char *)(v105 + v70 + 24);
                        v71 = *(_BYTE **)(v70 + v105 + 16);
                        v99 = *(_BYTE *)(v70 + v105 + 9);
                        v148 = *(_BYTE *)(v70 + v105 + 8);
                      }
                    }
                    else if ( v105 + 40 <= v104 )
                    {
                      if ( *(_BYTE *)(v70 + v105 + 10) )
                        v101 = (char *)(v105 + v70 + 24);
                      v71 = *(_BYTE **)(v70 + v105 + 16);
LABEL_259:
                      v83 = *(_BYTE *)(v70 + v105 + 8);
                      v99 = *(_BYTE *)(v70 + v105 + 9);
LABEL_268:
                      if ( v101 )
                      {
                        v108 = *v101;
                        v74 = 0;
                        v75 = 0;
                        goto LABEL_275;
                      }
                      goto LABEL_231;
                    }
                    if ( v150 )
                      goto LABEL_267;
                  }
                }
                if ( ++v102 >= v151 )
                  goto LABEL_267;
              }
            }
LABEL_273:
            v83 = 0;
            goto LABEL_268;
          }
          InfoIoctl = NvmeNamespaceFirmwareGetInfoIoctl((__int64)Context, Irp, &v147);
        }
        else
        {
          InfoIoctl = NvmeNamespaceStorageQueryPropertyIoctl(Context, Irp, &v147);
        }
      }
      else
      {
        InfoIoctl = NvmeNamespaceInternalQueryPropertyIoctl((__int64)Context, (__int64)Irp, &v147);
      }
      goto LABEL_393;
    }
    if ( LowPart > 0x2DD01C )
    {
      v120 = LowPart - 3002428;
      if ( !v120 )
      {
        ++Irp->CurrentLocation;
        ++Irp->Tail.Overlay.CurrentStackLocation;
        Irp->IoStatus.Information = 0LL;
        InfoIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(Context[2] + 128LL) + 8LL), Irp);
        goto LABEL_393;
      }
      v121 = v120 - 8;
      if ( v121 )
      {
        v122 = v121 - 12;
        if ( !v122 )
        {
          AddressIoctl = NvmeAdapterMiniportPassthroughRequestIoctl(
                           *(_QWORD *)(Context[2] + 128LL),
                           (__int64)Context,
                           (__int64)Irp);
          goto LABEL_157;
        }
        v123 = v122 - 432;
        if ( !v123 )
        {
          v134 = *(_QWORD *)(Context[2] + 136LL);
          Irp->IoStatus.Information = 0LL;
          if ( (v134 & 2) == 0 )
          {
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            AddressIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(Context[2] + 128LL) + 8LL), Irp);
            goto LABEL_157;
          }
          v9 = StorEtwLoggingEnabled == 0;
          v54 = -1073741637;
          Irp->IoStatus.Status = -1073741637;
          *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
          if ( v9 )
            goto LABEL_231;
          v153 = 0LL;
          IoGetActivityIdIrp(Irp, &v153);
          v65 = Irp->Tail.Overlay.CurrentStackLocation;
          if ( v65->MajorFunction == 14 )
            goto LABEL_228;
          v66 = v65->MajorFunction - 15;
          if ( v65->MajorFunction != 15 )
            goto LABEL_166;
          if ( byte_140171461 >= 0 )
            goto LABEL_231;
          v70 = v65->Parameters.WMI.ProviderId;
          v71 = 0LL;
          v148 = 0;
          v99 = 0;
          v73 = 0;
          v147 = 0;
          v74 = 0;
          v149 = 0;
          v100 = *(unsigned __int8 *)(v70 + 2);
          v75 = 0;
          if ( (_BYTE)v100 != 40 )
            goto LABEL_274;
          v101 = 0LL;
          v150 = 0;
          if ( *(_DWORD *)(v70 + 20) )
            goto LABEL_231;
          v135 = 0;
          v151 = *(_DWORD *)(v70 + 56);
          if ( v151 )
          {
            while ( 1 )
            {
              v136 = *(unsigned int *)(v70 + 4LL * v135 + 120);
              if ( (unsigned int)v136 >= 0x80 )
              {
                v137 = *(unsigned int *)(v70 + 16);
                if ( (unsigned int)v136 < (unsigned int)v137 )
                {
                  v131 = (unsigned int)v136;
                  v138 = *(_DWORD *)(v136 + v70) - 64;
                  if ( v138 )
                  {
                    v139 = v138 - 1;
                    if ( v139 )
                    {
                      if ( v139 == 1 && v131 + 40 <= v137 )
                      {
LABEL_346:
                        if ( *(_DWORD *)(v131 + v70 + 12) )
                          v101 = (char *)(v131 + v70 + 32);
                        v71 = *(_BYTE **)(v131 + v70 + 24);
LABEL_349:
                        v83 = *(_BYTE *)(v131 + v70 + 8);
                        v99 = *(_BYTE *)(v131 + v70 + 9);
                        goto LABEL_268;
                      }
                    }
                    else if ( v131 + 56 <= v137 )
                    {
                      v150 = 1;
                      if ( *(_BYTE *)(v131 + v70 + 10) )
                        v101 = (char *)(v131 + v70 + 24);
                      v71 = *(_BYTE **)(v131 + v70 + 16);
                      v99 = *(_BYTE *)(v131 + v70 + 9);
                      v148 = *(_BYTE *)(v131 + v70 + 8);
                    }
                  }
                  else if ( v131 + 40 <= v137 )
                  {
LABEL_358:
                    if ( *(_BYTE *)(v131 + v70 + 10) )
                      v101 = (char *)(v131 + v70 + 24);
                    v71 = *(_BYTE **)(v131 + v70 + 16);
                    goto LABEL_349;
                  }
                  if ( v150 )
                    goto LABEL_267;
                }
              }
              if ( ++v135 >= v151 )
              {
LABEL_267:
                v83 = v148;
                goto LABEL_268;
              }
            }
          }
          goto LABEL_273;
        }
        v124 = v123 - 448;
        if ( v124 )
        {
          v125 = v124 - 2116;
          if ( v125 )
          {
            v126 = v125 - 4;
            if ( v126 )
            {
              v127 = v126 - 148;
              if ( !v127 )
              {
                AddressIoctl = NvmeNamespaceAttributeManagementIoctl((__int64)Context, (__int64)Irp);
                goto LABEL_157;
              }
              if ( v127 == 2936 )
              {
                AddressIoctl = NvmeNamespaceSetQOSIoctl((__int64)Context, (__int64)Irp);
                goto LABEL_157;
              }
              goto LABEL_333;
            }
            InfoIoctl = NvmeNamespaceFirmwareActivateIoctl((__int64)Context, (__int64)Irp, v53, &v147);
          }
          else
          {
            InfoIoctl = NvmeNamespaceFirmwareDownloadIoctl((__int64)Context, (__int64)Irp, &v147);
          }
        }
        else
        {
          InfoIoctl = NvmeNamespaceStorageProtocolCommandIoctl(Context, Irp, &v147);
        }
LABEL_393:
        v54 = InfoIoctl;
        if ( !v147 )
          goto LABEL_395;
        goto LABEL_394;
      }
    }
    else
    {
      if ( LowPart == 3002396 )
      {
        AddressIoctl = NvmeNamespacePersistentReserveOutIoctl((__int64)Context, (__int64)Irp);
        goto LABEL_157;
      }
      v112 = LowPart - 2959376;
      if ( !v112 )
      {
        AddressIoctl = NvmeNamespaceGetQOSIoctl((__int64)Context, (__int64)Irp);
        goto LABEL_157;
      }
      v113 = v112 - 8176;
      if ( !v113 )
        goto LABEL_321;
      v114 = v113 - 1052;
      if ( !v114 )
      {
        AddressIoctl = StorageGetSystemFeatureSupportIoctl(Irp);
        goto LABEL_157;
      }
      v115 = v114 - 1020;
      if ( !v115 )
      {
        AddressIoctl = NvmeNamespacePersistentReserveInIoctl((__int64)Context, (__int64)Irp);
        goto LABEL_157;
      }
      v116 = v115 - 48;
      if ( v116 )
      {
        v117 = v116 - 1532;
        if ( !v117 )
        {
          AddressIoctl = NvmeNativeDumpStorageDumpNotification((__int64)Context, Irp);
          goto LABEL_157;
        }
        v118 = v117 - 15800;
        if ( v118 )
        {
          v119 = v118 - 8;
          if ( !v119 )
          {
            AddressIoctl = NvmeNamespaceDataSetManagementIoctl((__int64)Context, (__int64)Irp);
            goto LABEL_157;
          }
          if ( v119 == 572 )
          {
            AddressIoctl = NvmeNamespaceReinitializeMediaIoctl((__int64)Context, Irp);
            goto LABEL_157;
          }
          goto LABEL_333;
        }
        InfoIoctl = NvmeNamespaceStorageSetPropertyIoctl(Context, Irp, &v147);
        goto LABEL_393;
      }
    }
    AddressIoctl = NvmeNamespaceStorageNotificationGetInfoIoctl(Context, Irp);
    goto LABEL_157;
  }
  v9 = StorEtwLoggingEnabled == 0;
  v152 = -1073741808;
  Irp->IoStatus.Status = -1073741808;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  if ( v9 )
    goto LABEL_139;
  v154 = 0LL;
  IoGetActivityIdIrp(Irp, &v154);
  v11 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v11->MajorFunction == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_139;
    v14 = (const GUID *)&v154;
    goto LABEL_137;
  }
  if ( v11->MajorFunction != 15 )
  {
    if ( v11->MajorFunction != 27 )
      goto LABEL_139;
    if ( v11->MinorFunction == 7 && !v11->Parameters.Read.Length )
    {
      if ( (byte_140171462 & 0x40) == 0 )
        goto LABEL_139;
      v12 = (int *)Irp->IoStatus.Information;
      if ( v12 )
        v3 = *v12;
      v13 = (const GUID *)&v154;
      goto LABEL_17;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_139;
    v14 = (const GUID *)&v154;
LABEL_20:
    v15 = &EventPnpRequestComplete;
LABEL_138:
    LODWORD(v140) = Irp->IoStatus.Status;
    McTemplateK0pd_EtwWriteTransfer(v10, v15, v14, Irp, v140);
    goto LABEL_139;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_139;
  ProviderId = v11->Parameters.WMI.ProviderId;
  v17 = 0;
  v18 = 0LL;
  v147 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(ProviderId + 2) == 40 )
  {
    v23 = 0LL;
    v148 = 0;
    if ( *(_DWORD *)(ProviderId + 20) )
      goto LABEL_139;
    v24 = 0;
    v151 = *(_DWORD *)(ProviderId + 56);
    if ( !v151 )
      goto LABEL_46;
    while ( 1 )
    {
      v10 = *(unsigned int *)(ProviderId + 4LL * v24 + 120);
      if ( (unsigned int)v10 >= 0x80 )
      {
        v25 = *(unsigned int *)(ProviderId + 16);
        if ( (unsigned int)v10 < (unsigned int)v25 )
        {
          v26 = (unsigned int)v10;
          v27 = *(_DWORD *)(v10 + ProviderId) - 64;
          if ( v27 )
          {
            v10 = (unsigned int)(v27 - 1);
            if ( (_DWORD)v10 )
            {
              if ( (_DWORD)v10 == 1 )
              {
                v10 = v26 + 40;
                if ( v26 + 40 <= v25 )
                {
                  if ( *(_DWORD *)(v26 + ProviderId + 12) )
                    v23 = (char *)(v26 + ProviderId + 32);
                  v18 = *(_BYTE **)(v26 + ProviderId + 24);
                  goto LABEL_45;
                }
              }
            }
            else
            {
              v10 = v26 + 56;
              if ( v26 + 56 <= v25 )
              {
                v148 = 1;
                if ( *(_BYTE *)(v26 + ProviderId + 10) )
                  v23 = (char *)(v26 + ProviderId + 24);
                v17 = *(_BYTE *)(v26 + ProviderId + 8);
                v18 = *(_BYTE **)(v26 + ProviderId + 16);
                v19 = *(_BYTE *)(v26 + ProviderId + 9);
              }
            }
          }
          else
          {
            v10 = v26 + 40;
            if ( v26 + 40 <= v25 )
            {
              if ( *(_BYTE *)(v26 + ProviderId + 10) )
                v23 = (char *)(v26 + ProviderId + 24);
              v18 = *(_BYTE **)(v26 + ProviderId + 16);
LABEL_45:
              v19 = *(_BYTE *)(v26 + ProviderId + 9);
              v17 = *(_BYTE *)(v26 + ProviderId + 8);
LABEL_46:
              if ( v23 )
              {
                v28 = *v23;
                v21 = 0;
                goto LABEL_49;
              }
              goto LABEL_139;
            }
          }
          if ( v148 )
            goto LABEL_46;
        }
      }
      if ( ++v24 >= v151 )
        goto LABEL_46;
    }
  }
  v28 = *(_BYTE *)(ProviderId + 72);
  v18 = *(_BYTE **)(ProviderId + 32);
  v19 = *(_BYTE *)(ProviderId + 11);
  v17 = *(_BYTE *)(ProviderId + 4);
  if ( *(_BYTE *)(ProviderId + 2) )
    goto LABEL_139;
LABEL_49:
  LOBYTE(v10) = v28 - 8;
  if ( (v10 & 0x5D) == 0 )
  {
    v29 = *(_BYTE *)(ProviderId + 3);
    if ( v29 == 1 || !v18 || !v19 )
      goto LABEL_68;
    LOBYTE(ProviderId) = 0;
    v10 = (unsigned __int64)&v18[v19];
    v30 = v18 + 8;
    if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v30 <= v10 )
      {
        LOBYTE(ProviderId) = 1;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v30 <= v10 )
      {
        v20 = v18[2] & 0xF;
        v31 = v19;
        if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
          v31 = (unsigned __int8)v18[7] + 8;
        v10 = (unsigned __int64)(v18 + 13);
        ProviderId = (unsigned __int64)&v18[v31];
        if ( (unsigned __int64)(v18 + 13) > ProviderId )
          v147 = 0;
        else
          v147 = v18[12];
        if ( (unsigned __int64)(v18 + 14) <= ProviderId )
          v22 = *(_BYTE *)v10;
        LOBYTE(ProviderId) = 1;
      }
      v21 = v147;
    }
    if ( (_BYTE)ProviderId )
    {
      LOBYTE(v3) = v21;
      v32 = v22;
    }
    else
    {
LABEL_68:
      v20 = 0;
      v32 = 0;
    }
    v146 = Irp;
    v145 = v32;
    v144 = v3;
    v143 = v20;
    LOBYTE(v142) = v17;
    LOBYTE(v141) = v29;
    v33 = (const GUID *)&v154;
    goto LABEL_70;
  }
LABEL_139:
  IofCompleteRequest(Irp, 0);
  return v152;
}
