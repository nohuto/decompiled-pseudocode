/*
 * XREFs of PiPnpRtlSetObjectProperty @ 0x1408B5E10
 * Callers:
 *     PnpSetDeviceInterfacePropertyData @ 0x1408B47B8 (PnpSetDeviceInterfacePropertyData.c)
 *     PiSwPropertySet @ 0x1408B5A60 (PiSwPropertySet.c)
 *     PnpSetDevicePropertyData @ 0x1408B5C84 (PnpSetDevicePropertyData.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PiCMSetObjectProperty @ 0x1409EFF1C (PiCMSetObjectProperty.c)
 *     PiDqIrpPropertySet @ 0x1409F2F90 (PiDqIrpPropertySet.c)
 *     PiDevCfgSetObjectProperty @ 0x140A70328 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A7F31C (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x140734798 (PiAuditDeviceEnableDisableRequest.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x1408B63E8 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1408F2E10 (SeAuditingWithTokenForSubcategory.c)
 *     _CmUpdateDevicePanelInterface @ 0x140979C90 (_CmUpdateDevicePanelInterface.c)
 *     PiAuditDeviceOperation @ 0x140A68944 (PiAuditDeviceOperation.c)
 *     _CmSplitDevicePanelId @ 0x140AB0C0C (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall PiPnpRtlSetObjectProperty(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        STRSAFE_PCNZWCH pszSrc,
        unsigned int a9,
        int a10)
{
  unsigned int v11; // r14d
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r13
  int v16; // eax
  int v17; // ebx
  int v18; // esi
  __int64 v19; // rax
  int v20; // eax
  unsigned int i; // edx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int j; // edx
  __int64 *v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  struct _KTHREAD *v44; // rax
  struct _KTHREAD *v45; // rax
  char v47; // [rsp+60h] [rbp-81h]
  char v48; // [rsp+61h] [rbp-80h]
  int v49; // [rsp+64h] [rbp-7Dh] BYREF
  int v50; // [rsp+68h] [rbp-79h] BYREF
  int v51; // [rsp+6Ch] [rbp-75h] BYREF
  int v52; // [rsp+70h] [rbp-71h] BYREF
  int v53; // [rsp+74h] [rbp-6Dh] BYREF
  unsigned int v54; // [rsp+78h] [rbp-69h]
  __int64 v55; // [rsp+80h] [rbp-61h]
  __int64 v56; // [rsp+88h] [rbp-59h]
  int v57; // [rsp+90h] [rbp-51h]
  int v58; // [rsp+94h] [rbp-4Dh]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-49h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-39h]
  __int128 v61; // [rsp+B0h] [rbp-31h] BYREF
  GUID Guid; // [rsp+C0h] [rbp-21h] BYREF

  v56 = a1;
  v11 = 5;
  v55 = a4;
  v60 = a5;
  v58 = 0;
  v13 = 0;
  v57 = 0;
  v49 = 0;
  v53 = 0;
  v51 = 0;
  v54 = 0;
  v50 = 0;
  v52 = 0;
  v48 = 0;
  v47 = 0;
  DestinationString = 0LL;
  Guid = 0LL;
  v61 = 0LL;
  if ( a3 == 1 )
  {
    for ( i = 0; i < 0x10; ++i )
    {
      v23 = *((_QWORD *)&PiPnpRtlDeviceReadOnlyProps + i);
      if ( *(_DWORD *)(a6 + 16) == *(_DWORD *)(v23 + 16) )
      {
        v30 = *(_QWORD *)a6 - *(_QWORD *)v23;
        if ( *(_QWORD *)a6 == *(_QWORD *)v23 )
          v30 = *(_QWORD *)(a6 + 8) - *(_QWORD *)(v23 + 8);
        if ( !v30 )
          return (unsigned int)-1073741790;
      }
    }
    v24 = *(_DWORD *)(a6 + 16);
    if ( v24 == 12 )
    {
      v26 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
      v25 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      v40 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
        v40 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
      if ( !v40 && (!pszSrc || a9 != 4) )
        return (unsigned int)-1073741811;
LABEL_29:
      v27 = *(_DWORD *)(a6 + 16);
      switch ( v27 )
      {
        case 10:
          v36 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1;
          if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ClassGuid.fmtid.Data1 )
            v36 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ClassGuid.fmtid.Data4;
          if ( !v36 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v48 = 1;
          }
          break;
        case 12:
          v41 = *(_QWORD *)a6 - v26;
          if ( *(_QWORD *)a6 == v26 )
            v41 = *(_QWORD *)(a6 + 8) - v25;
          if ( !v41 )
          {
            v44 = KeGetCurrentThread();
            --v44->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v48 = 1;
            if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
            {
              v47 = 1;
              v49 = 4;
              if ( (int)CmGetDeviceRegProp(v56, (_DWORD)a2, v55, 11, (__int64)&v53, (__int64)&v51, (__int64)&v49, 0) < 0
                || v49 != 4
                || v53 != 4 )
              {
                v51 = 0;
              }
              v54 = *(_DWORD *)pszSrc;
            }
          }
          break;
        case 5:
          v28 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
          if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
            v28 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
          if ( !v28 )
          {
            v45 = KeGetCurrentThread();
            --v45->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            v48 = 1;
            if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
            {
              v49 = 4;
              v47 = 1;
              if ( (int)PnpGetObjectProperty(
                          v56,
                          (_DWORD)a2,
                          1,
                          v55,
                          0LL,
                          (__int64)&DEVPKEY_Device_InstallError,
                          (__int64)&v50,
                          (__int64)&v52,
                          4,
                          (__int64)&v49,
                          0) < 0
                || v49 != 4
                || v50 != 23 )
              {
                v52 = 0;
              }
              if ( a9 == 4 && a7 == 23 )
                v13 = *(_DWORD *)pszSrc;
            }
          }
          break;
      }
      goto LABEL_7;
    }
    if ( v24 == 3 )
    {
      v29 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_HardwareIds.fmtid.Data1 )
        v29 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_HardwareIds.fmtid.Data4;
      if ( !v29 )
        goto LABEL_128;
    }
    if ( v24 != 4 )
    {
      if ( v24 == 2 )
      {
        v39 = *(_QWORD *)a6 - DEVPKEY_Device_PanelId;
        if ( *(_QWORD *)a6 == DEVPKEY_Device_PanelId )
          v39 = *(_QWORD *)(a6 + 8) + 0x5292C1A216403965LL;
        if ( !v39 )
        {
          if ( !pszSrc
            || a9 < 2
            || a7 != 18
            || pszSrc[((unsigned __int64)a9 >> 1) - 1]
            || (int)CmSplitDevicePanelId(pszSrc, &Guid) < 0
            || (int)PnpGetObjectProperty(
                      v56,
                      (_DWORD)a2,
                      1,
                      v55,
                      0LL,
                      (__int64)&DEVPKEY_Device_ContainerId,
                      (__int64)&v50,
                      (__int64)&v61,
                      16,
                      (__int64)&v49,
                      0) < 0
            || v50 != 13
            || v49 != 16 )
          {
            return (unsigned int)-1073741811;
          }
          v43 = v61 - *(_QWORD *)&Guid.Data1;
          if ( (_QWORD)v61 == *(_QWORD *)&Guid.Data1 )
            v43 = *((_QWORD *)&v61 + 1) - *(_QWORD *)Guid.Data4;
          if ( v43 )
            return (unsigned int)-1073741811;
        }
      }
      goto LABEL_28;
    }
    v34 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_CompatibleIds.fmtid.Data1 )
      v34 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_CompatibleIds.fmtid.Data4;
    if ( !v34 )
    {
LABEL_128:
      if ( !(unsigned __int8)CmIsRootEnumeratedDevice(a2) )
        return (unsigned int)-1073741790;
    }
LABEL_28:
    v25 = *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    v26 = *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    goto LABEL_29;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 5 )
      goto LABEL_7;
    for ( j = 0; j < 5; ++j )
    {
      v32 = (__int64 *)PiPnpRtlContainerReadOnlyProps[j];
      if ( *(_DWORD *)(a6 + 16) == *((_DWORD *)v32 + 4) )
      {
        v38 = *(_QWORD *)a6 - *v32;
        if ( *(_QWORD *)a6 == *v32 )
          v38 = *(_QWORD *)(a6 + 8) - v32[1];
        if ( !v38 )
          return (unsigned int)-1073741790;
      }
    }
    if ( *(_DWORD *)(a6 + 16) != 105 )
      goto LABEL_7;
    v33 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data1 )
      v33 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_ConfigFlags.fmtid.Data4;
    if ( v33 || a7 == 7 )
      goto LABEL_7;
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)(a6 + 16) == 256 )
  {
    v14 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
      v14 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
    if ( !v14 )
      return (unsigned int)-1073741790;
  }
LABEL_7:
  v15 = v56;
  v16 = PnpSetObjectProperty(v56, (_DWORD)a2, a3, v60, a6, a7, (__int64)pszSrc, a9, a10);
  v17 = v16;
  v18 = a3 - 1;
  if ( v18 )
  {
    if ( v18 == 2 && v16 >= 0 && *(_DWORD *)(a6 + 16) == 9 )
    {
      v19 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1;
      if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data1 )
        v19 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_PhysicalDeviceLocation.fmtid.Data4;
      if ( !v19 )
        CmUpdateDevicePanelInterface(v15, a2, v55);
    }
    goto LABEL_17;
  }
  v20 = *(_DWORD *)(a6 + 16);
  if ( v20 == 12 )
  {
    v42 = *(_QWORD *)a6 - *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1;
    if ( *(_QWORD *)a6 == *(_QWORD *)&DEVPKEY_Device_ConfigFlags.fmtid.Data1 )
      v42 = *(_QWORD *)(a6 + 8) - *(_QWORD *)DEVPKEY_Device_ConfigFlags.fmtid.Data4;
    if ( !v42 && v47 && (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      PiAuditDeviceEnableDisableRequest((__int64)&DestinationString, v51, v54, v17 >= 0);
    }
    goto LABEL_17;
  }
  if ( v20 == 5 )
  {
    v35 = *(_QWORD *)a6 - DEVPKEY_Device_InstallError;
    if ( *(_QWORD *)a6 == DEVPKEY_Device_InstallError )
      v35 = *(_QWORD *)(a6 + 8) - 0x293B573F92A15394LL;
    if ( !v35 && v47 && (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      if ( v52 == -536870328 )
      {
        if ( v13 == -536870328 )
          goto LABEL_17;
        v11 = 6;
      }
      else if ( v13 != -536870328 )
      {
        goto LABEL_17;
      }
      PiAuditDeviceOperation(&DestinationString, v11, v17 >= 0);
    }
  }
LABEL_17:
  if ( v48 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v17;
}
