/*
 * XREFs of xxxHardErrorControl @ 0x140216A70
 * Callers:
 *     NtUserHardErrorControl @ 0x140216970 (NtUserHardErrorControl.c)
 * Callees:
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x140092FE8 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x140107100 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x140107460 (xxxSetCsrssThreadDesktop.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x14020174C (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x140237494 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4?$SGRDPgbDisconnectHardErrorAttach@H@@QEAAAEAHAEBH@Z @ 0x14026C70C (--4-$SGRDPgbDisconnectHardErrorAttach@H@@QEAAAEAHAEBH@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall xxxHardErrorControl(__int64 a1, __int64 a2, PVOID *a3)
{
  int v4; // r15d
  struct tagTHREADINFO *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  _DWORD *v71; // rbx
  __int64 v72; // rcx
  __int64 v73; // rdx
  NTSTATUS v74; // ebx
  tagQ *v75; // rcx
  __int64 v76; // rcx
  _QWORD v77[4]; // [rsp+20h] [rbp-20h] BYREF
  int v78; // [rsp+70h] [rbp+30h] BYREF

  v4 = a1;
  v5 = PtiCurrent(a1, a2);
  *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19000) = 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v12 = UserSessionState + 19136;
  if ( !v4 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v11, 0LL) + 19200) && !*(_QWORD *)v12 )
    {
      *(_QWORD *)v12 = v5;
      goto LABEL_35;
    }
    return 1LL;
  }
  if ( v4 == 1 )
  {
    if ( *(struct tagTHREADINFO **)v12 == v5 )
    {
      *(_QWORD *)v12 = 0LL;
      return 0LL;
    }
    return 1LL;
  }
  v13 = (unsigned int)(v4 - 2);
  if ( v4 == 2 )
    goto LABEL_37;
  v14 = (unsigned int)(v4 - 3);
  if ( v4 == 3 )
  {
LABEL_9:
    if ( !*(_QWORD *)(W32GetUserSessionState(v11, v14) + 19200) )
      return 1LL;
    v18 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19200);
    if ( v18 == *(_QWORD *)(W32GetUserSessionState(v20, v19) + 63024)
      && !*(_QWORD *)(W32GetUserSessionState(v22, v21) + 19208) )
    {
      return 1LL;
    }
    v23 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 19200);
    if ( v23 == *(_QWORD *)(W32GetUserSessionState(v25, v24) + 63024) )
    {
      v28 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 19208);
      if ( v28 == *(_QWORD *)(W32GetUserSessionState(v30, v29) + 63024) )
        return 1LL;
    }
    v31 = *(_QWORD *)(W32GetUserSessionState(v27, v26) + 19200);
    if ( v31 == *(_QWORD *)(W32GetUserSessionState(v33, v32) + 63024) )
    {
      v36 = W32GetUserSessionState(v35, v34);
      if ( !ObQueryNameInfo(*(_QWORD *)(v36 + 19208)) )
      {
        v46 = 0LL;
LABEL_29:
        if ( v46
          && (!_wcsicmp(L"Winlogon", *(const wchar_t **)(v46 + 8))
           || !_wcsicmp(L"Disconnect", *(const wchar_t **)(v46 + 8))
           || !_wcsicmp(L"Screen-saver", *(const wchar_t **)(v46 + 8))) )
        {
          UserSetLastError(5);
          return 2LL;
        }
LABEL_34:
        if ( v4 == 8 )
        {
LABEL_35:
          _InterlockedAnd((volatile signed __int32 *)v5 + 132, 0xBFFFFFFF);
          return 0LL;
        }
LABEL_37:
        *(_QWORD *)(v12 + 8) = *((_QWORD *)v5 + 59);
        ++*(_DWORD *)(*((_QWORD *)v5 + 59) + 440LL);
LABEL_38:
        if ( *(_QWORD *)(W32GetUserSessionState(v11, v13) + 19200) )
        {
          v50 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 19200);
          if ( v50 != *(_QWORD *)(W32GetUserSessionState(v52, v51) + 63024)
            || *(_QWORD *)(W32GetUserSessionState(v54, v53) + 19208) )
          {
            v55 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 19200);
            if ( v55 != *(_QWORD *)(W32GetUserSessionState(v57, v56) + 63024)
              || (v60 = *(_QWORD *)(W32GetUserSessionState(v59, v58) + 19208),
                  v60 != *(_QWORD *)(W32GetUserSessionState(v62, v61) + 63024)) )
            {
              v78 = 0;
              SGRDPgbDisconnectHardErrorAttach<int>::operator=(v59, &v78);
              v65 = *(_QWORD *)(W32GetUserSessionState(v64, v63) + 19200);
              if ( v65 == *(_QWORD *)(W32GetUserSessionState(v67, v66) + 63024) )
              {
                v70 = W32GetUserSessionState(v69, v68);
                v78 = 1;
                v71 = *(_DWORD **)(v70 + 19208);
                SGRDPgbDisconnectHardErrorAttach<int>::operator=(v72, &v78);
              }
              else
              {
                v71 = *(_DWORD **)(W32GetUserSessionState(v69, v68) + 19200);
              }
              Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v77, v71);
              v74 = xxxSetCsrssThreadDesktop(v71, a3);
              if ( v77[2] != -1LL )
                PopAndFreeW32ThreadLock((__int64)v77, v73);
              if ( v74 >= 0 )
                return 0LL;
              if ( v4 != 5 )
              {
                *(_QWORD *)(v12 + 8) = 0LL;
                if ( !*(_DWORD *)(*((_QWORD *)v5 + 59) + 440LL) )
                {
                  v78 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 425LL);
                }
                --*(_DWORD *)(*((_QWORD *)v5 + 59) + 440LL);
                v75 = (tagQ *)*((_QWORD *)v5 + 59);
                if ( !*((_DWORD *)v75 + 110)
                  && !tagQ::IsAnyThreadAttached(v75)
                  && (*(_DWORD *)(v76 + 436) & 0x4000000) != 0 )
                {
                  v78 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 435LL);
                }
              }
            }
          }
        }
        return 1LL;
      }
      v37 = *(_QWORD *)(W32GetUserSessionState(v11, v13) + 19208);
    }
    else
    {
      v47 = W32GetUserSessionState(v35, v34);
      if ( !ObQueryNameInfo(*(_QWORD *)(v47 + 19200)) )
        goto LABEL_34;
      v37 = *(_QWORD *)(W32GetUserSessionState(v11, v13) + 19200);
    }
    v46 = ObQueryNameInfo(v37) + 8;
    goto LABEL_29;
  }
  v15 = (unsigned int)(v4 - 4);
  if ( v4 == 4 )
  {
    _InterlockedAnd((volatile signed __int32 *)v5 + 132, 0xBFFFFFFF);
    if ( !*(_DWORD *)(*(_QWORD *)(UserSessionState + 19144) + 440LL) )
    {
      v78 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 481LL);
    }
    --*(_DWORD *)(*(_QWORD *)(v12 + 8) + 440LL);
    v38 = W32GetUserSessionState(v11, v15);
    LOBYTE(v77[0]) = 0;
    v77[1] = 0LL;
    ++*(_DWORD *)(v38 + 70856);
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v77);
    v39 = *(_QWORD *)(v12 + 8);
    if ( *((_QWORD *)v5 + 59) != v39 )
    {
      AllocQueue(0LL, v39);
      tagQ::zzzAttachToQueue(*(tagQ **)(v12 + 8), v5, 0LL, 0);
    }
    *(_QWORD *)(v12 + 8) = 0LL;
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v77);
    zzzEndDeferWinEventNotify();
  }
  else
  {
    v13 = (unsigned int)(v4 - 5);
    if ( v4 == 5 )
      goto LABEL_38;
    v14 = (unsigned int)(v4 - 6);
    if ( v4 != 6 )
    {
      if ( v4 != 8 )
        return 0LL;
      goto LABEL_9;
    }
  }
  v40 = *((_QWORD *)v5 + 62);
  xxxRestoreCsrssThreadDesktop(a3, 0LL);
  if ( !*(_DWORD *)(W32GetUserSessionState(v42, v41) + 69120) )
    return *(_QWORD *)(W32GetUserSessionState(v44, v43) + 19200) != v40 ? 3 : 0;
  v78 = 0;
  SGRDPgbDisconnectHardErrorAttach<int>::operator=(v44, &v78);
  return 3LL;
}
