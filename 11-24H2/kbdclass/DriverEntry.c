/*
 * XREFs of DriverEntry @ 0x1C0011080
 * Callers:
 *     GsDriverEntry @ 0x1C0011010 (GsDriverEntry.c)
 * Callees:
 *     KeyboardClassLogError @ 0x1C0005970 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_ @ 0x1C00061D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006360 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0007290 (__security_check_cookie.c)
 *     memmove @ 0x1C0007380 (memmove.c)
 *     memset @ 0x1C0007680 (memset.c)
 *     WppLoadTracingSupport @ 0x1C000E4C0 (WppLoadTracingSupport.c)
 *     KbdDeterminePortsServiced @ 0x1C000E610 (KbdDeterminePortsServiced.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C000EA78 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     WppCleanupKm @ 0x1C000EB24 (WppCleanupKm.c)
 *     WppInitKm @ 0x1C000EBD4 (WppInitKm.c)
 *     KbdCreateClassObject @ 0x1C000FD50 (KbdCreateClassObject.c)
 *     KeyboardAddDeviceEx @ 0x1C00105B0 (KeyboardAddDeviceEx.c)
 *     KbdConfiguration @ 0x1C00119A0 (KbdConfiguration.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS ClassObject; // ebx
  PVOID v5; // rsi
  __int64 v6; // rdx
  void *Pool2; // rax
  __int64 v8; // rdx
  __int64 Length; // rdx
  const WCHAR *v10; // rdx
  KSPIN_LOCK *v11; // rcx
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rdx
  unsigned int v15; // r14d
  int v16; // eax
  char *v17; // rbx
  void *v18; // rcx
  const WCHAR *v19; // rdx
  int v20; // r15d
  void *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  __int64 *v24; // rax
  void *v25; // rcx
  REGHANDLE v26; // rcx
  char v28[4]; // [rsp+20h] [rbp-E0h]
  unsigned int v29; // [rsp+40h] [rbp-C0h] BYREF
  KSPIN_LOCK v30; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-98h] BYREF
  PVOID v34[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[512]; // [rsp+90h] [rbp-70h] BYREF

  v30 = 0LL;
  v29 = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v34[0] = 0LL;
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  ClassObject = 0;
  *(_OWORD *)P = 0LL;
  v5 = 0LL;
  FileObject = 0LL;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_KbdClassTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v6, 1LL);
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation();
  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x418uLL);
  LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceObject) = 1;
  qword_1C000B5B0 = (__int64)&qword_1C000B5A8;
  qword_1C000B5A8 = (__int64)&qword_1C000B5A8;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.AlignmentRequirement, SynchronizationEvent, 0);
  *(_DWORD *)&::DestinationString.Length = 0x2000000;
  ::DestinationString.Buffer = (PWSTR)&unk_1C000B3A8;
  memset(v35, 0, sizeof(v35));
  *(_DWORD *)&DestinationString.Length = 0x2000000;
  DestinationString.Buffer = (PWSTR)v35;
  word_1C000B388 = RegistryPath->Length;
  word_1C000B38A = RegistryPath->Length + 2;
  Pool2 = (void *)ExAllocatePool2(64LL, (unsigned __int16)word_1C000B38A, 1130652235LL);
  ::P = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v8, 1LL);
    }
    LODWORD(v34[0]) = RegistryPath->Length + 2;
    KeyboardClassLogError(DriverObject, -1073414143, 10002, -1073741823, 1u, v34, 0);
    goto LABEL_8;
  }
  memmove(Pool2, RegistryPath->Buffer, RegistryPath->Length);
  *((_WORD *)::P + ((unsigned __int64)RegistryPath->Length >> 1)) = 0;
  KbdConfiguration(DriverObject);
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    ClassObject = KbdCreateClassObject(
                    DriverObject,
                    (__int128 *)&WPP_MAIN_CB.Dpc,
                    (PDEVICE_OBJECT *)&v30,
                    (__int64 *)v34,
                    1);
    if ( ClassObject < 0 )
    {
      v5 = v34[0];
      goto LABEL_8;
    }
    v10 = (const WCHAR *)v34[0];
    v11 = *(KSPIN_LOCK **)(v30 + 64);
    *v11 = v30;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = v11;
    *((_BYTE *)v11 + 64) = 0;
    KeyboardAddDeviceEx(v11, v10, 0LL);
    ExFreePoolWithTag(v34[0], 0);
    v34[0] = 0LL;
    *(_DWORD *)(v30 + 48) &= ~0x80u;
  }
  RtlCopyUnicodeString(&DestinationString, &::DestinationString);
  DestinationString.Length -= 10;
  RtlAppendUnicodeToString(&DestinationString, L"Port");
  Length = DestinationString.Length;
  if ( DestinationString.MaximumLength < (unsigned __int64)DestinationString.Length + 2 )
  {
    ClassObject = -1073741823;
    goto LABEL_8;
  }
  DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) + 1] = 0;
  KbdDeterminePortsServiced(&DestinationString.Length, &v29);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v12, v13, 12, *(_DWORD *)v28, v29);
  }
  RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
  WORD1(P[0]) = DestinationString.Length + 20;
  P[1] = (PVOID)ExAllocatePool2(256LL, (unsigned __int16)(DestinationString.Length + 20), 1130652235LL);
  if ( P[1] )
  {
    RtlAppendUnicodeToString((PUNICODE_STRING)P, L"\\Device\\");
    RtlAppendUnicodeToString((PUNICODE_STRING)P, DestinationString.Buffer);
    RtlAppendUnicodeToString((PUNICODE_STRING)P, L"0");
    v15 = 0;
    if ( !*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy )
    {
LABEL_50:
      v24 = (__int64 *)qword_1C000B5A8;
      ClassObject = 0;
      while ( v24 != &qword_1C000B5A8 )
      {
        ++WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
        v24 = (__int64 *)*v24;
      }
      goto LABEL_8;
    }
    while ( 1 )
    {
      if ( v15 >= v29 )
        goto LABEL_50;
      *((_WORD *)P[1] + ((unsigned __int64)LOWORD(P[0]) >> 1) - 1) = v15 + 48;
      v16 = KbdCreateClassObject(DriverObject, (__int128 *)&WPP_MAIN_CB.Dpc, (PDEVICE_OBJECT *)&v30, (__int64 *)v34, 1);
      if ( v16 >= 0 )
      {
        v17 = *(char **)(v30 + 64);
        *(_QWORD *)v17 = v30;
        v17[64] = 0;
        *(_DWORD *)(v30 + 48) &= ~0x80u;
        if ( IoGetDeviceObjectPointer((PUNICODE_STRING)P, 0x80u, &FileObject, (PDEVICE_OBJECT *)v17 + 2) >= 0 )
        {
          v5 = v34[0];
          v19 = (const WCHAR *)v34[0];
          *(_BYTE *)(v30 + 76) = *(_BYTE *)(*((_QWORD *)v17 + 2) + 76LL) + 1;
          v20 = KeyboardAddDeviceEx((KSPIN_LOCK *)v17, v19, (__int64)FileObject);
          if ( v5 )
          {
            ExFreePoolWithTag(v5, 0);
            v5 = 0LL;
            v34[0] = 0LL;
          }
          if ( v20 >= 0 )
          {
            v22 = (_QWORD *)qword_1C000B5B0;
            v23 = v17 + 336;
            if ( *(__int64 **)qword_1C000B5B0 != &qword_1C000B5A8 )
              __fastfail(3u);
            *v23 = &qword_1C000B5A8;
            v23[1] = v22;
            *v22 = v23;
            qword_1C000B5B0 = (__int64)v23;
          }
          else
          {
            if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                         + 3 * *((unsigned int *)v17 + 49));
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v17 + 49)) = 0LL;
              *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *((unsigned int *)v17 + 49) + 19) = 1;
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *((unsigned int *)v17 + 49) + 1) = 0LL;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            }
            else if ( *((_QWORD *)v17 + 44) )
            {
              FileObject = (PFILE_OBJECT)*((_QWORD *)v17 + 44);
              *((_QWORD *)v17 + 44) = 0LL;
            }
            if ( FileObject )
              ObfDereferenceObject(FileObject);
            v21 = (void *)*((_QWORD *)v17 + 13);
            if ( v21 )
            {
              ExFreePoolWithTag(v21, 0);
              *((_QWORD *)v17 + 15) = 0LL;
              *((_QWORD *)v17 + 14) = 0LL;
              *((_QWORD *)v17 + 13) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v17);
          }
          goto LABEL_49;
        }
        v18 = (void *)*((_QWORD *)v17 + 13);
        if ( v18 )
        {
          ExFreePoolWithTag(v18, 0);
          *((_QWORD *)v17 + 15) = 0LL;
          *((_QWORD *)v17 + 14) = 0LL;
          *((_QWORD *)v17 + 13) = 0LL;
        }
        IoDeleteDevice(*(PDEVICE_OBJECT *)v17);
      }
      else
      {
        KeyboardClassLogError(DriverEntry, -1073414143, 10008, v16, 0, 0LL, 0);
      }
      v5 = v34[0];
LABEL_49:
      if ( ++v15 >= *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy )
        goto LABEL_50;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v14, 1LL);
  }
  ClassObject = -1073741823;
  LODWORD(v34[0]) = WORD1(P[0]);
  KeyboardClassLogError(DriverObject, -1073414143, 10006, -1073741823, 1u, v34, 0);
LABEL_8:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( ClassObject < 0 )
  {
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
      v25 = *(void **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL);
      if ( v25 )
      {
        ExFreePoolWithTag(v25, 0);
        *(_OWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 112LL) = 0uLL;
        *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 104LL) = 0LL;
      }
      IoDeleteDevice(**(PDEVICE_OBJECT **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = 0LL;
    }
  }
  else
  {
    IoRegisterDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)KeyboardClassFindMorePorts, 0LL);
    ClassObject = 0;
    DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)KeyboardClassCreate;
    DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)KeyboardClassClose;
    DriverObject->MajorFunction[3] = (PDRIVER_DISPATCH)KeyboardClassRead;
    DriverObject->MajorFunction[9] = (PDRIVER_DISPATCH)KeyboardClassFlush;
    DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)KeyboardClassDeviceControl;
    DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)KeyboardClassPassThrough;
    DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)KeyboardClassCleanup;
    DriverObject->MajorFunction[27] = (PDRIVER_DISPATCH)KeyboardPnP;
    DriverObject->MajorFunction[22] = (PDRIVER_DISPATCH)KeyboardClassPower;
    DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)KeyboardClassSystemControl;
    DriverObject->DriverExtension->AddDevice = (PDRIVER_ADD_DEVICE)KeyboardAddDevice;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(Length) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, Length, 1LL);
  }
  if ( ClassObject < 0 )
  {
    v26 = RegHandle;
    RegHandle = 0LL;
    dword_1C000B000 = 0;
    EtwUnregister(v26);
    WppCleanupKm((__int64)DriverObject);
  }
  return ClassObject;
}
