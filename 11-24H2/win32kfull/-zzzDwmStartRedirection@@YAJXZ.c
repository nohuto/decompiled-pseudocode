/*
 * XREFs of ?zzzDwmStartRedirection@@YAJXZ @ 0x1402B3404
 * Callers:
 *     NtUserDwmKernelStartup @ 0x140194D20 (NtUserDwmKernelStartup.c)
 * Callees:
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x14002D5F8 (DeleteOrSetRedirectionBitmap.c)
 *     _GetProcessWindowStation @ 0x1401038C0 (_GetProcessWindowStation.c)
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1401320A8 (zzzEnableDwmPointerSupport.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 *     GreDwmStartup @ 0x1401C9A3C (GreDwmStartup.c)
 *     bSetDevDragRect @ 0x1401D7390 (bSetDevDragRect.c)
 *     StopFade @ 0x1401EE440 (StopFade.c)
 *     DwmAsyncDesktopFree @ 0x140211784 (DwmAsyncDesktopFree.c)
 *     GreDwmShutdown @ 0x140264BB4 (GreDwmShutdown.c)
 *     DwmAsyncDesktopCreate @ 0x140268C14 (DwmAsyncDesktopCreate.c)
 *     DwmNotifyChildrenAddRemove @ 0x14026B47C (DwmNotifyChildrenAddRemove.c)
 *     DwmAsyncNotifyForegroundChange @ 0x1403238DC (DwmAsyncNotifyForegroundChange.c)
 *     DwmAsyncWindowNotificationsEnabled @ 0x14032418C (DwmAsyncWindowNotificationsEnabled.c)
 *     DwmAsyncWindowNotificationsStateSynced @ 0x14032420C (DwmAsyncWindowNotificationsStateSynced.c)
 */

