/*
 * XREFs of ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E3890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E4530 (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z @ 0x1804E4610 (-_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z.c)
 *     ?_EndAnimationStage@CAppTransitionManager@@AEAAXXZ @ 0x1804E4650 (-_EndAnimationStage@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x1804E46D0 (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E481C (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x1804E4964 (-_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z.c)
 *     ?_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z @ 0x1804E4A58 (-_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z.c)
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E4FAC (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x1804E5318 (-_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x1804E5718 (-s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppTransitionManager::BeginAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  CAppTransitionManager *v4; // rsi
  struct IUnknownVtbl *lpVtbl; // rax
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  char v15; // bl
  char v16; // r15
  struct IAppLayoutOperation *v17; // r12
  unsigned int v18; // edi
  struct _GUID *v19; // r8
  int v20; // eax
  struct ITemporaryAppVisual **v21; // rdx
  CAppTransitionManager *v22; // rcx
  struct IAppLayoutOperation *v24; // [rsp+30h] [rbp-39h] BYREF
  int v25; // [rsp+38h] [rbp-31h] BYREF
  signed __int64 v26; // [rsp+40h] [rbp-29h] BYREF
  int v27; // [rsp+48h] [rbp-21h]
  struct _GUID v28; // [rsp+50h] [rbp-19h] BYREF
  struct _GUID v29; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = (CAppTransitionManager *)((char *)this - 88);
  v26 = ((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88);
  v27 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v26, 1);
  lpVtbl = a2->lpVtbl;
  v24 = 0LL;
  QueryInterface = lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IAppLayoutOperation **))QueryInterface)(
          a2,
          &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
          &v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 214LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_41;
  }
  v11 = CAppTransitionManager::_BeginAnimationStage(v4, 2LL, v24, a3, a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 216LL;
    goto LABEL_5;
  }
  if ( *((_BYTE *)this + 194) )
  {
    v25 = 0;
    v11 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, int *))(*(_QWORD *)v24 + 24LL))(v24, &v25);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 221LL;
      goto LABEL_5;
    }
    if ( v25 )
    {
      v14 = *((_DWORD *)this + 49);
      if ( v14 == 2 )
      {
        v15 = 1;
      }
      else
      {
        v15 = 0;
        if ( v14 != 3 )
        {
          v16 = 1;
          if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v24 + 80LL))(v24) & 0x200000) == 0 )
          {
LABEL_15:
            v17 = v24;
            v28 = 0LL;
            v18 = 67;
            v29 = 0LL;
            if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v24 + 80LL))(v24) & 0x20000) != 0 )
            {
              v18 = 69;
            }
            else if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v17 + 80LL))(v17) & 0x1000000) != 0 )
            {
              v18 = 34;
            }
            CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(v24, &v28, &v29);
            if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v24 + 80LL))(v24) & 0x400000) != 0 )
            {
              if ( v16 )
                goto LABEL_30;
            }
            else
            {
              v19 = &v28;
              if ( v15 )
                v19 = 0LL;
              v20 = CAppTransitionManager::_BeginDWMTransitionRequest(v4, v18, v19);
              if ( v20 < 0 )
                goto LABEL_23;
              if ( !v15 && !*((_BYTE *)this + 193) )
                CAppTransitionManager::_ExcludeVisualType(v4, 7LL);
              CAppTransitionManager::_ExcludeVisualType(v4, 4LL);
              CAppTransitionManager::_ExcludeVisualType(v4, 2LL);
              CAppTransitionManager::_TagApps(v4, v24);
              if ( v16 )
              {
                CAppTransitionManager::_EndDWMTransitionRequest(v4, 0);
LABEL_30:
                v20 = CAppTransitionManager::_BeginDWMTransitionRequest(v4, 0x44u, &v29);
                if ( v20 < 0 )
                {
LABEL_23:
                  v12 = v20;
                  goto LABEL_41;
                }
                if ( (*((_BYTE *)this + 200) & 4) != 0 && (int)CAppTransitionManager::_FindPlaceModeVisual(v4, v21) >= 0 )
                {
                  CAppTransitionManager::_TagPlaceVisual(v4);
                  CAppTransitionManager::_ExcludeAllPresentedApps(v22, v24);
                }
                else
                {
                  CAppTransitionManager::_ExcludeVisualType(v4, 7LL);
                  CAppTransitionManager::_TagApps(v4, v24);
                }
                if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v24 + 80LL))(v24) & 0x400000) != 0 )
                  CAppTransitionManager::_EndDWMTransitionRequest(v4, 1);
              }
            }
            if ( !v15 )
              DwmFlush();
            goto LABEL_39;
          }
        }
      }
      v16 = 0;
      goto LABEL_15;
    }
  }
LABEL_39:
  CAppTransitionManager::_EndAnimationStage(v4);
  v12 = -2147019873;
  if ( *((_DWORD *)this + 53) )
    v12 = 0;
LABEL_41:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v24);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v26);
  return v12;
}
