/*
 * XREFs of xxxProcessNotifyWinEvent @ 0x1C00F16EC
 * Callers:
 *     xxxFlushDeferredWindowEvents @ 0x1C00802E4 (xxxFlushDeferredWindowEvents.c)
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 * Callees:
 *     ?RemoveNotify@@YAXPEAUtagNOTIFY@@@Z @ 0x1C0010150 (-RemoveNotify@@YAXPEAUtagNOTIFY@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00374DC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C003FD28 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C00E8A54 (-xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z.c)
 *     xxxClientCallWinEventProc @ 0x1C00F1CA4 (xxxClientCallWinEventProc.c)
 *     ?EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ @ 0x1C00F6584 (-EnforceConsistency@AtomicExecutionCheck@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxProcessNotifyWinEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PERESOURCE *v5; // rax
  __int64 v6; // r14
  __int64 *ThreadWin32Thread; // rax
  int v8; // r12d
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD **v13; // r13
  __int64 v14; // rax
  struct tagTHREADINFO **v15; // r15
  _QWORD *v16; // rcx
  __int16 ProcessMachine; // bx
  __int64 *v18; // rbx
  __int64 v19; // rdx
  struct tagQ *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // ecx
  __int16 v28; // bx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  void (*EventProc)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int); // rbx
  unsigned int v40; // r15d
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  int v43; // r14d
  char *v44; // rbx
  tagDomLock *v45; // rcx
  struct tagNOTIFY **v46; // rax
  struct tagNOTIFY ***v47; // rdx
  __int64 ProcessInformation; // [rsp+48h] [rbp-29h] BYREF
  _QWORD **v49; // [rsp+50h] [rbp-21h]
  __int128 v50; // [rsp+58h] [rbp-19h] BYREF
  __int64 v51; // [rsp+68h] [rbp-9h]
  tagDomLock *v52; // [rsp+70h] [rbp-1h]
  char v53; // [rsp+78h] [rbp+7h] BYREF
  __int64 v54; // [rsp+80h] [rbp+Fh]
  char v55; // [rsp+88h] [rbp+17h]
  __int64 v56; // [rsp+90h] [rbp+1Fh]
  char v57; // [rsp+98h] [rbp+27h]

  v50 = 0LL;
  v51 = 0LL;
  v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v5) )
  {
    LODWORD(ProcessInformation) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  v8 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock);
  v10 = 1LL;
  if ( IsResourceAcquiredExclusiveLite != 1 )
    __int2c();
  v11 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 56) & 0xC) == 4 || (*(_DWORD *)(v6 + 488) & 0xD) != 0 )
    goto LABEL_18;
  if ( !(unsigned __int8)Enforced(1LL) )
  {
    v12 = *(_QWORD *)(v6 + 424);
    v10 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL);
    if ( (*(_DWORD *)(v10 + 780) != *(_DWORD *)(v12 + 780) || *(_DWORD *)(v10 + 784) != *(_DWORD *)(v12 + 784))
      && (*(_DWORD *)(v6 + 488) & 0x400000) == 0 )
    {
      goto LABEL_18;
    }
  }
  v13 = (_QWORD **)(v6 + 424);
  v14 = *(_QWORD *)(v6 + 424);
  v15 = (struct tagTHREADINFO **)(v11 + 16);
  v16 = *(_QWORD **)(v11 + 16);
  v49 = (_QWORD **)(v6 + 424);
  if ( v16[53] != v14 )
  {
    if ( (unsigned __int8)IsRestricted(*v16) )
      goto LABEL_18;
  }
  ProcessMachine = PsGetProcessMachine(**((_QWORD **)*v15 + 53));
  if ( (unsigned __int16)PsGetProcessMachine(**v13) != ProcessMachine )
    goto LABEL_18;
  if ( !(unsigned __int8)CheckAccess(*((_QWORD *)*v15 + 53) + 896LL, *v13 + 112) )
  {
    v8 = 1;
LABEL_18:
    v18 = (__int64 *)(v11 + 16);
    v15 = (struct tagTHREADINFO **)(v11 + 16);
    v49 = (_QWORD **)(v6 + 424);
LABEL_19:
    v19 = *v18;
    ProcessInformation = *(_QWORD *)(v11 + 24);
    v20 = *(struct tagQ **)(v19 + 432);
    if ( v8 )
      EtwTraceUIPIEventHookError(a1, v19, v6);
    AtomicExecutionCheck::EnforceConsistency((AtomicExecutionCheck *)v10);
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v22, v21, v23);
    ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
    *(_DWORD *)(a1 + 56) |= 0xCu;
    if ( !v20
      || (v25 = *v18, *v18 == gptiRit)
      || (v26 = *(_DWORD *)(v11 + 40), (v26 & 1) != 0)
      || (v26 & 0x10) != 0
      && ((v27 = *(_DWORD *)(v6 + 488) & 0x100, (*(_DWORD *)(v25 + 488) & 0x100) != v27)
       || v27
       && (v28 = PsWow64GetProcessMachine(**(_QWORD **)(v25 + 424)),
           (unsigned __int16)PsWow64GetProcessMachine(**v49) != v28))
      || !(unsigned int)PostEventMessageEx(*v15, v20, 0xCu, 0LL, 0, 0LL, a1, 0LL) )
    {
      if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
        __int2c();
      RemoveNotify((struct tagNOTIFY ***)a1);
    }
    v32 = PsGetCurrentThreadWin32Thread(v30, v29, v31);
    --*(_DWORD *)(v32 + 48);
    return ProcessInformation;
  }
  v18 = (__int64 *)(v11 + 16);
  if ( (!*(_DWORD *)(v11 + 56) || !*(_QWORD *)(v11 + 48)) && !(unsigned int)IsImmersiveBroker(*((_QWORD *)*v15 + 53)) )
  {
    v34 = *((_QWORD *)*v15 + 53);
    if ( *(int *)(v34 + 12) >= 0 && (_QWORD *)v34 != *v13 && (*(_DWORD *)(v34 + 824) & 0x100) == 0 )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(*v13) )
        goto LABEL_19;
      ProcessInformation = 6LL;
      if ( ZwQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessCookie|ProcessUserModeIOPL,
             &ProcessInformation,
             8u,
             0LL) < 0
        || (ProcessInformation & 0x100000000LL) != 0 )
      {
        goto LABEL_19;
      }
    }
  }
  if ( (*(_DWORD *)(v11 + 40) & 1) != 0 )
  {
    v35 = *(_QWORD *)(v11 + 24);
    if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
      __int2c();
    RemoveNotify((struct tagNOTIFY ***)a1);
  }
  else
  {
    ThreadLockAlways(v11, &v50);
    *(_QWORD *)(a1 + 64) = v6;
    if ( (*(_DWORD *)(v11 + 40) & 8) != 0 )
      EventProc = xxxGetEventProc((struct tagEVENTHOOK *)v11);
    else
      EventProc = *(void (**)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))(v11 + 64);
    if ( EventProc )
    {
      v40 = W32SetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v11 + 76));
      DLT = DLT_WINEVENT::getDLT();
      DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
      v54 = gDomainDummyLock;
      v52 = DomainLockRef;
      v53 = 1;
      v55 = 0;
      v56 = 0LL;
      if ( DomainLockRef )
        tagDomLock::UnLockExclusive(DomainLockRef);
      v57 = 1;
      xxxClientCallWinEventProc(EventProc, v11, a1);
      if ( v57 )
      {
        v43 = 0;
        v44 = &v53;
        do
        {
          v45 = (tagDomLock *)*((_QWORD *)v44 - 1);
          if ( v45 )
          {
            if ( *v44 )
              tagDomLock::LockExclusive(v45);
            else
              tagDomLock::LockShared(v45);
          }
          ++v43;
          v44 += 16;
        }
        while ( !v43 );
      }
      W32SetCurrentThreadDpiAwarenessContext(v40);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    v35 = *(_QWORD *)(v11 + 24);
    ThreadUnlock1(v37, v36, v38);
    if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
      __int2c();
    if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
      __int2c();
    v46 = *(struct tagNOTIFY ***)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1
      || (v47 = *(struct tagNOTIFY ****)(a1 + 8), *v47 != (struct tagNOTIFY **)a1) )
    {
      __fastfail(3u);
    }
    *v47 = v46;
    v46[1] = (struct tagNOTIFY *)v47;
    *(_QWORD *)(a1 + 8) = a1;
    *(_QWORD *)a1 = a1;
    if ( !*(_DWORD *)(a1 + 24) )
      HMAssignmentUnlock(a1 + 16);
    if ( (__int64 *)a1 == &qword_1C035F120 )
      dword_1C035E130 = 0;
    else
      Win32FreePool((void *)a1);
  }
  return v35;
}