__int64 zzzDwmStartRedirection(void)
{
  __int64 ProcessWindowStation; // rdi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  int RedirectionBitmap; // r14d
  HSURF v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 i; // rsi
  __int64 **v10; // rax
  __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 j; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 k; // rsi
  __int64 **v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  void *v35; // rax
  HSURF v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  void *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  void *v51; // rax
  void *v52; // rax
  void *v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 m; // rbx
  HSURF v60; // rbx
  __int64 v61; // rax
  _OWORD v63[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v64; // [rsp+40h] [rbp-10h]
  int v65; // [rsp+48h] [rbp-8h]
  HSURF v66; // [rsp+80h] [rbp+30h] BYREF

  v66 = 0LL;
  ProcessWindowStation = GetProcessWindowStation(0LL);
  if ( !(unsigned int)IsDwmApiPortRegistered() )
    return (unsigned int)-1073741790;
  v2 = *(unsigned int *)(ProcessWindowStation + 64);
  if ( (v2 & 4) != 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v2, v1);
    RedirectionBitmap = CreateOrGetRedirectionBitmap(
                          *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 19200) + 8LL) + 24LL),
                          1,
                          0,
                          &v66);
    if ( RedirectionBitmap >= 0 )
    {
      v6 = v66;
      *(_QWORD *)(ProcessWindowStation + 120) = v66;
      if ( *(_QWORD *)(W32GetUserSessionState(v6, v4) + 19200) )
      {
        v8 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19200);
        for ( i = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL); i; i = *(_QWORD *)(i + 32) )
        {
          v10 = *(__int64 ***)(i + 8);
          v11 = **v10;
          v12 = (void *)ReferenceDwmApiPort(*v10, v7);
          DwmAsyncDesktopCreate(v12, v11, v13);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 1);
        }
      }
      if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 43040) )
        StopFade(v15, v14);
      v16 = W32GetUserSessionState(v15, v14);
      bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v16 + 57008) + 48LL), 0LL, 0LL, 0);
      v19 = W32GetUserSessionState(v18, v17);
      if ( (unsigned int)GreDwmStartup(*(Gre::Base **)(*(_QWORD *)(v19 + 57008) + 48LL)) )
      {
        zzzEnableDwmPointerSupport(1LL, 0LL);
        if ( *(_QWORD *)(W32GetUserSessionState(v23, v22) + 19200) )
        {
          v25 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19200);
          for ( j = *(_QWORD *)(*(_QWORD *)(v25 + 40) + 16LL); j; j = *(_QWORD *)(j + 32) )
          {
            RedirectionBitmap = zzzComposeDesktop((struct tagDESKTOP *)j, v24);
            if ( RedirectionBitmap < 0 )
            {
              UnlockUpdatesForDwm();
              v30 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19200);
              for ( k = *(_QWORD *)(*(_QWORD *)(v30 + 40) + 16LL); k; k = *(_QWORD *)(k + 32) )
              {
                zzzDecomposeDesktop((struct tagDESKTOP *)k, 0);
                DwmNotifyChildrenAddRemove((struct tagDESKTOP *)k, 0);
                v32 = *(__int64 ***)(k + 8);
                v33 = **v32;
                v35 = (void *)ReferenceDwmApiPort(*v32, v34);
                DwmAsyncDesktopFree(v35, v33);
              }
              v36 = *(HSURF *)(ProcessWindowStation + 120);
              if ( v36 )
              {
                v37 = W32GetUserSessionState(v30, v29);
                DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 19200) + 8LL) + 24LL), v36, 1);
              }
              v38 = W32GetUserSessionState(v30, v29);
              GreDwmShutdown(*(Gre::Base **)(*(_QWORD *)(v38 + 57008) + 48LL));
              v41 = W32GetUserSessionState(v40, v39);
              bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v41 + 57008) + 48LL), 0LL, 0LL, 0);
              break;
            }
          }
        }
        v43 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19200);
        if ( (*(_DWORD *)(v43 + 48) & 0x400) != 0 )
        {
          v44 = (void *)ReferenceDwmApiPort(v43, v42);
          DwmAsyncWindowNotificationsEnabled(v44);
          if ( *(_QWORD *)(W32GetUserSessionState(v46, v45) + 18944) )
          {
            v48 = *(_QWORD *)(W32GetUserSessionState(v48, v47) + 18944);
            if ( *(_QWORD *)(v48 + 128) )
            {
              v49 = W32GetUserSessionState(v48, v47);
              v51 = (void *)ReferenceDwmApiPort(*(_QWORD *)(v49 + 18944), v50);
              DwmAsyncNotifyForegroundChange(v51);
            }
          }
          v52 = (void *)ReferenceDwmApiPort(v48, v47);
          DwmAsyncWindowNotificationsStateSynced(v52);
        }
        v53 = (void *)ReferenceDwmApiPort(v43, v42);
        if ( v53 )
        {
          v65 = 1073741896;
          v64 = 0LL;
          memset(v63, 0, sizeof(v63));
          LODWORD(v63[0]) = 2883588;
          WORD2(v63[0]) = 0x8000;
          LpcRequestPort(v53, v63);
          ObfDereferenceObject(v53);
        }
        UnlockUpdatesForDwm();
        *(_DWORD *)(ProcessWindowStation + 64) |= 0x200u;
      }
      else
      {
        v54 = W32GetUserSessionState(v21, v20);
        bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(v54 + 57008) + 48LL), 0LL, 0LL, 0);
        if ( *(_QWORD *)(W32GetUserSessionState(v56, v55) + 19200) )
        {
          v58 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19200);
          for ( m = *(_QWORD *)(*(_QWORD *)(v58 + 40) + 16LL); m; m = *(_QWORD *)(m + 32) )
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)m, 0);
        }
        v60 = *(HSURF *)(ProcessWindowStation + 120);
        if ( v60 )
        {
          v61 = W32GetUserSessionState(v58, v57);
          DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v61 + 19200) + 8LL) + 24LL), v60, 1);
        }
      }
    }
  }
  return (unsigned int)RedirectionBitmap;
}
