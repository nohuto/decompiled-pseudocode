/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1403FDFB4
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DxgkIsDirtyBitTrackingSupported @ 0x1400683DC (DxgkIsDirtyBitTrackingSupported.c)
 *     DxgkIsLiveMigrationInterfaceSupported @ 0x1400683F0 (DxgkIsLiveMigrationInterfaceSupported.c)
 *     DpiQueryMiniportInterface @ 0x14018AFAC (DpiQueryMiniportInterface.c)
 *     DxgkCheckGpuVirtualizationCaps @ 0x1401A0178 (DxgkCheckGpuVirtualizationCaps.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1401A0224 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x14023C7C0 (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x14023CDA8 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1)
{
  __int64 v1; // rdi
  int MiniportInterface; // ebx
  int v4; // eax
  __int64 v5; // r8
  DXGADAPTER *v6; // rcx
  _DWORD *v7; // r14
  struct _DEVICE_OBJECT *v8; // rcx
  struct _DEVICE_OBJECT *v9; // rcx
  char v10; // r15
  __int64 v11; // rcx
  char v12; // r9
  NTSTATUS v13; // eax
  int v14; // eax
  PVOID v15; // r14
  int v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  char v19; // dl
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  int v24; // eax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  __int64 Type; // [rsp+20h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _UNICODE_STRING ReferenceString; // [rsp+60h] [rbp-19h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v36; // [rsp+70h] [rbp-9h] BYREF
  PVOID P; // [rsp+E0h] [rbp+67h] BYREF
  char Data; // [rsp+E8h] [rbp+6Fh] BYREF
  char v39; // [rsp+F0h] [rbp+77h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  LOBYTE(P) = 0;
  if ( (**(_DWORD **)(*(_QWORD *)(v1 + 4032) + 3008LL) & 0x100) != 0 )
  {
    v10 = 0;
    goto LABEL_71;
  }
  if ( !*(_BYTE *)(v1 + 5144) )
  {
    MiniportInterface = DpiQueryMiniportInterface(
                          a1,
                          (__int64)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE,
                          128,
                          1,
                          Type,
                          v1 + 5152);
    if ( MiniportInterface < 0 )
      goto LABEL_56;
    if ( !*(_QWORD *)(v1 + 5216)
      || !*(_QWORD *)(v1 + 5240)
      || !*(_QWORD *)(v1 + 5192)
      || !*(_QWORD *)(v1 + 5200)
      || !*(_QWORD *)(v1 + 5208)
      || !*(_QWORD *)(v1 + 5224)
      || !*(_QWORD *)(v1 + 5232)
      || !*(_QWORD *)(v1 + 5248)
      || !*(_QWORD *)(v1 + 5256)
      || !*(_QWORD *)(v1 + 5264)
      || !*(_QWORD *)(v1 + 5272)
      || !*(_QWORD *)(v1 + 5184) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 14178;
      goto LABEL_127;
    }
    v4 = *(_DWORD *)(v1 + 4048);
    *(_BYTE *)(v1 + 5144) = 1;
    if ( v4 >= 9728 || (unsigned int)(v4 - 8454) <= 0xF9 )
    {
      MiniportInterface = DpiAcquireCoreSyncAccessSafe(a1, 1);
      if ( MiniportInterface < 0 )
        goto LABEL_40;
      v6 = *(DXGADAPTER **)(v1 + 4032);
      v7 = (_DWORD *)(v1 + 5592);
      memset(&v36, 0, 24);
      v36.Type = DXGKQAITYPE_DEVICE_TYPE_CAPS|DXGKQAITYPE_QUERYSEGMENT;
      v36.pOutputData = (void *)(v1 + 5592);
      *(_OWORD *)&v36.OutputDataSize = 0LL;
      v36.OutputDataSize = 4;
      MiniportInterface = DXGADAPTER::DdiQueryAdapterInfo(v6, &v36, v5);
      DpiReleaseCoreSyncAccessSafe(a1, 1);
      if ( MiniportInterface < 0 )
      {
LABEL_40:
        WdLogSingleEntry1(3LL, MiniportInterface);
        WdLogGlobalForLineNumber = 14209;
        MiniportInterface = 0;
      }
      else
      {
        if ( *v7 >= 0x10u )
        {
          MiniportInterface = -1073741811;
          WdLogSingleEntry1(2LL, -1073741811LL);
          WdLogGlobalForLineNumber = 14220;
          goto LABEL_127;
        }
        if ( (*v7 & 1) != 0 )
        {
          v8 = *(struct _DEVICE_OBJECT **)(v1 + 152);
          Data = -1;
          IoSetDevicePropertyData(v8, &DEVPKEY_Gpup_Supports_Guest_Hibernation, 0, 0, 0x11u, 1u, &Data);
        }
        if ( (*v7 & 2) != 0 )
        {
          v9 = *(struct _DEVICE_OBJECT **)(v1 + 152);
          v39 = -1;
          IoSetDevicePropertyData(v9, &DEVPKEY_Gpup_Supports_Hot_Driver_Update, 0, 0, 0x11u, 1u, &v39);
        }
      }
    }
  }
  if ( *(_BYTE *)(v1 + 5016) )
    goto LABEL_42;
  MiniportInterface = DpiQueryMiniportInterface(a1, (__int64)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1, Type, v1 + 5024);
  if ( MiniportInterface >= 0 )
  {
    *(_BYTE *)(v1 + 5016) = 1;
    if ( !*(_QWORD *)(v1 + 5056)
      || !*(_QWORD *)(v1 + 5064)
      || !*(_QWORD *)(v1 + 5072)
      || !*(_QWORD *)(v1 + 5080)
      || !*(_QWORD *)(v1 + 5088)
      || !*(_QWORD *)(v1 + 5096)
      || !*(_QWORD *)(v1 + 5104)
      || !*(_QWORD *)(v1 + 5112)
      || !*(_QWORD *)(v1 + 5120)
      || !*(_QWORD *)(v1 + 5136)
      || !*(_QWORD *)(v1 + 5128) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 14280;
      goto LABEL_127;
    }
LABEL_42:
    if ( !*(_BYTE *)(v1 + 5280) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE,
                            48,
                            1,
                            Type,
                            v1 + 5288);
      if ( MiniportInterface < 0 )
      {
        MiniportInterface = 0;
      }
      else
      {
        *(_BYTE *)(v1 + 5280) = 1;
        if ( !*(_QWORD *)(v1 + 5320) || !*(_QWORD *)(v1 + 5328) )
        {
          MiniportInterface = -1073741823;
          WdLogSingleEntry1(2LL, -1073741823LL);
          WdLogGlobalForLineNumber = 14307;
          goto LABEL_127;
        }
      }
    }
    if ( !*(_BYTE *)(v1 + 5336) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DXGKDDI_FLEXIOV_DEVICE_INTERFACE,
                            56,
                            1,
                            Type,
                            v1 + 5344);
      if ( MiniportInterface < 0 )
      {
        MiniportInterface = 0;
      }
      else
      {
        *(_BYTE *)(v1 + 5336) = 1;
        if ( !*(_QWORD *)(v1 + 5376) || !*(_QWORD *)(v1 + 5384) || !*(_QWORD *)(v1 + 5392) || *(_WORD *)(v1 + 5346) != 1 )
        {
          MiniportInterface = -1073741823;
          WdLogSingleEntry1(2LL, -1073741823LL);
          WdLogGlobalForLineNumber = 14341;
          goto LABEL_127;
        }
      }
    }
  }
