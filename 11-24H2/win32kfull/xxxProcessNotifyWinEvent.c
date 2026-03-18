/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x140041720
 * Callers:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x140093130 (xxxFlushDeferredWindowEvents.c)
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x140082B90 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     DestroyNotify @ 0x140085190 (DestroyNotify.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxClientCallWinEventProc @ 0x14015A8E4 (xxxClientCallWinEventProc.c)
 *     ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_WINEVENT@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x14016FB10 (--0-$UnlockObjectLock@$$V@-$UnlockDomainExclusive@VDLT_WINEVENT@@@-$UnlockDomainShared@$$V@@QEAA.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x140274ECC (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // r15d
  int v9; // ebp
  __int64 UserSessionState; // rax
  ULONG_PTR v11; // rdi
  bool v12; // zf
  UIPrivilegeIsolation *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  __int16 v17; // bx
  const struct tagUIPI_INFO *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r13
  struct tagQ *v21; // r12
  _QWORD *v22; // rcx
  __int16 ProcessMachine; // bx
  const struct tagUIPI_INFO *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rbx
  unsigned int v33; // ebp
  int v34; // esi
  _BYTE *v35; // rbx
  tagDomLock *v36; // rcx
  ULONG_PTR *v37; // rax
  ULONG_PTR v38; // rax
  ULONG_PTR *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  signed __int32 v52; // ecx
  __int16 v53; // bx
  __int64 ProcessInformation; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v56[8]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v57[40]; // [rsp+68h] [rbp-60h] BYREF

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    v7 = *CurrentThreadWin32Thread;
  else
    v7 = 0LL;
  v8 = 0;
  v9 = 0;
  UserSessionState = W32GetUserSessionState(v6, v5);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42384)) != 1 )
    __int2c();
  v11 = *(_QWORD *)(a1 + 16);
  v12 = (unsigned int)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline() == 0;
  v14 = *(_DWORD *)(a1 + 56);
  if ( !v12 )
  {
    if ( (v14 & 0xC) == 4 )
    {
      v9 = 1;
    }
    else if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0xD) != 0 )
    {
      v9 = 1;
    }
    else
    {
      v22 = *(_QWORD **)(v11 + 16);
      if ( v22[58] == *(_QWORD *)(v7 + 464) || !(unsigned __int8)IsRestricted(*v22) )
      {
        ProcessMachine = PsGetProcessMachine(**(_QWORD **)(*(_QWORD *)(v11 + 16) + 464LL));
        if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v7 + 464)) == ProcessMachine )
        {
          if ( !UIPrivilegeIsolation::CheckAccess(
                  (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 464LL) + 872LL),
                  (const struct tagUIPI_INFO *)(*(_QWORD *)(v7 + 464) + 872LL),
                  v24) )
          {
            v9 = 1;
            v8 = 1;
          }
        }
        else
        {
          v9 = 1;
        }
      }
      else
      {
        v9 = 1;
      }
    }
    if ( !v9 )
      goto LABEL_30;
