/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14021D248
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x140044560 (PhysicalToLogicalDPIPoint.c)
 *     HMValidateSharedHandleNoRip @ 0x140046F28 (HMValidateSharedHandleNoRip.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x14009499C (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x140095228 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     IsWindowDesktopComposed @ 0x1400BB210 (IsWindowDesktopComposed.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1400E92C4 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x140121954 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ApiSetEditionPostInputMessage @ 0x140192E3C (ApiSetEditionPostInputMessage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x14021CEF0 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x14021E884 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x14021ED84 (_anonymous_namespace_--ValidateUIPI.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
  char v10; // bl
  bool v11; // si
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  _OWORD *InputDestFromForegroundCapture; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  char v23; // di
  struct tagWND *UserWindow; // rax
  struct tagWND *v25; // rbx
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v27; // dx
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // xmm0_8
  int v32; // eax
  struct tagWND *v33; // rax
  __int64 *v34; // r8
  struct tagWND *v35; // rax
  unsigned int v36; // r8d
  __int64 *v37; // r9
  __int64 PtiFromInputDest; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int HardwareButton; // eax
  bool v42; // zf
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  _OWORD v46[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v47[7]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v48[32]; // [rsp+170h] [rbp+70h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(this) + 19656) + 8LL) & 2) != 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || (v10 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v10 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 69400),
        4,
        6,
        42,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
    return 1;
  }
  else
  {
    InputDestFromForegroundCapture = QHelper::GetInputDestFromForegroundCapture(v47);
    v17 = InputDestFromForegroundCapture[1];
    v46[0] = *InputDestFromForegroundCapture;
    v18 = InputDestFromForegroundCapture[2];
    v46[1] = v17;
    v19 = InputDestFromForegroundCapture[3];
    v46[2] = v18;
    v20 = InputDestFromForegroundCapture[4];
    v46[3] = v19;
    v21 = InputDestFromForegroundCapture[5];
    v46[4] = v20;
    v22 = InputDestFromForegroundCapture[6];
    v46[5] = v21;
    v46[6] = v22;
    CInputDest::CInputDest((CInputDest *)v48, (const struct tagINPUTDEST *)v46);
    v23 = 0;
    if ( !v48[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v48) )
      goto LABEL_27;
    UserWindow = CInputDest::GetUserWindow((CInputDest *)v48);
    v25 = UserWindow;
    if ( !UserWindow || (unsigned int)IsWindowDesktopComposed((__int64)UserWindow) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v48);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v27) & 0x1FF) != 0 )
      {
        v43 = 0LL;
        if ( v25 )
          v28 = HMValidateSharedHandleNoRip(*(_QWORD *)(*((_QWORD *)v25 + 5) + 256LL));
        else
          v28 = 0LL;
        *(_QWORD *)&v44 = v28;
        v29 = CInputDest::GetDpiAwarenessContext((CInputDest *)v48);
        PhysicalToLogicalDPIPoint((__int64)&v43, (__int64 *)&a5, v29, (__int64 *)&v44);
        a4 = (unsigned __int16)v43 | (WORD2(v43) << 16);
      }
    }
    v30 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v30 + 116) == 1
      || (v31 = *(_QWORD *)(v30 + 144),
          v32 = *(_DWORD *)(v30 + 152),
          *(_QWORD *)&v44 = v31,
          DWORD2(v44) = v32,
          (unsigned __int8)anonymous_namespace_::ValidateUIPI((UIPrivilegeIsolation *)&v44)) )
    {
      v45 = 0LL;
      v44 = 0LL;
      v33 = CInputDest::GetUserWindow((CInputDest *)v48);
      ApiSetEditionPostInputMessage((__int64)v48, (__int64)v33, a6, 0LL, a4, 0, 0LL, 0LL, 0, v34, (__int64)&v44);
      v35 = CInputDest::GetUserWindow((CInputDest *)v48);
      ApiSetEditionPostInputMessage((__int64)v48, (__int64)v35, v36, 0LL, a4, 0, 0LL, 0LL, 0, v37, (__int64)&v44);
    }
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((CInputDest *)v48, 2);
    if ( !PtiFromInputDest
      || !*(_QWORD *)(PtiFromInputDest + 712)
      || (v39 = anonymous_namespace_::GetPtiFromInputDest((CInputDest *)v48, 2)) != 0
      && (v40 = *(_QWORD *)(v39 + 648)) != 0
      && (*(_DWORD *)(v40 + 8) & 1) != 0 )
    {
LABEL_27:
      HardwareButton = CMouseProcessor::CButtonEvent::GetHardwareButton((__int64)a3);
      v42 = (HardwareButton | *((_DWORD *)this + 945)) == 0;
      *((_DWORD *)this + 945) |= HardwareButton;
      if ( v42 )
      {
        LODWORD(v43) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4393);
      }
      CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3784), a2);
      v23 = 1;
    }
    CInputDest::~CInputDest((CInputDest *)v48);
    return v23;
  }
}
