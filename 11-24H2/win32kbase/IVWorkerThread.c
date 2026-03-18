/*
 * XREFs of IVWorkerThread @ 0x140217C48
 * Callers:
 *     xxxCreateSystemThreads @ 0x140091CD0 (xxxCreateSystemThreads.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMUnlockObject @ 0x14005F160 (HMUnlockObject.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z @ 0x14014E104 (--0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z.c)
 *     SetThreadBasePriority @ 0x14014E590 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021B18C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x14021B4FC (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall IVWorkerThread(__int64 a1)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int *v6; // rax
  __int64 v7; // rbx
  struct tagTHREADINFO *v8; // rax
  struct _KEVENT *v9; // rsi
  void *v10; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _BYTE v17[48]; // [rsp+30h] [rbp-48h] BYREF
  char v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+10h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1);
  v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v3;
  if ( v3 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v3 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1208) == 1 )
        {
          while ( 1 )
          {
            v7 = UserSessionState[2471];
            if ( !v7 )
              break;
            UserSessionState[2471] = *(_QWORD *)(v7 + 16);
            v6 = *(int **)v7;
            *(_QWORD *)(v7 + 16) = 0LL;
            if ( !v6[2] )
            {
              v19 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
            }
            HMUnlockObject(*(int **)v7);
          }
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
        }
      }
    }
  }
  v8 = PtiCurrent(v4);
  *((_QWORD *)v8 + 170) |= 0x800000000uLL;
  v9 = *(struct _KEVENT **)a1;
  v10 = *(void **)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(W32GetUserSessionState(0x800000000LL) + 19424) = CurrentThread;
  v13 = W32GetUserSessionState(v12);
  SetThreadBasePriority(*(PETHREAD *)(v13 + 19424), 16);
  *(_QWORD *)(W32GetUserSessionState(v14) + 19432) = v10;
  KeSetEvent(v9, 1, 0);
  CIVChannel::CIVChannel(
    (CIVChannel *)v17,
    0LL,
    3,
    (void (__high *)(const void *, struct CONTAINER_ID))ivOnChildPartitionConnected,
    (bool (*)(const void *, unsigned int, unsigned int, void *, void *))ivOnNonInputPacketReceived,
    0LL);
  CIVChannel::Initialize((CIVChannel *)v17);
  while ( 1 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v18, 1);
    if ( !KeWaitForSingleObject(v10, Executive, 0, 0, 0LL) )
      break;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v18);
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v18);
  CIVChannel::Uninitialize((CIVChannel *)v17);
  *(_QWORD *)(W32GetUserSessionState(v15) + 19432) = 0LL;
  *(_QWORD *)(W32GetUserSessionState(v16) + 19424) = 0LL;
  GreDeleteFastMutex((char *)v9);
  GreDeleteFastMutex((char *)v10);
  UserSessionSwitchLeaveCritWithNonPaged();
}
