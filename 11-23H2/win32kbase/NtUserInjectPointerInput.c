/*
 * XREFs of NtUserInjectPointerInput @ 0x1C0148CC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
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
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01960D8 (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     UserGetLastError @ 0x1C0208F54 (UserGetLastError.c)
 */

__int64 __fastcall NtUserInjectPointerInput(char *a1, NSInstrumentation::CLeakTrackingAllocator *a2, unsigned int a3)
{
  __int64 v3; // r12
  char v6; // dl
  int v7; // edx
  int v8; // r8d
  int v9; // esi
  __int64 v10; // rdx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID v14; // r14
  char *v15; // r12
  ULONG64 v16; // rdx
  __int64 v17; // r8
  int v18; // r9d
  char v19; // dl
  _DWORD *v20; // rsi
  PDEVICE_OBJECT v21; // rcx
  __int16 v22; // ax
  int v23; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v24; // rcx
  int v25; // eax
  int v26; // r13d
  __int64 v27; // rsi
  char *QuotaZInit; // rax
  PDEVICE_OBJECT v29; // rcx
  char v30; // dl
  char v31; // r8
  unsigned __int16 v32; // ax
  char v33; // dl
  __int64 v34; // r8
  NTSTATUS v35; // r14d
  char v36; // dl
  ULONG v37; // eax
  char v38; // dl
  char v39; // dl
  char v40; // r14
  bool v41; // r15
  char LastError; // al
  int v43; // r8d
  int v44; // edx
  unsigned int Count; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-A8h]
  __int64 v57; // [rsp+40h] [rbp-88h]
  __int64 v58; // [rsp+48h] [rbp-80h]
  char *v59; // [rsp+70h] [rbp-58h]
  _DWORD *v60; // [rsp+78h] [rbp-50h]
  _DWORD *v61; // [rsp+80h] [rbp-48h] BYREF
  __int64 *v62[3]; // [rsp+88h] [rbp-40h] BYREF
  int v63; // [rsp+E8h] [rbp+20h] BYREF

  v3 = a3;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v58) = HIDWORD(a2);
    HIDWORD(v57) = HIDWORD(a1);
    WPP_RECORDER_AND_TRACE_SF_qqd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      BugCheckParameter4,
      2u,
      0x36u,
      (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v62, "InjectPointerInput", 0LL);
  LOBYTE(v63) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&v63);
  v59 = 0LL;
  v61 = 0LL;
  if ( (_BYTE)v63 )
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
        55,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v9 = 0;
    UserSetLastError(5);
    goto LABEL_153;
  }
  if ( !(_DWORD)v3 )
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
        56,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v9 = 0;
    UserSetLastError(87);
    v14 = 0LL;
    goto LABEL_27;
  }
  v18 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, (PVOID *)&v61);
  if ( v18 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v19 = 0;
    }
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v57) = v18;
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v19,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        2u,
        2u,
        0x39u,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        v57);
    }
    v9 = 0;
    UserSetLastError(6);
    v14 = v61;
    goto LABEL_27;
  }
  v20 = v61;
  v60 = v61;
  if ( (v61[64] & 0x2000) != 0 )
  {
    if ( (unsigned int)ApiSetEditionIsRIMInjectionBlocked((__int64)(v61 + 18)) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          59,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
      }
      v23 = 5;
      goto LABEL_47;
    }
    if ( (v20[68] & 0x80u) == 0 )
    {
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_46;
      v22 = 60;
      goto LABEL_45;
    }
    v24 = (NSInstrumentation::CLeakTrackingAllocator *)*((_QWORD *)v20 + 68);
    if ( (*((_DWORD *)v24 + 90) & 8) == 0 || (v25 = 1, (*((_DWORD *)v24 + 90) & 0x2000) != 0) )
      v25 = 0;
    if ( !v25 )
    {
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v16) = 0;
      }
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_46;
      v22 = 61;
      goto LABEL_45;
    }
    v26 = *((_DWORD *)v24 + 6);
    v27 = 152 * v3;
    if ( 152 * v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v24, v16, v17) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = (NSInstrumentation::CLeakTrackingAllocator *)((char *)a2 + v27);
      v16 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 + v27 > MmUserProbeAddress || v24 < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    QuotaZInit = (char *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v24, v16, 152 * v3, 0x74697355u);
    v59 = QuotaZInit;
    if ( !QuotaZInit )
      ExRaiseStatus(-1073741801);
    memmove(QuotaZInit, a2, 152 * v3);
    if ( *(_DWORD *)v59 == 3 )
    {
      if ( v26 != 5 )
      {
        v29 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_95;
        v32 = 63;
LABEL_94:
        LODWORD(v57) = v26;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)v29->AttachedDevice,
          v30,
          v31,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          2u,
          2u,
          v32,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          v57);
