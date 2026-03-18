/*
 * XREFs of DpiPdoAddPdo @ 0x1404293CC
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x14042B7C0 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline @ 0x14007C80C (Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiFdoAddPdoToPdoList @ 0x14023CC84 (DpiFdoAddPdoToPdoList.c)
 *     DpiFdoRemovePdoFromPdoList @ 0x140245288 (DpiFdoRemovePdoFromPdoList.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x14024A3D0 (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x140254FF0 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x14025A3A8 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026D5F4 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F0AAC (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     WdmlibIoCreateDeviceSecure @ 0x140406EC8 (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoGetDeviceDescriptor @ 0x14042B12C (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoRemovePdo @ 0x14042BBC4 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        int a4,
        char a5,
        BOOLEAN a6,
        struct _DXGK_CONNECTION_USB4_INFO *a7,
        unsigned __int8 *a8,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a9)
{
  unsigned int *DeviceExtension; // rdi
  __int64 v10; // r14
  char v11; // bl
  int v13; // esi
  char v14; // r13
  unsigned int *v15; // rdx
  unsigned int *v17; // rax
  unsigned int *v18; // rcx
  __int64 v19; // r8
  int DeviceDescriptor; // eax
  int DeviceIdFromDescriptor; // esi
  bool v22; // zf
  void *v23; // r12
  const void *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rbx
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v29; // eax
  PDEVICE_OBJECT v30; // rax
  __int64 Pool2; // rax
  NTSTATUS v32; // eax
  PIO_WORKITEM WorkItem; // rax
  unsigned int **v34; // rcx
  int v35; // eax
  __int64 v36; // r9
  int PhysicalMonitor; // eax
  _QWORD *v38; // rcx
  PVOID *v39; // rax
  char v40; // r13
  struct _IO_WORKITEM *v41; // rcx
  void *v42; // rcx
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  char v45; // [rsp+50h] [rbp-20h]
  char v46; // [rsp+51h] [rbp-1Fh]
  char v47; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  void *Source1[2]; // [rsp+60h] [rbp-10h] BYREF

  DeviceObject = 0LL;
  DeviceExtension = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  v11 = 0;
  v46 = 0;
  v13 = a1;
  v47 = 0;
  v14 = 0;
  v45 = 0;
  v15 = *(unsigned int **)(v10 + 3784);
  v17 = v15;
  *(_OWORD *)Source1 = 0LL;
  v18 = *(unsigned int **)v15;
  if ( *(unsigned int **)v15 == v15 )
    goto LABEL_5;
  v19 = *(unsigned int *)(a2 + 24);
  while ( 1 )
  {
    DeviceExtension = v17;
    if ( v17[126] == (_DWORD)v19 )
      break;
    v17 = v18;
    v18 = *(unsigned int **)v18;
    if ( v18 == v15 )
      goto LABEL_5;
  }
  DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)v17 + 3);
  v46 = 1;
  if ( a5 )
  {
LABEL_5:
    DeviceDescriptor = DpiPdoGetDeviceDescriptor(v13, a2, a3, a4, a5, a6);
    DeviceIdFromDescriptor = DeviceDescriptor;
    if ( DeviceDescriptor >= 0 )
    {
      if ( DeviceDescriptor == 259 )
      {
        v23 = Source1[1];
        goto LABEL_76;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, *(unsigned int *)(a2 + 24));
      v22 = *(_DWORD *)a2 == 1;
      WdLogGlobalForLineNumber = 235;
      if ( !v22 )
        goto LABEL_49;
    }
    v23 = Source1[1];
    if ( v46 != 1 )
    {
      v27 = a1;
LABEL_23:
      DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
      if ( *(_DWORD *)a2 != 1 )
        DeviceClassGuid = &GUID_SD_PDO;
      v29 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v10 + 40) + 32LL),
              0x408u,
              0LL,
              0x1Cu,
              0x180u,
              Exclusive,
              &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
              DeviceClassGuid,
              &DeviceObject);
      DeviceIdFromDescriptor = v29;
      if ( v29 < 0 )
      {
        WdLogSingleEntry1(2LL, v29);
        WdLogGlobalForLineNumber = 371;
        goto LABEL_51;
      }
      v47 = 1;
      DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
      DeviceExtension[4] = 1953656900;
      DeviceExtension[5] = 5;
      v30 = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = v27;
      *((_QWORD *)DeviceExtension + 3) = v30;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v10 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v10 + 48);
      *((_BYTE *)DeviceExtension + 56) = 1;
      DeviceExtension[70] = 1;
      LODWORD(v30) = *(_DWORD *)(a2 + 68);
      DeviceExtension[71] = (unsigned int)v30;
      KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v30 != 1);
      KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, DeviceExtension[71] == 1);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      Pool2 = ExAllocatePool2(64LL, 112LL, 1953656900LL);
      *((_QWORD *)DeviceExtension + 21) = Pool2;
      if ( !Pool2 )
      {
        DeviceIdFromDescriptor = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 433;
        goto LABEL_51;
      }
      *(_DWORD *)(Pool2 + 104) = 1;
      v32 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      DeviceIdFromDescriptor = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry1(2LL, v32);
        WdLogGlobalForLineNumber = 446;
        goto LABEL_51;
      }
      v45 = 1;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *((_QWORD *)DeviceExtension + 119) = WorkItem;
      if ( !WorkItem )
      {
        DeviceIdFromDescriptor = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 465;
        goto LABEL_51;
      }
      *((_QWORD *)DeviceExtension + 14) = &DpiPdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
      *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
      *((_QWORD *)DeviceExtension + 15) = &DpiPdoDispatchIoctl;
      *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStartDevice;
      *((_QWORD *)DeviceExtension + 40) = DpiPdoHandleStopDevice;
      *((_QWORD *)DeviceExtension + 45) = DpiPdoHandleQueryCapabilities;
      *((_QWORD *)DeviceExtension + 55) = DpiPdoHandleQueryId;
      *((_QWORD *)DeviceExtension + 43) = DpiPdoHandleQueryDeviceRelations;
      *((_QWORD *)DeviceExtension + 48) = DpiPdoHandleQueryDeviceText;
      *((_QWORD *)DeviceExtension + 57) = DpiPdoHandleQueryBusInformation;
      v14 = 1;
      *((_QWORD *)DeviceExtension + 117) = a2;
      DeviceExtension[124] = *(_DWORD *)a2;
      DeviceExtension[125] = *(_DWORD *)(a2 + 20);
      DeviceExtension[126] = *(_DWORD *)(a2 + 24);
      *((_WORD *)DeviceExtension + 254) = 1;
      *((_BYTE *)DeviceExtension + 511) = 0;
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        DeviceExtension[244] = a3;
      DeviceExtension[245] = 0;
      KeWaitForSingleObject((PVOID)(v10 + 3544), Executive, 0, 0, 0LL);
      *(_QWORD *)(a2 + 48) = DeviceObject;
      KeReleaseMutex((PRKMUTEX)(v10 + 3544), 0);
      if ( (unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
      {
        DpiFdoAddPdoToPdoList(v10, (__int64)DeviceExtension);
      }
      else
      {
        v34 = *(unsigned int ***)(v10 + 3792);
        if ( *v34 != (unsigned int *)(v10 + 3784) )
          goto LABEL_62;
        *(_QWORD *)DeviceExtension = v10 + 3784;
        *((_QWORD *)DeviceExtension + 1) = v34;
        *v34 = DeviceExtension;
        *(_QWORD *)(v10 + 3792) = DeviceExtension;
        ++*(_DWORD *)(v10 + 3800);
        if ( DeviceExtension[124] != 1 )
        {
LABEL_45:
          DeviceIdFromDescriptor = DpiPdoGetDeviceIdFromDescriptor((__int64)DeviceObject, (__int64)Source1);
          if ( DeviceIdFromDescriptor < 0 )
          {
            if ( DeviceExtension[124] != 1 )
              goto LABEL_50;
            DeviceIdFromDescriptor = 0;
          }
          DpiPdoGetDeviceContainerIdFromDescriptor((__int64)DeviceObject);
          _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
          DeviceObject->Flags |= 4u;
          DeviceObject->Flags |= 0x2000u;
          DeviceObject->Flags &= ~0x4000u;
          DeviceObject->Flags &= ~0x80u;
          WdLogSingleEntry1(4LL, DeviceObject);
          WdLogGlobalForLineNumber = 644;
          v11 = 1;
LABEL_49:
          v14 = v11;
          if ( DeviceIdFromDescriptor == 259 )
          {
            v23 = Source1[1];
            goto LABEL_54;
          }
          goto LABEL_50;
        }
        ++*(_DWORD *)(v10 + 3804);
      }
      if ( DeviceExtension[124] == 1 )
      {
        v35 = DmmSetTemporaryVideoOutputTechnology(
                *(DXGADAPTER **)(v10 + 4032),
                DeviceExtension[126],
                a3,
                (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)(a7 != 0LL
                                                      ? D3DKMDT_VOT_RF|D3DKMDT_VOT_INDIRECT_WIRED
                                                      : D3DKMDT_VOT_UNINITIALIZED));
        DeviceIdFromDescriptor = v35;
        if ( v35 < 0 )
        {
          WdLogSingleEntry1(2LL, v35);
          WdLogGlobalForLineNumber = 562;
          goto LABEL_51;
        }
        LOBYTE(v36) = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4));
        PhysicalMonitor = MonitorCreatePhysicalMonitor(
                            *(char **)(v10 + 4032),
                            DeviceExtension[126],
                            DeviceObject,
                            v36,
                            1,
                            a7,
                            a8,
                            a9);
        DeviceIdFromDescriptor = PhysicalMonitor;
        if ( PhysicalMonitor < 0 )
        {
          WdLogSingleEntry1(2LL, PhysicalMonitor);
          WdLogGlobalForLineNumber = 580;
          goto LABEL_51;
        }
      }
      goto LABEL_45;
    }
    if ( Source1[1] != *((void **)DeviceExtension + 116) )
    {
      if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
        goto LABEL_16;
      if ( Source1[1] )
        goto LABEL_17;
      if ( !v24 )
      {
LABEL_16:
        if ( !Source1[1] )
        {
LABEL_21:
          *((_BYTE *)DeviceExtension + 511) = 1;
          WdLogSingleEntry1(4LL, DeviceObject);
          LOBYTE(v26) = 1;
          v27 = a1;
          WdLogGlobalForLineNumber = 329;
          DpiPdoRemovePdo(a1, a2, v26, a8, a9);
          goto LABEL_23;
        }
LABEL_17:
        if ( v24 )
        {
          v25 = DeviceExtension[231];
          if ( HIDWORD(Source1[0]) == v25 && RtlCompareMemory(Source1[1], v24, v25) == HIDWORD(Source1[0]) )
            goto LABEL_20;
        }
        goto LABEL_21;
      }
    }
LABEL_20:
    DeviceIdFromDescriptor = 0x40000000;
    goto LABEL_51;
  }
  DeviceIdFromDescriptor = 0x40000000;
  WdLogSingleEntry1(4LL, v19);
  WdLogGlobalForLineNumber = 206;
LABEL_50:
  v23 = Source1[1];
LABEL_51:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 3544), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, a2);
    KeReleaseMutex((PRKMUTEX)(v10 + 3544), 0);
  }
LABEL_54:
  if ( DeviceIdFromDescriptor >= 0 || v47 != 1 )
    goto LABEL_76;
  if ( v14 == 1 )
  {
    if ( !(unsigned int)Feature_ForceConnectionDetectionOnDcToAc__private_IsEnabledDeviceUsageNoInline() )
    {
      v38 = *(_QWORD **)DeviceExtension;
      if ( *(unsigned int **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
      {
        v39 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
        if ( *v39 == DeviceExtension )
        {
          *v39 = v38;
          v38[1] = v39;
          --*(_DWORD *)(v10 + 3800);
          v40 = v45;
          if ( DeviceExtension[124] == 1 )
            --*(_DWORD *)(v10 + 3804);
          goto LABEL_65;
        }
      }
LABEL_62:
      __fastfail(3u);
    }
    DpiFdoRemovePdoFromPdoList(v10, (__int64 *)DeviceExtension);
    v40 = v45;
  }
  else
  {
    v40 = v45;
  }
LABEL_65:
  KeWaitForSingleObject((PVOID)(v10 + 3544), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v10 + 3544), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v40 == 1 )
    ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v41 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
  if ( v41 )
    IoFreeWorkItem(v41);
  v42 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  if ( DeviceObject )
  {
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
LABEL_76:
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  return (unsigned int)DeviceIdFromDescriptor;
}
