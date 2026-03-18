/*
 * XREFs of InternalSetTimer @ 0x1C00EFF30
 * Callers:
 *     _SetSystemTimer @ 0x1C0006474 (_SetSystemTimer.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00863AC (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     SetRITTimer @ 0x1C0086450 (SetRITTimer.c)
 *     _anonymous_namespace_::AppStarting_Set @ 0x1C00EEDA4 (_anonymous_namespace_--AppStarting_Set.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00EFAA0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     NtUserSetTimer @ 0x1C00EFD30 (NtUserSetTimer.c)
 *     SetJournalTimer @ 0x1C01C0008 (SetJournalTimer.c)
 *     _SetTimer @ 0x1C01C01EC (_SetTimer.c)
 *     xxxSoundSentry @ 0x1C01F5958 (xxxSoundSentry.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0215020 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C021507C (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0216090 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C022C5E8 (UserSetTimer.c)
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008A93C (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z @ 0x1C013AB80 (-DecTimerCountAndClearReadyFlag@@YAXPEAUtagTIMER@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C014E9C2 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v10; // r13d
  __int64 v11; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // r15
  unsigned int v15; // esi
  unsigned __int64 v16; // rdi
  _QWORD **v17; // r14
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v22; // rbx
  int v23; // edx
  signed int v24; // ecx
  _QWORD *v25; // rcx
  char *v26; // rdx
  char *v27; // rcx
  char **v28; // rax
  int v29; // ecx
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // r11d
  unsigned int v33; // edx
  unsigned int v34; // r8d
  unsigned int v35; // ecx
  unsigned int v36; // eax
  int v37; // r9d
  unsigned int v38; // r10d
  int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // r8d
  unsigned int v42; // r9d
  unsigned int v43; // ecx
  unsigned int v44; // r10d
  signed int v45; // r8d
  unsigned int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // [rsp+38h] [rbp-50h]
  _QWORD v50[2]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v51[2]; // [rsp+50h] [rbp-38h] BYREF

  if ( WPP_MAIN_CB.ActiveThreadCount )
  {
    UserSetLastError(641);
    return 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 10;
  if ( a3 >= 0xA )
    v10 = a3;
  if ( v10 > 0x7FFFFFFF )
    v10 = 0x7FFFFFFF;
  v11 = 0LL;
  v49 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v11 = *ThreadWin32Thread;
    v49 = *ThreadWin32Thread;
  }
  v14 = v11;
  if ( !v11 || (a6 & 4) != 0 )
  {
    v14 = gptiRit;
  }
  else if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v14 && _bittest64((const signed __int64 *)(v14 + 648), 0x23u) )
    v15 = a6 & 0xFFFFFDFF;
  else
    v15 = a6 | 0x200;
  v16 = a1 >> 8;
  v17 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v18 = *v17;
  if ( *v17 == v17 )
  {
LABEL_34:
    if ( (*(_DWORD *)(v14 + 488) & 1) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 927LL);
    }
    else
    {
      LOBYTE(v13) = 16;
      v22 = HMAllocObject(v14, 0LL, v13);
      if ( v22 )
      {
        *(_QWORD *)(v22 + 88) = 0LL;
        if ( !a1 )
        {
          v23 = g_cTimerId;
          v24 = g_cTimerId;
          while ( 1 )
          {
            g_cTimerId = --v24;
            if ( v24 < 0 )
            {
              g_cTimerId = 32511;
              v24 = 32511;
            }
            if ( !_bittestandset(gTimerId, v24) )
              break;
            if ( v24 == v23 )
            {
              UserSetLastError(8);
              HMFreeObject(v22);
              return 0LL;
            }
          }
          a2 = v24 + 256;
        }
        *(_QWORD *)(v22 + 96) = a2;
        v25 = (_QWORD *)(v22 + 72);
        if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead
          || (*v25 = gtmrListHead,
              *(_QWORD *)(v22 + 80) = gtmrListHead,
              *(_QWORD *)(gtmrListHead + 8LL) = v25,
              v26 = (char *)(v22 + 112),
              gtmrListHead = v22 + 72,
              v27 = (char *)&gTimerHashTable
                  + 16 * (((unsigned __int8)v16 + (unsigned __int8)*(_DWORD *)(v22 + 96)) & 0x3F),
              v28 = (char **)*((_QWORD *)v27 + 1),
              *v28 != v27) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)(v22 + 120) = v28;
        *(_QWORD *)v26 = v27;
        *v28 = v26;
        *((_QWORD *)v27 + 1) = v26;
        *(_QWORD *)(v22 + 64) = v22 + 56;
        *(_QWORD *)(v22 + 56) = v22 + 56;
        goto LABEL_55;
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    v19 = v18 - 14;
    if ( *(v18 - 3) == a1 && v19[12] == a2 )
    {
      v20 = *((unsigned int *)v19 + 12);
      if ( (((unsigned __int8)v15 ^ *((_BYTE *)v19 + 48)) & 6) == 0 && (v20 & 0x1000) == 0 )
      {
        if ( (v20 & 0x40) != 0 )
          break;
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v20);
        if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
          CurrentProcessWin32Process = 0LL;
        if ( CurrentProcessWin32Process == *(_QWORD **)(v19[3] + 424LL)
          || !a1 && ((*((_BYTE *)v19 + 48) ^ (unsigned __int8)v15) & 4) == 0 )
        {
          break;
        }
      }
    }
    v18 = (_QWORD *)*v18;
    if ( v18 == v17 )
    {
      LOBYTE(v16) = BYTE1(a1);
      goto LABEL_34;
    }
  }
  if ( (v19[6] & 1) != 0 )
    DecTimerCountAndClearReadyFlag((struct tagTIMER *)(v18 - 14));
  v22 = (__int64)(v18 - 14);
  if ( v19[3] != v14 && (*(_DWORD *)(v14 + 488) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 991LL);
LABEL_55:
  v51[1] = a1;
  v51[0] = v22 + 88;
  HMAssignmentLock(v51, 0LL);
  *(_DWORD *)(v22 + 40) = v10;
  *(_DWORD *)(v22 + 52) = v10;
  *(_QWORD *)(v22 + 32) = a4;
  *(_QWORD *)(v22 + 104) = 0LL;
  if ( (v15 & 0x200) != 0 )
    *(_DWORD *)(v22 + 44) = a5;
  *(_DWORD *)(v22 + 128) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (v15 & 0x100) != 0 )
      *(_QWORD *)(v22 + 104) = v49;
  }
  else
  {
    v15 &= ~0x80u;
  }
  *(_DWORD *)(v22 + 48) = v15 | 8;
  *(_QWORD *)(v22 + 24) = v14;
  v29 = *(_DWORD *)(*(_QWORD *)(v14 + 424) + 1052LL);
  if ( v29 )
  {
    v30 = *(_DWORD *)(v22 + 52) + v29;
    v31 = 0x7FFFFFFF;
    if ( v30 < 0x7FFFFFFF )
      v31 = v30;
    *(_DWORD *)(v22 + 52) = v31;
  }
  EtwTraceInternalSetTimer(v22);
  if ( gbRITAlerted )
    goto LABEL_102;
  if ( gbTimersProcActive )
  {
    gbRITRescan = 1;
    goto LABEL_102;
  }
  v32 = *(_DWORD *)(v22 + 48);
  v33 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
  if ( (v32 & 0x200) != 0 )
  {
    v34 = *(_DWORD *)(v22 + 44);
    v35 = gCurrentTimerCoalescingTolerance;
    v36 = gCurrentTimerCoalescingTolerance;
    v37 = *(_DWORD *)(v22 + 52);
    if ( v34 > gCurrentTimerCoalescingTolerance )
      v36 = *(_DWORD *)(v22 + 44);
    if ( v37 + v36 >= 0x7FFFFFFF )
    {
      v38 = 0x7FFFFFFF;
    }
    else
    {
      if ( v34 > gCurrentTimerCoalescingTolerance )
        v35 = *(_DWORD *)(v22 + 44);
      v38 = v37 + v35;
    }
    v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 424LL) + 1056LL);
    if ( v39 )
    {
      v40 = v38 + v39;
      v38 = 0x7FFFFFFF;
      if ( v40 < 0x7FFFFFFF )
        v38 = v40;
    }
  }
  else
  {
    v38 = *(_DWORD *)(v22 + 52);
  }
  v41 = gdmsNextTimer;
  if ( v33 <= gdmsNextTimer )
  {
    v42 = guNextCoalescableTimerDue;
    if ( v33 <= guNextCoalescableTimerDue && !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 424LL) + 1060LL) )
    {
      v43 = v38 + v33;
      if ( v38 + v33 >= v38 )
      {
        *(_DWORD *)(v22 + 48) = v32 & 0xFFFFFFF7;
        v44 = v33 + *(_DWORD *)(v22 + 52);
        *(_DWORD *)(v22 + 52) = v44;
        if ( v44 < v41 )
          goto LABEL_87;
        if ( v42 <= v43 )
          goto LABEL_93;
        if ( v44 < v41 )
        {
LABEL_87:
          v41 = v44;
          gdmsNextTimer = v44;
        }
        if ( v42 >= v43 )
        {
          v42 = v43;
          guNextCoalescableTimerDue = v43;
        }
        v45 = v41 - v33;
        v46 = v42 - v33;
        v47 = -10000LL * v45;
        if ( v45 == v46 )
          KeSetTimer(gptmrMaster, (LARGE_INTEGER)v47, 0LL);
        else
          KeSetCoalescableTimer(gptmrMaster, (LARGE_INTEGER)v47, 0, v46 - v45, 0LL);
      }
    }
  }
LABEL_93:
  if ( (*(_DWORD *)(v22 + 48) & 8) != 0 )
  {
    CAutoPushLockSh::CAutoPushLockSh(
      (CAutoPushLockSh *)v50,
      (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
    if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
    {
      KeSetEvent(CRitTimerScanWakeSystem::ritTimerScanWakeEvent, 1, 0);
      CAutoPushLockSh::~CAutoPushLockSh((CAutoPushLockSh *)v50);
      result = *(_QWORD *)(v22 + 96);
      gbRITAlerted = 1;
      if ( !result )
        return 1LL;
    }
    else
    {
      ExReleasePushLockSharedEx(v50[0], 0LL, v48);
      KeLeaveCriticalRegion();
      gbRITAlerted = 0;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1135LL);
      result = *(_QWORD *)(v22 + 96);
      if ( !result )
        return 1LL;
    }
    return result;
  }
LABEL_102:
  result = *(_QWORD *)(v22 + 96);
  if ( !result )
    return 1LL;
  return result;
}