LABEL_95:
        v9 = 0;
        UserSetLastError(87);
        goto LABEL_48;
      }
      if ( (_DWORD)v3 != 1 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v33 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v33 = 0;
        }
        if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v57) = v3;
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v33,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            2u,
            2u,
            0x40u,
            (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
            v57);
        }
        goto LABEL_46;
      }
    }
    else
    {
      if ( *(_DWORD *)v59 != 2 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v39 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v39 = 0;
        }
        if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v57) = *(_DWORD *)v59;
          WPP_RECORDER_AND_TRACE_SF_d(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v39,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            2u,
            2u,
            0x43u,
            (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
            v57);
        }
        goto LABEL_46;
      }
      if ( v26 != 3 )
      {
        v29 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v30 = 0;
        }
        v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v30 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_95;
        v32 = 65;
        goto LABEL_94;
      }
      v14 = v60;
      if ( (unsigned int)v3 > *(_DWORD *)(*((_QWORD *)v60 + 68) + 768LL) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v38 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          v38 = 0;
        }
        if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v58) = *(_DWORD *)(*((_QWORD *)v60 + 68) + 768LL);
          LODWORD(v57) = v3;
          WPP_RECORDER_AND_TRACE_SF_dd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v38,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
            2u,
            2u,
            0x42u,
            (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
            v57,
            v58);
        }
        v9 = 0;
        UserSetLastError(87);
        goto LABEL_27;
      }
    }
    v34 = (unsigned int)v3;
    v15 = v59;
    v35 = RIMIDEInjectHIDReportFromPointerInfo(v60, v59, v34);
    if ( v35 >= 0 )
    {
      v9 = 1;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v36 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v36 = 0;
      }
      if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v57) = v35;
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v36,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          2u,
          2u,
          0x44u,
          (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
          v57);
      }
      v9 = 0;
      v37 = RtlNtStatusToDosError(v35);
      UserSetLastError(v37);
    }
    v14 = v60;
    goto LABEL_141;
  }
  v21 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v16) = 0;
  }
  LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_46;
  v22 = 58;
LABEL_45:
  WPP_RECORDER_AND_TRACE_SF_(
    v21->AttachedDevice,
    v16,
    v17,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    2,
    v22,
    (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
LABEL_46:
  v23 = 87;
LABEL_47:
  v9 = 0;
  UserSetLastError(v23);
LABEL_48:
  v14 = v60;
LABEL_27:
  v15 = v59;
LABEL_141:
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( v15 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v15);
  if ( !v9 )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v40 = 0;
    }
    v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      LOBYTE(v43) = v41;
      LOBYTE(v44) = v40;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v44,
        v43,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        69,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids,
        LastError);
    }
  }
LABEL_153:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE((__int64)v11, v10, v12, v13) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      v63 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
    }
    if ( gphePrimaryDestroyTarget )
    {
      v63 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      v63 = 0x20000;
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
  EtwTraceReleaseUserCrit(v47, v46, v48, v49);
  v54 = SGDGetUserSessionState(v51, v50, v52, v53);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v54 + 8));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v62);
  return v9;
}
