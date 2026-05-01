/*
 * XREFs of ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E6870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18009B530 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1804E4060 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x1804E6E3C (-_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiv.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x1804E6F24 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1804E6F98 (-_GetLastActivatedApp@CLauncherAndDefaultSwitchTransitionTarget@@AEAAJPEAPEAUIApplicationView@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLauncherAndDefaultSwitchTransitionTarget::PrepareTaggingInfoForApp(
        CLauncherAndDefaultSwitchTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  bool v4; // r12
  __int64 (__fastcall *v9)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rbx
  __int64 *v10; // rax
  int v11; // eax
  struct IApplicationView *v12; // rdx
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  __int64 WindowForView; // rax
  _OWORD *v16; // rbx
  __int128 v17; // xmm0
  int v18; // r8d
  int v19; // eax
  CAppTransitionTargetBase *v20; // rcx
  int v21; // eax
  int v22; // ebx
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v23; // r8
  int v24; // eax
  int v25; // ebx
  __int128 v27; // [rsp+30h] [rbp-39h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  struct IUnknown *v29; // [rsp+D0h] [rbp+67h] BYREF
  struct IUnknown *v30; // [rsp+D8h] [rbp+6Fh] BYREF

  v4 = 0;
  *(_QWORD *)&v27 = 4095LL;
  DWORD2(v27) = 0;
  *(_OWORD *)((char *)this + 40) = v27;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *(_OWORD *)((char *)this + 72) = 0LL;
  v30 = 0LL;
  *(_OWORD *)((char *)this + 88) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  v9 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL);
  v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v30);
  v11 = v9(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v10);
  v13 = v11;
  if ( v11 >= 0 )
  {
    v14 = 150994944;
    WindowForView = ApplicationViewHelpers::GetWindowForView(
                      (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v30,
                      v12);
    if ( WindowForView )
    {
      *((_QWORD *)this + 7) = WindowForView;
      (*(void (__fastcall **)(CLauncherAndDefaultSwitchTransitionTarget *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)this + 64LL))(
        this,
        a2,
        a3,
        a4);
      v16 = (_OWORD *)((char *)this + 72);
      if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        v17 = *(_OWORD *)((char *)this + 188);
      else
        v17 = *(_OWORD *)((char *)this + 172);
      *v16 = v17;
      v18 = *((_DWORD *)this + 19);
      v19 = *(_DWORD *)v16;
      *(_OWORD *)((char *)this + 88) = v17;
      *(_DWORD *)v16 = 0;
      *((_DWORD *)this + 20) -= v19;
      *((_DWORD *)this + 21) -= v18;
      *((_DWORD *)this + 19) -= v18;
      MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), (const struct tagRECT *)((char *)this + 88));
      if ( *((_DWORD *)this + 42) == 34
        || *((_DWORD *)this + 42) == 56
        || *((_DWORD *)this + 42) == 57
        || *((_DWORD *)this + 42) == 69 )
      {
        v14 = (*((_DWORD *)this + 39) != 0 ? 151257088 : 150994944) | 0x200000;
        if ( *((_DWORD *)this + 42) != 57 )
          v14 = *((_DWORD *)this + 39) != 0 ? 151257088 : 150994944;
        if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
          || !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
        {
          if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
            || (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
          {
            if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
              *((_DWORD *)this + 10) = 28;
            }
          }
          else
          {
            v24 = 18;
            if ( *((_DWORD *)this + 42) != 34 )
              v24 = 2;
            *((_DWORD *)this + 10) = v24;
          }
        }
        else
        {
          v29 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
          CLauncherAndDefaultSwitchTransitionTarget::_GetLastActivatedApp(this, (struct IApplicationView **)&v29);
          if ( *((_BYTE *)this + 152) )
          {
            v21 = 43;
          }
          else if ( *((_DWORD *)this + 42) != 69 || v29 && SHIsSameObject(v29, v30) )
          {
            v21 = 19;
            if ( *((_DWORD *)this + 42) != 34 )
              v21 = 3;
          }
          else
          {
            v21 = 4;
          }
          *((_DWORD *)this + 10) = v21;
          v22 = *((_DWORD *)this + 42);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
          v4 = v22 != 57;
        }
        CAppTransitionTargetBase::_AdjustWindowForGhost(this, a2, v23, 0LL);
      }
      v25 = *((_DWORD *)this + 11) & 0x400000;
      *((_DWORD *)this + 11) = v25 | CAppTransitionTargetBase::_GetDwmTargetFlag(v20, *((HWND *)this + 7), v4, v14);
    }
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11B,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v11);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
  return v13;
}