LABEL_56:
  if ( *(_BYTE *)(v1 + 5144) )
  {
    if ( MiniportInterface < 0 )
    {
      WdLogSingleEntry1(2LL, MiniportInterface);
      WdLogGlobalForLineNumber = 14363;
      goto LABEL_127;
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x11007u
      && !*(_BYTE *)(v1 + 5336)
      && !*(_BYTE *)(v1 + 5280) )
    {
      MiniportInterface = -1073741811;
      WdLogSingleEntry1(2LL, -1073741811LL);
      WdLogGlobalForLineNumber = 14374;
      goto LABEL_127;
    }
    v10 = 1;
    *(_BYTE *)(v1 + 5016) = 1;
    *(_BYTE *)(v1 + 5336) = 1;
  }
  else
  {
    v10 = (char)P;
  }
  if ( (*(_DWORD *)(v1 + 5592) & 4) != 0 )
  {
    if ( !DxgkIsLiveMigrationInterfaceSupported(*(_QWORD **)(v1 + 4032)) )
    {
      WdLogSingleEntry1(2LL, MiniportInterface);
      WdLogGlobalForLineNumber = 14392;
      goto LABEL_127;
    }
    if ( !(unsigned int)DxgkIsDirtyBitTrackingSupported(v11) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 14405;
      goto LABEL_127;
    }
  }
