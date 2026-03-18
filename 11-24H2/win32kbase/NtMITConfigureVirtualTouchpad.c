/*
 * XREFs of NtMITConfigureVirtualTouchpad @ 0x1401B7DD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x140116504 (-GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1402194F8 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtMITConfigureVirtualTouchpad(void *Src, void *a2)
{
  void *v3; // r14
  _QWORD *UserSessionState; // rsi
  __int64 v5; // rax
  int v6; // ebx
  int **v7; // rdi
  __int64 v8; // rcx
  ULONG v9; // ecx
  _OWORD *v10; // rcx
  VirtualTouchpadProcessor *Instance; // rax
  NTSTATUS v12; // eax
  int v14; // [rsp+20h] [rbp-188h] BYREF
  _DWORD Srca[11]; // [rsp+24h] [rbp-184h] BYREF
  _OWORD v16[10]; // [rsp+50h] [rbp-158h] BYREF
  _OWORD v17[10]; // [rsp+F0h] [rbp-B8h] BYREF

  v3 = Src;
  UserSessionState = (_QWORD *)W32GetUserSessionState(Src);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      v7 = (int **)UserSessionState[2471];
      if ( !v7 )
        break;
      UserSessionState[2471] = v7[2];
      v7[2] = 0LL;
      if ( !(*v7)[2] )
      {
        v14 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v7);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  Srca[0] = 0;
  memset(v17, 0, 0x98uLL);
  if ( !IsInputThread(v8) )
  {
    v9 = 5;
LABEL_10:
    UserSetLastError(v9);
    goto LABEL_18;
  }
  v14 = 0;
  RtlCopyFromUser(&v14, v3, 4uLL);
  Srca[0] = v14;
  memset(v16, 0, 0x98uLL);
  RtlCopyFromUser(v16, a2, 0x98uLL);
  v10 = v17;
  v17[0] = v16[0];
  v17[1] = v16[1];
  v17[2] = v16[2];
  v17[3] = v16[3];
  v17[4] = v16[4];
  v17[5] = v16[5];
  v17[6] = v16[6];
  v17[7] = v16[7];
  v17[8] = v16[8];
  *(_QWORD *)&v17[9] = *(_QWORD *)&v16[9];
  LOBYTE(v10) = 1;
  Instance = VirtualTouchpadProcessor::GetInstance((__int64)v10);
  if ( !Instance )
  {
    v12 = -1073741801;
LABEL_14:
    v9 = RtlNtStatusToDosError(v12);
    goto LABEL_10;
  }
  v12 = VirtualTouchpadProcessor::ConfigureVirtualTouchpad(
          Instance,
          (struct VPTP_ID *)Srca,
          (const struct tagVIRTUAL_PTP_CONFIG *)v17);
  if ( v12 < 0 )
    goto LABEL_14;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v3, Srca, 4uLL);
  v6 = 1;
LABEL_18:
  UserSessionSwitchLeaveCritWithNonPaged();
  return v6;
}
