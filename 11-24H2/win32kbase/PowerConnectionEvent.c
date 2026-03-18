/*
 * XREFs of PowerConnectionEvent @ 0x14014C44C
 * Callers:
 *     SetConnectedState @ 0x14014C310 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x14014C390 (SetConnectCompletedState.c)
 * Callees:
 *     ?GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z @ 0x140068ED0 (-GetAdaptiveSessionContext@@YAXPEAU_PO_ADAPTIVE_SESSION_CONTEXT@@@Z.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x14006B090 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z @ 0x14010ABF0 (-ApplyAdaptiveSessionState@@YAXPEAU_PO_ADAPTIVE_SESSION_STATE@@@Z.c)
 *     ?SendConsoleDisplayWnf@@YAXH@Z @ 0x140152290 (-SendConsoleDisplayWnf@@YAXH@Z.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016494C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     wcsncmp @ 0x1401A04E4 (wcsncmp.c)
 *     ?CheckFeature_Servicing_PDCAgentSessions_Enabled@@YAHXZ @ 0x1401AD968 (-CheckFeature_Servicing_PDCAgentSessions_Enabled@@YAHXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall PowerConnectionEvent(__int64 a1)
{
  int v1; // edi
  __int64 UserSessionState; // rbx
  int v3; // r14d
  int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  ULONG v8; // r8d
  __int128 *v9; // rdx
  POWER_INFORMATION_LEVEL v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 OutputBuffer; // [rsp+38h] [rbp-41h] BYREF
  __int128 v16; // [rsp+48h] [rbp-31h] BYREF
  _OWORD v17[2]; // [rsp+58h] [rbp-21h] BYREF
  _OWORD InputBuffer[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 v19; // [rsp+98h] [rbp+1Fh]

  v1 = a1;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v19 = 0LL;
  v16 = 0LL;
  memset(v17, 0, sizeof(v17));
  OutputBuffer = 0LL;
  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_DWORD *)(UserSessionState + 2888);
  v4 = v1 != 0;
  if ( *(_DWORD *)(UserSessionState + 2748) != v4 )
  {
    CheckFeature_Servicing_PDCAgentSessions_Enabled();
    *(_DWORD *)(UserSessionState + 2748) = v4;
    if ( (unsigned int)CheckFeature_Servicing_PDCAgentSessions_Enabled() )
    {
      if ( v1 )
      {
        if ( *(_WORD *)(W32GetUserSessionState(v5) + 69008) )
        {
          v6 = W32GetUserSessionState(v5);
          v5 = 2 - (unsigned int)(wcsncmp((const wchar_t *)(v6 + 64160), L"D8D584DCE21F4BD4B923", 0x20uLL) != 0);
          *(_DWORD *)(UserSessionState + 2752) = v5;
        }
        else
        {
          *(_DWORD *)(UserSessionState + 2752) = 0;
        }
      }
      v7 = W32GetUserSessionState(v5);
      CInputGlobals::UpdateLastInputTime(
        *(struct W32_PUSH_LOCK **)(v7 + 3064),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        0xFu);
      *(_QWORD *)&v16 = 98LL;
      BYTE8(v16) = v1 != 0;
      HIDWORD(v16) = *(_DWORD *)(UserSessionState + 2752);
      GetAdaptiveSessionContext((struct _PO_ADAPTIVE_SESSION_CONTEXT *)v17);
      v8 = 48;
      v9 = &v16;
      v10 = SystemPowerStateLogging|0x40;
    }
    else
    {
      v11 = W32GetUserSessionState(v5);
      CInputGlobals::UpdateLastInputTime(
        *(struct W32_PUSH_LOCK **)(v11 + 3064),
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        0xFu);
      LOBYTE(InputBuffer[0]) = v1 != 0;
      BYTE1(InputBuffer[0]) = *(_WORD *)(W32GetUserSessionState(v12) + 69008) == 0;
      GetAdaptiveSessionContext((struct _PO_ADAPTIVE_SESSION_CONTEXT *)((char *)InputBuffer + 8));
      v8 = 40;
      v9 = InputBuffer;
      v10 = PowerInformationLevelMaximum|SystemReserveHiberFile;
    }
    if ( ZwPowerInformation(v10, v9, v8, &OutputBuffer, 0x10u) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2238LL);
    if ( !*(_WORD *)(W32GetUserSessionState(v13) + 69008)
      || *(_WORD *)(W32GetUserSessionState(v14) + 69008) == 0xFFFF
      && !*(_WORD *)(W32GetUserSessionState(0xFFFFLL) + 69304) )
    {
      SendConsoleDisplayWnf(v1 != 0 ? v3 : 0);
    }
    if ( !v1 )
    {
      if ( (_DWORD)OutputBuffer )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2257LL);
      if ( DWORD2(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2258LL);
      if ( BYTE12(OutputBuffer) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2259LL);
    }
    ApplyAdaptiveSessionState((struct _PO_ADAPTIVE_SESSION_STATE *)&OutputBuffer);
    if ( v1 )
    {
      if ( *(_BYTE *)(UserSessionState + 528) )
        SetInputModeWithCrit(0LL);
    }
  }
}
