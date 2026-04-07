/*
 * XREFs of ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18001AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800033C8 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x18000359C (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180005140 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x18000535C (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x180005400 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x1800054BC (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180007EBC (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18000802C (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z @ 0x18000946C (-PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z.c)
 *     ?IsLivePreviewAllowed@CDesktopManager@@SA_NXZ @ 0x180009C04 (-IsLivePreviewAllowed@CDesktopManager@@SA_NXZ.c)
 *     ?OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180013164 (-OnCreateAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180014178 (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x1800147A8 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z @ 0x1800149A4 (-OnEndAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x18002D268 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800514F8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x18006EF10 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 *     ?OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEAT_LARGE_INTEGER@@@Z @ 0x1800AA164 (-OnGetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x1800AA1D4 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800AA238 (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 *     ?OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x1800AA2E8 (-OnSetAnimationClockTime@CAnimationClockCoordinator@@QEAAJU_GUID@@W4DWMPANIMATION_CLOCK_TIME@@PE.c)
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800B0218 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800B032C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800B564C (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 *     ?OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800CB6D0 (-OnMagnifierSyncApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEAX_NKPEBU_REMOTE_PORT_VIEW@@PEAJP.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x180108C6C (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 *     ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z @ 0x18010A000 (-GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETER.c)
 *     ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z @ 0x18010A08C (-GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z.c)
 *     ?HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z @ 0x18010A4E0 (-HandleHardwareExpressionActivation@CWindowList@@AEAAJK@Z.c)
 *     ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z @ 0x18010A7DC (-HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z.c)
 *     ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x18010B2A0 (-OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z @ 0x18010BBD8 (-RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z.c)
 *     ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z @ 0x18010C3FC (-SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICD.c)
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010C4B8 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010C60C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 *     ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18010CD38 (-TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_POR.c)
 *     ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z @ 0x18010D110 (-UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::ProcessSyncDwmMessage(
        CWindowList *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        struct _REMOTE_PORT_VIEW *a7,
        int *a8,
        HANDLE hObject)
{
  int SynchronizationCommitHandle; // ebx
  _DWORD *v13; // r12
  unsigned int v14; // r13d
  int updated; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned __int64 v22; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // eax
  HANDLE v29; // rcx
  __int64 v30; // rcx
  HWND v31; // rbx
  void *v32; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  __int64 v34; // r9
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // rcx
  __int64 v46; // rax
  __int64 *v47; // rcx
  __int64 v48; // rax
  __int64 *v49; // rcx
  __int64 v50; // rax
  HWND v51; // rdi
  HWND v52; // rbx
  __int64 *v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // [rsp+20h] [rbp-30h]
  struct _GUID v56; // [rsp+40h] [rbp-10h] BYREF

  SynchronizationCommitHandle = -2147024872;
  v13 = hObject;
  *(_DWORD *)hObject = 0;
  v14 = -2147467263;
  if ( a2 > 1073741916 )
  {
    if ( a2 > 1073741948 )
    {
      if ( a2 > 1073741954 )
      {
        switch ( a2 )
        {
          case 1073741955:
            if ( a4 != 12 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 8) )
            {
              v53 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v54 = *v53;
              hObject = *(HANDLE *)(a3 + 4);
              updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *))(v54 + 72))(v53, &hObject);
              goto LABEL_212;
            }
            break;
          case 1073741956:
            if ( a4 == 20 )
            {
              v51 = *(HWND *)(a3 + 4);
              v52 = *(HWND *)(a3 + 12);
              if ( !(unsigned int)DwmValidateWindow(v51, a6) || v52 && !(unsigned int)DwmValidateWindow(v52, a6) )
              {
                SynchronizationCommitHandle = -2147024891;
                goto LABEL_213;
              }
              updated = CWindowList::OnProxyWindowUpdate(a1, v51, v52);
              goto LABEL_212;
            }
            goto LABEL_214;
          case 1073741957:
            if ( a4 != 16 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 8) )
            {
              v49 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v50 = *v49;
              hObject = *(HANDLE *)(a3 + 4);
              updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *, _QWORD))(v50 + 88))(
                          v49,
                          &hObject,
                          *(unsigned int *)(a3 + 12));
              goto LABEL_212;
            }
            break;
          case 1073741958:
            if ( a4 != 16 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 8) )
            {
              v47 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v48 = *v47;
              hObject = *(HANDLE *)(a3 + 4);
              updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *, _QWORD))(v48 + 96))(
                          v47,
                          &hObject,
                          *(unsigned int *)(a3 + 12));
              goto LABEL_212;
            }
            break;
          default:
            goto LABEL_196;
        }
      }
      else
      {
        switch ( a2 )
        {
          case 1073741954:
            if ( !a5 || a4 != 28 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 24) )
            {
              v45 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v46 = *v45;
              hObject = *(HANDLE *)(a3 + 20);
              updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, HANDLE *))(v46 + 64))(
                          v45,
                          *(_QWORD *)(a3 + 4),
                          *(_QWORD *)(a3 + 12),
                          &hObject);
              goto LABEL_212;
            }
            break;
          case 1073741949:
            if ( !a5 || a4 != 28 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 24) )
            {
              v43 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v44 = *v43;
              hObject = *(HANDLE *)(a3 + 20);
              updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, HANDLE *))(v44 + 8))(
                          v43,
                          *(_QWORD *)(a3 + 4),
                          *(_QWORD *)(a3 + 12),
                          &hObject);
              goto LABEL_212;
            }
            break;
          case 1073741950:
            if ( !a5 || a4 != 28 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 24) )
            {
              v41 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v42 = *v41;
              hObject = *(HANDLE *)(a3 + 20);
              updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, HANDLE *))(v42 + 32))(
                          v41,
                          *(_QWORD *)(a3 + 4),
                          *(_QWORD *)(a3 + 12),
                          &hObject);
              goto LABEL_212;
            }
            break;
          case 1073741951:
            if ( a4 != 20 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 16) )
            {
              v39 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v40 = *v39;
              hObject = *(HANDLE *)(a3 + 12);
              updated = (*(__int64 (__fastcall **)(__int64 *, _QWORD, HANDLE *))(v40 + 16))(
                          v39,
                          *(_QWORD *)(a3 + 4),
                          &hObject);
              goto LABEL_212;
            }
            break;
          case 1073741952:
            if ( a4 != 12 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 8) )
            {
              v37 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v38 = *v37;
              hObject = *(HANDLE *)(a3 + 4);
              updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *))(v38 + 24))(v37, &hObject);
              goto LABEL_212;
            }
            break;
          default:
            if ( a4 != 12 )
              goto LABEL_214;
            if ( a6 == *(_DWORD *)(a3 + 8) )
            {
              v35 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
              v36 = *v35;
              hObject = *(HANDLE *)(a3 + 4);
              updated = (*(__int64 (__fastcall **)(__int64 *, HANDLE *))(v36 + 40))(v35, &hObject);
              goto LABEL_212;
            }
            break;
        }
      }
      goto LABEL_19;
    }
    if ( a2 == 1073741948 )
    {
      if ( a4 == 36 )
      {
        SynchronizationCommitHandle = -2147467263;
        *v13 = 36;
        goto LABEL_66;
      }
      goto LABEL_214;
    }
    if ( a2 > 1073741922 )
    {
      switch ( a2 )
      {
        case 1073741928:
          if ( a4 != 72 )
          {
            SynchronizationCommitHandle = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x3D2u, 0LL);
            goto LABEL_66;
          }
          hObject = &CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                                         *(_QWORD *)(a3 + 56));
          LOBYTE(v34) = a5;
          SynchronizationCommitHandle = CMagnifierControl::OnMagnifierSyncApiMessage(
                                          MagnifierControlForDesktop,
                                          1073741928LL,
                                          a3,
                                          v34);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&hObject);
          goto LABEL_213;
        case 1073741942:
          if ( a4 == 64 )
          {
            updated = CWindowList::TransitionBitmap(
                        (CWindowList *)(unsigned int)(a2 - 1073741942),
                        (const struct MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP *)a3,
                        a7);
            goto LABEL_212;
          }
          goto LABEL_214;
        case 1073741944:
          if ( a4 == 28 )
          {
            updated = CWindowList::UpdateAccentBlurRect(
                        a1,
                        (const struct MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE *)a3);
            goto LABEL_212;
          }
          goto LABEL_214;
        case 1073741945:
          if ( a4 != 20 )
            goto LABEL_214;
          updated = CDesktopManager::UpdateSDRToHDRBoost(
                      CDesktopManager::s_pDesktopManagerInstance,
                      *(HMONITOR *)(a3 + 4),
                      *(double *)(a3 + 12));
          goto LABEL_30;
      }
      if ( a2 != 1073741946 )
        goto LABEL_196;
      if ( !a5 || a4 != 28 )
        goto LABEL_214;
      v31 = *(HWND *)(a3 + 4);
      if ( !v31 || (unsigned int)DwmValidateWindow(*(_QWORD *)(a3 + 4), a6) )
        SynchronizationCommitHandle = CWindowList::AddProjectedShadowCaster(
                                        a1,
                                        v31,
                                        *(void **)(a3 + 12),
                                        *(void **)(a3 + 20));
      else
        SynchronizationCommitHandle = -2147024891;
      v32 = *(void **)(a3 + 12);
      if ( v32 )
        CloseHandle(v32);
      v29 = *(HANDLE *)(a3 + 20);
      if ( v29 )
        goto LABEL_127;
    }
    else
    {
      switch ( a2 )
      {
        case 1073741922:
          if ( a4 != 28 )
            goto LABEL_214;
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetSynchronizationCommitHandle(
                                          *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance
                                          + 21),
                                          (const struct _GUID *)(a3 + 4),
                                          a6,
                                          &hObject);
          *(_QWORD *)(a3 + 20) = hObject;
          break;
        case 1073741917:
          if ( a4 == 24 )
          {
            v56 = *(struct _GUID *)(a3 + 4);
            updated = CAnimationClockCoordinator::OnBeginAnimationClock(
                        *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
                        &v56,
                        *(_DWORD *)(a3 + 20));
            goto LABEL_212;
          }
          goto LABEL_214;
        case 1073741918:
          if ( a4 == 20 )
          {
            v56 = *(struct _GUID *)(a3 + 4);
            updated = CAnimationClockCoordinator::OnEndAnimationClock(
                        *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
                        &v56);
            goto LABEL_212;
          }
          goto LABEL_214;
        case 1073741919:
          if ( a4 == 32 )
          {
            v56 = *(struct _GUID *)(a3 + 4);
            updated = CAnimationClockCoordinator::OnGetAnimationClockTime(
                        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
                        &v56,
                        *(unsigned int *)(a3 + 20),
                        a3 + 24);
            *v13 = 32;
            goto LABEL_212;
          }
          goto LABEL_214;
        case 1073741920:
          if ( a4 == 32 )
          {
            v30 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21);
            v56 = *(struct _GUID *)(a3 + 4);
            updated = CAnimationClockCoordinator::OnSetAnimationClockTime(
                        v30,
                        &v56,
                        *(unsigned int *)(a3 + 20),
                        (a3 + 24) & -(__int64)(*(_QWORD *)(a3 + 24) != 0LL));
            goto LABEL_212;
          }
          goto LABEL_214;
        default:
          if ( a4 != 28 )
            goto LABEL_214;
          hObject = 0LL;
          v56 = *(struct _GUID *)(a3 + 4);
          SynchronizationCommitHandle = CAnimationClockCoordinator::OnGetAnimationClockToken(
                                          *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance
                                          + 21),
                                          &v56,
                                          &hObject);
          if ( SynchronizationCommitHandle >= 0 )
          {
            v28 = NtDCompositionDuplicateHandleToProcess(hObject, a6, &v56);
            SynchronizationCommitHandle = v28 | 0x10000000;
            if ( v28 >= 0 )
              *(_QWORD *)(a3 + 20) = *(_QWORD *)&v56.Data1;
            v29 = hObject;
LABEL_127:
            CloseHandle(v29);
          }
          break;
      }
    }
    *v13 = 28;
    goto LABEL_213;
  }
  if ( a2 == 1073741916 )
  {
    if ( a4 == 24 )
    {
      v56 = *(struct _GUID *)(a3 + 4);
      updated = CAnimationClockCoordinator::OnCreateAnimationClock(
                  *((CAnimationClockCoordinator **)CDesktopManager::s_pDesktopManagerInstance + 21),
                  &v56,
                  *(_DWORD *)(a3 + 20));
      goto LABEL_212;
    }
    goto LABEL_214;
  }
  if ( a2 > 1073741881 )
  {
    if ( a2 > 1073741890 )
    {
      switch ( a2 )
      {
        case 1073741897:
          if ( a4 == 48 )
          {
            updated = CWindowList::StartTransition(
                        (struct _RTL_CRITICAL_SECTION *)a1,
                        (struct MILCMD_DWM_REDIRECTION_STARTTRANSITION *)a3);
            *v13 = 48;
            goto LABEL_212;
          }
          goto LABEL_214;
        case 1073741904:
          if ( a4 == 8 )
          {
            updated = CWindowList::HandleHardwareExpressionActivation(a1, *(_DWORD *)(a3 + 4));
            goto LABEL_212;
          }
          goto LABEL_214;
        case 1073741907:
          if ( a4 == 56 )
          {
            updated = CWindowList::UpdateSharedVirtualDesktopVisual(
                        a1,
                        a6,
                        (const struct MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL *)a3,
                        a7);
            goto LABEL_212;
          }
          goto LABEL_214;
      }
      if ( a2 != 1073741911 )
        goto LABEL_196;
      if ( a4 != 16 )
        goto LABEL_214;
      v27 = *(_QWORD *)(a3 + 4);
      if ( !v27 || (unsigned int)DwmValidateWindow(v27, a6) )
      {
        updated = CWindowList::SetIconicBitmapBackgroundColor(
                    a1,
                    (const struct MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR *)a3);
        goto LABEL_212;
      }
      goto LABEL_19;
    }
    switch ( a2 )
    {
      case 1073741890:
        if ( a4 == 16 )
        {
          updated = CContactManager::OnFlick(
                      *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                      (const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *)a3);
          goto LABEL_212;
        }
        goto LABEL_214;
      case 1073741882:
        if ( a4 != 24 )
          goto LABEL_214;
        v26 = *(_QWORD *)(a3 + 4);
        if ( !v26 || (unsigned int)DwmValidateWindow(v26, a6) )
        {
          updated = CWindowList::SetIconicThumbnail(
                      a1,
                      a6,
                      (const struct MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL *)a3,
                      a7);
          goto LABEL_212;
        }
        goto LABEL_19;
      case 1073741884:
        if ( a4 == 16 )
        {
          updated = CWindowList::QueryThumbnailType(a1, a6, (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *)a3);
          *v13 = 16;
          goto LABEL_212;
        }
        goto LABEL_214;
    }
    if ( a2 != 1073741885 )
    {
      if ( a2 != 1073741886 )
      {
        if ( a2 == 1073741889 )
        {
          if ( a4 == 32 )
          {
            updated = CContactManager::OnGesture(
                        *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
                        (const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *)a3);
            goto LABEL_212;
          }
          goto LABEL_214;
        }
        goto LABEL_196;
      }
      if ( a4 != 12 )
        goto LABEL_214;
      v24 = *(_QWORD *)(a3 + 4);
      if ( !v24 || (unsigned int)DwmValidateWindow(v24, a6) )
      {
        updated = CWindowList::InvalidateIconicBitmaps(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *)a3);
        goto LABEL_212;
      }
      goto LABEL_19;
    }
    if ( CDesktopManager::IsLivePreviewAllowed() )
    {
      if ( a4 != 32 )
        goto LABEL_214;
      v25 = *(_QWORD *)(a3 + 4);
      if ( !v25 || (unsigned int)DwmValidateWindow(v25, a6) )
      {
        updated = CWindowList::SetIconicLivePreviewBitmap(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP *)a3,
                    a7);
        goto LABEL_212;
      }
      goto LABEL_19;
    }
LABEL_55:
    SynchronizationCommitHandle = -2147024846;
    goto LABEL_214;
  }
  if ( a2 == 1073741881 )
  {
    if ( !CDesktopManager::IsLivePreviewAllowed() )
      goto LABEL_55;
    v20 = *(unsigned int *)(a3 + 8);
    if ( (unsigned __int64)(8 * v20) > 0xFFFFFFFF )
    {
      v55 = 859;
    }
    else
    {
      v21 = 8 * v20 + 32;
      if ( v21 < 0x20 )
      {
        v55 = 860;
      }
      else
      {
        SynchronizationCommitHandle = 0;
        if ( !*(_DWORD *)(a3 + 28) )
          goto LABEL_62;
        v22 = 16 * v20;
        if ( v22 > 0xFFFFFFFF )
        {
          v55 = 866;
        }
        else
        {
          if ( (unsigned int)v22 + v21 >= v21 )
          {
            v21 += v22;
LABEL_62:
            if ( a4 == v21 )
            {
              updated = CWindowList::PostActivateLivePreview(a1, (HWND *)a3);
              goto LABEL_212;
            }
            goto LABEL_214;
          }
          v55 = 867;
        }
      }
    }
    SynchronizationCommitHandle = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, v55, 0LL);
    goto LABEL_66;
  }
  if ( a2 > 1073741859 )
  {
    if ( a2 != 1073741860 )
    {
      switch ( a2 )
      {
        case 1073741865:
          if ( a4 == 36 )
          {
            updated = CWindowList::SetColorizationParameters(
                        a1,
                        (const struct MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS *)a3);
            goto LABEL_212;
          }
          goto LABEL_214;
        case 1073741866:
          if ( a4 != 36 )
            goto LABEL_214;
          CWindowList::GetColorizationParameters(a1, (struct MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *)a3);
          *v13 = 36;
LABEL_23:
          SynchronizationCommitHandle = 0;
          goto LABEL_214;
        case 1073741867:
          if ( a5 )
          {
            if ( a4 > 0x18 )
            {
              v18 = *(_DWORD *)(a3 + 20) + 24;
              if ( *(_DWORD *)(a3 + 20) < 0xFFFFFFE8 && a4 >= v18 && *(_DWORD *)(a3 + 4) )
              {
                updated = CWindowList::GetWindowAttribute(a1, (struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
                *v13 = v18;
                goto LABEL_212;
              }
            }
          }
          goto LABEL_214;
      }
      if ( a2 != 1073741876 )
        goto LABEL_196;
      if ( a4 != 20 )
        goto LABEL_214;
      updated = CWindowList::GetGlobalState(a1, (struct MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *)a3);
LABEL_30:
      *v13 = 20;
      goto LABEL_212;
    }
    if ( a4 != 24 )
      goto LABEL_214;
    v19 = *(_QWORD *)(a3 + 4);
    if ( !v19 || (unsigned int)DwmValidateWindow(v19, a6) )
      SynchronizationCommitHandle = CWindowList::QueryWindowThumbnailSourceSize(
                                      a1,
                                      (struct MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *)a3);
    else
      SynchronizationCommitHandle = -2147024891;
    *v13 = 24;
LABEL_213:
    if ( SynchronizationCommitHandle == -2147467263 )
      goto LABEL_66;
    goto LABEL_214;
  }
  switch ( a2 )
  {
    case 1073741859:
      if ( a4 != 20 )
        goto LABEL_214;
      updated = CWindowList::QueryThumbnailSourceSize(
                  a1,
                  a6,
                  (struct MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *)a3);
      goto LABEL_30;
    case 1073741848:
      if ( a4 != 52 )
        goto LABEL_214;
      v17 = *(_QWORD *)(a3 + 4);
      if ( !v17 || (unsigned int)DwmValidateWindow(v17, a6) )
      {
        CWindowList::HitTestQuery(a1, (struct MILCMD_DWM_REDIRECTION_HITTESTQUERY *)a3);
        *v13 = 52;
        goto LABEL_23;
      }
LABEL_19:
      SynchronizationCommitHandle = -2147024891;
      goto LABEL_214;
    case 1073741849:
      if ( a4 != 156 )
        goto LABEL_214;
      CWindowList::GetTitleBarInfo(a1, (struct MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *)a3);
      *v13 = 156;
      goto LABEL_23;
    case 1073741855:
      if ( a4 != 36 )
        goto LABEL_214;
      v16 = *(_QWORD *)(a3 + 12);
      if ( !v16 || (unsigned int)DwmValidateWindow(v16, a6) )
      {
        updated = CWindowList::RegisterThumbnail(a1, a6, (struct MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *)a3);
        goto LABEL_212;
      }
      goto LABEL_19;
  }
  if ( a2 != 1073741856 )
  {
    if ( a2 == 1073741857 )
    {
      if ( a4 == 12 )
      {
        updated = CWindowList::UnregisterThumbnail(
                    a1,
                    a6,
                    (const struct MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL *)a3);
LABEL_212:
        SynchronizationCommitHandle = updated;
        goto LABEL_213;
      }
      goto LABEL_214;
    }
LABEL_196:
    SynchronizationCommitHandle = -2147467263;
    goto LABEL_66;
  }
  if ( a4 == 57 )
  {
    updated = CWindowList::UpdateThumbnailProperties(
                a1,
                a6,
                (struct MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *)a3);
    goto LABEL_212;
  }
LABEL_214:
  if ( a8 )
    *a8 = SynchronizationCommitHandle;
LABEL_66:
  if ( SynchronizationCommitHandle != -2147467263 )
    return 0;
  return v14;
}
