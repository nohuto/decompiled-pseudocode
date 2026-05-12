/*
 * XREFs of NvmeAdapterDeviceControlIrp @ 0x140195438
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x14002B290 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1400177F0 (RaForwardIrp.c)
 *     RaIsDeviceDFxPoweredDown @ 0x140045E40 (RaIsDeviceDFxPoweredDown.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     NvmeAdapterReleaseRemoveLock @ 0x140056050 (NvmeAdapterReleaseRemoveLock.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x140056884 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorageGetSystemFeatureSupportIoctl @ 0x14008FE40 (StorageGetSystemFeatureSupportIoctl.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D0584 (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D17BC (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D2588 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterMiniportPassthroughRequestIoctl @ 0x1400D42D8 (NvmeAdapterMiniportPassthroughRequestIoctl.c)
 *     NvmeAdapterPowerCapIoctl @ 0x1400D50F0 (NvmeAdapterPowerCapIoctl.c)
 *     NvmeAdapterSetLedState @ 0x1400D70B0 (NvmeAdapterSetLedState.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400D74F4 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeAdapterStorageInternalQueryPropertyIoctl @ 0x1400D99FC (NvmeAdapterStorageInternalQueryPropertyIoctl.c)
 *     NvmeAdapterStorageSetProperty @ 0x1400DA808 (NvmeAdapterStorageSetProperty.c)
 *     NvmeAdapterAttemptQueueIrpForDfxPowerDown @ 0x14012DCB0 (NvmeAdapterAttemptQueueIrpForDfxPowerDown.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     NvmeAdapterAddAuthenticationKey @ 0x140192B98 (NvmeAdapterAddAuthenticationKey.c)
 *     NvmeAdapterAddController @ 0x140193078 (NvmeAdapterAddController.c)
 *     NvmeAdapterAddSubsystemPort @ 0x14019363C (NvmeAdapterAddSubsystemPort.c)
 *     NvmeAdapterConnectController @ 0x140193CD8 (NvmeAdapterConnectController.c)
 *     NvmeAdapterCreateAuthenticationKey @ 0x140194A68 (NvmeAdapterCreateAuthenticationKey.c)
 *     NvmeAdapterDeleteAuthenticationKey @ 0x140194FD0 (NvmeAdapterDeleteAuthenticationKey.c)
 *     NvmeAdapterDisconnectController @ 0x14019650C (NvmeAdapterDisconnectController.c)
 *     NvmeAdapterGetAuthenticationKeys @ 0x14019707C (NvmeAdapterGetAuthenticationKeys.c)
 *     NvmeAdapterGetControllers @ 0x140197694 (NvmeAdapterGetControllers.c)
 *     NvmeAdapterGetDeviceNumberEx @ 0x140197CA8 (NvmeAdapterGetDeviceNumberEx.c)
 *     NvmeAdapterGetHostGatewayByHandle @ 0x140198090 (NvmeAdapterGetHostGatewayByHandle.c)
 *     NvmeAdapterGetHostGateways @ 0x14019856C (NvmeAdapterGetHostGateways.c)
 *     NvmeAdapterGetHostInformation @ 0x140198AE8 (NvmeAdapterGetHostInformation.c)
 *     NvmeAdapterGetNamespaces @ 0x140198EE8 (NvmeAdapterGetNamespaces.c)
 *     NvmeAdapterGetNvmeControllerDiscoveryEntries @ 0x14019943C (NvmeAdapterGetNvmeControllerDiscoveryEntries.c)
 *     NvmeAdapterGetSubsystemPorts @ 0x14019A0F8 (NvmeAdapterGetSubsystemPorts.c)
 *     NvmeAdapterPassThrough @ 0x14019A9EC (NvmeAdapterPassThrough.c)
 *     NvmeAdapterRemoveController @ 0x14019B238 (NvmeAdapterRemoveController.c)
 *     NvmeAdapterRemoveSubsystemPort @ 0x14019BB24 (NvmeAdapterRemoveSubsystemPort.c)
 *     NvmeAdapterStorageNotificationConfigureIoctl @ 0x14019C4DC (NvmeAdapterStorageNotificationConfigureIoctl.c)
 *     NvmeAdapterStorageNotificationGetInfoIoctl @ 0x14019C910 (NvmeAdapterStorageNotificationGetInfoIoctl.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeAdapterStorageQueryProperty @ 0x14019D454 (NvmeAdapterStorageQueryProperty.c)
 *     NvmeAdapterStorageTestErrorInjectionIoctl @ 0x14019D940 (NvmeAdapterStorageTestErrorInjectionIoctl.c)
 */

