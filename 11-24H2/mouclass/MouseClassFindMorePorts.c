/*
 * XREFs of MouseClassFindMorePorts @ 0x1C000E190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002770 (WPP_RECORDER_SF_.c)
 *     MouseClassLogError @ 0x1C00056A0 (MouseClassLogError.c)
 *     __security_check_cookie @ 0x1C0006AE0 (__security_check_cookie.c)
 *     memset @ 0x1C0006F00 (memset.c)
 *     MouDeterminePortsServiced @ 0x1C000E010 (MouDeterminePortsServiced.c)
 *     MouCreateClassObject @ 0x1C000F950 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000FF40 (MouseAddDeviceEx.c)
 */

void __fastcall MouseClassFindMorePorts(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  PVOID v4; // rbx
  ULONG NumberOfMapRegisters; // r14d
  int i; // r15d
  int ClassObject; // eax
  __int64 v8; // rsi
  void *v9; // rcx
  PVOID v10; // rdx
  int v11; // r12d
  void *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  ULONG v15; // [rsp+40h] [rbp-C0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h]
  PVOID P[3]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v21[512]; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v19 = 0LL;
  v15 = 0;
  v4 = 0LL;
  FileObject = 0LL;
  P[0] = 0LL;
  Destination = 0LL;
  memset(v21, 0, sizeof(v21));
  DestinationString.Buffer = (PWSTR)v21;
  RtlCopyUnicodeString(&DestinationString, &stru_1C000B370);
  DestinationString.Length -= 10;
  RtlAppendUnicodeToString(&DestinationString, L"Port");
  RtlInitUnicodeString(&Destination, 0LL);
  Destination.MaximumLength = DestinationString.Length + 20;
  Destination.Buffer = (PWSTR)ExAllocatePool2(256LL, (unsigned __int16)(DestinationString.Length + 20), 1131769677LL);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(&Destination, L"\\Device\\");
    RtlAppendUnicodeToString(&Destination, DestinationString.Buffer);
    RtlAppendUnicodeToString(&Destination, L"0");
    MouDeterminePortsServiced(&DestinationString.Length, &v15);
    NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
    for ( i = 0; NumberOfMapRegisters < HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock); ++NumberOfMapRegisters )
    {
      if ( NumberOfMapRegisters >= v15 )
        break;
      Destination.Buffer[((unsigned __int64)Destination.Length >> 1) - 1] = NumberOfMapRegisters + 48;
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        P[0] = 0LL;
      }
      ClassObject = MouCreateClassObject(DriverObject, 1);
      if ( ClassObject >= 0 )
      {
        v8 = *(_QWORD *)(v19 + 64);
        *(_QWORD *)v8 = v19;
        *(_BYTE *)(v8 + 64) = 0;
        if ( IoGetDeviceObjectPointer(&Destination, 0x80u, &FileObject, (PDEVICE_OBJECT *)(v8 + 16)) )
        {
          v9 = *(void **)(v8 + 104);
          if ( v9 )
          {
            ExFreePoolWithTag(v9, 0);
            *(_QWORD *)(v8 + 120) = 0LL;
            *(_QWORD *)(v8 + 112) = 0LL;
            *(_QWORD *)(v8 + 104) = 0LL;
          }
          IoDeleteDevice(*(PDEVICE_OBJECT *)v8);
          v4 = P[0];
        }
        else
        {
          v4 = P[0];
          v10 = P[0];
          *(_BYTE *)(v19 + 76) = *(_BYTE *)(*(_QWORD *)(v8 + 16) + 76LL) + 1;
          v11 = MouseAddDeviceEx(v8, v10, FileObject);
          *(_DWORD *)(v19 + 48) &= ~0x80u;
          if ( v4 )
          {
            ExFreePoolWithTag(v4, 0);
            v4 = 0LL;
            P[0] = 0LL;
          }
          if ( v11 >= 0 )
          {
            v13 = (_QWORD *)qword_1C000B588;
            v14 = (_QWORD *)(v8 + 320);
            if ( *(__int64 **)qword_1C000B588 != &qword_1C000B580 )
              __fastfail(3u);
            *v14 = &qword_1C000B580;
            ++i;
            v14[1] = v13;
            *v13 = v14;
            qword_1C000B588 = (__int64)v14;
          }
          else
          {
            if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
            {
              ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
              FileObject = (PFILE_OBJECT)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                         + 3 * *(unsigned int *)(v8 + 180));
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v8 + 180)) = 0LL;
              *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * *(unsigned int *)(v8 + 180) + 19) = 1;
              *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * *(unsigned int *)(v8 + 180) + 1) = 0LL;
              ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
            }
            else if ( *(_QWORD *)(v8 + 336) )
            {
              FileObject = *(PFILE_OBJECT *)(v8 + 336);
              *(_QWORD *)(v8 + 336) = 0LL;
            }
            if ( FileObject )
              ObfDereferenceObject(FileObject);
            v12 = *(void **)(v8 + 104);
            if ( v12 )
            {
              ExFreePoolWithTag(v12, 0);
              *(_QWORD *)(v8 + 120) = 0LL;
              *(_QWORD *)(v8 + 112) = 0LL;
              *(_QWORD *)(v8 + 104) = 0LL;
            }
            IoDeleteDevice(*(PDEVICE_OBJECT *)v8);
          }
        }
      }
      else
      {
        MouseClassLogError(DriverObject, -1073414143, 20008, ClassObject, 0, 0LL, 0);
        v4 = P[0];
      }
    }
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters += i;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, 2LL, 2LL);
    LODWORD(P[0]) = Destination.MaximumLength;
    MouseClassLogError(DriverObject, -1073414143, 20008, -1073741823, 1u, P, 0);
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
