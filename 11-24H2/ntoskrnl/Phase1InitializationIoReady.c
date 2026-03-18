/*
 * XREFs of Phase1InitializationIoReady @ 0x140C5FB78
 * Callers:
 *     Phase1Initialization @ 0x1406FC8E0 (Phase1Initialization.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopUmpoMessageCallback @ 0x14044B8D0 (PopUmpoMessageCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1404D8468 (RtlpInitializeNonVolatileFlush.c)
 *     ExLogTimeZoneInformation @ 0x1404D955C (ExLogTimeZoneInformation.c)
 *     InbvSetProgressBarSubset @ 0x1404FA794 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1404FB970 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x14060FDA0 (VfClearVerifierSettings.c)
 *     CarInitLogging @ 0x1406160A0 (CarInitLogging.c)
 *     CarReportUnusualShutdown @ 0x14061750C (CarReportUnusualShutdown.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExQueryBootEntropyInformation @ 0x1406F9784 (ExQueryBootEntropyInformation.c)
 *     TlgRegisterAggregateProvider @ 0x1406FBADC (TlgRegisterAggregateProvider.c)
 *     SmpSystemStoreCreate @ 0x140799854 (SmpSystemStoreCreate.c)
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 *     IoRegisterPlugPlayNotification @ 0x1409ED860 (IoRegisterPlugPlayNotification.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExInitializeNls @ 0x140AC1714 (ExInitializeNls.c)
 *     VfNotifyVerifierOfEvent @ 0x140B82EA0 (VfNotifyVerifierOfEvent.c)
 *     MmInitSystem @ 0x140BDE2E8 (MmInitSystem.c)
 *     PsInitSystem @ 0x140BDE7F8 (PsInitSystem.c)
 *     MmInitSystemDll @ 0x140BDE990 (MmInitSystemDll.c)
 *     InitSafeBoot @ 0x140C0B900 (InitSafeBoot.c)
 *     CcInitializeCacheManager @ 0x140C15A88 (CcInitializeCacheManager.c)
 *     KasanInitSystem @ 0x140C26690 (KasanInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 *     CmInitSystem2 @ 0x140C5F4F8 (CmInitSystem2.c)
 *     SaveNodeDistanceInformation @ 0x140C5F580 (SaveNodeDistanceInformation.c)
 *     StartFirstUserProcess @ 0x140C5FF68 (StartFirstUserProcess.c)
 *     SeRmInitPhase1 @ 0x140C6024C (SeRmInitPhase1.c)
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
 *     EmInitSystem @ 0x140C607D0 (EmInitSystem.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 */

NTSTATUS __fastcall Phase1InitializationIoReady(_QWORD *a1, char a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int inited; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdi
  KSPIN_LOCK *v13; // r14
  KIRQL v14; // al
  __int64 v15; // r9
  _QWORD *v16; // rbx
  KIRQL v17; // bp
  __int64 v18; // r9
  void *v19; // rcx
  KIRQL v20; // al

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
  InbvSetProgressBarSubset(0LL, 100LL, v8, v9);
  if ( (_DWORD)InitSafeBootMode )
    InitSafeBoot(a2);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E074B8, 0LL, 0LL);
  v10 = *((_QWORD *)PspSystemPartition + 3);
  if ( (*(_DWORD *)(v10 + 2224) & 3) != 0 )
    SmpSystemStoreCreate(v10);
  dword_140E287F0 = 3;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&unk_140E09088, (__int64)VmpTracingEnabledCallback, 0LL);
  *(_QWORD *)&VmpTraceLoggingProvider = &unk_140E09088;
  MmInitSystem(2LL, (ULONG_PTR)a1, v11);
  CcInitializeCacheManager(2);
  ObInitSystem(2LL);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  KeInitSystem(3LL);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09310, 0LL, 0LL);
  if ( byte_140FCDC28 )
    KasanInitSystem((__int64)a1, 2);
  ExLogTimeZoneInformation();
  sub_140972980();
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
    v12 = (_QWORD *)(ExCbPhase1InitComplete + 16);
    if ( (_QWORD *)*v12 != v12 )
    {
      v13 = (KSPIN_LOCK *)(ExCbPhase1InitComplete + 8);
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(ExCbPhase1InitComplete + 8));
      v16 = (_QWORD *)*v12;
      v17 = v14;
      if ( v14 == 2 )
      {
        while ( v16 != v12 )
        {
          guard_dispatch_icall_no_overrides(v16[4], 0LL, 0LL, v15);
          v16 = (_QWORD *)*v16;
        }
      }
      else
      {
        while ( v16 != v12 )
        {
          if ( !*((_BYTE *)v16 + 44) )
          {
            ++*((_DWORD *)v16 + 10);
            KeReleaseSpinLock(v13, v17);
            v19 = (void *)v16[4];
            if ( (void (__fastcall *)(PVOID, PVOID, PVOID))v16[3] == PopUmpoMessageCallback )
              PopUmpoMessageCallback(v19, 0LL, 0LL);
            else
              guard_dispatch_icall_no_overrides(v19, 0LL, 0LL, v18);
            v20 = KeAcquireSpinLockRaiseToDpc(v13);
            --*((_DWORD *)v16 + 10);
            v17 = v20;
            if ( *((_BYTE *)v16 + 44) )
            {
              if ( !*((_DWORD *)v16 + 10) )
                KeSetEvent(&ExpCallbackEvent, 0, 0);
            }
          }
          v16 = (_QWORD *)*v16;
        }
      }
      KeReleaseSpinLock(v13, v17);
    }
  }
  if ( ViVerifierEnabled )
  {
    CarInitLogging();
    VfNotifyVerifierOfEvent(5);
  }
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  if ( (*(_DWORD *)(a1[30] + 132LL) & 2) == 0 && !(_DWORD)InitSafeBootMode )
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
           &qword_140EFA590);
}
