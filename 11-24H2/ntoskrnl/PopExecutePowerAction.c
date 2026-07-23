/*
 * XREFs of PopExecutePowerAction @ 0x140751894
 * Callers:
 *     PopThermalStateTransitionWorker @ 0x140752A80 (PopThermalStateTransitionWorker.c)
 *     NtInitiatePowerAction @ 0x140752F10 (NtInitiatePowerAction.c)
 *     PopPowerAggregatorNotifyPdcPhaseState @ 0x140757DB4 (PopPowerAggregatorNotifyPdcPhaseState.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x140757FE0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 *     PopPowerAggregatorTriggerAdaptiveAction @ 0x140758390 (PopPowerAggregatorTriggerAdaptiveAction.c)
 *     PopIdleAoAcDozeToS4 @ 0x14075B3A0 (PopIdleAoAcDozeToS4.c)
 *     PdcPoSetPowerAction @ 0x14075C220 (PdcPoSetPowerAction.c)
 *     PoTtmInitiatePowerStateTransition @ 0x14075C2E8 (PoTtmInitiatePowerStateTransition.c)
 *     PopBatteryApplyCompositeState @ 0x140A304E8 (PopBatteryApplyCompositeState.c)
 *     NtSetSystemPowerState @ 0x140B61410 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     PopSetPowerActionState @ 0x1402B8248 (PopSetPowerActionState.c)
 *     PoStoreDiagnosticContext @ 0x1402BA9FC (PoStoreDiagnosticContext.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     PopSetNotificationWork @ 0x1403E6A78 (PopSetNotificationWork.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 *     PopDiagTraceShutdownAction @ 0x1405D2C18 (PopDiagTraceShutdownAction.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopResetActionDefaults @ 0x1406F9BD4 (PopResetActionDefaults.c)
 *     PopVerifyPowerActionPolicy @ 0x14099F5BC (PopVerifyPowerActionPolicy.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     PopVerifySystemPowerState @ 0x140A77F9C (PopVerifySystemPowerState.c)
 *     PopCompleteAction @ 0x140A84608 (PopCompleteAction.c)
 *     PopCompareActions @ 0x140A85160 (PopCompareActions.c)
 *     PopDiagTraceExecutePowerAction @ 0x140A96D28 (PopDiagTraceExecutePowerAction.c)
 *     PopPromoteActionFlag @ 0x140AA3F60 (PopPromoteActionFlag.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopExecutePowerAction(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4, unsigned int a5)
{
  unsigned int v5; // r14d
  int v6; // esi
  int v8; // eax
  unsigned int v11; // edi
  char v12; // r15
  int v13; // eax
  char v14; // r15
  int v15; // eax
  bool v16; // cf
  int v17; // r15d
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  int v21; // r9d
  int v22; // r9d
  int v23; // r9d
  int v24; // r9d
  int v25; // eax
  unsigned int v26; // r9d
  char v27; // r15
  char v28; // r15
  int v29; // eax
  bool v30; // zf
  __int64 v31; // rcx
  void *Pool2; // rax
  int v33; // ecx
  int v34; // eax
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v38; // [rsp+60h] [rbp-41h] BYREF
  int v39; // [rsp+68h] [rbp-39h] BYREF
  __int64 v40; // [rsp+70h] [rbp-31h] BYREF
  int v41; // [rsp+78h] [rbp-29h]
  ULONG_PTR v42; // [rsp+80h] [rbp-21h] BYREF
  _DWORD *v43; // [rsp+88h] [rbp-19h] BYREF
  int v44; // [rsp+90h] [rbp-11h]
  int v45; // [rsp+94h] [rbp-Dh]
  _QWORD *v46; // [rsp+98h] [rbp-9h] BYREF
  int v47; // [rsp+A0h] [rbp-1h]
  int v48; // [rsp+A4h] [rbp+3h]

  v42 = 0LL;
  v5 = 0;
  v6 = a4;
  v8 = a3[2];
  v40 = *(_QWORD *)a3;
  v11 = v40;
  v12 = 1;
  v39 = a4;
  v41 = v8;
  if ( (xmmword_140FC6B50 & 0x8000) != 0 )
  {
    v48 = 0;
    v45 = a4;
    v43 = a1;
    v46 = &v43;
    v44 = v40;
    v47 = 16;
    EtwTraceKernelEvent((int)&v46, 1, 0x80008000, 4642, 5249026);
  }
  if ( (a1[1] & 0x80u) != 0 )
  {
    PopVerifySystemPowerState(&v39, a5);
    BYTE2(v38) = PopVerifyPowerActionPolicy(&v40);
    if ( BYTE2(v38) )
    {
      PopCompleteAction(a1, 3221225659LL);
      v11 = v40;
      v6 = v39;
LABEL_78:
      v12 = BYTE2(v38);
      return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *a3, a3[1], a3[2], v6, a5, v11, HIDWORD(v40), v41, v12, v38);
    }
    v11 = v40;
    if ( (unsigned int)(v40 - 2) <= 1 )
      HIDWORD(v40) |= 0x80000000;
    v13 = a1[1];
    v14 = 0;
    BYTE1(v38) = 0;
    if ( (v13 & 2) != 0 )
      goto LABEL_66;
    a1[1] = v13 | 2;
    if ( v11 == 6 && PsWin32CalloutsEstablished )
    {
      v15 = *a1;
      if ( *a1 == 2 )
      {
        v11 = 0;
        LODWORD(v40) = 0;
        v16 = (v40 & 0x1000000000LL) != 0;
LABEL_18:
        v5 = v16 ? 16 : 32;
        goto LABEL_19;
      }
      if ( !v15 )
      {
        v11 = 0;
        LODWORD(v40) = 0;
        v5 = byte_140F0B3C4 != 0 ? 32 : 16;
        PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
        goto LABEL_19;
      }
      if ( v15 == 15 )
      {
        v16 = (v40 & 0x200000000000000LL) != 0;
        goto LABEL_18;
      }
    }
LABEL_19:
    if ( v11 - 4 <= 2 )
      PopDiagTraceShutdownAction(v11, v5, *a1);
    if ( !byte_140F0B981 )
      PopResetActionDefaults();
    if ( v11 )
    {
      v17 = HIDWORD(v40) | 0x10000000;
      LOBYTE(v38) = 0;
      v6 = v39;
      if ( v11 != 7 )
        v17 = HIDWORD(v40);
      if ( v11 == 3 )
        v6 = 5;
      if ( v11 == 4 )
        v6 = 6;
      v39 = v6;
      if ( (int)PopCompareActions(v11, (unsigned int)dword_140F0B984) >= 0 )
      {
        PopPromoteActionFlag((unsigned int)&v38, 1, v17, 0, 1);
        PopPromoteActionFlag((unsigned int)&v38, v19 + 1, v17, v19, 2);
        PopPromoteActionFlag((unsigned int)&v38, v20 + 4, v17, v20, 0x10000000);
        if ( v11 == 2 )
        {
          if ( v6 < *((_DWORD *)PopPolicy + 17) )
            v6 = *((_DWORD *)PopPolicy + 17);
          v39 = v6;
        }
        if ( v6 > dword_140F0B988 )
        {
          LOBYTE(v38) = v38 | 4;
          dword_140F0B988 = v6;
        }
      }
      LOBYTE(v18) = 1;
      PopPromoteActionFlag((unsigned int)&v38, 1, v17, v18, 4);
      PopPromoteActionFlag((unsigned int)&v38, 5, v17, v21, 0x80000000);
      PopPromoteActionFlag((unsigned int)&v38, 0, v17, v22, 0x40000000);
      PopPromoteActionFlag((unsigned int)&v38, 0, v17, v23, 8);
      PopPromoteActionFlag((unsigned int)&v38, 0, v17, v24, 32);
      if ( (int)PopCompareActions(v11, (unsigned int)dword_140F0B984) <= 0 )
      {
        v28 = v38;
      }
      else
      {
        v25 = PopCompareActions(v11, 3LL);
        v27 = v38;
        if ( v25 >= 0 )
          v27 = v38 | 2;
        if ( !(unsigned int)PopCompareActions(v26, 8LL) )
          v27 |= 2u;
        dword_140F0B984 = v11;
        v28 = v27 | 5;
        v29 = *a1;
        dword_140F0B998 = 0;
        dword_140F0B994 = v29;
        v30 = *a1 == 0;
        LOBYTE(v38) = v28;
        if ( v30 )
          dword_140F0B998 = a1[6];
        if ( (a1[1] & 0x100) == 0 )
        {
          if ( qword_140F0B9A0 )
          {
            ExFreePoolWithTag(qword_140F0B9A0, 0x67696450u);
            qword_140F0B9A0 = 0LL;
          }
          v31 = *((_QWORD *)a1 + 2);
          if ( v31 )
          {
            PoStoreDiagnosticContext(v31, 0LL, &v42);
            Pool2 = (void *)ExAllocatePool2(0x100uLL, v42, 0x67696450u);
            qword_140F0B9A0 = Pool2;
            if ( Pool2 )
            {
              if ( (int)PoStoreDiagnosticContext(*((_QWORD *)a1 + 2), (unsigned __int64 *)Pool2, &v42) < 0 )
              {
                ExFreePoolWithTag(qword_140F0B9A0, 0x67696450u);
                qword_140F0B9A0 = 0LL;
              }
            }
          }
        }
      }
      if ( dword_140F0B984 == 3 )
        dword_140F0B984 = 2;
      if ( v28 )
      {
        if ( (unsigned __int8)TtmIsEnabled() )
          PopTtmIsSxTransitionInProgress = 1;
        BYTE1(v38) = 1;
        if ( (unsigned __int8)byte_140F0B981 < 2u )
        {
          PopSetPowerActionState(1);
          dword_140F0B990 = 0;
          v33 = 2;
        }
        else
        {
          LOBYTE(PopAction) = v28 | PopAction;
          v33 = 1;
        }
        PopGetPolicyWorker(v33);
      }
      v14 = BYTE1(v38);
LABEL_61:
      v34 = a1[1];
      if ( (v34 & 1) != 0 )
        goto LABEL_72;
      a1[1] = v34 | 1;
      if ( v5 == 32 )
      {
        if ( !_InterlockedExchange(&PopShutdownEventCode, 32) )
          a2 |= 0x10u;
      }
      else
      {
        if ( v5 != 16 )
        {
LABEL_71:
          PopSetNotificationWork(a2);
LABEL_72:
          if ( (a1[1] & 0x20) != 0 )
          {
            if ( v14 )
            {
              v35 = (_QWORD *)qword_140F0B288;
              v36 = (_QWORD *)(*((_QWORD *)a1 + 1) + 32LL);
              if ( *(__int64 **)qword_140F0B288 != &PopActionWaiters )
                __fastfail(3u);
              *v36 = &PopActionWaiters;
              v36[1] = v35;
              *v35 = v36;
              qword_140F0B288 = (__int64)v36;
            }
            else
            {
              PopCompleteAction(a1, 0LL);
            }
          }
          goto LABEL_78;
        }
        if ( !_InterlockedCompareExchange(&PopShutdownEventCode, 16, 0) )
          a2 |= 0x10u;
      }
      v11 = v40;
      v6 = v39;
      goto LABEL_71;
    }
LABEL_66:
    v6 = v39;
    goto LABEL_61;
  }
  PopCompleteAction(a1, 0LL);
  return PopDiagTraceExecutePowerAction(*a1, a1[1], a2, *a3, a3[1], a3[2], v6, a5, v11, HIDWORD(v40), v41, v12, v38);
}
