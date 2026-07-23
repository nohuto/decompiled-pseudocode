/*
 * XREFs of Phase1InitializationIoReady @ 0x140C4E7F4
 * Callers:
 *     Phase1Initialization @ 0x1406F0AF0 (Phase1Initialization.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopUmpoMessageCallback @ 0x14044C310 (PopUmpoMessageCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1404D93E8 (RtlpInitializeNonVolatileFlush.c)
 *     ExLogTimeZoneInformation @ 0x1404DA5AC (ExLogTimeZoneInformation.c)
 *     InbvSetProgressBarSubset @ 0x1404F82B4 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1404F9260 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x140603DE0 (VfClearVerifierSettings.c)
 *     CarInitLogging @ 0x14060A0E0 (CarInitLogging.c)
 *     CarReportUnusualShutdown @ 0x14060B54C (CarReportUnusualShutdown.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExQueryBootEntropyInformation @ 0x1406EDAA8 (ExQueryBootEntropyInformation.c)
 *     TlgRegisterAggregateProvider @ 0x1406EFC6C (TlgRegisterAggregateProvider.c)
 *     SmpSystemStoreCreate @ 0x14078A484 (SmpSystemStoreCreate.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     IoRegisterPlugPlayNotification @ 0x14096BD60 (IoRegisterPlugPlayNotification.c)
 *     sub_140978BA4 @ 0x140978BA4 (sub_140978BA4.c)
 *     ExInitializeNls @ 0x140ABD924 (ExInitializeNls.c)
 *     VfNotifyVerifierOfEvent @ 0x140B72EC0 (VfNotifyVerifierOfEvent.c)
 *     MmInitSystem @ 0x140BCD2E8 (MmInitSystem.c)
 *     PsInitSystem @ 0x140BCD7F8 (PsInitSystem.c)
 *     MmInitSystemDll @ 0x140BCD990 (MmInitSystemDll.c)
 *     InitSafeBoot @ 0x140BFA900 (InitSafeBoot.c)
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 *     KasanInitSystem @ 0x140C15600 (KasanInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C2DF80 (BapdpProcessVsmKeyBlobs.c)
 *     CmInitSystem2 @ 0x140C4E174 (CmInitSystem2.c)
 *     SaveNodeDistanceInformation @ 0x140C4E1FC (SaveNodeDistanceInformation.c)
 *     SeRmInitPhase1 @ 0x140C4EBE4 (SeRmInitPhase1.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
 *     StartFirstUserProcess @ 0x140C4F72C (StartFirstUserProcess.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 */

NTSTATUS __fastcall Phase1InitializationIoReady(_QWORD *a1, char a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int inited; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rdi
  KSPIN_LOCK *v11; // r14
  KIRQL v12; // al
  _QWORD *v13; // rbx
  KIRQL v14; // bp
  void *v15; // rcx
  KIRQL v16; // al

  RtlpInitializeNonVolatileFlush();
  v4 = ExInitializeNls();
  if ( v4 < 0 )
    KeBugCheckEx(0x32u, v4, 7uLL, 0LL, 0LL);
  LOBYTE(v5) = CmStateSeparationEnabled != 0;
  v6 = ExpInitializeStateSeparationPhase1(v5);
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1LL, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset(0LL, 100LL);
  if ( InitSafeBootMode )
    InitSafeBoot(a2);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E074B8, 0LL, 0LL);
  v8 = *((_QWORD *)PspSystemPartition + 3);
  if ( (*(_DWORD *)(v8 + 2224) & 3) != 0 )
    SmpSystemStoreCreate(v8);
  dword_140E285B0 = 3;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&unk_140E08FA8, (__int64)VmpTracingEnabledCallback, 0LL);
  *(_QWORD *)&VmpTraceLoggingProvider = &unk_140E08FA8;
  MmInitSystem(2LL, (ULONG_PTR)a1, v9);
  CcInitializeCacheManager(2);
  ObInitSystem(2LL);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  KeInitSystem(3LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09230, 0LL, 0LL);
  if ( byte_140FCDC68 )
    KasanInitSystem((__int64)a1, 2);
  ExLogTimeZoneInformation();
  sub_140978BA4();
  if ( !(unsigned __int8)PsInitSystem(2, a1) )
    goto LABEL_47;
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BapdpProcessVsmKeyBlobs(1);
  if ( !(unsigned __int8)PsInitSystem(3, a1) )
LABEL_47:
    KeBugCheck(0x6Bu);
  TlgRegisterAggregateProvider((__int64)&dword_140E06C30);
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  if ( ExCbPhase1InitComplete )
  {
    v10 = (_QWORD *)(ExCbPhase1InitComplete + 16);
    if ( (_QWORD *)*v10 != v10 )
    {
      v11 = (KSPIN_LOCK *)(ExCbPhase1InitComplete + 8);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(ExCbPhase1InitComplete + 8));
      v13 = (_QWORD *)*v10;
      v14 = v12;
      if ( v12 == 2 )
      {
        while ( v13 != v10 )
        {
          guard_dispatch_icall_no_overrides(v13[4]);
          v13 = (_QWORD *)*v13;
        }
      }
      else
      {
        while ( v13 != v10 )
        {
          if ( !*((_BYTE *)v13 + 44) )
          {
            ++*((_DWORD *)v13 + 10);
            KeReleaseSpinLock(v11, v14);
            v15 = (void *)v13[4];
            if ( (void (__fastcall *)(PVOID, PVOID, PVOID))v13[3] == PopUmpoMessageCallback )
              PopUmpoMessageCallback(v15, 0LL, 0LL);
            else
              guard_dispatch_icall_no_overrides(v15);
            v16 = KeAcquireSpinLockRaiseToDpc(v11);
            --*((_DWORD *)v13 + 10);
            v14 = v16;
            if ( *((_BYTE *)v13 + 44) )
            {
              if ( !*((_DWORD *)v13 + 10) )
                KeSetEvent(&ExpCallbackEvent, 0, 0);
            }
          }
          v13 = (_QWORD *)*v13;
        }
      }
      KeReleaseSpinLock(v11, v14);
    }
  }
  if ( ViVerifierEnabled )
  {
    CarInitLogging();
    VfNotifyVerifierOfEvent(5);
  }
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  if ( (*(_DWORD *)(a1[30] + 132LL) & 2) == 0 && !InitSafeBootMode )
    CarReportUnusualShutdown(ViVerifierEnabled == 0);
  ExQueryBootEntropyInformation(0LL);
  if ( !(unsigned __int8)KeInitSystem(4LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  DriverObject = PnpDriverObject;
  return IoRegisterPlugPlayNotification(
           EventCategoryDeviceInterfaceChange,
           1u,
           &GUID_PRM_DEVICE,
           PnpDriverObject,
           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)ExpPrmNotifyInterfaceChange,
           0LL,
           &qword_140EFA250);
}
