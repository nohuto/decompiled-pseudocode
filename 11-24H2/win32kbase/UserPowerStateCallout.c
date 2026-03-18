/*
 * XREFs of UserPowerStateCallout @ 0x1401B0310
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E47A0 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     QueuePowerRequest @ 0x1400E98F0 (QueuePowerRequest.c)
 *     EnterPowerCrit @ 0x1400E9B80 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9BB0 (LeavePowerCrit.c)
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x14012B784 (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     IsLogonConnected @ 0x14014CCC0 (IsLogonConnected.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B346C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 */

__int64 __fastcall UserPowerStateCallout(__int64 a1)
{
  __int64 UserSessionState; // rax
  int v3; // esi
  char v4; // r14
  int v5; // r13d
  int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r12d
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // dl
  _OWORD *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct _KEVENT *v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // eax
  _QWORD v29[4]; // [rsp+20h] [rbp-48h] BYREF

  UserSessionState = W32GetUserSessionState(a1);
  v3 = *(_DWORD *)(a1 + 32);
  v4 = *(_BYTE *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = UserSessionState + 2968;
  v8 = *(_DWORD *)(a1 + 28);
  AddPowerStateLogEntry(1LL, v3);
  if ( !v3 )
  {
    v10 = UserSessionSwitchBlock_Start();
LABEL_3:
    v11 = v10;
    AddPowerStateLogEntry(2LL, v10);
    return v11;
  }
  if ( v3 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( *(_DWORD *)(W32GetUserSessionState(v13) + 2700) )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState(v14) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3282);
      v29[0] = 0LL;
      v29[1] = 0LL;
      v29[2] = 4LL;
      *(_DWORD *)(W32GetUserSessionState(v15) + 2700) = 0;
      v17 = *(int *)(W32GetUserSessionState(v16) + 2704);
      v29[3] = v17;
      v18 = W32GetUserSessionState(v17);
      v19 = 0;
      v20 = v29;
      *(_DWORD *)(v18 + 2704) = 0;
LABEL_9:
      v10 = QueuePowerRequest(v20, v19);
      goto LABEL_3;
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v9) + 32)
    && *(_DWORD *)(W32GetUserSessionState(v21) + 2728)
    && IsLogonConnected(v22) )
  {
    EnterPowerCrit(v23);
    if ( v3 == 1 )
    {
      v25 = *(_DWORD *)v7;
      if ( v4 )
      {
        if ( (v25 & 1) != 0 )
        {
LABEL_17:
          *(_DWORD *)v7 |= 1u;
          *(_DWORD *)v7 = v8 & 4 | *(_DWORD *)v7 & 0xFFFFFFFB;
          *(_DWORD *)v7 = (v8 >> 30) & 2 | *(_DWORD *)v7 & 0xFFFFFFFD;
          *(_DWORD *)v7 ^= ((unsigned __int8)*(_DWORD *)v7 ^ (unsigned __int8)(8 * v8)) & 8;
          v26 = (8 * (v8 & 2)) | *(_DWORD *)v7 & 0xFFFFFFEF;
          *(_DWORD *)(v7 + 56) = v5;
          *(_DWORD *)v7 = v26;
          v27 = *(_DWORD *)v7;
          *(_DWORD *)(v7 + 60) = v6;
          *(_DWORD *)(v7 + 64) = v8;
          if ( (v27 & 4) != 0 )
            *(_DWORD *)(v7 + 20) = 40;
          if ( (*(_DWORD *)v7 & 2) != 0 )
            *(_DWORD *)(v7 + 20) = 9;
          v24 = *(struct _KEVENT **)(v7 + 8);
          if ( v24 )
            KeSetEvent(v24, 1, 0);
LABEL_27:
          if ( !v4 )
            goto LABEL_28;
          goto LABEL_37;
        }
      }
      else if ( (v25 & 1) == 0 )
      {
        goto LABEL_17;
      }
      LeavePowerCrit((__int64)v24);
      AddPowerStateLogEntry(2LL, -2143420408);
      return 2151546888LL;
    }
    else
    {
      if ( v3 == 14 )
      {
        *(_DWORD *)(v7 + 60) = v6;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)v7 & 1) != 0 )
      {
        if ( !v4 )
        {
          if ( v3 != 8 )
          {
LABEL_28:
            if ( v3 == 2 || v3 == 13 )
              *(_DWORD *)(v7 + 76) = *(_DWORD *)(a1 + 36);
            *(_DWORD *)(v7 + 72) = v3;
            LeavePowerCrit((__int64)v24);
            v19 = 1;
            v20 = 0LL;
            goto LABEL_9;
          }
          v28 = *(_DWORD *)v7 & 0xFFFFFFFE;
          *(_QWORD *)(v7 + 8) = 0LL;
          *(_DWORD *)v7 = v28;
        }
LABEL_37:
        LeavePowerCrit((__int64)v24);
LABEL_10:
        AddPowerStateLogEntry(2LL, 0);
        return 0LL;
      }
      LeavePowerCrit((__int64)v24);
      AddPowerStateLogEntry(2LL, -2143420407);
      return 2151546889LL;
    }
  }
  else
  {
    AddPowerStateLogEntry(2LL, -2143420409);
    return 2151546887LL;
  }
}
