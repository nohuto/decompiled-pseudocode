/*
 * XREFs of SidebandCapableDeferredFilterFactoryCreate @ 0x14002FA20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B328 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     DeInitSideband @ 0x14000B3A8 (DeInitSideband.c)
 *     IsDeviceInSidebandMode @ 0x14000EF84 (IsDeviceInSidebandMode.c)
 */

void __fastcall SidebandCapableDeferredFilterFactoryCreate(
        PVOID IoObject,
        struct _KSDEVICE *Context,
        PIO_WORKITEM IoWorkItem)
{
  char *v3; // rsi
  struct _IO_WORKITEM *v4; // rbx
  struct _KSDEVICE *v5; // r15
  int v6; // ebp
  int v7; // r14d
  char v8; // di
  GUID *v9; // rbx
  int v10; // r8d
  GUID v11; // xmm0
  struct _KEVENT *v12; // rcx
  PDEVICE_OBJECT v13; // rcx
  void *v14; // rdx
  int v15; // [rsp+78h] [rbp+10h] BYREF
  PKSFILTERFACTORY FilterFactory; // [rsp+88h] [rbp+20h] BYREF

  v3 = (char *)Context->Context;
  v4 = IoWorkItem;
  FilterFactory = 0LL;
  v5 = Context;
  v15 = 0;
  v6 = -1073741437;
  v7 = 0;
  v8 = 1;
  LOBYTE(Context) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)Context || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(IoWorkItem) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)Context,
      (_DWORD)IoWorkItem,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  KeSetEvent((PRKEVENT)(v3 + 968), 0, 0);
  IoFreeWorkItem(v4);
  if ( !*((_DWORD *)v3 + 44) )
    goto LABEL_19;
  v9 = (GUID *)*((_QWORD *)v3 + 23);
  v6 = IsDeviceInSidebandMode((__int64)v5, &v15);
  if ( v6 < 0 )
    goto LABEL_19;
  if ( v15 )
  {
    v11 = USBSIDEBANDAUDIO_KSCATEGORY_AUDIO;
    v7 = 1;
  }
  else
  {
    v11 = KSCATEGORY_AUDIO;
  }
  *v9 = v11;
  if ( (unsigned int)(*((_DWORD *)v3 + 217) - 1) <= 1 )
  {
    KsAcquireDevice(v5);
    v6 = KsCreateFilterFactory(
           v5->FunctionalDeviceObject,
           (const KSFILTER_DESCRIPTOR *)(v3 + 128),
           (PWSTR)L"GLOBAL",
           0LL,
           8u,
           0LL,
           0LL,
           &FilterFactory);
    if ( v6 >= 0 )
    {
      v6 = KsFilterFactorySetDeviceClassesState(FilterFactory, 1u);
      *((_QWORD *)v3 + 15) = FilterFactory;
    }
    KsReleaseDevice(v5);
  }
  if ( !v7 )
  {
LABEL_19:
    KeWaitForSingleObject(v3 + 760, Executive, 0, 0, 0LL);
    DeInitSideband(v5, 1);
    KeReleaseMutex((PRKMUTEX)(v3 + 760), 0);
  }
  v12 = (struct _KEVENT *)*((_QWORD *)v3 + 125);
  if ( v12 )
    KeSetEvent(v12, 0, 0);
  if ( v7 )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = &WPP_2bfdcd6a21f130676fcfbe1f4e3a8945_Traceguids;
LABEL_37:
      LOBYTE(v14) = v8;
      WPP_RECORDER_AND_TRACE_SF_(v13->AttachedDevice, (_DWORD)v14, v10, v13->DeviceExtension);
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v8 = 0;
    }
    LOBYTE(v10) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v8 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v14 = &WPP_2bfdcd6a21f130676fcfbe1f4e3a8945_Traceguids;
      goto LABEL_37;
    }
  }
  if ( v6 < 0 )
  {
    KeWaitForSingleObject(v3 + 760, Executive, 0, 0, 0LL);
    *((_DWORD *)v3 + 248) |= 4u;
    KeReleaseMutex((PRKMUTEX)(v3 + 760), 0);
    IoInvalidateDeviceState(v5->PhysicalDeviceObject);
  }
}