__int64 __fastcall NvmeAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r15d
  unsigned int v8; // esi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r12
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // si
  char v19; // r11
  char v20; // r13
  char *v21; // r11
  unsigned int v22; // r15d
  unsigned __int64 v23; // r14
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // esi
  unsigned __int64 v35; // rcx
  unsigned __int8 *v36; // rdx
  int v37; // eax
  int *v38; // rax
  const EVENT_DESCRIPTOR *v39; // rdx
  unsigned __int64 v40; // rdx
  _BYTE *v41; // r9
  unsigned __int8 v42; // r10
  char v43; // r12
  char v44; // r13
  char v45; // r11
  char *v46; // r11
  unsigned int v47; // r13d
  unsigned __int64 v48; // r15
  __int64 v49; // r8
  int v50; // ecx
  char v51; // r15
  char v52; // cl
  char v53; // r8
  _BYTE *v54; // rax
  unsigned int v55; // eax
  char v56; // al
  unsigned int v57; // esi
  unsigned int v58; // esi
  unsigned int v59; // esi
  unsigned int v60; // esi
  unsigned int v61; // esi
  unsigned int v62; // esi
  unsigned int v63; // esi
  unsigned int v64; // esi
  unsigned int AuthenticationKeys; // eax
  unsigned int InfoIoctl; // eax
  unsigned __int8 v67; // r10
  int v68; // eax
  char *v69; // r11
  unsigned int v70; // r13d
  unsigned __int64 v71; // r15
  __int64 v72; // r8
  int v73; // ecx
  char v74; // cl
  unsigned int v75; // eax
  unsigned int v76; // r13d
  unsigned __int64 v77; // r15
  int v78; // ecx
  unsigned int v79; // esi
  unsigned int v80; // esi
  unsigned int v81; // esi
  unsigned int v82; // esi
  unsigned int v83; // esi
  unsigned int v84; // esi
  unsigned int v85; // esi
  unsigned int v86; // esi
  unsigned int v87; // esi
  unsigned int v88; // esi
  unsigned int v89; // esi
  unsigned int v90; // esi
  unsigned int v91; // esi
  unsigned int v92; // esi
  unsigned int v93; // esi
  unsigned int v94; // esi
  unsigned int v95; // esi
  unsigned int v96; // esi
  unsigned int v97; // esi
  unsigned int v98; // esi
  unsigned int v99; // esi
  unsigned int v100; // esi
  unsigned int v101; // esi
  unsigned int v102; // esi
  unsigned int v103; // r13d
  unsigned __int64 v104; // r15
  int v105; // ecx
  __int64 v106; // [rsp+20h] [rbp-59h]
  __int64 v107; // [rsp+28h] [rbp-51h]
  __int64 v108; // [rsp+30h] [rbp-49h]
  char v109; // [rsp+60h] [rbp-19h] BYREF
  char v110; // [rsp+61h] [rbp-18h]
  char v111; // [rsp+62h] [rbp-17h]
  char v112; // [rsp+63h] [rbp-16h]
  unsigned int v113; // [rsp+64h] [rbp-15h]
  unsigned int v114; // [rsp+68h] [rbp-11h]
  GUID v115; // [rsp+70h] [rbp-9h] BYREF
  GUID v116; // [rsp+80h] [rbp+7h] BYREF

  v109 = 1;
  v116 = 0LL;
  v4 = NvmeAdapterAcquireRemoveLock(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  v7 = v4;
  v113 = v4;
  v8 = *(_DWORD *)(v5 + 24);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v116);
    if ( (byte_140171462 & 2) != 0 )
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        &EventIOCTL,
        &v116,
        a2,
        **(unsigned __int8 **)(a2 + 184),
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        v8);
  }
  if ( v7 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 592) )
      goto LABEL_78;
    if ( v8 > 0x2D1CCC )
    {
      if ( v8 != 3002880 && v8 != 3003328 && v8 != 3005444 && v8 != 3005448 )
      {
LABEL_78:
        if ( RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) && NvmeAdapterAttemptQueueIrpForDfxPowerDown(a1, a2, v8) )
        {
          v34 = 259;
          goto LABEL_328;
        }
        if ( v8 > 0x2DDC08 )
        {
          if ( v8 <= 0x620038 )
          {
            if ( v8 == 6422584 )
            {
              AuthenticationKeys = NvmeAdapterGetAuthenticationKeys(a1, a2);
              goto LABEL_167;
            }
            v87 = v8 - 3325952;
            if ( !v87 || (v88 = v87 - 56) == 0 )
            {
              AuthenticationKeys = RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
              goto LABEL_167;
            }
            v89 = v88 - 3096520;
            if ( !v89 )
            {
              AuthenticationKeys = NvmeAdapterGetHostGateways(a1, a2);
              goto LABEL_167;
            }
            v90 = v89 - 4;
            if ( !v90 )
            {
              AuthenticationKeys = NvmeAdapterGetHostGatewayByHandle(a1, a2);
              goto LABEL_167;
            }
            v91 = v90 - 8;
            if ( !v91 )
            {
              AuthenticationKeys = NvmeAdapterGetSubsystemPorts(a1, a2);
              goto LABEL_167;
            }
            v92 = v91 - 12;
            if ( !v92 )
            {
              AuthenticationKeys = NvmeAdapterGetControllers(a1, a2);
              goto LABEL_167;
            }
            v93 = v92 - 20;
            if ( !v93 )
            {
              AuthenticationKeys = NvmeAdapterGetHostInformation(a1, a2);
              goto LABEL_167;
            }
            v94 = v93 - 4;
            if ( !v94 )
            {
              AuthenticationKeys = NvmeAdapterGetNamespaces(a1, a2);
              goto LABEL_167;
            }
            if ( v94 == 4 )
            {
              AuthenticationKeys = NvmeAdapterGetNvmeControllerDiscoveryEntries(a1, a2);
              goto LABEL_167;
            }
            goto LABEL_296;
          }
          v95 = v8 - 6455312;
          if ( v95 )
          {
            v96 = v95 - 4;
            if ( !v96 )
            {
              AuthenticationKeys = NvmeAdapterRemoveSubsystemPort(a1, a2);
              goto LABEL_167;
            }
            v97 = v96 - 8;
            if ( !v97 )
            {
              AuthenticationKeys = NvmeAdapterConnectController(a1, a2);
              goto LABEL_167;
            }
            v98 = v97 - 4;
            if ( !v98 )
            {
              AuthenticationKeys = NvmeAdapterDisconnectController(a1, a2);
              goto LABEL_167;
            }
            v99 = v98 - 4;
            if ( !v99 )
            {
              AuthenticationKeys = NvmeAdapterAddController(a1, a2);
              goto LABEL_167;
            }
            v100 = v99 - 4;
            if ( !v100 )
            {
              AuthenticationKeys = NvmeAdapterRemoveController(a1, a2);
              goto LABEL_167;
            }
            v101 = v100 - 20;
            if ( !v101 )
            {
              AuthenticationKeys = NvmeAdapterAddAuthenticationKey(a1, a2);
              goto LABEL_167;
            }
            v102 = v101 - 4;
            if ( !v102 )
            {
              AuthenticationKeys = NvmeAdapterCreateAuthenticationKey(a1, a2);
              goto LABEL_167;
            }
            if ( v102 == 4 )
            {
              AuthenticationKeys = NvmeAdapterDeleteAuthenticationKey(a1, a2);
              goto LABEL_167;
            }
            goto LABEL_296;
          }
          InfoIoctl = NvmeAdapterAddSubsystemPort(a1, a2);
LABEL_327:
          v34 = InfoIoctl;
          if ( !v109 )
            return v34;
LABEL_328:
          NvmeAdapterReleaseRemoveLock(a1);
          return v34;
        }
        if ( v8 == 3005448 )
        {
          InfoIoctl = NvmeAdapterFirmwareActivateIoctl(a1, *(_QWORD *)(a1 + 1136), a2, 0LL, &v109);
          goto LABEL_327;
        }
        if ( v8 > 0x2D1CCC )
        {
          v79 = v8 - 2968604;
          if ( !v79 )
          {
            AuthenticationKeys = StorageGetSystemFeatureSupportIoctl((PIRP)a2);
            goto LABEL_167;
          }
          v80 = v79 - 1068;
          if ( !v80 )
          {
            AuthenticationKeys = NvmeAdapterStorageNotificationGetInfoIoctl(a1, a2);
            goto LABEL_167;
          }
          v81 = v80 - 17332;
          if ( v81 )
          {
            v82 = v81 - 15424;
            if ( !v82 )
            {
              AuthenticationKeys = NvmeAdapterStorageTestErrorInjectionIoctl(v32, a2);
              goto LABEL_167;
            }
            v83 = v82 - 8;
            if ( !v83 )
            {
              AuthenticationKeys = NvmeAdapterStorageNotificationConfigureIoctl(a1, a2);
              goto LABEL_167;
            }
            v84 = v83 - 12;
            if ( !v84 )
            {
              AuthenticationKeys = NvmeAdapterMiniportPassthroughRequestIoctl(a1, 0LL, a2);
              goto LABEL_167;
            }
            v85 = v84 - 432;
            if ( v85 )
            {
              v86 = v85 - 448;
              if ( v86 )
              {
                if ( v86 != 2116 )
                  goto LABEL_296;
                InfoIoctl = NvmeAdapterFirmwareDownloadIoctl(a1, *(_QWORD *)(a1 + 1136), a2, &v109);
              }
              else
              {
                InfoIoctl = NvmeAdapterStorageProtocolCommandIoctl(a1, *(_QWORD *)(a1 + 1136), a2, &v109);
              }
            }
            else
            {
              InfoIoctl = NvmeAdapterSetTemperatureThresholdIoctl(a1, a2, &v109);
            }
          }
          else
          {
            InfoIoctl = NvmeAdapterStorageSetProperty(a1, a2, &v109);
          }
          goto LABEL_327;
        }
        if ( v8 == 2956492 )
        {
          AuthenticationKeys = NvmeAdapterSetLedState((__int64 *)a1, a2);
          goto LABEL_167;
        }
        v57 = v8 - 315396;
        if ( v57 )
        {
          v58 = v57 - 16;
          if ( !v58 )
          {
LABEL_172:
            if ( FeatureFixTRIMAddSCSIPassthrough )
            {
              LOBYTE(v33) = 1;
              goto LABEL_174;
            }
            v9 = StorEtwLoggingEnabled == 0;
            v34 = -1073741637;
            *(_DWORD *)(a2 + 48) = -1073741637;
            *(_BYTE *)(a2 + 141) = -84;
            if ( v9 )
              goto LABEL_152;
            v115 = 0LL;
            IoGetActivityIdIrp(a2, &v115);
            v36 = *(unsigned __int8 **)(a2 + 184);
            if ( *v36 == 14 )
              goto LABEL_149;
            v37 = *v36 - 15;
            if ( *v36 == 15 )
            {
              if ( byte_140171461 >= 0 )
                goto LABEL_152;
              v40 = *((_QWORD *)v36 + 1);
              v41 = 0LL;
              v110 = 0;
              v67 = 0;
              v43 = 0;
              v109 = 0;
              v44 = 0;
              v111 = 0;
              v68 = *(unsigned __int8 *)(v40 + 2);
              v45 = 0;
              if ( (_BYTE)v68 == 40 )
              {
                v69 = 0LL;
                v112 = 0;
                if ( *(_DWORD *)(v40 + 20) )
                  goto LABEL_152;
                v70 = 0;
                v113 = *(_DWORD *)(v40 + 56);
                if ( v113 )
                {
                  while ( 1 )
                  {
                    v35 = *(unsigned int *)(v40 + 4LL * v70 + 120);
                    if ( (unsigned int)v35 >= 0x80 )
                    {
                      v71 = *(unsigned int *)(v40 + 16);
                      if ( (unsigned int)v35 < (unsigned int)v71 )
                      {
                        v72 = (unsigned int)v35;
                        v73 = *(_DWORD *)(v40 + v35) - 64;
                        if ( v73 )
                        {
                          v35 = (unsigned int)(v73 - 1);
                          if ( (_DWORD)v35 )
                          {
                            if ( (_DWORD)v35 == 1 )
                            {
                              v35 = v72 + 40;
                              if ( v72 + 40 <= v71 )
                                goto LABEL_188;
                            }
                          }
                          else
                          {
                            v35 = v72 + 56;
                            if ( v72 + 56 <= v71 )
                            {
                              v112 = 1;
                              if ( *(_BYTE *)(v40 + v72 + 10) )
                                v69 = (char *)(v72 + v40 + 24);
                              v41 = *(_BYTE **)(v40 + v72 + 16);
                              v67 = *(_BYTE *)(v40 + v72 + 9);
                              v110 = *(_BYTE *)(v40 + v72 + 8);
                            }
                          }
                        }
                        else
                        {
                          v35 = v72 + 40;
                          if ( v72 + 40 <= v71 )
                            goto LABEL_202;
                        }
                        if ( v112 )
                          goto LABEL_199;
                      }
                    }
                    if ( ++v70 >= v113 )
                      goto LABEL_199;
                  }
                }
                goto LABEL_205;
              }
              goto LABEL_206;
            }
LABEL_88:
            if ( v37 != 12 )
              goto LABEL_152;
            if ( v36[1] == 7 && !*((_DWORD *)v36 + 2) )
            {
              if ( (byte_140171462 & 0x40) != 0 )
              {
                v38 = *(int **)(a2 + 56);
                if ( v38 )
                  v6 = *v38;
                LODWORD(v107) = *(_DWORD *)(a2 + 48);
                LODWORD(v106) = v6;
                McTemplateK0pqd_EtwWriteTransfer(v35, (__int64)v36, &v115, a2, v106, v107);
              }
              goto LABEL_152;
            }
            if ( (byte_140171462 & 0x20) == 0 )
              goto LABEL_152;
            v39 = &EventPnpRequestComplete;
LABEL_151:
            LODWORD(v106) = *(_DWORD *)(a2 + 48);
            McTemplateK0pd_EtwWriteTransfer(v35, v39, &v115, a2, v106);
            goto LABEL_152;
          }
          v59 = v58 - 48;
          if ( v59 )
          {
            v60 = v59 - 4;
            if ( v60 )
            {
              v61 = v60 - 2637884;
              if ( !v61 )
              {
                AuthenticationKeys = NvmeAdapterGetDeviceNumberEx(a1, a2);
                goto LABEL_167;
              }
              v62 = v61 - 884;
              if ( !v62 )
              {
                AuthenticationKeys = NvmeAdapterStorageInternalQueryPropertyIoctl(a1, a2);
                goto LABEL_167;
              }
              v63 = v62 - 8;
              if ( v63 )
              {
                v64 = v63 - 2048;
                if ( v64 )
                {
                  if ( v64 == 148 )
                  {
                    AuthenticationKeys = NvmeAdapterPowerCapIoctl(a1, a2, v33);
LABEL_167:
                    v34 = AuthenticationKeys;
                    goto LABEL_328;
                  }
LABEL_296:
                  v9 = StorEtwLoggingEnabled == 0;
                  v34 = -1073741637;
                  *(_DWORD *)(a2 + 48) = -1073741637;
                  *(_BYTE *)(a2 + 141) = -84;
                  if ( v9 )
                    goto LABEL_152;
                  v115 = 0LL;
                  IoGetActivityIdIrp(a2, &v115);
                  v36 = *(unsigned __int8 **)(a2 + 184);
                  if ( *v36 != 14 )
                  {
                    v37 = *v36 - 15;
                    if ( *v36 == 15 )
                    {
                      if ( byte_140171461 >= 0 )
                        goto LABEL_152;
                      v40 = *((_QWORD *)v36 + 1);
                      v41 = 0LL;
                      v110 = 0;
                      v67 = 0;
                      v43 = 0;
                      v109 = 0;
                      v44 = 0;
                      v111 = 0;
                      v68 = *(unsigned __int8 *)(v40 + 2);
                      v45 = 0;
                      if ( (_BYTE)v68 == 40 )
                      {
                        v69 = 0LL;
                        v112 = 0;
                        if ( *(_DWORD *)(v40 + 20) )
                          goto LABEL_152;
                        v103 = 0;
                        v113 = *(_DWORD *)(v40 + 56);
                        if ( v113 )
                        {
                          while ( 1 )
                          {
                            v35 = *(unsigned int *)(v40 + 4LL * v103 + 120);
                            if ( (unsigned int)v35 >= 0x80 )
                            {
                              v104 = *(unsigned int *)(v40 + 16);
                              if ( (unsigned int)v35 < (unsigned int)v104 )
                              {
                                v72 = (unsigned int)v35;
                                v105 = *(_DWORD *)(v40 + v35) - 64;
                                if ( v105 )
                                {
                                  v35 = (unsigned int)(v105 - 1);
                                  if ( (_DWORD)v35 )
                                  {
                                    if ( (_DWORD)v35 == 1 )
                                    {
                                      v35 = v72 + 40;
                                      if ( v72 + 40 <= v104 )
                                        goto LABEL_188;
                                    }
                                  }
                                  else
                                  {
                                    v35 = v72 + 56;
                                    if ( v72 + 56 <= v104 )
                                    {
                                      v112 = 1;
                                      if ( *(_BYTE *)(v40 + v72 + 10) )
                                        v69 = (char *)(v72 + v40 + 24);
                                      v41 = *(_BYTE **)(v40 + v72 + 16);
                                      v67 = *(_BYTE *)(v40 + v72 + 9);
                                      v110 = *(_BYTE *)(v40 + v72 + 8);
                                    }
                                  }
                                }
                                else
                                {
                                  v35 = v72 + 40;
                                  if ( v72 + 40 <= v104 )
                                    goto LABEL_202;
                                }
                                if ( v112 )
                                  goto LABEL_199;
                              }
                            }
                            if ( ++v103 >= v113 )
                              goto LABEL_199;
                          }
                        }
                        goto LABEL_205;
                      }
                      goto LABEL_206;
                    }
                    goto LABEL_88;
                  }
LABEL_149:
                  if ( (byte_140171462 & 8) == 0 )
                    goto LABEL_152;
                  v39 = &EventNonReadWriteRequestComplete;
                  goto LABEL_151;
                }
                InfoIoctl = NvmeAdapterFirmwareGetInfoIoctl(a1, *(_QWORD *)(a1 + 1136), a2, &v109);
              }
              else
              {
                InfoIoctl = NvmeAdapterStorageQueryProperty(a1, a2, &v109);
              }
              goto LABEL_327;
            }
            goto LABEL_172;
          }
        }
        if ( !FeatureFixTRIMAddSCSIPassthrough )
        {
          v9 = StorEtwLoggingEnabled == 0;
          v34 = -1073741637;
          *(_DWORD *)(a2 + 48) = -1073741637;
          *(_BYTE *)(a2 + 141) = -84;
          if ( v9 )
            goto LABEL_152;
          v115 = 0LL;
          IoGetActivityIdIrp(a2, &v115);
          v36 = *(unsigned __int8 **)(a2 + 184);
          if ( *v36 != 14 )
          {
            v37 = *v36 - 15;
            if ( *v36 == 15 )
            {
              if ( byte_140171461 >= 0 )
                goto LABEL_152;
              v40 = *((_QWORD *)v36 + 1);
              v41 = 0LL;
              v110 = 0;
              v67 = 0;
              v43 = 0;
              v109 = 0;
              v44 = 0;
              v111 = 0;
              v68 = *(unsigned __int8 *)(v40 + 2);
              v45 = 0;
              if ( (_BYTE)v68 == 40 )
              {
                v69 = 0LL;
                v112 = 0;
                if ( *(_DWORD *)(v40 + 20) )
                  goto LABEL_152;
                v76 = 0;
                v113 = *(_DWORD *)(v40 + 56);
                if ( v113 )
                {
                  while ( 1 )
                  {
                    v35 = *(unsigned int *)(v40 + 4LL * v76 + 120);
                    if ( (unsigned int)v35 >= 0x80 )
                    {
                      v77 = *(unsigned int *)(v40 + 16);
                      if ( (unsigned int)v35 < (unsigned int)v77 )
                      {
                        v72 = (unsigned int)v35;
                        v78 = *(_DWORD *)(v40 + v35) - 64;
                        if ( v78 )
                        {
                          v35 = (unsigned int)(v78 - 1);
                          if ( (_DWORD)v35 )
                          {
                            if ( (_DWORD)v35 == 1 )
                            {
                              v35 = v72 + 40;
                              if ( v72 + 40 <= v77 )
                              {
LABEL_188:
                                if ( *(_DWORD *)(v40 + v72 + 12) )
                                  v69 = (char *)(v72 + v40 + 32);
                                v41 = *(_BYTE **)(v40 + v72 + 24);
                                goto LABEL_191;
                              }
                            }
                          }
                          else
                          {
                            v35 = v72 + 56;
                            if ( v72 + 56 <= v77 )
                            {
                              v112 = 1;
                              if ( *(_BYTE *)(v40 + v72 + 10) )
                                v69 = (char *)(v72 + v40 + 24);
                              v41 = *(_BYTE **)(v40 + v72 + 16);
                              v67 = *(_BYTE *)(v40 + v72 + 9);
                              v110 = *(_BYTE *)(v40 + v72 + 8);
                            }
                          }
                        }
                        else
                        {
                          v35 = v72 + 40;
                          if ( v72 + 40 <= v77 )
                          {
LABEL_202:
                            if ( *(_BYTE *)(v40 + v72 + 10) )
                              v69 = (char *)(v72 + v40 + 24);
                            v41 = *(_BYTE **)(v40 + v72 + 16);
LABEL_191:
                            v51 = *(_BYTE *)(v40 + v72 + 8);
                            v67 = *(_BYTE *)(v40 + v72 + 9);
LABEL_200:
                            if ( v69 )
                            {
                              v74 = *v69;
                              v44 = 0;
                              v45 = 0;
                              goto LABEL_207;
                            }
                            goto LABEL_152;
                          }
                        }
                        if ( v112 )
                          goto LABEL_199;
                      }
                    }
                    if ( ++v76 >= v113 )
                    {
LABEL_199:
                      v51 = v110;
                      goto LABEL_200;
                    }
                  }
                }
LABEL_205:
                v51 = 0;
                goto LABEL_200;
              }
LABEL_206:
              v74 = *(_BYTE *)(v40 + 72);
              v41 = *(_BYTE **)(v40 + 32);
              v67 = *(_BYTE *)(v40 + 11);
              v51 = *(_BYTE *)(v40 + 4);
              if ( v68 )
                goto LABEL_152;
LABEL_207:
              LOBYTE(v35) = v74 - 8;
              if ( (v35 & 0x5D) == 0 )
              {
                v53 = *(_BYTE *)(v40 + 3);
                if ( v53 == 1 || !v41 || !v67 )
                  goto LABEL_147;
                LOBYTE(v40) = 0;
                v35 = (unsigned __int64)&v41[v67];
                v54 = v41 + 8;
                if ( (unsigned __int8)((*v41 & 0x7F) - 114) > 1u )
                {
                  if ( (unsigned __int64)v54 <= v35 )
                  {
                    v43 = v41[2] & 0xF;
                    v75 = v67;
                    if ( (unsigned int)(unsigned __int8)v41[7] + 8 <= v67 )
                      v75 = (unsigned __int8)v41[7] + 8;
                    v35 = (unsigned __int64)(v41 + 13);
                    v40 = (unsigned __int64)&v41[v75];
                    if ( (unsigned __int64)(v41 + 13) > v40 )
                      v109 = 0;
                    else
                      v109 = v41[12];
                    if ( (unsigned __int64)(v41 + 14) > v40 )
                      v111 = 0;
                    else
                      v111 = *(_BYTE *)v35;
                    LOBYTE(v40) = 1;
                  }
                  v44 = v109;
                  goto LABEL_142;
                }
                goto LABEL_143;
              }
LABEL_152:
              IofCompleteRequest((PIRP)a2, 0);
              goto LABEL_328;
            }
            goto LABEL_88;
          }
          goto LABEL_149;
        }
        v33 = 0LL;
LABEL_174:
        AuthenticationKeys = NvmeAdapterPassThrough(a1, a2, v33);
        goto LABEL_167;
      }
    }
    else if ( v8 != 2956492 && v8 != 315396 && v8 != 315412 && v8 != 315460 && v8 != 315464 && v8 != 2956288 )
    {
      goto LABEL_78;
    }
    v9 = StorEtwLoggingEnabled == 0;
    v34 = -1073741637;
    *(_DWORD *)(a2 + 48) = -1073741637;
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_BYTE *)(a2 + 141) = -84;
    if ( v9 )
      goto LABEL_152;
    v115 = 0LL;
    IoGetActivityIdIrp(a2, &v115);
    v36 = *(unsigned __int8 **)(a2 + 184);
    if ( *v36 == 14 )
      goto LABEL_149;
    v37 = *v36 - 15;
    if ( *v36 == 15 )
    {
      if ( byte_140171461 >= 0 )
        goto LABEL_152;
      v40 = *((_QWORD *)v36 + 1);
      v41 = 0LL;
      v109 = 0;
      v42 = 0;
      v43 = 0;
      v110 = 0;
      v44 = 0;
      v111 = 0;
      v45 = 0;
      if ( *(_BYTE *)(v40 + 2) != 40 )
      {
        v52 = *(_BYTE *)(v40 + 72);
        v41 = *(_BYTE **)(v40 + 32);
        v42 = *(_BYTE *)(v40 + 11);
        v51 = *(_BYTE *)(v40 + 4);
        if ( *(_BYTE *)(v40 + 2) )
          goto LABEL_152;
        goto LABEL_126;
      }
      v46 = 0LL;
      v112 = 0;
      if ( *(_DWORD *)(v40 + 20) )
        goto LABEL_152;
      v47 = 0;
      v113 = *(_DWORD *)(v40 + 56);
      if ( !v113 )
      {
        v51 = 0;
        goto LABEL_119;
      }
      while ( 1 )
      {
        v35 = *(unsigned int *)(v40 + 4LL * v47 + 120);
        if ( (unsigned int)v35 >= 0x80 )
        {
          v48 = *(unsigned int *)(v40 + 16);
          if ( (unsigned int)v35 < (unsigned int)v48 )
          {
            v49 = (unsigned int)v35;
            v50 = *(_DWORD *)(v35 + v40) - 64;
            if ( v50 )
            {
              v35 = (unsigned int)(v50 - 1);
              if ( (_DWORD)v35 )
              {
                if ( (_DWORD)v35 == 1 )
                {
                  v35 = v49 + 40;
                  if ( v49 + 40 <= v48 )
                  {
                    if ( *(_DWORD *)(v49 + v40 + 12) )
                      v46 = (char *)(v49 + v40 + 32);
                    v41 = *(_BYTE **)(v49 + v40 + 24);
                    goto LABEL_110;
                  }
                }
              }
              else
              {
                v35 = v49 + 56;
                if ( v49 + 56 <= v48 )
                {
                  v112 = 1;
                  if ( *(_BYTE *)(v49 + v40 + 10) )
                    v46 = (char *)(v49 + v40 + 24);
                  v41 = *(_BYTE **)(v49 + v40 + 16);
                  v42 = *(_BYTE *)(v49 + v40 + 9);
                  v109 = *(_BYTE *)(v49 + v40 + 8);
                }
              }
            }
            else
            {
              v35 = v49 + 40;
              if ( v49 + 40 <= v48 )
              {
                if ( *(_BYTE *)(v49 + v40 + 10) )
                  v46 = (char *)(v49 + v40 + 24);
                v41 = *(_BYTE **)(v49 + v40 + 16);
LABEL_110:
                v51 = *(_BYTE *)(v49 + v40 + 8);
                v42 = *(_BYTE *)(v49 + v40 + 9);
LABEL_119:
                if ( !v46 )
                  goto LABEL_152;
                v52 = *v46;
                v44 = 0;
                v45 = 0;
LABEL_126:
                LOBYTE(v35) = v52 - 8;
                if ( (v35 & 0x5D) != 0 )
                  goto LABEL_152;
                v53 = *(_BYTE *)(v40 + 3);
                if ( v53 == 1 || !v41 || !v42 )
                  goto LABEL_147;
                LOBYTE(v40) = 0;
                v35 = (unsigned __int64)&v41[v42];
                v54 = v41 + 8;
                if ( (unsigned __int8)((*v41 & 0x7F) - 114) > 1u )
                {
                  if ( (unsigned __int64)v54 <= v35 )
                  {
                    v43 = v41[2] & 0xF;
                    v55 = v42;
                    if ( (unsigned int)(unsigned __int8)v41[7] + 8 <= v42 )
                      v55 = (unsigned __int8)v41[7] + 8;
                    v35 = (unsigned __int64)(v41 + 13);
                    v40 = (unsigned __int64)&v41[v55];
                    if ( (unsigned __int64)(v41 + 13) > v40 )
                      v110 = 0;
                    else
                      v110 = v41[12];
                    if ( (unsigned __int64)(v41 + 14) > v40 )
                      v111 = 0;
                    else
                      v111 = *(_BYTE *)v35;
                    LOBYTE(v40) = 1;
                  }
                  v44 = v110;
LABEL_142:
                  v45 = v111;
LABEL_145:
                  if ( (_BYTE)v40 )
                  {
                    LOBYTE(v6) = v44;
                    v56 = v45;
LABEL_148:
                    LOBYTE(v108) = v51;
                    LOBYTE(v107) = v53;
                    LODWORD(v106) = *(_DWORD *)(a2 + 48);
                    McTemplateK0pduuuuup_EtwWriteTransfer(v35, v40, &v115, a2, v106, v107, v108, v43, v6, v56, a2);
                    goto LABEL_152;
                  }
LABEL_147:
                  v43 = 0;
                  v56 = 0;
                  goto LABEL_148;
                }
LABEL_143:
                if ( (unsigned __int64)v54 <= v35 )
                {
                  LOBYTE(v40) = 1;
                  v44 = v41[2];
                  v43 = v41[1] & 0xF;
                  v45 = v41[3];
                }
                goto LABEL_145;
              }
            }
            if ( v112 )
              goto LABEL_118;
          }
        }
        if ( ++v47 >= v113 )
        {
LABEL_118:
          v51 = v109;
          goto LABEL_119;
        }
      }
    }
    goto LABEL_88;
  }
  v9 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v9 )
    goto LABEL_69;
  v115 = 0LL;
  IoGetActivityIdIrp(a2, &v115);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_69;
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v6 = *v12;
        LODWORD(v107) = *(_DWORD *)(a2 + 48);
        LODWORD(v106) = v6;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v115, a2, v106, v107);
      }
      goto LABEL_69;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_69;
    v13 = &EventPnpRequestComplete;
