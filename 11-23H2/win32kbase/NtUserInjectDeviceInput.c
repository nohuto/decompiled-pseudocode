/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C0147210
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C007ABD0 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C00C9A0C (ApiSetEditionIsRIMInjectionBlocked.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     RIMIDEInjectDeviceInput @ 0x1C0195C58 (RIMIDEInjectDeviceInput.c)
 *     UserGetLastError @ 0x1C0208F54 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(char *a1, NSInstrumentation::CLeakTrackingAllocator *a2, unsigned int a3)
{
  char v5; // dl
  int v6; // edx
  int v7; // r8d
  signed __int32 *v8; // r13
  int v9; // esi
  void *v10; // rdx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rsi
  ULONG64 v15; // rdx
  __int64 v16; // r8
  int v17; // r9d
  char v18; // dl
  PDEVICE_OBJECT v19; // rcx
  __int16 v20; // r9
  NSInstrumentation::CLeakTrackingAllocator *v21; // rcx
  ULONG v22; // ecx
  int v23; // eax
  void *QuotaZInit; // rax
  void *v25; // r12
  int v26; // eax
  NTSTATUS v27; // r15d
  char v28; // dl
  char v29; // dl
  char v30; // r14
  bool v31; // r15
  char LastError; // al
  int v33; // r8d
  int v34; // edx
  unsigned int Count; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-98h]
  __int64 v47; // [rsp+40h] [rbp-78h]
  const signed __int32 *v48; // [rsp+70h] [rbp-48h] BYREF
  void *v49; // [rsp+78h] [rbp-40h]
  __int64 *v50[2]; // [rsp+80h] [rbp-38h] BYREF
  int v52; // [rsp+D8h] [rbp+20h] BYREF

  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v47) = HIDWORD(a1);
    WPP_RECORDER_AND_TRACE_SF_qqd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      BugCheckParameter4,
      2u,
      0x46u,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v50, "InjectDeviceInput", 0LL);
  LOBYTE(v52) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v52);
  v8 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  if ( (_BYTE)v52 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        71,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v9 = 0;
    UserSetLastError(5);
    goto LABEL_115;
  }
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        72,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v9 = 0;
    UserSetLastError(87);
    goto LABEL_103;
  }
  v14 = 12LL * a3;
  if ( v14 > 0xFFFFFFFF )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v29 = 0;
    }
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v47) = a3;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v29,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        2u,
        0x49u,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v47);
    }
    goto LABEL_100;
  }
  v17 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, (PVOID *)&v48);
  if ( v17 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v18 = 0;
    }
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v47) = v17;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v18,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        2u,
        0x4Au,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v47);
    }
    v9 = 0;
    UserSetLastError(6);
    v8 = (signed __int32 *)v48;
    goto LABEL_103;
  }
  v8 = (signed __int32 *)v48;
  if ( !_bittest(v48 + 64, 0xDu) )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v15) = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_100;
    v20 = 75;
LABEL_45:
    WPP_RECORDER_AND_TRACE_SF_(
      v19->AttachedDevice,
      v15,
      v16,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      2,
      v20,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_100:
    v22 = 87;
LABEL_101:
    v9 = 0;
LABEL_102:
    UserSetLastError(v22);
    goto LABEL_103;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)(v48 + 18)) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        76,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v22 = 5;
    goto LABEL_101;
  }
  if ( *((_BYTE *)v8 + 120) != 2 )
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v15) = 0;
    }
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_100;
    v20 = 77;
    goto LABEL_45;
  }
  if ( (v8[68] & 0x80u) != 0 )
  {
    v21 = (NSInstrumentation::CLeakTrackingAllocator *)*(unsigned int *)(*((_QWORD *)v8 + 68) + 360LL);
    if ( ((unsigned __int8)v21 & 8) == 0 || (v23 = 1, ((unsigned __int16)v21 & 0x2000) != 0) )
      v23 = 0;
    if ( v23 )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v15) = 0;
      }
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v15 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_100;
      v20 = 78;
      goto LABEL_45;
    }
  }
  if ( v14 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v21, v15, v16) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v21 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a2 + v14);
    v15 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 + v14 > MmUserProbeAddress || v21 < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                         v21,
                         v15,
                         (unsigned int)v14,
                         0x74697355u);
  v25 = QuotaZInit;
  v49 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  memmove(QuotaZInit, a2, (unsigned int)v14);
  v26 = RIMIDEInjectDeviceInput(v8, v25, a3, 4LL);
  v27 = v26;
  if ( v26 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v28 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v28 = 0;
    }
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v47) = v26;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v28,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        2u,
        0x50u,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v47);
    }
    v9 = 0;
    v22 = RtlNtStatusToDosError(v27);
    goto LABEL_102;
  }
  v9 = 1;
LABEL_103:
  v10 = v49;
  if ( v49 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v49);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( !v9 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v30 = 0;
    }
    v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v33) = v31;
      LOBYTE(v34) = v30;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        v33,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        81,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        LastError);
    }
  }
LABEL_115:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v11, (__int64)v10, v12, v13) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v52 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v52 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v52 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1184);
    }
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetCurrentThread() )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit(v37, v36, v38, v39);
  v44 = SGDGetUserSessionState(v41, v40, v42, v43);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v44 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v50);
  return v9;
}