LABEL_71:
  if ( DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 4032)) )
  {
    *(_BYTE *)(v1 + 5016) = v12;
    *(_BYTE *)(v1 + 5336) = v12;
    if ( !*(_QWORD *)(v1 + 2904) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
      v13 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v1 + 152),
              &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
              &DestinationString,
              (PUNICODE_STRING)(v1 + 2896));
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 14442;
        goto LABEL_127;
      }
    }
  }
  if ( v10 || *(_QWORD *)(v1 + 2904) )
  {
    P = 0LL;
    *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
    *(_QWORD *)(v1 + 104) = DpiFdoDispatchCreate;
    *(_BYTE *)(v1 + 58) = 1;
    *(_QWORD *)(v1 + 96) = DpiFdoDispatchCleanupAndClose;
    *(_DWORD *)(v1 + 5792) = 0;
    v14 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
    MiniportInterface = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 14487;
      goto LABEL_127;
    }
    v15 = P;
    v16 = ObSetSecurityObjectByPointer(a1, 4LL, P);
    MiniportInterface = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry1(2LL, v16);
      WdLogGlobalForLineNumber = 14478;
    }
    ExFreePoolWithTag(v15, 0);
  }
  if ( MiniportInterface < 0 )
  {
    MiniportInterface = 0;
  }
  else
  {
    if ( !v10 )
      goto LABEL_132;
    if ( !*(_QWORD *)(v1 + 2888) )
    {
      v17 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v1 + 152),
              &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
              0LL,
              (PUNICODE_STRING)(v1 + 2880));
      MiniportInterface = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(2LL, v17);
        WdLogGlobalForLineNumber = 14516;
        goto LABEL_127;
      }
    }
    if ( *(_QWORD *)(v1 + 2920)
      || (v18 = IoRegisterDeviceInterface(
                  *(PDEVICE_OBJECT *)(v1 + 152),
                  &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                  0LL,
                  (PUNICODE_STRING)(v1 + 2912)),
          MiniportInterface = v18,
          v18 >= 0) )
    {
LABEL_132:
      if ( !DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 4032))
        || *(_QWORD *)(v1 + 2936)
        || (ReferenceString = 0LL,
            RtlInitUnicodeString(&ReferenceString, L"GPUPARAV"),
            v20 = IoRegisterDeviceInterface(
                    *(PDEVICE_OBJECT *)(v1 + 152),
                    &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                    &ReferenceString,
                    (PUNICODE_STRING)(v1 + 2928)),
            MiniportInterface = v20,
            v20 >= 0) )
      {
        if ( *(_QWORD *)(v1 + 2952)
          || (v21 = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(v1 + 152),
                      &GUID_MITIGABLE_DEVICE_INTERFACE,
                      0LL,
                      (PUNICODE_STRING)(v1 + 2944)),
              MiniportInterface = v21,
              v21 >= 0) )
        {
          if ( *(_QWORD *)(v1 + 2968)
            || (v22 = IoRegisterDeviceInterface(
                        *(PDEVICE_OBJECT *)(v1 + 152),
                        &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
                        0LL,
                        (PUNICODE_STRING)(v1 + 2960)),
                MiniportInterface = v22,
                v22 >= 0) )
          {
            if ( *(_QWORD *)(v1 + 2984)
              || (v23 = IoRegisterDeviceInterface(
                          *(PDEVICE_OBJECT *)(v1 + 152),
                          &GUID_FLEXIBLE_IOV_INTERFACE,
                          0LL,
                          (PUNICODE_STRING)(v1 + 2976)),
                  MiniportInterface = v23,
                  v23 >= 0) )
            {
              v24 = DxgkCheckGpuVirtualizationCaps(*(_QWORD *)(v1 + 4032), v19, (_BYTE *)(v1 + 5597));
              MiniportInterface = v24;
              if ( v24 >= 0 )
              {
                if ( *(_BYTE *)(v1 + 5144)
                  && (v25 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2880), 1u), MiniportInterface = v25,
                                                                                         v25 < 0) )
                {
                  WdLogSingleEntry1(2LL, v25);
                  WdLogGlobalForLineNumber = 14641;
                }
                else if ( *(_QWORD *)(v1 + 2904)
                       && (v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2896), 1u),
                           MiniportInterface = v26,
                           v26 < 0) )
                {
                  WdLogSingleEntry1(2LL, v26);
                  WdLogGlobalForLineNumber = 14654;
                }
                else if ( *(_QWORD *)(v1 + 2920)
                       && (v27 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2912), 1u),
                           MiniportInterface = v27,
                           v27 < 0) )
                {
                  WdLogSingleEntry1(2LL, v27);
                  WdLogGlobalForLineNumber = 14671;
                }
                else if ( *(_QWORD *)(v1 + 2936)
                       && (v28 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2928), 1u),
                           MiniportInterface = v28,
                           v28 < 0) )
                {
                  WdLogSingleEntry1(2LL, v28);
                  WdLogGlobalForLineNumber = 14684;
                }
                else if ( *(_QWORD *)(v1 + 2952)
                       && (v29 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2944), 1u),
                           MiniportInterface = v29,
                           v29 < 0) )
                {
                  WdLogSingleEntry1(2LL, v29);
                  WdLogGlobalForLineNumber = 14698;
                }
                else if ( *(_QWORD *)(v1 + 2968)
                       && (v30 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2960), 1u),
                           MiniportInterface = v30,
                           v30 < 0) )
                {
                  WdLogSingleEntry1(2LL, v30);
                  WdLogGlobalForLineNumber = 14711;
                }
                else if ( *(_QWORD *)(v1 + 2984) )
                {
                  v31 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2976), 1u);
                  MiniportInterface = v31;
                  if ( v31 < 0 )
                  {
                    WdLogSingleEntry1(2LL, v31);
                    WdLogGlobalForLineNumber = 14724;
                  }
                }
              }
              else
              {
                WdLogSingleEntry1(2LL, v24);
                WdLogGlobalForLineNumber = 14625;
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v23);
              WdLogGlobalForLineNumber = 14614;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, v22);
            WdLogGlobalForLineNumber = 14597;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v21);
          WdLogGlobalForLineNumber = 14580;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v20);
        WdLogGlobalForLineNumber = 14563;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 14544;
    }
  }
LABEL_127:
  DxgkLogInternalTriageEvent(
    *(_QWORD *)(v1 + 4032),
    131075LL,
    0xFFFFFFFFLL,
    L"GPU virtualization initialization has completed with status %1",
    MiniportInterface,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( MiniportInterface < 0 )
    DpiFdoCleanupGpuVirtualization(v1);
  return (unsigned int)MiniportInterface;
}
