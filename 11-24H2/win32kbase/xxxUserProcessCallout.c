/*
 * XREFs of xxxUserProcessCallout @ 0x140167490
 * Callers:
 *     <none>
 * Callees:
 *     GreUnlockVisRgn @ 0x140021330 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserJobCallout @ 0x14011FD28 (UserJobCallout.c)
 *     DestroyProcessInfo @ 0x14015D490 (DestroyProcessInfo.c)
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ApiSetEditionShowSystemCursor @ 0x140193368 (ApiSetEditionShowSystemCursor.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401A9084 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A9280 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z @ 0x1401B2608 (-UserProcessDestroyCallout@@YAXPEAU_W32PROCESS@@@Z.c)
 *     ?UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE_TYPE@@PEAKPEAU_PS_PKG_CLAIM@@@Z @ 0x1401B2864 (-UserProcessImmersiveType@@YAJPEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@PEAXPEAW4_PROCESS_IMMERSIVE.c)
 *     ?xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z @ 0x1401B2B40 (-xxxUserProcessInitCallout@@YAJPEAU_W32PROCESS@@PEAU_WIN32_PROCESS_CALLOUT_PARAMETERS@@@Z.c)
 *     CloseWin32InputRelatedObHandles @ 0x140218A10 (CloseWin32InputRelatedObHandles.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxUserProcessCallout(struct _W32PROCESS *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v6; // si
  PACCESS_TOKEN v7; // r15
  char v8; // r14
  int v9; // ebx
  __int64 v10; // rax
  __int64 v12; // rcx
  int v13; // r14d
  char v14; // r12
  int v15; // ebx
  __int64 v16; // rax
  _QWORD *UserSessionState; // r14
  __int64 v18; // rax
  int inited; // r12d
  __int64 ProcessJob; // rax
  __int64 v21; // r14
  struct _ERESOURCE *JobLock; // rax
  __int64 v23; // rdx
  struct _ERESOURCE *v24; // rax
  _QWORD *v25; // r14
  char v26; // si
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int (*v33)(void); // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  void (__fastcall *v36)(struct _W32PROCESS *); // rax
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int64 i; // r14
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  _DWORD *v47; // rbx
  __int64 v48; // rcx
  _DWORD *v49; // r14
  __int64 v50; // rax
  __int64 v51; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v52[3]; // [rsp+58h] [rbp-28h] BYREF
  int v53; // [rsp+70h] [rbp-10h]
  int v54; // [rsp+74h] [rbp-Ch]
  __int64 v55; // [rsp+78h] [rbp-8h]
  unsigned int v56; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v57; // [rsp+C8h] [rbp+48h] BYREF

  v5 = 0;
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 )
      return (unsigned int)xxxUserProcessInitCallout(a1, (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2);
    else
      UserProcessDestroyCallout(a1);
    return v5;
  }
  else if ( a2 )
  {
    v6 = 1;
    if ( *((_BYTE *)a1 + 1208) == 1 )
    {
      return 1073741851LL;
    }
    else
    {
      v7 = PsReferencePrimaryToken(*(PEPROCESS *)(a2 + 16));
      if ( v7 )
      {
        v57 = 0;
        v56 = 0;
        v51 = 0LL;
        v13 = UserProcessImmersiveType(
                (struct _WIN32_PROCESS_CALLOUT_PARAMETERS *)a2,
                v7,
                (enum _PROCESS_IMMERSIVE_TYPE *)&v57,
                &v56,
                (struct _PS_PKG_CLAIM *)&v51);
        if ( v13 >= 0 )
        {
          UserSessionState = (_QWORD *)W32GetUserSessionState(v12);
          v18 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                  UserSessionState,
                  1LL,
                  0LL,
                  _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
          UserSessionState[3] = v18;
          if ( v18 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v18) )
          {
            DestroySharedUserCritDeferredUnlockList(UserSessionState + 2468);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
            DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
          }
          inited = xxxInitProcessInfo(a1, v7, v57, v56, (__int64)&v51);
          PsDereferencePrimaryToken(v7);
          if ( inited >= 0 )
          {
            UserSessionSwitchLeaveCritWithNonPaged();
            ProcessJob = PsGetProcessJob(*(_QWORD *)a1);
            v21 = ProcessJob;
            if ( ProcessJob && (unsigned int)PsGetJobUIRestrictionsClass(ProcessJob) )
            {
              v52[0] = 0LL;
              v52[1] = 0LL;
              v54 = 0;
              JobLock = (struct _ERESOURCE *)PsGetJobLock(v21);
              ExEnterCriticalRegionAndAcquireResourceExclusive(JobLock);
              v55 = *(_QWORD *)a1;
              v52[2] = v21;
              v53 = 1;
              inited = UserJobCallout((__int64)v52, v23);
              v24 = (struct _ERESOURCE *)PsGetJobLock(v21);
              ExReleaseResourceAndLeaveCriticalRegion(v24);
            }
          }
          else
          {
            DestroyProcessInfo(a1);
            UserSessionSwitchLeaveCritWithNonPaged();
          }
          return (unsigned int)inited;
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (v12 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v12 & 0x80u) == 0LL)
            || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
          {
            v6 = 0;
          }
          v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = *((_DWORD *)a1 + 14);
            v16 = W32GetUserSessionState(v12);
            WPP_RECORDER_AND_TRACE_SF_dD(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v6,
              v14,
              *(_QWORD *)(v16 + 69400),
              3u,
              8u,
              0x24u,
              (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
              v13,
              v15);
          }
          PsDereferencePrimaryToken(v7);
          return (unsigned int)v13;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
        {
          v6 = 0;
        }
        v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = *((_DWORD *)a1 + 14);
          v10 = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v6,
            v8,
            *(_QWORD *)(v10 + 69400),
            3u,
            8u,
            0x23u,
            (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids,
            v9);
        }
        return 3221225596LL;
      }
    }
  }
  else
  {
    v25 = (_QWORD *)W32GetUserSessionState(v4);
    v26 = 1;
    v27 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v25,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v25[3] = v27;
    if ( v27 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v27) )
    {
      DestroySharedUserCritDeferredUnlockList(v25 + 2468);
      DestroyDeferredUnlockObjectAssignmentList(v25 + 2475);
      DestroyDeferredUnlockObjectAssignmentList(v25 + 2473);
    }
    if ( !*(_QWORD *)(W32GetUserGdiSessionState(v28) + 40)
      || (v29 = *(_QWORD *)(W32GetUserGdiSessionState(v29) + 40), *(_QWORD *)a1 != v29) )
    {
      v26 = 0;
    }
    v30 = *(_QWORD *)(W32GetUserGdiSessionState(v29) + 40);
    if ( *(_QWORD *)a1 == v30 )
      W32GetUserSessionState(v30);
    if ( *(_QWORD *)a1 )
    {
      if ( PsGetProcessJob(*(_QWORD *)a1) )
      {
        v33 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v32, v31) + 48) + 616LL);
        if ( v33 )
        {
          if ( v33() >= 0 )
          {
            v36 = *(void (__fastcall **)(struct _W32PROCESS *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v35, v34) + 48)
                                                              + 624LL);
            if ( v36 )
              v36(a1);
          }
        }
      }
    }
    if ( (unsigned int)DestroyProcessInfo(a1) )
    {
      v38 = W32GetUserSessionState(v37);
      v39 = *(_QWORD *)(v38 + 19944);
      for ( i = v39 + 32LL * *(unsigned int *)(W32GetUserSessionState(v40) + 19872);
            i > *(_QWORD *)(v38 + 19944) && !*(_BYTE *)(i + 24);
            i -= 32LL )
      {
        v43 = W32GetUserSessionState(v41);
        --*(_DWORD *)(v43 + 19872);
      }
      v44 = W32GetUserSessionState(v41);
      GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(v44 + 57008) + 48LL));
      v46 = *(_QWORD *)(W32GetUserSessionState(v45) + 57008);
      v47 = *(_DWORD **)(v46 + 24);
      if ( v47 != (_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v46) + 57008) + 24LL) )
      {
        do
        {
          v49 = *(_DWORD **)v47;
          if ( (v47[12] & 0x400000) != 0 )
            DestroyCacheDC(v47);
          v47 = v49;
          v48 = *(_QWORD *)(W32GetUserSessionState(v48) + 57008) + 24LL;
        }
        while ( v49 != (_DWORD *)v48 );
      }
      v50 = W32GetUserSessionState(v48);
      GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v50 + 57008) + 48LL));
      ApiSetEditionShowSystemCursor();
      if ( v26 )
        CloseWin32InputRelatedObHandles();
    }
    UserSessionSwitchLeaveCritWithNonPaged();
    return 0LL;
  }
}
