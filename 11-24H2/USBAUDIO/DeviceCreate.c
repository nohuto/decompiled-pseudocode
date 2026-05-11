/*
 * XREFs of DeviceCreate @ 0x1400089A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x140005138 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140008700 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     InitializeSidebandContext @ 0x14000B8FC (InitializeSidebandContext.c)
 *     McGenEventRegister_EtwRegister @ 0x14000BDB0 (McGenEventRegister_EtwRegister.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     WmiRegisterProvider @ 0x14002E464 (WmiRegisterProvider.c)
 */

__int64 __fastcall DeviceCreate(__int64 a1, __int64 a2, __int16 a3)
{
  NTSTATUS v4; // edi
  PDEVICE_OBJECT v5; // rcx
  PDRIVER_CONTROL *Pool2; // rax
  int v7; // edx
  int v8; // r8d
  PDRIVER_CONTROL *v9; // rbx
  const wchar_t *v10; // rax
  __int64 v11; // r8
  KIRQL v12; // al
  PDRIVER_CONTROL DeviceRoutine; // rcx
  _COUNTED_REASON_CONTEXT Context; // [rsp+50h] [rbp-30h] BYREF

  memset(&Context, 0, sizeof(Context));
  v4 = -1073741670;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_GLOBAL_Control->DeviceExtension);
  }
  McGenEventRegister_EtwRegister(v5, a2, &EXBUSAUD_PROVIDER_Context, &EXBUSAUD_PROVIDER_Context);
  EtwSetInformation(
    EXBUSAUD_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Pool2 = (PDRIVER_CONTROL *)ExAllocatePool2(64LL, 1088LL, 1096972357LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    v4 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Pool2, ExFreePool);
    if ( v4 < 0 )
    {
      ExFreePool(v9);
    }
    else
    {
      *(_QWORD *)(a1 + 16) = v9;
      InitializeSidebandContext(v9 + 90);
      WmiRegisterProvider(a1);
      KeInitializeSpinLock((PKSPIN_LOCK)v9 + 12);
      v9[14] = (PDRIVER_CONTROL)(v9 + 13);
      v9[13] = (PDRIVER_CONTROL)(v9 + 13);
      KeInitializeMutex((PRKMUTEX)(v9 + 127), 0);
      v9[2] = (PDRIVER_CONTROL)a1;
      *((_BYTE *)v9 + 64) = 1;
      Context.ResourceReasonId = 900;
      Context.Flags = 2;
      v10 = L"mmres.dll";
      Context.StringCount = 0;
      Context.ReasonStrings = 0LL;
      v11 = 0x7FFFLL;
      Context.ResourceFileName = 0LL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      if ( v11 )
      {
        Context.ResourceFileName.Buffer = L"mmres.dll";
        Context.ResourceFileName.Length = 2 * (0x7FFF - v11);
        Context.ResourceFileName.MaximumLength = Context.ResourceFileName.Length + 2;
        PoCreatePowerRequest((PVOID *)v9 + 65, *(PDEVICE_OBJECT *)(a1 + 24), &Context);
      }
      KeInitializeEvent((PRKEVENT)(v9 + 70), NotificationEvent, 1u);
      KeInitializeSpinLock((PKSPIN_LOCK)v9 + 81);
      KeInitializeSemaphore((PRKSEMAPHORE)v9 + 21, 0, 0x7FFFFFFF);
      v9[83] = (PDRIVER_CONTROL)(v9 + 82);
      v9[82] = (PDRIVER_CONTROL)(v9 + 82);
      v4 = IoCsqInitialize(
             (PIO_CSQ)(v9 + 73),
             CsInsertIrp,
             CSidebandDevice::staticCsqRemoveIrp,
             CsPeekNextIrp,
             CsAcquireLock,
             CsReleaseLock,
             CsCompleteCanceledIrp);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))pExtBusDeviceDispatchTable)(a1);
        if ( v4 >= 0 )
        {
          v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
          DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          ++WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
          if ( *((struct _DEVICE_OBJECT **)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 1) != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
            __fastfail(3u);
          *v9 = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          v9[1] = (PDRIVER_CONTROL)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          *((_QWORD *)DeviceRoutine + 1) = v9;
          WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (PDRIVER_CONTROL)v9;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v12);
          return (unsigned int)v4;
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(WPP_GLOBAL_Control->AttachedDevice, v7, v8, WPP_GLOBAL_Control->DeviceExtension);
  }
  return (unsigned int)v4;
}