LABEL_60:
    v19 = *(_QWORD *)(v11 + 16);
    v20 = *(_QWORD *)(v11 + 24);
    v21 = *(struct tagQ **)(v19 + 472);
    if ( !v8 )
      goto LABEL_62;
    goto LABEL_61;
  }
  if ( (v14 & 0xC) == 4 || (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0xD) != 0 )
    goto LABEL_60;
  if ( !UIPrivilegeIsolation::Enforced(v13) )
  {
    v15 = *(_QWORD *)(v7 + 464);
    v13 = *(UIPrivilegeIsolation **)(*(_QWORD *)(v11 + 16) + 464LL);
    if ( (*((_DWORD *)v13 + 193) != *(_DWORD *)(v15 + 772) || *((_DWORD *)v13 + 194) != *(_DWORD *)(v15 + 776))
      && (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0x400000) == 0 )
    {
      goto LABEL_60;
    }
  }
  v16 = *(_QWORD **)(v11 + 16);
  if ( v16[58] != *(_QWORD *)(v7 + 464) )
  {
    if ( (unsigned __int8)IsRestricted(*v16) )
      goto LABEL_60;
  }
  v17 = PsGetProcessMachine(**(_QWORD **)(*(_QWORD *)(v11 + 16) + 464LL));
  if ( (unsigned __int16)PsGetProcessMachine(**(_QWORD **)(v7 + 464)) != v17 )
    goto LABEL_60;
  if ( !UIPrivilegeIsolation::CheckAccess(
          (UIPrivilegeIsolation *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 464LL) + 872LL),
          (const struct tagUIPI_INFO *)(*(_QWORD *)(v7 + 464) + 872LL),
          v18) )
  {
    v19 = *(_QWORD *)(v11 + 16);
    v20 = *(_QWORD *)(v11 + 24);
    v21 = *(struct tagQ **)(v19 + 472);
LABEL_61:
    EtwTraceUIPIEventHookError(a1, v19, v7);
LABEL_62:
    if ( !*(_QWORD *)W32GetUserSessionState(v13, v19)
      || (v44 = *(unsigned int *)(PsGetCurrentThreadWin32Thread(v41, v40, v42) + 24), (v44 & 0xC) == 0) )
    {
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    }
    v48 = PsGetCurrentThreadWin32Thread(v44, v43, v45);
    ++*(_DWORD *)(v48 + 28);
    *(_DWORD *)(a1 + 56) |= 0xCu;
    if ( !v21
      || (v49 = W32GetUserSessionState(v47, v46), v50 = *(_QWORD *)(v11 + 16), v50 == *(_QWORD *)(v49 + 18704))
      || (v51 = *(_DWORD *)(v11 + 40), (v51 & 1) != 0)
      || (v51 & 0x10) != 0
      && ((v52 = _InterlockedCompareExchange((volatile signed __int32 *)(v50 + 528), 0, 0),
           ((v52 ^ _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0)) & 0x100) != 0)
       || (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 528), 0, 0) & 0x100) != 0
       && (v53 = PsWow64GetProcessMachine(**(_QWORD **)(*(_QWORD *)(v11 + 16) + 464LL)),
           (unsigned __int16)PsWow64GetProcessMachine(**(_QWORD **)(v7 + 464)) != v53))
      || !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v11 + 16), v21, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
    {
      DestroyNotify(a1);
    }
    --*(_DWORD *)(v48 + 28);
    return v20;
  }
LABEL_30:
  if ( (!*(_DWORD *)(v11 + 56) || !*(_QWORD *)(v11 + 48))
    && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 464LL)) )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 464LL);
    if ( *(int *)(v25 + 12) >= 0 )
    {
      v26 = *(_QWORD *)(v7 + 464);
      if ( v25 != v26 && (*(_DWORD *)(v25 + 816) & 0x100LL) == 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v26) )
          goto LABEL_60;
        ProcessInformation = 6LL;
        if ( ZwQueryInformationProcess(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               ProcessCookie|ProcessUserModeIOPL,
               &ProcessInformation,
               8u,
               0LL) < 0
          || (ProcessInformation & 0x100000000LL) != 0 )
        {
          goto LABEL_60;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
  {
    v27 = *(_QWORD *)(v11 + 24);
  }
  else
  {
    BugCheckParameter3[0] = *(_QWORD *)(v7 + 456);
    *(_QWORD *)(v7 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v11;
    HMLockObject(v11);
    *(_QWORD *)(a1 + 64) = v7;
    if ( (*(_DWORD *)(v11 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v11);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v11 + 64);
    if ( EventProc )
    {
      v33 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v11 + 76));
      UnlockDomainShared<>::UnlockDomainExclusive<DLT_WINEVENT>::UnlockObjectLock<>::UnlockObjectLock<>(v56);
      xxxClientCallWinEventProc(EventProc, v11, a1);
      if ( v57[32] )
      {
        v34 = 0;
        v35 = v57;
        do
        {
          v36 = (tagDomLock *)*((_QWORD *)v35 - 1);
          if ( v36 )
          {
            if ( *v35 )
              tagDomLock::LockExclusive(v36);
            else
              tagDomLock::LockShared(v36);
          }
          ++v34;
          v35 += 16;
        }
        while ( !v34 );
      }
      W32SetCurrentThreadDpiAwarenessContext(v33);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v27 = *(_QWORD *)(v11 + 24);
    v37 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v30, v29, v31);
    if ( v37 )
      v38 = *v37;
    else
      v38 = 0LL;
    v39 = *(ULONG_PTR **)(v38 + 456);
    if ( v39 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v38, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v38 + 456) = *v39;
    HMUnlockObject(v39[1]);
  }
  DestroyNotify(a1);
  return v27;
}
