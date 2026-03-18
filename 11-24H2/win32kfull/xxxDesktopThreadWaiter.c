/*
 * XREFs of xxxDesktopThreadWaiter @ 0x140066AC4
 * Callers:
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x140063D90 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxDesktopThread @ 0x1402864A0 (xxxDesktopThread.c)
 * Callees:
 *     zzzWakeInputIdle @ 0x1400647B0 (zzzWakeInputIdle.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140064910 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140065000 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     xxxRemoveQueueCompletion @ 0x140065F00 (xxxRemoveQueueCompletion.c)
 *     ?ClearQueueServerEvent@@YAXG@Z @ 0x140066D74 (-ClearQueueServerEvent@@YAXG@Z.c)
 *     SleepInputIdle @ 0x140066DB8 (SleepInputIdle.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401BB8BC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x14026E498 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 *     ??$RequestEvent@$07@CEventBitmap@@QEAAXXZ @ 0x140285F54 (--$RequestEvent@$07@CEventBitmap@@QEAAXXZ.c)
 */

__int64 __fastcall xxxDesktopThreadWaiter(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // r13
  char v3; // si
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 UserSessionState; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  LegacyInputDispatcher *v11; // r15
  int v12; // r14d
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  char v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+80h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  UserSessionState = W32GetUserSessionState(v6, v5);
  if ( v7 == *(_QWORD *)(W32GetUserSessionState(v10, v9) + 68736) )
    v11 = *(LegacyInputDispatcher **)(UserSessionState + 19216);
  else
    v11 = *(LegacyInputDispatcher **)(UserSessionState + 19224);
  v12 = *((_DWORD *)v11 + 15);
  v13 = 0;
  if ( !v3 )
    goto LABEL_14;
  ClearQueueServerEvent(0x3CFFu);
  if ( (INTERLOCKEDINT::operator int(*(_QWORD *)(v7 + 488) + 4LL) & 0x1CFF) == 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0x400) != 0 )
    {
      result = CheckProcessForeground((struct tagTHREADINFO *)v7);
      if ( (int)result < 0 )
        return result;
    }
    *(_QWORD *)(*(_QWORD *)(v7 + 520) + 8LL) = 0LL;
    if ( v7 == *(_QWORD *)(W32GetUserSessionState(v15, v14) + 18960)
      && ((*(_DWORD *)(v7 + 720) | *(_DWORD *)(**(_QWORD **)(v7 + 504) + 16LL)) & 0x1000) != 0 )
    {
      xxxCallHook(0, 0LL, 0LL, 11);
    }
    xxxUpdateInputHangInfo(0LL, 0LL);
    zzzWakeInputIdle(v7);
    while ( 1 )
    {
LABEL_14:
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v26, 1);
      if ( v3 || *(_DWORD *)(W32GetUserSessionState(v18, v17) + 19152) )
      {
        v19 = LegacyInputDispatcher::WaitAndDispatch(v11);
      }
      else
      {
        v27 = 0LL;
        CEventBitmap::RequestEvent<8>(&v27);
        HIDWORD(v27) |= 0x200u;
        v25 = W32GetUserSessionState(v24, v23);
        v12 = CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
                *(CBaseInput **)(v25 + 3104),
                (struct CEventBitmap *)&v27,
                v11);
        if ( v12 < 0 )
          goto LABEL_17;
        v19 = LegacyInputDispatcher::WaitForMessagesOrCustomInputEventsAndDispatch(v11);
      }
      v12 = v19;
LABEL_17:
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v26);
      if ( v12 != *((_DWORD *)v11 + 15) )
        goto LABEL_24;
      v22 = xxxRemoveQueueCompletion(v21, v20);
      if ( v3 )
      {
LABEL_19:
        if ( !v13 )
        {
          if ( v3 )
            xxxUpdateInputHangInfo(0LL, 1LL);
          if ( v12 == *((_DWORD *)v11 + 15) )
          {
            SleepInputIdle(v7);
            v12 = v3 != 0 ? v12 : 0;
          }
          break;
        }
      }
      else
      {
        if ( !v22 || (v2 & (unsigned __int8)INTERLOCKEDINT::operator int(*(_QWORD *)(v7 + 488) + 8LL) & 8) != 0 )
        {
LABEL_24:
          v13 = 0;
          goto LABEL_19;
        }
        v13 = 1;
      }
    }
  }
  if ( v3 )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v7 + 488) + 16LL), 0);
  return (unsigned int)v12;
}
