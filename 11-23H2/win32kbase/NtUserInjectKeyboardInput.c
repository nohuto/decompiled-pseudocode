/*
 * XREFs of NtUserInjectKeyboardInput @ 0x1C0003D50
 * Callers:
 *     <none>
 * Callees:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C000465C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0005ED4 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0005F38 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
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
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ApiSetEditionIsRIMInjectionBlocked @ 0x1C00C9A0C (ApiSetEditionIsRIMInjectionBlocked.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     UserGetLastError @ 0x1C0208F54 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectKeyboardInput(char *Src, unsigned int a2)
{
  __int64 v2; // rsi
  _UNKNOWN **v4; // r8
  _BYTE *v5; // r13
  __int64 CurrentProcessWin32Process; // rax
  ULONG64 v7; // rdx
  int v8; // r8d
  __int64 v9; // r15
  int v10; // esi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  void *QuotaZInit; // rax
  int v14; // edx
  int v15; // r8d
  PDEVICE_OBJECT v16; // rcx
  __int16 v17; // r9
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // eax
  PDEVICE_OBJECT v23; // rcx
  __int16 v24; // r9
  int v25; // eax
  int v26; // edx
  int v27; // r8d
  NTSTATUS v28; // r14d
  char v29; // r14
  bool v30; // r15
  char LastError; // al
  int v32; // r8d
  int v33; // edx
  unsigned int Count; // eax
  __int64 v35; // rax
  void *v37; // [rsp+60h] [rbp-58h]
  _BYTE v38[80]; // [rsp+68h] [rbp-50h] BYREF
  unsigned int v39; // [rsp+C8h] [rbp+10h]
  int v40; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  v39 = a2;
  v2 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v4,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      42,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
      (char)Src,
      v2);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v38,
    "InjectKeyboardInput",
    0LL);
  LOBYTE(v40) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((EnterLeaveCritMitRitHandOffHazard *)&v40);
  v37 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( (_BYTE)v40 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        43,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v10 = 0;
    UserSetLastError(5LL);
    goto LABEL_115;
  }
  if ( (unsigned int)(v2 - 1) > 0xF )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        44,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v2);
    }
    goto LABEL_100;
  }
  v11 = 3 * v2;
  v12 = 24 * v2;
  if ( v12 )
  {
    if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (unsigned __int64)&Src[v12];
    v7 = MmUserProbeAddress;
    if ( (unsigned __int64)&Src[v12] > MmUserProbeAddress || v11 < (unsigned __int64)Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                 (NSInstrumentation::CLeakTrackingAllocator *)v11,
                 v7,
                 v12,
                 0x6B697355u);
  v37 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  memmove(QuotaZInit, Src, v12);
  if ( *(_QWORD *)(v9 + 928) == -1LL )
  {
    if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v14) = 0;
      }
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_39;
      v17 = 46;
LABEL_38:
      WPP_RECORDER_AND_TRACE_SF_(
        v16->AttachedDevice,
        v14,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        v17,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_39:
      v18 = 5LL;
LABEL_101:
      v10 = 0;
LABEL_102:
      UserSetLastError(v18);
      goto LABEL_103;
    }
    v19 = RIMIDECreatePseudoMouseOrKeyboardDevice(1LL, v9 + 928);
    if ( v19 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          47,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          v19);
      }
      v18 = 1359LL;
      goto LABEL_101;
    }
  }
  v22 = RawInputManagerDeviceObjectResolveHandle(*(_QWORD *)(v9 + 928), 3LL, 1LL, &Object);
  if ( v22 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        48,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v22);
    }
    v10 = 0;
    UserSetLastError(6LL);
    v5 = Object;
    goto LABEL_103;
  }
  v5 = Object;
  if ( (*((_DWORD *)Object + 64) & 0x2000) == 0 )
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v14) = 0;
    }
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_100;
    v24 = 49;
LABEL_66:
    WPP_RECORDER_AND_TRACE_SF_(
      v23->AttachedDevice,
      v14,
      v15,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      2,
      v24,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_100:
    v18 = 87LL;
    goto LABEL_101;
  }
  if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((char *)Object + 72) )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v14) = 0;
    }
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_39;
    v17 = 50;
    goto LABEL_38;
  }
  if ( v5[120] != 1 )
  {
    v23 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v14) = 0;
    }
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_100;
    v24 = 51;
    goto LABEL_66;
  }
  v25 = RIMIDEInjectKeyboardFromKeybdInputStruct(v5, v37, v39);
  v28 = v25;
  if ( v25 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v26) = 0;
    }
    if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v26,
        v27,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        52,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v25);
    }
    v10 = 0;
    v18 = RtlNtStatusToDosError(v28);
    goto LABEL_102;
  }
  v10 = 1;
LABEL_103:
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v37 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v37);
  if ( !v10 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v29 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v29 = 0;
    }
    v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v32) = v30;
      LOBYTE(v33) = v29;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v33,
        v32,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        53,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        LastError);
    }
  }
LABEL_115:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v40 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1170LL);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v40 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1178LL);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v40 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1184LL);
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
  EtwTraceReleaseUserCrit();
  v35 = SGDGetUserSessionState();
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v35 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v38);
  return v10;
}
