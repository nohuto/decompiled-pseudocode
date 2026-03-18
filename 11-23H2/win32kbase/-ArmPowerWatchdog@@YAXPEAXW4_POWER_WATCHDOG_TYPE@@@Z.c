/*
 * XREFs of ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C01322CC
 * Callers:
 *     QueuePowerRequest @ 0x1C00108E0 (QueuePowerRequest.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C009F448 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0133F40 (PowerOnMonitor.c)
 * Callees:
 *     Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledDeviceUsage @ 0x1C00D0C30 (Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00DFA14 (McTemplateK0pq_EtwWriteTransfer.c)
 *     ?GetPowerWatchdogTimeoutMsec@@YAKW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0132488 (-GetPowerWatchdogTimeoutMsec@@YAKW4_POWER_WATCHDOG_TYPE@@@Z.c)
 */

void __fastcall ArmPowerWatchdog(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+20h] [rbp-19h]
  _QWORD InputBuffer[12]; // [rsp+30h] [rbp-9h] BYREF

  if ( a1 )
  {
    v2 = a2;
    memset(InputBuffer, 0, sizeof(InputBuffer));
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = a1;
    LODWORD(InputBuffer[2]) = GetPowerWatchdogTimeoutMsec((unsigned int)v2);
    v8 = (_DWORD *)SGDGetUserSessionState(v5, v4, v6, v7);
    v12 = (unsigned int)*v8;
    HIDWORD(InputBuffer[2]) = *v8;
    LODWORD(InputBuffer[3]) = 412;
    InputBuffer[4] = v2;
    if ( (_DWORD)v2 == 16 )
    {
      v13 = SGDGetUserSessionState(v12, v9, v10, v11);
      BYTE1(InputBuffer[8]) = 1;
      InputBuffer[5] = v13 + 720;
      if ( (unsigned int)Feature_Backport_PowerWatchdogTimeoutUserCritFix__private_IsEnabledDeviceUsage() )
        v19 = *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 8);
      else
        v19 = *(_QWORD *)(SGDGetUserSessionState(v15, v14, v16, v17) + 8) != 0LL;
      InputBuffer[6] = v19;
      v22 = SGDGetUserSessionState(v19, v18, v20, v21);
      BYTE3(InputBuffer[8]) = 1;
      InputBuffer[7] = v22 + 672;
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
      LODWORD(v25) = v2;
      McTemplateK0pq_EtwWriteTransfer(v23, &StartPowerWatchdog, v24, a1, v25);
    }
  }
}
