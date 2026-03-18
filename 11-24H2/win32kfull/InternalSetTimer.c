/*
 * XREFs of InternalSetTimer @ 0x14005F804
 * Callers:
 *     IncrementCompositedCount @ 0x14002FE3C (IncrementCompositedCount.c)
 *     NtUserSetTimer @ 0x14005F5E0 (NtUserSetTimer.c)
 *     _SetTimer @ 0x14005F768 (_SetTimer.c)
 *     SetDeepDelayableVisRITTimer @ 0x140076B9C (SetDeepDelayableVisRITTimer.c)
 *     _SetSystemTimer @ 0x140094830 (_SetSystemTimer.c)
 *     xxxSoundSentry @ 0x14010312C (xxxSoundSentry.c)
 *     ?RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z @ 0x1401964AC (-RefreshMiPIdleNotificationTimer@@YAXPEAUtagWND@@@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x14019D10C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1401A5E30 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     SetRITTimer @ 0x1401BDAB0 (SetRITTimer.c)
 *     zzzStartFade @ 0x1401E29B8 (zzzStartFade.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1401FB1A0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1401FEAF8 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1402BD900 (MNSetTimerToCloseHierarchy.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x140046CB0 (GetAppCompatFlags2QuadWord.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 *     ?CoalescableDueTime@@YAKPEBUtagTIMER@@@Z @ 0x1400F8790 (-CoalescableDueTime@@YAKPEBUtagTIMER@@@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x140167D24 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     ?ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z @ 0x14016E020 (-ApplyTimerDelay@@YAXPEAUtagTIMER@@@Z.c)
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x14016F68C (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ @ 0x140181F6C (-SignalRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x140289958 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x1402899F0 (Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall InternalSetTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v7; // r15d
  signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 result; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rsi
  int v18; // r12d
  unsigned int v19; // r14d
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagTIMER *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r12d
  __int64 UserSessionState; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // r12
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 **v40; // rax
  struct tagTIMER *v41; // rdi
  char *v42; // r8
  __int64 v43; // rax
  __int64 *v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // esi
  unsigned int v55; // r14d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rdx
  unsigned int v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  unsigned int v68; // r14d
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // ebx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  bool v79; // bl
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  _QWORD *v84; // rdi
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rcx
  unsigned int v89; // [rsp+34h] [rbp-1Ch]
  struct tagTIMER *v90; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v91[2]; // [rsp+40h] [rbp-10h] BYREF

  v90 = 0LL;
  v7 = a2;
  v9 = (signed __int32 *)(W32GetUserSessionState(a1, a2) + 57584);
  if ( *(_DWORD *)(W32GetUserSessionState(v11, v10) + 68692) )
  {
    UserSetLastError(641LL);
    return 0LL;
  }
  v14 = 10;
  if ( a3 >= 0xA )
    v14 = a3;
  if ( v14 > 0x7FFFFFFF )
    v14 = 0x7FFFFFFF;
  v89 = v14;
  v17 = PtiCurrent(0x7FFFFFFFLL, v12);
  if ( !v17 || (a6 & 4) != 0 )
  {
    v17 = *(struct tagTHREADINFO **)(W32GetUserSessionState(v16, v15) + 18704);
  }
  else if ( a1 )
  {
    v17 = *(struct tagTHREADINFO **)(a1 + 16);
  }
  v18 = a5;
  if ( a5 == -1 || !a5 && v17 && (GetAppCompatFlags2QuadWord((__int64)v17, v15) & 0x800000000LL) != 0 )
    v19 = a6 & 0xFFFFFDFF;
  else
    v19 = a6 | 0x200;
  if ( (unsigned int)FindTimer(a1, v7, v19, 0, (__int64)&v90) )
  {
    v24 = v90;
    if ( (*((_DWORD *)v90 + 12) & 1) != 0 )
    {
      if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
        DecTimerCountAndClearReadyFlag(v24);
      else
        DecTimerCount(v24);
    }
    if ( *((struct tagTHREADINFO **)v24 + 3) != v17 )
    {
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v17 + 132, 0, 0) & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 997LL);
      v24 = v90;
    }
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v17 + 132, 0, 0) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 928LL);
      return 0LL;
    }
    LOBYTE(v20) = 16;
    v21 = HMAllocObject(v17, 0LL, v20, 144LL);
    v90 = (struct tagTIMER *)v21;
    v24 = (struct tagTIMER *)v21;
    if ( !v21 )
      return 0LL;
    *(_QWORD *)(v21 + 104) = 0LL;
    if ( a1 )
    {
      v34 = a2;
    }
    else
    {
      v27 = *(_DWORD *)(W32GetUserSessionState(v23, v22) + 62720);
      while ( 1 )
      {
        UserSessionState = W32GetUserSessionState(v26, v25);
        if ( --*(_DWORD *)(UserSessionState + 62720) < 0 )
          *(_DWORD *)(W32GetUserSessionState(v30, v29) + 62720) = 32511;
        v32 = *(unsigned int *)(W32GetUserSessionState(v30, v29) + 62720);
        if ( !_bittestandset(v9 + 11, v32) )
          break;
        if ( *(_DWORD *)(W32GetUserSessionState(v33, v32) + 62720) == v27 )
        {
          UserSetLastError(8LL);
          HMFreeObject(v24);
          return 0LL;
        }
      }
      v34 = *(_DWORD *)(W32GetUserSessionState(v33, v32) + 62720) + 256;
    }
    *((_QWORD *)v24 + 14) = v34;
    v35 = (_QWORD *)((char *)v24 + 72);
    v36 = *(_QWORD *)v9;
    if ( *(signed __int32 **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_72;
    *v35 = v36;
    v37 = (__int64 *)((char *)v24 + 120);
    *((_QWORD *)v24 + 10) = v9;
    *(_QWORD *)(v36 + 8) = v35;
    *(_QWORD *)v9 = v35;
    v38 = (BYTE1(a1) + (unsigned __int8)*((_QWORD *)v24 + 14)) & 0x3F;
    v39 = W32GetUserSessionState(v35, v22) + 16 * (v38 + 3856);
    v40 = *(__int64 ***)(v39 + 8);
    if ( *v40 != (__int64 *)v39 )
      goto LABEL_72;
    *v37 = v39;
    *((_QWORD *)v24 + 16) = v40;
    *v40 = v37;
    *(_QWORD *)(v39 + 8) = v37;
    v18 = a5;
    if ( (unsigned int)Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_QWORD *)v24 + 8) = (char *)v24 + 56;
      *((_QWORD *)v24 + 7) = (char *)v24 + 56;
    }
  }
  v91[1] = a1;
  v91[0] = (char *)v24 + 104;
  HMAssignmentLock(v91, 0LL);
  *((_DWORD *)v24 + 10) = v89;
  *((_DWORD *)v24 + 13) = v89;
  *((_QWORD *)v24 + 4) = a4;
  if ( (v19 & 0x200) != 0 )
    *((_DWORD *)v24 + 11) = v18;
  v41 = v90;
  v42 = (char *)v90 + 24;
  *((_DWORD *)v90 + 34) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)v41 + 12) = v19 | 8;
  v43 = *((_QWORD *)v17 + 58);
  if ( *(_QWORD *)v42 )
  {
    if ( *(_QWORD *)(*(_QWORD *)v42 + 464LL) == v43 )
      goto LABEL_49;
    v84 = (_QWORD *)((char *)v41 + 88);
    v85 = *v84;
    if ( *(_QWORD **)(*v84 + 8LL) == v84 )
    {
      v86 = (_QWORD *)v84[1];
      if ( (_QWORD *)*v86 == v84 )
      {
        *v86 = v85;
        *(_QWORD *)(v85 + 8) = v86;
        v84[1] = v84;
        *v84 = v84;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v17 + 132, 0, 0) & 1) != 0 )
        {
LABEL_71:
          v41 = v90;
          goto LABEL_49;
        }
        v87 = *((_QWORD *)v17 + 58) + 1104LL;
        v88 = *(_QWORD *)v87;
        if ( *(_QWORD *)(*(_QWORD *)v87 + 8LL) == v87 )
        {
          *v84 = v88;
          v84[1] = v87;
          *(_QWORD *)(v88 + 8) = v84;
          *(_QWORD *)v87 = v84;
          goto LABEL_71;
        }
      }
    }
LABEL_72:
    __fastfail(3u);
  }
  v44 = (__int64 *)(v43 + 1104);
  v45 = (_QWORD *)((char *)v41 + 88);
  v46 = *v44;
  if ( *(__int64 **)(*v44 + 8) != v44 )
    goto LABEL_72;
  *v45 = v46;
  *((_QWORD *)v41 + 12) = v44;
  *(_QWORD *)(v46 + 8) = v45;
  *v44 = (__int64)v45;
LABEL_49:
  *(_QWORD *)v42 = v17;
  ApplyTimerDelay(v41);
  EtwTraceInternalSetTimer();
  if ( !*(_BYTE *)(W32GetUserSessionState(v48, v47) + 18720) )
  {
    if ( *(_BYTE *)(W32GetUserSessionState(v50, v49) + 62760) )
    {
      *(_BYTE *)(W32GetUserSessionState(v52, v51) + 18721) = 1;
    }
    else
    {
      v53 = W32GetUserSessionState(v52, v51);
      v41 = v90;
      v54 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - *(_DWORD *)(v53 + 57624);
      v55 = CoalescableDueTime(v90);
      if ( v54 <= *(_DWORD *)(W32GetUserSessionState(v57, v56) + 62776)
        && v54 <= *(_DWORD *)(W32GetUserSessionState(v59, v58) + 62784) )
      {
        v60 = *((_QWORD *)v41 + 3);
        v61 = *(_QWORD *)(v60 + 464);
        if ( !*(_DWORD *)(v61 + 1036) )
        {
          v62 = v55 + v54;
          if ( v55 + v54 >= v55 )
          {
            *((_DWORD *)v41 + 12) &= ~8u;
            *((_DWORD *)v41 + 13) += v54;
            v64 = *(unsigned int *)(W32GetUserSessionState(v60, v61) + 62776);
            if ( (unsigned int)v64 > *((_DWORD *)v41 + 13)
              || *(_DWORD *)(W32GetUserSessionState(v64, v63) + 62784) > v62 )
            {
              v65 = W32GetUserSessionState(v64, v63);
              v68 = *((_DWORD *)v41 + 13);
              if ( v68 >= *(_DWORD *)(v65 + 62776) )
                v68 = *(_DWORD *)(W32GetUserSessionState(v67, v66) + 62776);
              *(_DWORD *)(W32GetUserSessionState(v67, v66) + 62776) = v68;
              if ( *(_DWORD *)(W32GetUserSessionState(v70, v69) + 62784) < v62 )
                v62 = *(_DWORD *)(W32GetUserSessionState(v72, v71) + 62784);
              *(_DWORD *)(W32GetUserSessionState(v72, v71) + 62784) = v62;
              v75 = *(_DWORD *)(W32GetUserSessionState(v74, v73) + 62784);
              v78 = W32GetUserSessionState(v77, v76);
              SetDelayableTimer(*(_DWORD *)(v78 + 62776) - v54, v75 - v54);
            }
          }
        }
      }
      if ( (*((_DWORD *)v41 + 12) & 8) != 0 )
      {
        v79 = CRitTimerScanWakeSystem::SignalRitTimerScanWakeEvent();
        *(_BYTE *)(W32GetUserSessionState(v81, v80) + 18720) = v79;
        if ( *(_BYTE *)(W32GetUserSessionState(v83, v82) + 18720) != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1149LL);
      }
    }
  }
  result = *((_QWORD *)v41 + 14);
  if ( !result )
    return 1LL;
  return result;
}
