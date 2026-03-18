/*
 * XREFs of _PnpGetObjectProperty @ 0x1408CDFD0
 * Callers:
 *     PiRebalanceOptOut @ 0x1405A9664 (PiRebalanceOptOut.c)
 *     PipGetDeviceObjectLocation @ 0x14071BA24 (PipGetDeviceObjectLocation.c)
 *     PnpLogDeviceRequiresReboot @ 0x14072337C (PnpLogDeviceRequiresReboot.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407239C8 (PnpUpdateRebootRequiredReason.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x1407268E8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListInitEnumCallback @ 0x140726E80 (PiDmListInitEnumCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140727980 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x140729EB8 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14072A0E4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140736F54 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140737D20 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbRegisterNode @ 0x140738408 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodes @ 0x140739ABC (PiDrvDbSetupNodes.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x14081A040 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081E810 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14081F244 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14085C13C (PiUEventProcessBroadcastNotifications.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B42D4 (IopProcessSetInterfaceState.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408B5D94 (PnpGetDeviceInterfacePropertyData.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1408B6638 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B7090 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B84A0 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B97F8 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408BC37C (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C5D70 (_CmGetDeviceRegPropWorker.c)
 *     IopGetDeviceInterfaces @ 0x1408C8470 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408D0AE0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceParent @ 0x140926998 (_CmGetDeviceParent.c)
 *     PnpAssignResourcesToDevices @ 0x14098DA30 (PnpAssignResourcesToDevices.c)
 *     _CmUpdateDevicePanelInterface @ 0x14098EC58 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x14098EE00 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14098F8FC (_CmQueryDevicePanelPldProperty.c)
 *     PipSetDevNodeProblem @ 0x14098FC24 (PipSetDevNodeProblem.c)
 *     PiAuditDeviceStart @ 0x140990640 (PiAuditDeviceStart.c)
 *     PiDevCfgFindDeviceDriver @ 0x140995E90 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409978B4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x14099AE24 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     _CmDeleteDeviceWorker @ 0x1409B2CB8 (_CmDeleteDeviceWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409B6A7C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409C5A04 (PnpCallDriverQueryServiceHelper.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PiUEventDeviceNeedsInstall @ 0x1409ED440 (PiUEventDeviceNeedsInstall.c)
 *     PiUEventCacheObjectProperties @ 0x1409EF508 (PiUEventCacheObjectProperties.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409FD9D0 (PiPnpRtlServiceFilterCallback.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A0CE90 (PpForEachDeviceInstanceDriver.c)
 *     PnpGetDevicePropertyData @ 0x140A12000 (PnpGetDevicePropertyData.c)
 *     PiDcHandleDeviceEvent @ 0x140A424AC (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140A4267C (PiDcHandleInterfaceEvent.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A427EC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiAuditDeviceOperation @ 0x140A6F4C0 (PiAuditDeviceOperation.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A73D70 (_CmMatchLastKnownParentCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A79530 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140A7DF0C (PiDevCfgQueryDriverConfiguration.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A80898 (_CmGetDeviceCompoundFiltersWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A9E6E0 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140AAF1F8 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140AB1650 (PnpGetDeviceInstancePropertyData.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB65B0 (_CmGetParentDeviceContainerId.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB97D4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140ABCB94 (IopDeviceObjectFromSymbolicName.c)
 *     PiCMUnregisterDeviceInterface @ 0x140AC00A8 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140424CB0 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _PnpValidatePropertyData @ 0x1408B8DD0 (_PnpValidatePropertyData.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C6550 (_PnpRegQueryValueIndirect.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C7B60 (_RegRtlOpenKeyTransacted.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CCC00 (_PnpDispatchDeviceInterface.c)
 *     _PnpOpenObjectRegKey @ 0x1408CD438 (_PnpOpenObjectRegKey.c)
 *     _PnpDispatchDevice @ 0x1408CDBB0 (_PnpDispatchDevice.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CE6A0 (PiPnpRtlObjectActionCallback.c)
 *     DrvDbDispatchDriverPackage @ 0x1409240F0 (DrvDbDispatchDriverPackage.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetObjectProperty(
        _QWORD *a1,
        WCHAR *a2,
        unsigned int a3,
        void *a4,
        const WCHAR *a5,
        __int64 a6,
        _DWORD *a7,
        const wchar_t *a8,
        ULONG a9,
        __int64 a10,
        int a11)
{
  _DWORD *v11; // r14
  __int64 v12; // r15
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r12
  int v17; // eax
  _DWORD *v19; // r9
  const wchar_t *v20; // rdx
  ULONG v21; // ebx
  __int64 (__fastcall *v22)(_DWORD, _DWORD, _DWORD, _DWORD, __int64); // rax
  _DWORD *v23; // rbx
  int v24; // eax
  int v25; // esi
  int v26; // eax
  const WCHAR *v27; // rax
  __int64 v28; // rcx
  wchar_t *v29; // rax
  wchar_t *Pool2; // rbx
  unsigned int v31; // edi
  int v32; // edi
  __int64 v33; // rax
  int *v34; // rbx
  ULONG *v35; // r15
  __int64 v36; // rcx
  __int64 (__fastcall *v37)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *); // r10
  ULONG v38; // r14d
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  __int64 v42; // [rsp+90h] [rbp-80h] BYREF
  int *v43; // [rsp+98h] [rbp-78h]
  _DWORD *v44; // [rsp+A0h] [rbp-70h]
  ULONG v45; // [rsp+A8h] [rbp-68h] BYREF
  ULONG v46; // [rsp+ACh] [rbp-64h]
  unsigned int v47; // [rsp+B0h] [rbp-60h]
  HANDLE v48; // [rsp+B8h] [rbp-58h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+C0h] [rbp-50h]
  HANDLE v50; // [rsp+C8h] [rbp-48h]
  const WCHAR *v51; // [rsp+D0h] [rbp-40h]
  __int64 v52; // [rsp+D8h] [rbp-38h]
  HANDLE Handle; // [rsp+E0h] [rbp-30h] BYREF
  WCHAR *v54; // [rsp+E8h] [rbp-28h]
  _QWORD v55[2]; // [rsp+F0h] [rbp-20h] BYREF
  HANDLE v56; // [rsp+100h] [rbp-10h]
  const WCHAR *v57; // [rsp+108h] [rbp-8h]
  __int64 v58; // [rsp+110h] [rbp+0h]
  __int64 v59; // [rsp+118h] [rbp+8h]
  const wchar_t *v60; // [rsp+120h] [rbp+10h]
  ULONG v61; // [rsp+128h] [rbp+18h]
  int v62; // [rsp+12Ch] [rbp+1Ch]
  __int64 v63; // [rsp+130h] [rbp+20h]
  int v64; // [rsp+138h] [rbp+28h]
  int v65; // [rsp+13Ch] [rbp+2Ch]
  _QWORD v66[5]; // [rsp+140h] [rbp+30h] BYREF
  ULONG v67; // [rsp+168h] [rbp+58h]
  _DWORD *v68; // [rsp+170h] [rbp+60h]
  int v69; // [rsp+178h] [rbp+68h]
  wchar_t pszDest[48]; // [rsp+180h] [rbp+70h] BYREF
  wchar_t P[64]; // [rsp+1E0h] [rbp+D0h] BYREF

  v11 = a7;
  v12 = 0LL;
  v57 = a5;
  v15 = (int)a3;
  v16 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))a1[61];
  v54 = a2;
  v61 = a9;
  v47 = a3;
  v43 = a7;
  v55[0] = 0LL;
  v55[1] = 0LL;
  v62 = 0;
  v65 = 0;
  v56 = a4;
  v58 = a6;
  v59 = (__int64)a7;
  v60 = a8;
  v63 = a10;
  v64 = a11;
  if ( v16 )
  {
    if ( v16 == PiPnpRtlObjectActionCallback )
      v17 = PiPnpRtlObjectActionCallback(a1, a2, a3, 8LL, 1, v55);
    else
      v17 = guard_dispatch_icall_no_overrides(a1, a2, a3, 8LL);
    if ( v17 == -1073741822 )
    {
      v16 = 0LL;
    }
    else
    {
      if ( v17 == -1073741536 )
        return LODWORD(v55[0]);
      if ( v17 )
        return 3221225701LL;
    }
    v11 = (_DWORD *)v59;
    v43 = (int *)v59;
  }
  v19 = (_DWORD *)v63;
  v20 = v60;
  v52 = v58;
  HIDWORD(v42) = v64;
  v51 = v57;
  v50 = v56;
  v44 = (_DWORD *)v63;
  v46 = v61;
  psz = v60;
  Handle = 0LL;
  if ( !(_WORD)v64 )
  {
    if ( v60 )
    {
      v21 = v61;
      if ( !v61 )
        v20 = 0LL;
      psz = v20;
    }
    else
    {
      v21 = 0;
      v46 = 0;
    }
    *v11 = 0;
    *v19 = 0;
    memset_0(v66, 0, 0x40uLL);
    if ( (unsigned int)(v15 - 1) > 0xA )
    {
LABEL_63:
      v25 = -1073741811;
    }
    else
    {
      v22 = (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64))a1[v15 + 37];
      if ( v22 )
      {
        v66[0] = v50;
        v66[2] = v52;
        v66[4] = psz;
        v69 = HIDWORD(v42);
        v67 = v21;
        v23 = v44;
        v66[1] = v51;
        v66[3] = v11;
        v68 = v44;
        if ( (char *)v22 == (char *)PnpDispatchDevice )
        {
          v24 = PnpDispatchDevice((__int64)a1, a2, (unsigned int)v15, 8, v66);
        }
        else if ( (char *)v22 == (char *)PnpDispatchDeviceInterface )
        {
          v24 = PnpDispatchDeviceInterface(a1, a2, (unsigned int)v15, 8, v66);
        }
        else if ( v22 == DrvDbDispatchDriverPackage )
        {
          v24 = DrvDbDispatchDriverPackage((_DWORD)a1, (_DWORD)a2, v15, 8, (__int64)v66);
        }
        else
        {
          v24 = guard_dispatch_icall_no_overrides(a1, a2, (unsigned int)v15, 8LL);
        }
        v25 = v24;
        if ( v24 != -1073741802 )
          goto LABEL_19;
        if ( v50 )
          goto LABEL_33;
        v25 = PnpOpenObjectRegKey(a1, v54, v15, 33554433, 0, (__int64)&Handle);
        if ( v25 >= 0 )
        {
          v50 = Handle;
LABEL_33:
          v27 = v51;
          *v11 = 0;
          v48 = 0LL;
          HIDWORD(v42) = 0;
          v45 = 0;
          LOBYTE(v42) = 0;
          *v23 = 0;
          if ( v27 )
          {
            v36 = 85LL;
            while ( *v27 )
            {
              ++v27;
              if ( !--v36 )
                goto LABEL_63;
            }
          }
          v25 = RtlStringCchPrintfExW(
                  pszDest,
                  0x30uLL,
                  0LL,
                  0LL,
                  0x800u,
                  L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}\\%04lX",
                  *(_DWORD *)v52,
                  *(unsigned __int16 *)(v52 + 4),
                  *(unsigned __int16 *)(v52 + 6),
                  *(unsigned __int8 *)(v52 + 8),
                  *(unsigned __int8 *)(v52 + 9),
                  *(unsigned __int8 *)(v52 + 10),
                  *(unsigned __int8 *)(v52 + 11),
                  *(unsigned __int8 *)(v52 + 12),
                  *(unsigned __int8 *)(v52 + 13),
                  *(unsigned __int8 *)(v52 + 14),
                  *(unsigned __int8 *)(v52 + 15),
                  *(_DWORD *)(v52 + 16),
                  v42);
          if ( v25 < 0 )
            goto LABEL_51;
          v48 = 0LL;
          v28 = 512LL;
          v29 = pszDest;
          while ( *v29 )
          {
            ++v29;
            if ( !--v28 )
            {
              v25 = -1073741811;
              goto LABEL_51;
            }
          }
          if ( (unsigned __int64)(512 - v28) >= 0x30 )
          {
            v31 = 512 - v28 + 12;
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
            {
              v25 = -1073741801;
              goto LABEL_51;
            }
          }
          else
          {
            Pool2 = P;
            v31 = 59;
          }
          v32 = RtlStringCchPrintfExW(Pool2, v31, 0LL, 0LL, 0x800u, L"%s\\%s", L"Properties", pszDest);
          if ( v32 >= 0 )
          {
            v33 = a1[28];
            if ( v33 )
              v12 = *(_QWORD *)(v33 + 8);
            v32 = RegRtlOpenKeyTransacted((__int64)v50, Pool2, 0, 1u, &v48, v12);
            if ( v32 == -1073741444 )
              v32 = -1073741772;
          }
          if ( Pool2 && Pool2 != P )
            ExFreePoolWithTag(Pool2, 0);
          if ( v32 == -1073741772 )
            goto LABEL_50;
          v25 = v32;
          if ( v32 < 0 )
            goto LABEL_51;
          v37 = (__int64 (__fastcall *)(__int64, void *, const WCHAR *, int *, void *, ULONG *, bool *))a1[65];
          v38 = v46;
          v45 = v46;
          if ( !v37 || v37 == PnpRegQueryValueIndirect )
            v39 = PnpRegQueryValueIndirect((__int64)a1, v48, v51, (int *)&v42 + 1, (void *)psz, &v45, (bool *)&v42);
          else
            v39 = guard_dispatch_icall_no_overrides(a1, v48, v51, (char *)&v42 + 4);
          v40 = v39;
          if ( v39 == -1073741772 || v39 == -1073741444 )
          {
LABEL_50:
            v25 = -1073741275;
          }
          else
          {
            if ( !v39 || v39 == -1073741789 )
            {
              v41 = WORD2(v42);
              v34 = v43;
              *v43 = WORD2(v42);
              if ( v41 != 1 )
              {
                v35 = v44;
                *v44 = v45;
                if ( v40 || !v38 )
                  v25 = -1073741789;
                goto LABEL_53;
              }
LABEL_52:
              v35 = v44;
LABEL_53:
              if ( v48 )
                ZwClose(v48);
              if ( v25 >= 0 )
                v25 = PnpValidatePropertyData((__int64 *)psz, *v35, *v34);
              goto LABEL_19;
            }
            v25 = v39;
          }
LABEL_51:
          v34 = v43;
          goto LABEL_52;
        }
      }
      else
      {
        v25 = -1073741822;
      }
    }
LABEL_19:
    if ( Handle )
      ZwClose(Handle);
    LODWORD(v15) = v47;
    goto LABEL_22;
  }
  v25 = -1073741811;
LABEL_22:
  if ( v16 )
  {
    LODWORD(v55[0]) = v25;
    v26 = v16 == PiPnpRtlObjectActionCallback
        ? PiPnpRtlObjectActionCallback(a1, v54, (unsigned int)v15, 8LL, 2, v55)
        : guard_dispatch_icall_no_overrides(a1, v54, (unsigned int)v15, 8LL);
    if ( v26 != -1073741822 )
    {
      if ( v26 == -1073741536 )
        return LODWORD(v55[0]);
      if ( v26 )
        return 3221225701LL;
    }
  }
  return (unsigned int)v25;
}
