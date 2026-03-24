/*
 * XREFs of DriverEntry @ 0x1C0011080
 * Callers:
 *     GsDriverEntry @ 0x1C0011010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002770 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005510 (WPP_RECORDER_SF_d.c)
 *     MouseClassLogError @ 0x1C00056A0 (MouseClassLogError.c)
 *     __security_check_cookie @ 0x1C0006AE0 (__security_check_cookie.c)
 *     memmove @ 0x1C0006C00 (memmove.c)
 *     memset @ 0x1C0006F00 (memset.c)
 *     MouDeterminePortsServiced @ 0x1C000E010 (MouDeterminePortsServiced.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C000E690 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     WppLoadTracingSupport @ 0x1C000E740 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C000E890 (WppInitKm.c)
 *     WppCleanupKm @ 0x1C000EC6C (WppCleanupKm.c)
 *     MouCreateClassObject @ 0x1C000F950 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000FF40 (MouseAddDeviceEx.c)
 *     MouConfiguration @ 0x1C0011A90 (MouConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  PVOID v2; // r14
  __int64 v5; // rdx
  void *Pool2; // rax
  __int64 v7; // rdx
  int i; // edi
  unsigned __int64 v9; // rdx
  int v10; // r8d
  int ClassObject; // eax
  PVOID v12; // rdi
  const WCHAR *v13; // rdx
  KSPIN_LOCK *v14; // rcx
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // eax
  int v19; // edx
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  void *v22; // rcx
  __int64 v23; // rdx
  REGHANDLE v24; // rcx
  unsigned int v26; // r15d
  int v27; // eax
  char *v28; // rdi
  void *v29; // rcx
  const WCHAR *v30; // rdx
  int v31; // r12d
  void *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  __int64 *v35; // rax
  char v36[4]; // [rsp+20h] [rbp-E0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  KSPIN_LOCK v39; // [rsp+58h] [rbp-A8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v43[512]; // [rsp+90h] [rbp-70h] BYREF

  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  v39 = 0LL;
  v38 = 0;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v2 = 0LL;
  DestinationString = 0LL;
  P[0] = 0LL;
  FileObject = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MouClassTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v5, 1LL);
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation();
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x3E0uLL);
  qword_1C000B588 = (__int64)&qword_1C000B580;
  qword_1C000B580 = (__int64)&qword_1C000B580;
  RtlInitUnicodeString(&DestinationString, 0LL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&stru_1C000B370.Length = 0x2000000;
  stru_1C000B370.Buffer = (PWSTR)&unk_1C000B380;
  memset(v43, 0, sizeof(v43));
  *(_DWORD *)&Destination.Length = 0x2000000;
  Destination.Buffer = (PWSTR)v43;
  word_1C000B360 = RegistryPath->Length;
  word_1C000B362 = RegistryPath->Length + 2;
  Pool2 = (void *)ExAllocatePool2(64LL, (unsigned __int16)word_1C000B362, 1131769677LL);
  ::P = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v7, 1LL);
    }
    i = -1073741823;
    LODWORD(P[0]) = RegistryPath->Length + 2;
    MouseClassLogError(DriverObject, -1073414143, 20002, -1073741823, 1u, P, 0);
    goto LABEL_72;
  }
  memmove(Pool2, RegistryPath->Buffer, RegistryPath->Length);
  *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
  MouConfiguration(DriverObject);
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    ClassObject = MouCreateClassObject(
                    DriverObject,
                    (__int128 *)&WPP_MAIN_CB.DeviceQueue.32,
                    (PDEVICE_OBJECT *)&v39,
                    (PWSTR *)P,
                    1);
    i = ClassObject;
    if ( ClassObject < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 12, *(_DWORD *)v36, ClassObject);
      }
      v2 = P[0];
      goto LABEL_72;
    }
    v12 = P[0];
    v13 = (const WCHAR *)P[0];
    v14 = *(KSPIN_LOCK **)(v39 + 64);
    *v14 = v39;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v14;
    *((_BYTE *)v14 + 64) = 0;
    v15 = MouseAddDeviceEx(v14, v13, 0LL);
    if ( v15 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v16, v17, 13, *(_DWORD *)v36, v15);
    }
    ExFreePoolWithTag(v12, 0);
    P[0] = 0LL;
    *(_DWORD *)(v39 + 48) &= ~0x80u;
  }
  RtlCopyUnicodeString(&Destination, &stru_1C000B370);
  Destination.Length -= 10;
  RtlAppendUnicodeToString(&Destination, L"Port");
  v18 = MouDeterminePortsServiced(&Destination.Length, &v38);
  if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v19, v10, 14, *(_DWORD *)v36, v18);
  }
  LODWORD(v9) = Destination.Length;
  if ( Destination.MaximumLength >= (unsigned __int64)Destination.Length + 2 )
  {
    v20 = (unsigned __int64)Destination.Length >> 1;
    Destination.Buffer[v20 + 1] = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 4;
      WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v20, v10, 15, *(_DWORD *)v36, v38);
    }
    DestinationString.MaximumLength = Destination.Length + 24;
    DestinationString.Buffer = (PWSTR)ExAllocatePool2(256LL, (unsigned __int16)(Destination.Length + 24), 1131769677LL);
    if ( !DestinationString.Buffer )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 2;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v21, 1LL);
      }
      i = -1073741823;
      LODWORD(P[0]) = DestinationString.MaximumLength;
      MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
      DestinationString.MaximumLength = 0;
      goto LABEL_28;
    }
    RtlAppendUnicodeToString(&DestinationString, L"\\Device\\");
    RtlAppendUnicodeToString(&DestinationString, Destination.Buffer);
    RtlAppendUnicodeToString(&DestinationString, L"0");
    LODWORD(v9) = DestinationString.Length;
    if ( DestinationString.MaximumLength >= (unsigned __int64)DestinationString.Length + 2 )
    {
      v26 = 0;
      v9 = (unsigned __int64)DestinationString.Length >> 1;
      for ( DestinationString.Buffer[v9 + 1] = 0; v26 < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++v26 )
      {
        if ( v26 >= v38 )
          break;
        DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] = v26 + 48;
        v27 = MouCreateClassObject(
                DriverObject,
                (__int128 *)&WPP_MAIN_CB.DeviceQueue.32,
                (PDEVICE_OBJECT *)&v39,
                (PWSTR *)P,
                1);
        if ( v27 >= 0 )
        {
          v28 = *(char **)(v39 + 64);
          *(_QWORD *)v28 = v39;
          v28[64] = 0;
          *(_DWORD *)(v39 + 48) &= ~0x80u;
          if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, (PDEVICE_OBJECT *)v28 + 2) )
          {
            v29 = (void *)*((_QWORD *)v28 + 13);
            if ( v29 )
            {
              ExFreePoolWithTag(v29, 0);
              *((_QWORD *)v28 + 15) = 0LL;
              *((_QWORD *)v28 + 14) = 0LL;
              *((_QWORD *)v28 + 13) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v28);
            v2 = P[0];
          }
          else
          {
            v2 = P[0];
            v30 = (const WCHAR *)P[0];
            *(_BYTE *)(v39 + 76) = *(_BYTE *)(*((_QWORD *)v28 + 2) + 76LL) + 1;
            v31 = MouseAddDeviceEx((KSPIN_LOCK *)v28, v30, (__int64)FileObject);
            if ( !*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              *((_QWORD *)v28 + 42) = FileObject;
            if ( v2 )
            {
              ExFreePoolWithTag(v2, 0);
              v2 = 0LL;
              P[0] = 0LL;
            }
            if ( v31 >= 0 )
            {
              v33 = (_QWORD *)qword_1C000B588;
              v34 = v28 + 320;
              if ( *(__int64 **)qword_1C000B588 != &qword_1C000B580 )
                __fastfail(3u);
              *v34 = &qword_1C000B580;
              v34[1] = v33;
              *v33 = v34;
              qword_1C000B588 = (__int64)v34;
            }
            else
            {
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
                FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                           + 3 * *((unsigned int *)v28 + 45));
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v28 + 45)) = 0LL;
                *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v28 + 45) + 19) = 1;
                *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v28 + 45) + 1) = 0LL;
                ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              }
              else if ( *((_QWORD *)v28 + 42) )
              {
                FileObject = (PFILE_OBJECT)*((_QWORD *)v28 + 42);
                *((_QWORD *)v28 + 42) = 0LL;
              }
              if ( FileObject )
                ObfDereferenceObject(FileObject);
              v32 = (void *)*((_QWORD *)v28 + 13);
              if ( v32 )
              {
                ExFreePoolWithTag(v32, 0);
                *((_QWORD *)v28 + 15) = 0LL;
                *((_QWORD *)v28 + 14) = 0LL;
                *((_QWORD *)v28 + 13) = 0LL;
              }
              IoDeleteDevice(*(PDEVICE_OBJECT *)v28);
            }
          }
        }
        else
        {
          MouseClassLogError(DriverObject, -1073414143, 20008, v27, 0, 0LL, 0);
          v2 = P[0];
        }
      }
      v35 = (__int64 *)qword_1C000B580;
      for ( i = 0; v35 != &qword_1C000B580; v35 = (__int64 *)*v35 )
        ++WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
    }
    else
    {
      i = -1073741823;
    }
  }
  else
  {
    i = -1073741823;
  }
LABEL_72:
  if ( DestinationString.MaximumLength )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( i >= 0 )
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)MouseClassFindMorePorts, 0LL);
    i = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)MouseClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)MouseClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)MouseClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)MouseClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)MouseClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)MouseClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)MouseClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)MousePnP;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)MouseClassSystemControl;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)MouseClassPower;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)MouseAddDevice;
    goto LABEL_36;
  }
LABEL_28:
  if ( ::P )
  {
    ExFreePoolWithTag(::P, 0);
    ::P = 0LL;
  }
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
  }
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    v22 = *(void **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
      *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
    }
    IoDeleteDevice(**(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
  }
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 17, *(_DWORD *)v36, i);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v23) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v23, 1LL);
      }
    }
  }
  if ( i < 0 )
  {
    v24 = RegHandle;
    RegHandle = 0LL;
    dword_1C000B000 = 0;
    EtwUnregister(v24);
    WppCleanupKm((__int64)DriverObject);
  }
  return i;
}
