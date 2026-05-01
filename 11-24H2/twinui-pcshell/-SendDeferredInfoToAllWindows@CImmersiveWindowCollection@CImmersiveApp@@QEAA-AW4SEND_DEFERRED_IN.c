/*
 * XREFs of ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180088628
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180036120 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 *     ?_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180038538 (-_OnDeferredGhostBitsClear@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800691D8 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x180069280 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800882F8 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800883DC (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180304C40 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x1803064A4 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800888A4 (-HasNewPositionInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?HasNewAppViewDataInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800888E4 (-HasNewAppViewDataInfo@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180088944 (-IsDeferredPositionValid@CAppLocalCache@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x180088A70 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180089860 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18008A004 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(__int64 a1)
{
  unsigned int v1; // esi
  CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *v4; // rcx
  __int128 v5; // xmm0
  unsigned __int64 v6; // rdi
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  int v17; // [rsp+30h] [rbp-98h] BYREF
  int v18; // [rsp+38h] [rbp-90h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v20[2]; // [rsp+48h] [rbp-80h] BYREF
  __int64 v21; // [rsp+68h] [rbp-60h]
  int v22; // [rsp+70h] [rbp-58h]
  char v23[16]; // [rsp+78h] [rbp-50h] BYREF
  int *v24; // [rsp+88h] [rbp-40h]
  int v25; // [rsp+90h] [rbp-38h]
  int v26; // [rsp+94h] [rbp-34h]
  unsigned int *v27; // [rsp+98h] [rbp-30h]
  int v28; // [rsp+A0h] [rbp-28h]
  int v29; // [rsp+A4h] [rbp-24h]

  v1 = 0;
  if ( *(_QWORD *)(a1 + 168)
    && (CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
     || CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewAppViewDataInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1))
    && CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::IsDeferredPositionValid((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1) )
  {
    v1 = 1;
    if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo(v4) )
      CSplashScreen::OnSizeChanged(*(CSplashScreen **)(a1 + 240), (const struct tagRECT *)(a1 + 16));
    v5 = *(_OWORD *)(a1 + 72);
    v6 = 0LL;
    v7 = *(_OWORD *)(a1 + 88);
    v22 = *(_DWORD *)(a1 + 112);
    v20[0] = v5;
    v21 = *(_QWORD *)(a1 + 104);
    for ( v20[1] = v7; v6 < *(_QWORD *)(a1 + 168); ++v6 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v6);
      (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v8 + 64LL))(v8, a1 + 16, v20);
      if ( CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache::HasNewPositionInfo((CImmersiveApp::CImmersiveWindowCollection::CAppLocalCache *)a1)
        && (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v6);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
        v26 = 0;
        v17 = v10;
        v25 = 4;
        v24 = &v17;
        McGenEventWrite_EventWriteTransfer(&MICROSOFT_TWINUI_PUBLISHER_Context, &WindowLayoutChange_Start, v11, 2LL);
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v6);
          v13 = ~(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
          if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
          {
            McTemplateU0qq_EventWriteTransfer(
              (unsigned int)Microsoft_Windows_Immersive_ShellEnableBits,
              &PerfTrack_ModernApp_ResizeVisibleComplete_Start,
              0LL,
              v13,
              v23);
            if ( (Microsoft_Windows_Immersive_ShellEnableBits & 4) != 0 )
            {
              v18 = 0;
              v26 = 0;
              v29 = 0;
              v24 = &v18;
              v19 = v13;
              v27 = &v19;
              v25 = 4;
              v28 = 4;
              McGenEventWrite_EventWriteTransfer(
                &MICROSOFT_TWINUI_PUBLISHER_Context,
                &PerfTrack_ModernApp_ResizeResponsive_Start,
                v14,
                3LL);
            }
          }
        }
      }
    }
    v15 = *(_OWORD *)(a1 + 88);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(a1 + 72);
    v16 = *(_QWORD *)(a1 + 104);
    *(_OWORD *)(a1 + 48) = v15;
    *(_QWORD *)(a1 + 64) = v16;
    CopyRect((LPRECT)a1, (const RECT *)(a1 + 16));
  }
  return v1;
}
