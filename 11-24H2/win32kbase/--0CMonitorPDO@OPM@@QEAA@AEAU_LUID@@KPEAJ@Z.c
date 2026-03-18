/*
 * XREFs of ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x14008B720
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x14008B4D4 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x14008B470 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x14008B990 (--0CMutex@OPM@@QEAA@PEAJ@Z.c)
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x14008BC00 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x14008BFA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x14008C010 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

OPM::CMonitorPDO *__fastcall OPM::CMonitorPDO::CMonitorPDO(
        OPM::CMonitorPDO *this,
        struct _LUID *a2,
        unsigned int a3,
        int *a4)
{
  PVOID *v4; // r15
  PVOID *NotificationEntry; // r13
  OPM::CMutex *Pool2; // rax
  OPM::CMutex *v9; // rax
  OPM::CMutex *v10; // rbx
  OPM::CMutex *v11; // r14
  NTSTATUS DeviceInterfaces; // esi
  __int64 DxgkWin32kInterface; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  PVOID EventCategoryData; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+50h]
  int *v18; // [rsp+A8h] [rbp+58h]

  v18 = a4;
  v17 = a3;
  v4 = (PVOID *)((char *)this + 16);
  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  NotificationEntry = (PVOID *)((char *)this + 40);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  if ( *a4 < 0 )
    return this;
  *((struct _LUID *)this + 8) = *a2;
  SymbolicLinkList = 0LL;
  LODWORD(EventCategoryData) = 0;
  Pool2 = (OPM::CMutex *)ExAllocatePool2(258LL, 8LL, 1297108807LL);
  if ( !Pool2 )
  {
    v11 = 0LL;
    goto LABEL_14;
  }
  v9 = (OPM::CMutex *)OPM::CMutex::CMutex(Pool2, (int *)&EventCategoryData);
  v10 = v9;
  v11 = v9;
  if ( !v9 )
  {
LABEL_14:
    DeviceInterfaces = -1073741801;
    goto LABEL_15;
  }
  DeviceInterfaces = (int)EventCategoryData;
  if ( (int)EventCategoryData >= 0 )
  {
    *((_QWORD *)this + 1) = v9;
    v11 = 0LL;
    OPM::CMutex::Lock(v9);
    EventCategoryData = 0LL;
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
    DeviceInterfaces = (*(__int64 (__fastcall **)(struct _LUID *, _QWORD, PVOID *, PVOID *))(DxgkWin32kInterface + 456))(
                         a2,
                         v17,
                         &EventCategoryData,
                         v4);
    if ( DeviceInterfaces < 0 )
      goto LABEL_12;
    ObfReferenceObject(*v4);
    DeviceInterfaces = IoRegisterPlugPlayNotification(
                         EventCategoryTargetDeviceChange,
                         0,
                         EventCategoryData,
                         gpWin32kDriverObject,
                         OPM::CMonitorPDO::MonitorPDORemovalCallback,
                         this,
                         NotificationEntry);
    ObfDereferenceObject(EventCategoryData);
    EventCategoryData = 0LL;
    if ( DeviceInterfaces < 0 )
      goto LABEL_12;
    DeviceInterfaces = IoRegisterPlugPlayNotification(
                         EventCategoryDeviceInterfaceChange,
                         0,
                         &GUID_DEVINTERFACE_MONITOR,
                         gpWin32kDriverObject,
                         (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)OPM::CMonitorPDO::MonitorInterfaceCallback,
                         this,
                         (PVOID *)this + 6);
    if ( DeviceInterfaces < 0 )
      goto LABEL_12;
    DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, (PDEVICE_OBJECT)*v4, 0, &SymbolicLinkList);
    if ( DeviceInterfaces >= 0 )
    {
      if ( !*SymbolicLinkList )
      {
        DeviceInterfaces = -1073741823;
        goto LABEL_12;
      }
      RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 24), SymbolicLinkList);
    }
    SymbolicLinkList = 0LL;
LABEL_12:
    OPM::CMutex::Unlock(v10);
  }
LABEL_15:
  if ( SymbolicLinkList )
  {
    ExFreePoolWithTag(SymbolicLinkList, 0);
    SymbolicLinkList = 0LL;
  }
  if ( v11 )
    OPM::CMutex::`scalar deleting destructor'(v11);
  if ( DeviceInterfaces < 0 )
  {
    if ( *((_QWORD *)this + 1) )
      OPM::CMonitorPDO::Destroy(this);
    *v18 = DeviceInterfaces;
  }
  else
  {
    *((_QWORD *)this + 7) = PsGetCurrentProcessId();
  }
  return this;
}
