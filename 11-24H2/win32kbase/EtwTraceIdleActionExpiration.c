/*
 * XREFs of EtwTraceIdleActionExpiration @ 0x14014AE20
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x140068F50 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqh_EtwWriteTransfer @ 0x1401996A8 (McTemplateK0qqqqh_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceIdleActionExpiration(__int64 a1, char a2)
{
  char v3; // bp
  __int64 v4; // rcx
  __int16 v5; // di
  __int64 UserSessionState; // rax
  char LastInputTime; // bl
  int CurrentWin32kSessionId; // eax
  int v9; // edx
  int v10; // r8d

  v3 = a1;
  if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x2000000000008000LL) != 0
    && (qword_14029ADB8 & 0x2000000000008000LL) == qword_14029ADB8 )
  {
    v5 = *(_WORD *)(W32GetUserSessionState(a1) + 69008);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v4);
      LastInputTime = CInputGlobals::GetLastInputTime(*(CInputGlobals **)(UserSessionState + 3064));
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0qqqqh_EtwWriteTransfer(v5 == 0, v9, v10, CurrentWin32kSessionId, v3, a2, LastInputTime, v5 == 0);
    }
  }
}
