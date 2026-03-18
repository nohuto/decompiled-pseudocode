/*
 * XREFs of ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021E33C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125980 (xxxProcessEventMessage.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0044C94 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C005C088 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A68B8 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 *     GetThreadDesktopWindow @ 0x1C00E9600 (GetThreadDesktopWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z @ 0x1C01EA5CC (-UnlockAndRelease@CMonitorTopology@@SAXPEAPEAV1@PEAU_TL@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest @ 0x1C021C51C (ShellWindowPos--_anonymous_namespace_--AWPSOptionFromShellRequest.c)
 *     ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1C021C828 (-FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C021E7F8 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023B1B4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 */

void __fastcall ShellWindowPos::xxxProcessPositionEvent(ShellWindowPos *this, struct tagQMSG *a2)
{
  ShellWindowPos *v2; // r14
  char v3; // bl
  struct tagQMSG *v4; // rdx
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  PDEVICE_OBJECT v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  _QWORD *v10; // r9
  int v11; // edx
  char v12; // dl
  ShellWindowManagement *ThreadDesktopWindow; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // r14
  struct tagWND *v20; // rax
  struct tagWND *v21; // r12
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // edx
  int v28; // eax
  __int128 *v29; // rcx
  __int128 v30; // xmm0
  int v31; // eax
  const struct AdvancedWindowPos::WINDOWPOSANDSTATE *v32; // r8
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v34; // [rsp+58h] [rbp-A8h]
  CMonitorTopology *v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  struct tagBWL *v37; // [rsp+70h] [rbp-90h]
  char *v38; // [rsp+78h] [rbp-88h]
  ShellWindowPos *v39; // [rsp+80h] [rbp-80h]
  struct CMonitorTopology *v40; // [rsp+88h] [rbp-78h] BYREF
  __int128 v41; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int128 v43; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h]
  __int128 v45; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-30h]
  __int128 v47; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+F8h] [rbp-8h]

  v2 = this;
  v39 = this;
  v3 = 1;
  v5 = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), 1);
  if ( v5 )
  {
    v43 = 0LL;
    v44 = 0LL;
    ThreadLock(v5, &v43);
    v9 = *((_DWORD *)v2 + 8);
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        v36 = *((_QWORD *)v2 + 5);
        v34 = (_QWORD *)ValidateHmonitor(*(_QWORD *)v36);
        v10 = v34;
        if ( v34 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
            || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v12 = 0;
          }
          if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_AND_TRACE_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v12,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              4u,
              0xFu,
              (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
              *(_QWORD *)v5,
              *v34);
            v10 = v34;
          }
          v45 = 0LL;
          v46 = 0LL;
          ThreadLock(v10, &v45);
          ThreadDesktopWindow = (ShellWindowManagement *)GetThreadDesktopWindow(*((struct tagTHREADINFO **)v5 + 2));
          v37 = BuildHwndList(ThreadDesktopWindow, (const struct tagWND *)2, 0LL, 1LL);
          if ( v37 )
          {
            v41 = 0LL;
            v33 = *(_DWORD *)(v36 + 8);
            v42 = 0LL;
            _InterlockedAdd((volatile signed __int32 *)qword_1C035E320, 1u);
            v35 = qword_1C035E320;
            v40 = qword_1C035E320;
            if ( qword_1C035E320 )
              PushW32ThreadLock(
                (__int64)qword_1C035E320,
                &v41,
                (__int64)_lambda_209d4bad6fea09852d6c87e7361f85eb_::_lambda_invoker_cdecl_);
            v38 = (char *)v37 + 32;
            v18 = *((_QWORD *)v37 + 4);
            if ( v18 != 1 )
            {
              v19 = v38;
              do
              {
                v20 = (struct tagWND *)HMValidateHandleNoSecure(v18, 1);
                v21 = v20;
                if ( v20 == v5 )
                  break;
                v17 = 0LL;
                if ( v20 && GetRootOwner(v20) == v5 )
                {
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
                    || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                  {
                    v22 = v17;
                  }
                  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    WPP_RECORDER_AND_TRACE_SF_q(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      v22,
                      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                      16LL,
                      4u,
                      4u,
                      0x10u,
                      (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
                      *(_QWORD *)v21);
                  v47 = 0LL;
                  *(_QWORD *)&v48 = 0LL;
                  ThreadLock(v21, &v47);
                  AdvancedWindowPos::xxxMigrateWindow(v21, (__int64)v34, (__int64)v35, 0, &v33);
                  ThreadUnlock1(v24, v23, v25);
                }
                v18 = *++v19;
              }
              while ( *v19 != 1LL );
              v2 = v39;
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v3 = 0;
            }
            if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_q(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v3,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                v17,
                4u,
                4u,
                0x11u,
                (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids,
                *(_QWORD *)v5);
            AdvancedWindowPos::xxxMigrateWindow(v5, (__int64)v34, (__int64)v35, 0, &v33);
            CMonitorTopology::UnlockAndRelease(&v40, (struct _TL *)&v41);
            v15 = v36;
            if ( v33 != *(_DWORD *)(v36 + 8) )
            {
              LODWORD(v34) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1132);
            }
          }
          ThreadUnlock1(v15, v14, v16);
          FreeHwndList(v37);
        }
        else
        {
          v7 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
          {
            v3 = 0;
          }
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v11 = 14;
            LOBYTE(v11) = v3;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              v8,
              0,
              3,
              4,
              14,
              (__int64)&WPP_8ba1c0058de53c07630bf97a274bc62e_Traceguids);
          }
        }
      }
    }
    else
    {
      v26 = *((_QWORD *)v2 + 5);
      v27 = *(_DWORD *)(v26 + 24);
      if ( v27 == 3 )
      {
        ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow(v5, *((struct tagRECT **)v2 + 5));
      }
      else
      {
        *(_QWORD *)&v47 = *(_QWORD *)(v26 + 16);
        DWORD2(v47) = v27;
        v28 = ShellWindowPos::_anonymous_namespace_::AWPSOptionFromShellRequest((const struct tagRECT *)v26);
        v30 = *v29;
        HIDWORD(v47) = v28;
        v31 = *((_DWORD *)v29 + 8);
        v48 = v30;
        v49 = v31;
        AdvancedWindowPos::xxxApplyWindowPos(v5, (struct tagWND *)&v47, v32);
      }
    }
    ThreadUnlock1(v7, v6, v8);
  }
  ShellWindowPos::FreePositionEvent(v2, v4);
}
