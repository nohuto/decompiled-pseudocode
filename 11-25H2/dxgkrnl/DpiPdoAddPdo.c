/*
 * XREFs of DpiPdoAddPdo @ 0x1403C8AA0
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     WdmlibInit @ 0x14022C5C0 (WdmlibInit.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1402435C0 (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x14024E1C0 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140253570 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402666F4 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1403C9318 (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoRemovePdo @ 0x1403C99AC (DpiPdoRemovePdo.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F6A3C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        char a4,
        PLARGE_INTEGER a5,
        char a6,
        struct _DXGK_CONNECTION_USB4_INFO *a7,
        unsigned __int8 *a8,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a9)
{
  unsigned int *DeviceExtension; // rdi
  __int64 v10; // r14
  unsigned int *v13; // r9
  unsigned int *v14; // rax
  char v15; // r13
  __int64 v16; // rdx
  int DeviceDescriptor; // eax
  int DeviceIdFromDescriptor; // esi
  PVOID v19; // r12
  bool v21; // zf
  const void *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r8
  GUID *v25; // rbx
  __int64 v26; // rsi
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // r9
  __int64 Pool2; // rax
  NTSTATUS v31; // eax
  PIO_WORKITEM WorkItem; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int **v35; // rcx
  int v36; // eax
  __int64 v37; // r9
  int PhysicalMonitor; // eax
  _QWORD *v39; // rcx
  PVOID *v40; // rax
  struct _IO_WORKITEM *v41; // rcx
  void *v42; // rcx
  int v43; // [rsp+28h] [rbp-48h]
  char v44; // [rsp+50h] [rbp-20h]
  char v45; // [rsp+51h] [rbp-1Fh]
  char v46; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h] BYREF

  DeviceObject = 0LL;
  DeviceExtension = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  v45 = 0;
  v46 = 0;
  v44 = 0;
  v13 = *(unsigned int **)(v10 + 3784);
  v14 = v13;
  v15 = 0;
  *(_OWORD *)P = 0LL;
  while ( 1 )
  {
    if ( *(unsigned int **)v14 == v13 )
      goto LABEL_5;
    v16 = *(unsigned int *)(a2 + 24);
    DeviceExtension = v14;
    if ( v14[126] == (_DWORD)v16 )
      break;
    v14 = *(unsigned int **)v14;
  }
  DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)v14 + 3);
  v45 = 1;
  if ( !(_BYTE)a5 )
  {
    DeviceIdFromDescriptor = 0x40000000;
    WdLogSingleEntry1(4LL, v16);
    WdLogGlobalForLineNumber = 206;
    goto LABEL_38;
  }
LABEL_5:
  LOBYTE(v13) = a4;
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(a1, a2, a3, (_DWORD)v13, (char)a5, a6);
  DeviceIdFromDescriptor = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    WdLogSingleEntry1(4LL, *(unsigned int *)(a2 + 24));
    v21 = *(_DWORD *)a2 == 1;
    WdLogGlobalForLineNumber = 235;
    if ( !v21 )
      goto LABEL_8;
  }
  else if ( DeviceDescriptor == 259 )
  {
    v19 = P[1];
    goto LABEL_11;
  }
  v19 = P[1];
  if ( v45 == 1 )
  {
    if ( P[1] != *((PVOID *)DeviceExtension + 116) )
    {
      if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
        goto LABEL_35;
      if ( P[1] )
        goto LABEL_19;
      if ( !v22 )
      {
LABEL_35:
        if ( !P[1] )
        {
LABEL_26:
          *((_BYTE *)DeviceExtension + 511) = 1;
          WdLogSingleEntry1(4LL, DeviceObject);
          LOBYTE(v24) = 1;
          WdLogGlobalForLineNumber = 329;
          DpiPdoRemovePdo(a1, a2, v24, a8, a9);
          goto LABEL_27;
        }
LABEL_19:
        if ( v22 )
        {
          v23 = DeviceExtension[231];
          if ( HIDWORD(P[0]) == v23 && RtlCompareMemory(P[1], v22, v23) == HIDWORD(P[0]) )
            goto LABEL_22;
        }
        goto LABEL_26;
      }
    }
LABEL_22:
    DeviceIdFromDescriptor = 0x40000000;
    goto LABEL_23;
  }
LABEL_27:
  v25 = &GUID_DEVCLASS_MONITOR;
  if ( *(_DWORD *)a2 != 1 )
    v25 = &GUID_SD_PDO;
  v26 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 32LL);
  if ( !WdmlibInitialized )
    WdmlibInit();
  LOBYTE(v43) = 0;
  v27 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, int, int, const UNICODE_STRING *, GUID *, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
          v26,
          1032LL,
          0LL,
          28LL,
          384,
          v43,
          &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
          v25,
          &DeviceObject);
  DeviceIdFromDescriptor = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry1(2LL, v27);
    WdLogGlobalForLineNumber = 371;
    goto LABEL_23;
  }
  v46 = 1;
  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  DeviceExtension[4] = 1953656900;
  DeviceExtension[5] = 5;
  *((_QWORD *)DeviceExtension + 3) = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = a1;
  *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v10 + 40);
  *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v10 + 48);
  *((_BYTE *)DeviceExtension + 56) = 1;
  DeviceExtension[70] = 1;
  v28 = *(_DWORD *)(a2 + 68);
  DeviceExtension[71] = v28;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, v28 != 1);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, DeviceExtension[71] == 1);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  Pool2 = ExAllocatePool2(64LL, 112LL, 1953656900LL, v29);
  *((_QWORD *)DeviceExtension + 21) = Pool2;
  if ( !Pool2 )
  {
    DeviceIdFromDescriptor = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 433;
    goto LABEL_23;
  }
  *(_DWORD *)(Pool2 + 104) = 1;
  v31 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  DeviceIdFromDescriptor = v31;
  if ( v31 < 0 )
  {
    WdLogSingleEntry1(2LL, v31);
    WdLogGlobalForLineNumber = 446;
    goto LABEL_23;
  }
  v44 = 1;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  *((_QWORD *)DeviceExtension + 119) = WorkItem;
  if ( !WorkItem )
  {
    DeviceIdFromDescriptor = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 465;
    goto LABEL_23;
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
  v15 = 1;
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
  v35 = *(unsigned int ***)(v10 + 3792);
  if ( *v35 != (unsigned int *)(v10 + 3784) )
    goto LABEL_74;
  *(_QWORD *)DeviceExtension = v10 + 3784;
  *((_QWORD *)DeviceExtension + 1) = v35;
  *v35 = DeviceExtension;
  *(_QWORD *)(v10 + 3792) = DeviceExtension;
  ++*(_DWORD *)(v10 + 3800);
  if ( DeviceExtension[124] != 1 )
    goto LABEL_54;
  ++*(_DWORD *)(v10 + 3804);
  if ( DeviceExtension[124] != 1 )
    goto LABEL_54;
  v36 = DmmSetTemporaryVideoOutputTechnology(
          *(DXGADAPTER **)(v10 + 4032),
          DeviceExtension[126],
          a3,
          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)(a7 != 0LL
                                                ? D3DKMDT_VOT_RF|D3DKMDT_VOT_INDIRECT_WIRED
                                                : D3DKMDT_VOT_UNINITIALIZED));
  DeviceIdFromDescriptor = v36;
  if ( v36 < 0 )
  {
    WdLogSingleEntry1(2LL, v36);
    WdLogGlobalForLineNumber = 555;
    goto LABEL_23;
  }
  LOBYTE(v37) = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4));
  PhysicalMonitor = MonitorCreatePhysicalMonitor(
                      *(char **)(v10 + 4032),
                      DeviceExtension[126],
                      DeviceObject,
                      v37,
                      1,
                      a7,
                      a8,
                      a9);
  DeviceIdFromDescriptor = PhysicalMonitor;
  if ( PhysicalMonitor >= 0 )
  {
LABEL_54:
    DeviceIdFromDescriptor = DpiPdoGetDeviceIdFromDescriptor((__int64)DeviceObject, (__int64)P, v33, v34);
    if ( DeviceIdFromDescriptor >= 0 )
    {
LABEL_57:
      DpiPdoGetDeviceContainerIdFromDescriptor(DeviceObject);
      _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
      DeviceObject->Flags |= 4u;
      DeviceObject->Flags |= 0x2000u;
      DeviceObject->Flags &= ~0x4000u;
      DeviceObject->Flags &= ~0x80u;
      WdLogSingleEntry1(4LL, DeviceObject);
      WdLogGlobalForLineNumber = 637;
LABEL_8:
      v15 = v44;
      if ( DeviceIdFromDescriptor == 259 )
      {
        v19 = P[1];
        goto LABEL_10;
      }
      goto LABEL_38;
    }
    if ( DeviceExtension[124] == 1 )
    {
      DeviceIdFromDescriptor = 0;
      goto LABEL_57;
    }
LABEL_38:
    v19 = P[1];
    goto LABEL_23;
  }
  WdLogSingleEntry1(2LL, PhysicalMonitor);
  WdLogGlobalForLineNumber = 573;
LABEL_23:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v10 + 3544), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, a2);
    KeReleaseMutex((PRKMUTEX)(v10 + 3544), 0);
  }
LABEL_10:
  if ( DeviceIdFromDescriptor >= 0 || v46 != 1 )
    goto LABEL_11;
  if ( v15 == 1 )
  {
    v39 = *(_QWORD **)DeviceExtension;
    if ( *(unsigned int **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v40 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v40 == DeviceExtension )
      {
        *v40 = v39;
        v39[1] = v40;
        --*(_DWORD *)(v10 + 3800);
        if ( DeviceExtension[124] == 1 )
          --*(_DWORD *)(v10 + 3804);
        goto LABEL_64;
      }
    }
LABEL_74:
    __fastfail(3u);
  }
LABEL_64:
  KeWaitForSingleObject((PVOID)(v10 + 3544), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v10 + 3544), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v44 == 1 )
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
LABEL_11:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return (unsigned int)DeviceIdFromDescriptor;
}
