/*
 * XREFs of ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400EA954
 * Callers:
 *     PowerOnMonitor @ 0x1400906D0 (PowerOnMonitor.c)
 *     QueuePowerRequest @ 0x1400E98F0 (QueuePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E9C80 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1400E0654 (McTemplateK0pq_EtwWriteTransfer.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall ArmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  unsigned int i; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 UserSessionState; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-19h]
  _QWORD InputBuffer[12]; // [rsp+30h] [rbp-9h] BYREF

  if ( a1 )
  {
    v2 = a2;
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    v5 = (_DWORD *)(W32GetUserSessionState(v4) + 368);
    for ( i = 0; i < 5; ++i )
    {
      if ( *v5 == (_DWORD)v2 )
      {
        v7 = v5[4];
        goto LABEL_6;
      }
      v5 += 6;
    }
    v7 = 30000;
LABEL_6:
    LODWORD(InputBuffer[2]) = v7;
    HIDWORD(InputBuffer[2]) = W32GetCurrentWin32kSessionId();
    LODWORD(InputBuffer[3]) = 412;
    InputBuffer[4] = v2;
    if ( (_DWORD)v2 == 16 )
    {
      UserSessionState = W32GetUserSessionState(v8);
      BYTE1(InputBuffer[8]) = 1;
      InputBuffer[5] = UserSessionState + 536;
      InputBuffer[6] = *(_QWORD *)W32GetUserSessionState(v12);
      v13 = W32GetUserSessionState(InputBuffer[6]);
      BYTE3(InputBuffer[8]) = 1;
      InputBuffer[7] = v13 + 488;
    }
    else
    {
      InputBuffer[6] = 0LL;
      InputBuffer[7] = 0LL;
      InputBuffer[5] = KeGetCurrentThread();
    }
    ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, 0LL, 0);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      LODWORD(v14) = v2;
      McTemplateK0pq_EtwWriteTransfer(v9, &StartPowerWatchdog, v10, a1, v14);
    }
  }
}
