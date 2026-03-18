/*
 * XREFs of QueuePowerRequest @ 0x1400E98F0
 * Callers:
 *     UserPowerEventCallout @ 0x1400E961C (UserPowerEventCallout.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401ADF6C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1401B0310 (UserPowerStateCallout.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     EnterPowerCrit @ 0x1400E9B80 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9BB0 (LeavePowerCrit.c)
 *     EtwTraceCompletePowerRequest @ 0x1400E9C54 (EtwTraceCompletePowerRequest.c)
 *     ?NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1400EA884 (-NotifyPoRequestQueued@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400EA954 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     McTemplateK0xdx_EtwWriteTransfer @ 0x1400EAAA8 (McTemplateK0xdx_EtwWriteTransfer.c)
 */

__int64 __fastcall QueuePowerRequest(_OWORD *a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  NTSTATUS v20; // edi

  v4 = Win32AllocPoolZInitImpl(64LL, 0x60uLL, 0x6F707355u);
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  *(_DWORD *)(v4 + 88) = 32;
  if ( a1 )
  {
    v6 = (_OWORD *)(v4 + 48);
    *v6 = *a1;
    v6[1] = a1[1];
  }
  else
  {
    v6 = 0LL;
  }
  *(_QWORD *)(v5 + 80) = v6;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(v5 + 16), SynchronizationEvent, 0);
  *(_BYTE *)(v5 + 44) = a2;
  EnterPowerCrit();
  if ( *(_DWORD *)(W32GetUserSessionState(v7) + 2728) )
  {
    if ( a1 )
    {
      v8 = *((unsigned int *)a1 + 4);
      if ( (((_DWORD)v8 - 4) & 0xFFFFFFF3) == 0 && (_DWORD)v8 != 8 )
      {
        UserSessionState = W32GetUserSessionState(v8);
        ++*(_DWORD *)(UserSessionState + 560);
        if ( *(_DWORD *)(W32GetUserSessionState(v10) + 560) == 1 )
        {
          v12 = W32GetUserSessionState(v11);
          ArmPowerWatchdog(*(_QWORD *)(v12 + 544), 16LL);
        }
      }
    }
    NotifyPoRequestQueued((struct tagPOWERREQUEST *)v5);
    v14 = *(_QWORD *)(v5 + 72);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xdx_EtwWriteTransfer(v14, *(_DWORD *)(v5 + 64), v13, v5, *(_DWORD *)(v5 + 64), *(_QWORD *)(v5 + 72));
    v15 = W32GetUserSessionState(v14) + 496;
    v16 = *(_QWORD *)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
      __fastfail(3u);
    *(_QWORD *)v5 = v16;
    *(_QWORD *)(v5 + 8) = v15;
    *(_QWORD *)(v16 + 8) = v5;
    *(_QWORD *)v15 = v5;
    LeavePowerCrit();
    v18 = W32GetUserSessionState(v17);
    KeSetEvent(*(PRKEVENT *)(v18 + 520), 1, 0);
    if ( !a2 )
      return 0LL;
    v20 = KeWaitForSingleObject((PVOID)(v5 + 16), WrUserRequest, 0, 0, 0LL);
    if ( v20 >= 0 )
      v20 = *(_DWORD *)(v5 + 40);
  }
  else
  {
    v20 = -2143420409;
    LeavePowerCrit();
  }
  EtwTraceCompletePowerRequest(v5, *(unsigned int *)(v5 + 40));
  GreDeleteFastMutex((char *)v5);
  return (unsigned int)v20;
}
