/*
 * XREFs of NtInitiatePowerAction @ 0x140748B20
 * Callers:
 *     IopWarmEjectDevice @ 0x14072A10C (IopWarmEjectDevice.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140B4F470 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     PopThermalEventTransitionEnableDeepSleep @ 0x1404F7764 (PopThermalEventTransitionEnableDeepSleep.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140AA3790 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtInitiatePowerAction(
        POWER_ACTION SystemAction,
        SYSTEM_POWER_STATE LightestSystemState,
        ULONG Flags,
        BOOLEAN Asynchronous)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  char PreviousMode; // r12
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID v14; // rax
  __int64 Pool2; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  _QWORD *v27; // rax
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-50h]
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-50h]
  __int64 v31; // [rsp+28h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-48h]
  LARGE_INTEGER v33; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-38h] BYREF
  __int64 v35; // [rsp+40h] [rbp-30h]
  __int128 v36; // [rsp+48h] [rbp-28h] BYREF
  PVOID P[3]; // [rsp+58h] [rbp-18h] BYREF

  v36 = 0LL;
  v33.QuadPart = -1500000000LL;
  *(_OWORD *)P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( SystemAction == PowerActionWarmEject )
    {
LABEL_41:
      v11 = -1073741811;
      goto LABEL_42;
    }
    if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, CurrentThread->PreviousMode) )
    {
      v11 = -1073741727;
      goto LABEL_42;
    }
  }
  if ( LightestSystemState > PowerSystemMaximum
    || SystemAction > PowerActionWarmEject
    || (Flags & 0x10000000) != 0
    || SystemAction == PowerActionSleep && LightestSystemState >= PowerSystemHibernate
    || (Flags & 0xCFFFFC0) != 0 )
  {
    goto LABEL_41;
  }
  if ( (unsigned int)(SystemAction - 4) > 2 && PsIsCurrentThreadInServerSilo() )
  {
    v11 = -1073741637;
    goto LABEL_42;
  }
  LODWORD(v35) = 0;
  v34 = __PAIR64__(Flags, SystemAction);
  DWORD1(v36) = 128;
  v11 = PoCaptureReasonContext(0LL, PreviousMode, 0LL, 0, 0LL, (__int64 *)P);
  v13 = 0LL;
  v14 = P[0];
  if ( v11 < 0 )
    v14 = 0LL;
  P[0] = v14;
  if ( !PreviousMode && SystemAction == PowerActionShutdownOff && (Flags & 0x3000000) != 0 )
  {
    LODWORD(v36) = 15;
  }
  else
  {
    LODWORD(v36) = 4;
    PopDiagTracePolicyInitiatePowerActionApiCall((unsigned int)SystemAction, (unsigned int)LightestSystemState);
  }
  if ( !Asynchronous )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    v9 = Pool2;
    if ( !Pool2 )
    {
      v11 = -1073741670;
      goto LABEL_42;
    }
    *(_DWORD *)(Pool2 + 24) = 0;
    *(_QWORD *)(Pool2 + 48) = &v36;
    KeInitializeEvent((PRKEVENT)Pool2, NotificationEvent, 0);
    DWORD1(v36) |= 0x20u;
    *((_QWORD *)&v36 + 1) = v9;
  }
  if ( (unsigned int)(SystemAction - 4) <= 2 && (BYTE8(PopBsdPowerTransition) & 8) == 0 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
    BYTE8(PopBsdPowerTransition) |= 8u;
    LOBYTE(PopBsdPowerTransitionExtension) = dword_140F0AE74;
    PopBsdHandleRequest(0xBu);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
  PopAcquirePolicyLock(v13, v12);
  PopExecutePowerAction(&v36, 0, &v34, LightestSystemState, 1u);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PopReleasePolicyLock)(
    v17,
    v16,
    v18,
    v19,
    Timeouta,
    v31,
    (LARGE_INTEGER)v33.QuadPart,
    v34,
    v35,
    v36);
  PopThermalEventTransitionEnableDeepSleep(SystemAction);
  if ( v9 )
  {
    v20 = v9 + 32;
    if ( *(_QWORD *)(v9 + 32) )
    {
      v11 = KeWaitForSingleObject((PVOID)v9, Suspended, 0, 1u, &v33);
      if ( v11 == 258 && (byte_140F0AE61 & 3) != 0 )
        v11 = KeWaitForSingleObject((PVOID)v9, Suspended, 0, 1u, 0LL);
      PopAcquirePolicyLock(v22, v21);
      v26 = *(_QWORD *)v20;
      if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 || (v27 = *(_QWORD **)(v9 + 40), *v27 != v20) )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PopReleasePolicyLock)(
        v26,
        v23,
        v24,
        v25,
        Timeout,
        v32,
        (LARGE_INTEGER)v33.QuadPart,
        v34,
        v35,
        v36);
    }
    if ( v11 >= 0 )
    {
      v11 = *(_DWORD *)(v9 + 24);
      if ( v11 >= 0 )
        v11 = 0;
    }
    ExFreePoolWithTag((PVOID)v9, 0);
  }
LABEL_42:
  if ( P[0] )
    PoDestroyReasonContext((_QWORD *)P[0], *(__int64 *)&LightestSystemState, *(__int64 *)&Flags, Asynchronous);
  return v11;
}