LABEL_68:
    LODWORD(v106) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v115, a2, v106);
    goto LABEL_69;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_69;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v109 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v21 = 0LL;
  v110 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_69;
  v22 = 0;
  v114 = *(_DWORD *)(v14 + 56);
  if ( !v114 )
    goto LABEL_42;
  while ( 1 )
  {
    v10 = *(unsigned int *)(v14 + 4LL * v22 + 120);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v23 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v10 < (unsigned int)v23 )
        break;
    }
LABEL_36:
    if ( ++v22 >= v114 )
      goto LABEL_42;
  }
  v24 = (unsigned int)v10;
  v25 = *(_DWORD *)(v10 + v14) - 64;
  if ( v25 )
  {
    v10 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        v10 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v14 + 12) )
            v21 = (char *)(v24 + v14 + 32);
          v16 = *(_BYTE **)(v24 + v14 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v10 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v110 = 1;
        if ( *(_BYTE *)(v24 + v14 + 10) )
          v21 = (char *)(v24 + v14 + 24);
        v15 = *(_BYTE *)(v24 + v14 + 8);
        v16 = *(_BYTE **)(v24 + v14 + 16);
        v17 = *(_BYTE *)(v24 + v14 + 9);
      }
    }
    goto LABEL_35;
  }
  v10 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_35:
    if ( v110 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v24 + v14 + 10) )
    v21 = (char *)(v24 + v14 + 24);
  v16 = *(_BYTE **)(v24 + v14 + 16);
LABEL_41:
  v17 = *(_BYTE *)(v24 + v14 + 9);
  v15 = *(_BYTE *)(v24 + v14 + 8);
LABEL_42:
  if ( v21 )
  {
    v26 = *v21;
    v19 = 0;
LABEL_45:
    LOBYTE(v10) = v26 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v14 + 3);
      if ( v27 == 1 || !v16 || !v17 )
        goto LABEL_64;
      LOBYTE(v14) = 0;
      v10 = (unsigned __int64)&v16[v17];
      v28 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v10 )
        {
          v18 = v16[2] & 0xF;
          v29 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v29 = (unsigned __int8)v16[7] + 8;
          v10 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v29];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v109 = 0;
          else
            v109 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *(_BYTE *)v10;
          LOBYTE(v14) = 1;
        }
        v19 = v109;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v6) = v19;
        v30 = v20;
      }
      else
      {
LABEL_64:
        v18 = 0;
        v30 = 0;
      }
      LOBYTE(v108) = v15;
      LOBYTE(v107) = v27;
      LODWORD(v106) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v115, a2, v106, v107, v108, v18, v6, v30, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return v113;
}
