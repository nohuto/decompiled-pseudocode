/*
 * XREFs of PdcTaskClientRequest @ 0x140A87D84
 * Callers:
 *     PopSwitchUpdateUserShutdownScenarioState @ 0x140752440 (PopSwitchUpdateUserShutdownScenarioState.c)
 *     PopUserShutdownCalloutDelayTimerWorker @ 0x1407525A0 (PopUserShutdownCalloutDelayTimerWorker.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407525E0 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x140758100 (PopPowerAggregatorSessionSwitchWorker.c)
 * Callees:
 *     PdcPortSendMessageSynchronously @ 0x1404897EC (PdcPortSendMessageSynchronously.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PdcReleaseRwLockExclusive @ 0x1406F9738 (PdcReleaseRwLockExclusive.c)
 *     PdcAcquireRwLockExclusive @ 0x14078E078 (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcTaskClientRequest(__int64 a1, char a2)
{
  int v4; // edi
  int v6; // eax
  struct _EX_RUNDOWN_REF *v7; // rcx
  int v8; // ecx
  _BYTE v9[40]; // [rsp+20h] [rbp-328h] BYREF
  int v10; // [rsp+48h] [rbp-300h]
  bool v11; // [rsp+58h] [rbp-2F0h]

  memset_0(v9, 0, 0x320uLL);
  if ( a1 && *(_DWORD *)a1 == 1667458128 )
  {
    PdcAcquireRwLockExclusive((unsigned __int64 *)(a1 + 8));
    if ( !a2 && !*(_DWORD *)(a1 + 48) )
    {
      v4 = -1073741823;
LABEL_16:
      PdcReleaseRwLockExclusive((signed __int64 *)(a1 + 8));
      return (unsigned int)v4;
    }
    v6 = *(_DWORD *)(a1 + 48);
    v4 = 0;
    if ( a2 )
    {
      if ( v6 )
        goto LABEL_13;
    }
    else if ( v6 != 1 )
    {
      goto LABEL_13;
    }
    v7 = *(struct _EX_RUNDOWN_REF **)(a1 + 40);
    v10 = 7;
    v11 = a2 != 0;
    PdcPortSendMessageSynchronously(v7, (__int64)v9);
    v4 = *(_DWORD *)(a1 + 52);
    if ( v4 < 0 )
      goto LABEL_16;
LABEL_13:
    v8 = *(_DWORD *)(a1 + 48);
    if ( a2 )
      *(_DWORD *)(a1 + 48) = v8 + 1;
    else
      *(_DWORD *)(a1 + 48) = v8 - 1;
    goto LABEL_16;
  }
  return (unsigned int)-1073741585;
}
