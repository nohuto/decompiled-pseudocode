/*
 * XREFs of xxxUserSetDisplayConfig @ 0x1C0012540
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009E7F8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01324E0 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013352C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxDisplayDiagBlackScreenDetected @ 0x1C0136AC0 (xxxDisplayDiagBlackScreenDetected.c)
 *     NtUserSetDisplayConfig @ 0x1C014A730 (NtUserSetDisplayConfig.c)
 *     ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01617D4 (-DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESK.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C01666C0 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     LogDiagSDC @ 0x1C0012030 (LogDiagSDC.c)
 *     PowerDimUndimResend @ 0x1C001225C (PowerDimUndimResend.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0012418 (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0012948 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     DrvQueryMDEVPowerState @ 0x1C0013700 (DrvQueryMDEVPowerState.c)
 *     xxxResetDisplayDevice @ 0x1C00138D0 (xxxResetDisplayDevice.c)
 *     DrvSetDisplayConfig @ 0x1C0014230 (DrvSetDisplayConfig.c)
 *     SafeEnableMDEV @ 0x1C00CC6B0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00CC700 (SafeDisableMDEV.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00D71B0 (DrvSetDisplayConfigValidateParams.c)
 *     ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C012F6A4 (-xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z.c)
 *     LogDiagSDCAccessDenied @ 0x1C0168814 (LogDiagSDCAccessDenied.c)
 */

