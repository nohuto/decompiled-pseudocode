/*
 * XREFs of _PnpGetObjectProperty @ 0x1408CB9C0
 * Callers:
 *     PiRebalanceOptOut @ 0x1405A65D4 (PiRebalanceOptOut.c)
 *     PipGetDeviceObjectLocation @ 0x1407195B4 (PipGetDeviceObjectLocation.c)
 *     PnpLogDeviceRequiresReboot @ 0x140720F0C (PnpLogDeviceRequiresReboot.c)
 *     PnpUpdateRebootRequiredReason @ 0x140721558 (PnpUpdateRebootRequiredReason.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140724478 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmListInitEnumCallback @ 0x140724A10 (PiDmListInitEnumCallback.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140725510 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x140727B14 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x140727D40 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140734E84 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x140735C50 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodes @ 0x1407379EC (PiDrvDbSetupNodes.c)
 *     _CmGetContainerBooleanPropertyCallback @ 0x14081A780 (_CmGetContainerBooleanPropertyCallback.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x14081F984 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140857EAC (PiUEventProcessBroadcastNotifications.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     IopProcessSetInterfaceState @ 0x1408B1BC4 (IopProcessSetInterfaceState.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1408B3704 (PnpGetDeviceInterfacePropertyData.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1408B3FA8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     IoGetDeviceInterfaceAlias @ 0x1408B4A00 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1408B71A0 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408B9CCC (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C37A0 (_CmGetDeviceRegPropWorker.c)
 *     IopGetDeviceInterfaces @ 0x1408C5EA0 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1408CE4D0 (PiPnpRtlInterfaceFilterCallback.c)
 *     _CmGetDeviceParent @ 0x140928AD8 (_CmGetDeviceParent.c)
 *     PnpAssignResourcesToDevices @ 0x140978A68 (PnpAssignResourcesToDevices.c)
 *     _CmUpdateDevicePanelInterface @ 0x140979C90 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14097A934 (_CmQueryDevicePanelPldProperty.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PiAuditDeviceStart @ 0x14097B680 (PiAuditDeviceStart.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140982CA8 (PnpCallDriverQueryServiceHelper.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1409ADE0C (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409BB294 (PpForEachDeviceInstanceDriver.c)
 *     PnpGetDevicePropertyData @ 0x1409C0410 (PnpGetDevicePropertyData.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1409C7EF4 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x1409CD594 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409F6C40 (PiPnpRtlServiceFilterCallback.c)
 *     PiUEventCacheObjectProperties @ 0x140A16710 (PiUEventCacheObjectProperties.c)
 *     PiDcHandleDeviceEvent @ 0x140A37CEC (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x140A37EBC (PiDcHandleInterfaceEvent.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A3802C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiAuditDeviceOperation @ 0x140A68944 (PiAuditDeviceOperation.c)
 *     _CmMatchLastKnownParentCallback @ 0x140A6D6D0 (_CmMatchLastKnownParentCallback.c)
 *     PiUEventDeviceNeedsInstall @ 0x140A6F6E8 (PiUEventDeviceNeedsInstall.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A73830 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7B2F8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A7F31C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A99C50 (PiDcContainerRequiresConfiguration.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140AAA0D8 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140AAC5C0 (PnpGetDeviceInstancePropertyData.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB0634 (_CmGetParentDeviceContainerId.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x140AB4894 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140AB7C00 (IopDeviceObjectFromSymbolicName.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140418B60 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpValidatePropertyData @ 0x1408B6740 (_PnpValidatePropertyData.c)
 *     _PnpRegQueryValueIndirect @ 0x1408C3F80 (_PnpRegQueryValueIndirect.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     _PnpDispatchDeviceInterface @ 0x1408CA5F0 (_PnpDispatchDeviceInterface.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     _PnpDispatchDevice @ 0x1408CB5A0 (_PnpDispatchDevice.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     DrvDbDispatchDriverPackage @ 0x140926230 (DrvDbDispatchDriverPackage.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
      v17 = guard_dispatch_icall_no_overrides(a1, a2);
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
          v24 = guard_dispatch_icall_no_overrides(a1, a2);
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
            Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 2LL * v31, 0x52504E50u);
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
            v39 = guard_dispatch_icall_no_overrides(a1, v48);
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
        : guard_dispatch_icall_no_overrides(a1, v54);
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
