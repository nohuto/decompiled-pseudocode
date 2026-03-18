/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99A0
 * Callers:
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1400D97B0 (rimDoUpdateInputGlobalsWorkItem.c)
 *     xxxProcessKeyEvent @ 0x1400FB6E0 (xxxProcessKeyEvent.c)
 *     NtMITUpdateInputGlobals @ 0x140125920 (NtMITUpdateInputGlobals.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140188E00 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x14006B134 (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     CitLastInputUpdate @ 0x1400B4340 (CitLastInputUpdate.c)
 *     EtwTraceUserIsActive @ 0x1400DDFD0 (EtwTraceUserIsActive.c)
 *     ?IsWakeSource@CInputGlobals@@AEBA_NW4_LINP_SOURCE@@@Z @ 0x1400E164C (-IsWakeSource@CInputGlobals@@AEBA_NW4_LINP_SOURCE@@@Z.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1400E8A00 (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     ?UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z @ 0x1400F8A30 (-UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z.c)
 *     ApiSetEditionKeepMachineUp @ 0x1401924B0 (ApiSetEditionKeepMachineUp.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x140193FD8 (ApiSetTraceLoggingUserIsActive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v11; // r9
  unsigned int v12; // edx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 UserSessionState; // rax
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v11 = 2LL;
  if ( (a6 & 0x20) != 0 )
  {
    v6 = a6 | 4;
    if ( (*(_DWORD *)(a1 + 148) & (unsigned int)KnownInputTypeFromLinpSource(a3, a6)) == 0 )
      v6 = v12;
    if ( (unsigned __int8)CInputGlobals::IsWakeSource(a1, v13) )
      v6 |= v11;
  }
  InputTraceLogging::Power::UpdateInputGlobals(a3, a4, v6, v11);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
  v15 = *(volatile signed __int32 **)(W32GetUserSessionState(v14) + 19928);
  if ( (*v15 & 0x2000) != 0 )
  {
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
  }
  else
  {
    *(_DWORD *)(a1 + 136) = a3;
    *(_BYTE *)(a1 + 140) = (v6 & 8) != 0;
    if ( a3 != 1 )
    {
      v15 = *(volatile signed __int32 **)(W32GetUserSessionState(v15) + 19928);
      _InterlockedAnd(v15, 0xFFFFFFBF);
    }
    if ( (v6 & 0x10) == 0 )
    {
      if ( (unsigned __int64)(a2 - *(_QWORD *)(a1 + 64)) > 0x1F4 )
      {
        LODWORD(v20) = W32GetCurrentWin32kSessionId();
        if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &v20) < 0 )
        {
          a6 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 255LL);
        }
        v16 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 128) = v16;
        *(_QWORD *)(a1 + 72) = v16 + 1;
        *(_QWORD *)(a1 + 64) = a2;
      }
      if ( !*(_DWORD *)(W32GetUserSessionState(v15) + 19128) || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime((_QWORD *)a1, a2, a3);
    }
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
    UserSessionState = W32GetUserSessionState(v17);
    a6 = 0;
    v20 = 0LL;
    *(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4968LL) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, &v20) )
      ApiSetTraceLoggingUserIsActive(a6, v20);
    if ( (v6 & 0x10) == 0 )
    {
      CitLastInputUpdate(a3, a2, a4, v6);
      ApiSetEditionKeepMachineUp((unsigned int)a2, a3, a5, v6);
    }
  }
  return 1;
}