__int64 __fastcall xxxUserSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        __int64 a7,
        bool *a8,
        _BYTE *a9,
        __int64 a10,
        _DWORD *a11)
{
  unsigned int v12; // r13d
  __int64 v13; // rsi
  __int64 v14; // rbx
  struct tagDESKTOP *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r15
  PVOID CurrentProcess; // rax
  __int64 v21; // rdx
  int v22; // r15d
  unsigned int v23; // esi
  unsigned int v24; // r14d
  signed int v25; // ebx
  struct tagMONITOR *CachedMonitor; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // eax
  _DWORD *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  _QWORD *v35; // rcx
  _DWORD *v37; // rax
  char v38; // dl
  _DWORD *v39; // rcx
  struct tagDESKTOP *v40; // rbx
  struct _UNICODE_STRING *v41; // rbx
  __int64 v42; // rdx
  struct _UNICODE_STRING *v43; // rax
  unsigned int v44; // r9d
  __int64 v45; // rax
  __int64 i; // rdx
  char v47; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v48[3]; // [rsp+89h] [rbp-18h] BYREF
  int v49; // [rsp+8Ch] [rbp-15h] BYREF
  int v50; // [rsp+90h] [rbp-11h] BYREF
  __int64 v51; // [rsp+98h] [rbp-9h]
  _QWORD v52[7]; // [rsp+A0h] [rbp-1h] BYREF

  v52[0] = 0LL;
  v50 = 0;
  v12 = a3;
  v47 = 0;
  v13 = (__int64)a2;
  v48[0] = 0;
  v49 = 0;
  v14 = MEMORY[0xFFFFF78000000320];
  v15 = (struct tagDESKTOP *)a5;
  v19 = v14 * KeQueryTimeIncrement();
  v51 = v19;
  if ( !a5 || (*(_DWORD *)(a5 + 48) & 8) != 0 )
    v15 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 57);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v17, v16, v18);
  v21 = 1LL;
  if ( CurrentProcess == gpepCSRSS || !a6 || (a4 & 0x10) != 0 )
  {
    if ( !v15 )
      v15 = grpdeskRitInput;
  }
  else
  {
    v40 = grpdeskRitInput;
    if ( gbDesktopLocked )
      v40 = (struct tagDESKTOP *)gspdeskShouldBeForeground;
    if ( v15 != v40 )
    {
      if ( v40 && ObQueryNameInfo(v40, 1LL) )
        v41 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v40, v21) + 8);
      else
        v41 = 0LL;
      if ( v15 && ObQueryNameInfo(v15, v21) )
        v43 = (struct _UNICODE_STRING *)(ObQueryNameInfo(v15, v42) + 8);
      else
        v43 = 0LL;
      LogDiagSDCAccessDenied(v43, v41);
      v25 = -1073741790;
      v49 = 49;
      goto LABEL_42;
    }
  }
  v22 = v12 & 0x10000;
  if ( ((v12 & 0x10000) != 0) != (a7 != 0) )
  {
    v19 = v51;
    v25 = -1073741811;
    v49 = 1;
    goto LABEL_42;
  }
  v23 = a4 | 4;
  if ( !v22 )
    v23 = a4;
  v24 = a1;
  v25 = DrvSetDisplayConfigValidateParams(a1, (_DWORD)a2, v12, v23, a6);
  if ( v25 < 0 )
  {
    v13 = (__int64)a2;
    v19 = v51;
    v49 = 1;
    goto LABEL_43;
  }
  if ( v22 || gProtocolType && (v12 & 0x88F) == 0x88F || (v23 & 0xC01) != 0 )
    goto LABEL_13;
  v37 = DispBroker::DispBrokerClient::s_pSessionBroker;
  v38 = *((_BYTE *)DispBroker::DispBrokerClient::s_pSessionBroker + 8);
  v39 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( !v38 )
    v39 = DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( *v39 == 3 )
  {
    v44 = v23;
    v13 = (__int64)a2;
    v25 = xxxDispBrokerSetDisplayConfig(a1, a2, v12, v44, a6 != 0);
    goto LABEL_77;
  }
  if ( v38 )
    v37 = (char *)DispBroker::DispBrokerClient::s_pSessionBroker + 4;
  if ( *v37 != 2 )
  {
LABEL_13:
    if ( (v12 & 0x80) == 0 )
      goto LABEL_25;
    if ( gbMDEVDisabled )
    {
      v49 = 27;
    }
    else
    {
      if ( (unsigned int)DrvQueryMDEVPowerState(*((_QWORD *)gpDispInfo + 2)) )
      {
        CachedMonitor = CreateCachedMonitor();
        v27 = v49;
        if ( !CachedMonitor )
          v27 = 53;
        v49 = v27;
        if ( qword_1C02959E8 )
          qword_1C02959E8(0LL);
        if ( qword_1C0295FF0 )
          qword_1C0295FF0();
        if ( qword_1C0291E38 && qword_1C0296000 )
          qword_1C0296000();
        if ( qword_1C0294E80 )
          qword_1C0294E80(*((_QWORD *)gpDispInfo + 5), 0LL, 0LL, 0LL);
LABEL_25:
        if ( v15 )
          v28 = ***((_QWORD ***)v15 + 1);
        else
          v28 = 0LL;
        v29 = DrvSetDisplayConfig(
                a1,
                (_DWORD)a2,
                a3,
                v23 | 0x140,
                v28,
                a6,
                a7,
                0LL,
                *((struct _MDEV **)gpDispInfo + 2),
                (__int64)v52,
                (__int64)&v50,
                (__int64)&v49,
                (__int64)&v47,
                (__int64)v48,
                a10,
                (__int64)a11);
        v25 = v29;
        if ( (v12 & 0x80) == 0 )
        {
LABEL_40:
          v12 = a3;
LABEL_41:
          v13 = (__int64)a2;
          v19 = v51;
LABEL_42:
          v24 = a1;
          goto LABEL_43;
        }
        if ( v29 < 0 )
        {
          if ( !v48[0]
            || v22
            || a7
            || (!v15 ? (v45 = 0LL) : (v45 = ***((_QWORD ***)v15 + 1)),
                v30 = a11,
                v29 = DrvSetDisplayConfig(
                        0,
                        0,
                        2447,
                        258,
                        v45,
                        0,
                        0LL,
                        0LL,
                        *((struct _MDEV **)gpDispInfo + 2),
                        (__int64)v52,
                        0LL,
                        0LL,
                        (__int64)&v47,
                        0LL,
                        a10,
                        (__int64)a11),
                v29 < 0) )
          {
            if ( !qword_1C0295A48 )
              goto LABEL_34;
            goto LABEL_101;
          }
        }
        else
        {
          v30 = a11;
        }
        v25 = v29;
        if ( (v23 & 0x200) != 0 )
        {
          *((_WORD *)gpsi + 3499) = *(_WORD *)(*(_QWORD *)(SGDGetSessionState() + 24) + 1248LL);
          ++*((_WORD *)gpsi + 3507);
          for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
            *(_WORD *)(i + 284) = *((_WORD *)gpsi + 3499);
        }
        TrackFullscreenMode(0);
        if ( !v47 )
        {
          v34 = v52[0];
          *((_QWORD *)gpDispInfo + 2) = v52[0];
          PowerDimUndimResend(v34, v31, v32, v33);
          v25 = xxxResetDisplayDevice(v15, 0LL, (v23 >> 4) & 1, v30);
          if ( v25 < 0 )
            v49 = 36;
          goto LABEL_34;
        }
        if ( (v23 & 4) != 0 )
          goto LABEL_34;
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
        if ( !qword_1C0295A48 )
          goto LABEL_34;
LABEL_101:
        qword_1C0295A48();
LABEL_34:
        if ( v15 )
        {
          v35 = (_QWORD *)*((_QWORD *)v15 + 1);
          if ( (*(_DWORD *)(*v35 + 64LL) & 1) == 0 )
          {
            if ( qword_1C0295EF0 )
              qword_1C0295EF0(v35[3], 1LL, 66693LL);
          }
        }
        if ( qword_1C02959E8 )
          qword_1C02959E8(1LL);
        if ( qword_1C0296010 )
          qword_1C0296010();
        goto LABEL_40;
      }
      v49 = 28;
    }
    v25 = -1073741823;
    goto LABEL_41;
  }
  v13 = (__int64)a2;
  v25 = -1073741790;
LABEL_77:
  v19 = v51;
LABEL_43:
  if ( a8 )
    *a8 = (unsigned int)(v49 - 27) <= 1;
  if ( a9 )
    *a9 = v47;
  if ( v25 >= 0 && v49 == 29 )
    v25 = -1073741266;
  LogDiagSDC(v24, v13, v12, v25, v50, v49, v19, v47, a11);
  return (unsigned int)v25;
}
