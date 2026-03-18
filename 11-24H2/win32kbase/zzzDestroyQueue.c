/*
 * XREFs of zzzDestroyQueue @ 0x140161AA0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMAssignmentUnlock @ 0x14005F130 (HMAssignmentUnlock.c)
 *     ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x140060DF0 (-UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ.c)
 *     SetWakeBit @ 0x140095C28 (SetWakeBit.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     FreeMessageList @ 0x1401001D0 (FreeMessageList.c)
 *     LockQCursor @ 0x140104264 (LockQCursor.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140106314 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z @ 0x140106358 (-RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z.c)
 *     IsFreeMessageListSupported @ 0x140108404 (IsFreeMessageListSupported.c)
 *     FreeQueue @ 0x14010EA64 (FreeQueue.c)
 *     ClearDelegationCapture @ 0x14010F6D8 (ClearDelegationCapture.c)
 *     IsClearDelegationCaptureSupported @ 0x140110E50 (IsClearDelegationCaptureSupported.c)
 *     xxxWindowEvent @ 0x140140F70 (xxxWindowEvent.c)
 *     RecalculateQueueInfo @ 0x1401624E0 (RecalculateQueueInfo.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1401934A0 (ApiSetEditionSystemGenerateMove.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x140193728 (ApiSetEditionUpdateRawMouseMode.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x14019C4C4 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z @ 0x1401A3630 (-SetActiveWindow@tagQ@@QEAAPEAUtagWND@@PEAU2@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall zzzDestroyQueue(tagQ *this, tagTHREADINFO *a2)
{
  int v4; // ebp
  __int64 v5; // rcx
  char v6; // r14
  bool v7; // r15
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r14
  int (*v17)(void); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ecx
  int (*v22)(void); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  void (__fastcall *v25)(tagQ *); // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  void (*v35)(void); // rax
  __int64 v36; // rcx
  __int64 v37; // rcx

  v4 = 0;
  if ( a2 )
    tagTHREADINFO::RemoveThreadFromQSharingLists(a2, this);
  if ( tagQ::IsAnyThreadAttached(this) )
  {
    if ( *((tagTHREADINFO **)this + 9) == a2 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x40000) == 0
        || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v6 = 0;
      }
      v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        PtiCurrent((__int64)WPP_GLOBAL_Control);
        UserSessionState = W32GetUserSessionState(v8);
        LOBYTE(v10) = v7;
        LOBYTE(v11) = v6;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v11,
          v10,
          *(_QWORD *)(UserSessionState + 69400));
      }
      *((_QWORD *)this + 9) = 0LL;
    }
    if ( a2 && (*((tagTHREADINFO **)this + 13) == a2 || *((tagTHREADINFO **)this + 12) == a2) )
    {
      v12 = *((_QWORD *)this + 66);
      v13 = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      while ( v12 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v12 + 528), 0, 0) & 1) == 0 )
        {
          v13 = v12;
          if ( (*(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 6) != 0
            && (*(_DWORD *)(*(_QWORD *)(v12 + 488) + 16LL) & 6) != 0 )
          {
            v14 = v12;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 1) != 0
            && (*(_DWORD *)(*(_QWORD *)(v12 + 488) + 16LL) & 1) != 0 )
          {
            v15 = v12;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a2 + 61) + 16LL) & 0x400) != 0
            && (*(_DWORD *)(*(_QWORD *)(v12 + 488) + 16LL) & 0x400) != 0 )
          {
            v15 = v12;
          }
        }
        v12 = *(_QWORD *)(v12 + 1688);
      }
      v16 = v13;
      if ( v14 )
        v16 = v14;
      if ( v15 )
        v13 = v15;
      v17 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(0LL, v15) + 48) + 1336LL);
      if ( v17 && v17() >= 0 )
      {
        if ( v16 )
          SetWakeBit(v16, *(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 6);
        if ( v13 )
        {
          SetWakeBit(v13, *(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 1);
          SetWakeBit(v13, *(_DWORD *)(*((_QWORD *)a2 + 61) + 8LL) & 0x400);
        }
      }
      if ( *((tagTHREADINFO **)this + 13) == a2 )
        *((_QWORD *)this + 13) = v13;
      if ( *((tagTHREADINFO **)this + 12) == a2 )
      {
        *((_QWORD *)this + 12) = v16;
        ApiSetEditionUpdateRawMouseMode(this);
      }
    }
    RecalculateQueueInfo();
  }
  else
  {
    if ( *(tagQ **)(W32GetUserSessionState(v5) + 18944) == this && *((_QWORD *)this + 15) )
    {
      v20 = W32GetUserSessionState(v19);
      v21 = 51;
      if ( !*(_DWORD *)(v20 + 70856) )
        v21 = 49;
      xxxWindowEvent(2147483651LL, *((_QWORD *)this + 15), 0, 6u, v21);
    }
    v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v18) + 48) + 1368LL);
    if ( v22 )
    {
      if ( v22() >= 0 )
      {
        v25 = *(void (__fastcall **)(tagQ *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24, v23) + 48) + 1376LL);
        if ( v25 )
          v25(this);
      }
    }
    tagQ::UnlockFocusWnd(this);
    tagQ::SetActiveWindow(this, 0LL);
    HMAssignmentUnlock((__int64 *)this + 17);
    if ( (int)IsClearDelegationCaptureSupported(v27, v26) >= 0 )
      ClearDelegationCapture((__int64)this, v28);
    HMAssignmentUnlock((__int64 *)this + 43);
    LockQCursor((__int64)this, 0LL);
    if ( (int)IsFreeMessageListSupported(v30, v29) >= 0 )
      FreeMessageList((__int64)this + 24, v31);
    if ( *(tagQ **)(W32GetUserSessionState(v32) + 18944) == this )
    {
      v34 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v34, v33) + 48);
      v35 = *(void (**)(void))(v34 + 1400);
      if ( v35 )
        v35();
    }
    if ( *(tagQ **)(W32GetUserSessionState(v34) + 18952) == this )
      *(_QWORD *)(W32GetUserSessionState(v36) + 18952) = 0LL;
    if ( *(tagQ **)(W32GetUserSessionState(v36) + 19232) == this )
    {
      v4 = 1;
      *(_QWORD *)(W32GetUserSessionState(v37) + 19232) = 0LL;
    }
    if ( *((_DWORD *)this + 110) )
      *((_DWORD *)this + 109) |= 0x4000000u;
    else
      FreeQueue((char *)this);
    if ( v4 )
      ApiSetEditionSystemGenerateMove(2LL);
  }
}
