/*
 * XREFs of hdcOpenDCW @ 0x140067790
 * Callers:
 *     NtGdiOpenDCW @ 0x1400675B0 (NtGdiOpenDCW.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     ??$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140011900 (--$GreAcquireSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvGetHDEV @ 0x140016460 (DrvGetHDEV.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x14003DB60 (IsUMPD_ldevUnloadImageSupported.c)
 *     UMPD_ldevUnloadImageWrap @ 0x14003DB98 (UMPD_ldevUnloadImageWrap.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     DrvDestroyMDEV @ 0x140089B74 (DrvDestroyMDEV.c)
 *     UserGetMonitorDC @ 0x140099680 (UserGetMonitorDC.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserGetCurrentDesktopId @ 0x1401A9314 (UserGetCurrentDesktopId.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

HDC __fastcall hdcOpenDCW(
        WCHAR *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        HDC a6,
        ULONG64 a7,
        int a8)
{
  struct _devicemodeW *v9; // r12
  unsigned __int64 v10; // r14
  HDC MonitorDC; // rdi
  struct _MDEV *v12; // rbx
  PDEV *HDEV; // rsi
  __int64 v14; // rcx
  int v15; // r12d
  __int64 UserSessionState; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r15
  PDEV *v20; // rax
  bool v21; // zf
  unsigned int v22; // r13d
  void *v23; // r15
  __int64 (*v24)(void); // rax
  int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  struct _LDEV *v29; // rbx
  HDEV v30; // rcx
  signed __int32 v31; // ett
  _QWORD *v32; // r8
  _QWORD *v33; // rdx
  void *v35; // [rsp+60h] [rbp-58h] BYREF
  PDEV *v36; // [rsp+68h] [rbp-50h] BYREF
  struct _UNICODE_STRING v37; // [rsp+70h] [rbp-48h] BYREF
  HDEV v38; // [rsp+C0h] [rbp+8h] BYREF
  struct _devicemodeW *v39; // [rsp+C8h] [rbp+10h]
  unsigned int v40; // [rsp+D0h] [rbp+18h]

  v40 = a3;
  v39 = a2;
  v38 = (HDEV)SourceString;
  v9 = a2;
  v10 = (unsigned __int64)a6;
  MonitorDC = 0LL;
  LODWORD(a6) = a6 != 0LL;
  if ( !SourceString || v10 )
  {
    v22 = v40;
    goto LABEL_33;
  }
  v12 = 0LL;
  HDEV = 0LL;
  v37 = 0LL;
  RtlInitUnicodeString(&v37, SourceString);
  v15 = a8;
  if ( a8 || !v39 )
  {
    EnterSharedCrit(1u, 1u);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v14);
    v17 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            UserSessionState,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    *(_QWORD *)(UserSessionState + 24) = v17;
    if ( v17 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v17) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 19744);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19800);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19784);
    }
  }
  v19 = **(_QWORD **)(W32GetSessionState(v18) + 88) + 624LL;
  GreAcquireSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v19);
  if ( v15 )
  {
    HDEV = DrvGetHDEV(&v37);
    v9 = v39;
  }
  else
  {
    v9 = v39;
    if ( !v39 )
    {
      v20 = DrvGetHDEV(&v37);
      HDEV = v20;
      v21 = a4 == 0;
      v22 = v40;
      if ( !v21 && !v40 )
        MonitorDC = (HDC)UserGetMonitorDC(v20);
      goto LABEL_21;
    }
    v12 = DrvCreateMDEV(&v37, v39, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
    if ( !v12 )
    {
      v35 = 0LL;
      if ( (unsigned int)UserGetCurrentDesktopId(&v35) )
        v12 = DrvCreateMDEV(&v37, v9, v35, 3u, 0LL, 0, 0, 0, 0LL);
    }
    if ( v12 )
      HDEV = (PDEV *)*((_QWORD *)v12 + 5);
  }
  v22 = v40;
LABEL_21:
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = GreCreateDisplayDC((HDEV)HDEV, 0, 0)) != 0LL || !v12 )
    {
      v36 = HDEV;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v36);
    }
    else
    {
      DrvDestroyMDEV(v12);
    }
  }
  if ( v12 )
    GreDeleteFastMutex((char *)v12);
  if ( v19 )
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v19);
  UserSessionSwitchLeaveCritWithNonPaged();
LABEL_33:
  if ( !MonitorDC )
  {
    v23 = a5;
    if ( a5 )
    {
      if ( (v10 & -(__int64)(v10 != 0)) != 0 )
      {
        if ( v10
          && ((v24 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1512LL)) == 0LL
            ? (v25 = -1073741637)
            : (v25 = v24()),
              v25 >= 0
           && (v26 = *(_QWORD *)((v10 & -(__int64)(v10 != 0)) + 0x18),
               v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24),
               (v28 = *(__int64 (__fastcall **)(__int64, __int64))(v27 + 1520)) != 0LL)) )
        {
          LOBYTE(v27) = 2;
          v29 = (struct _LDEV *)v28(v26, v27);
        }
        else
        {
          v29 = 0LL;
        }
        if ( v29 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&v38,
            v29,
            v9,
            (const unsigned __int16 *)v38,
            *(const unsigned __int16 **)((v10 & -(__int64)(v10 != 0)) + 0x20),
            *(const unsigned __int16 **)((v10 & -(__int64)(v10 != 0)) + 8),
            v23,
            0LL,
            0LL,
            (int)a6,
            0,
            0);
          v30 = v38;
          if ( v38 )
          {
            _m_prefetchw(v38 + 10);
            do
              v31 = *((_DWORD *)v30 + 10);
            while ( v31 != _InterlockedCompareExchange((volatile signed __int32 *)v30 + 10, v31 | 0x80, v31) );
            MonitorDC = GreCreateDisplayDC(v38, v22, 1);
            a6 = MonitorDC;
            if ( MonitorDC )
            {
              if ( v10 )
              {
                v32 = (_QWORD *)a7;
                if ( a7 )
                {
                  v33 = (_QWORD *)a7;
                  if ( a7 >= MmUserProbeAddress )
                    v33 = (_QWORD *)MmUserProbeAddress;
                  *v33 = *v33;
                  *v32 = *((_QWORD *)v38 + 223);
                }
              }
            }
            PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v38);
          }
          else if ( v10 && (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
          {
            UMPD_ldevUnloadImageWrap((__int64)v29);
          }
        }
        else
        {
          EngSetLastError(0x77u);
        }
      }
    }
  }
  return MonitorDC;
}
