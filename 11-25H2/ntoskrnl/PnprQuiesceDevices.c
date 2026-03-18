/*
 * XREFs of PnprQuiesceDevices @ 0x140B445A4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140B450A0 (PnprQuiesceWorker.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PoStartPowerStateTasks @ 0x1406ED524 (PoStartPowerStateTasks.c)
 *     PoStartPartitionReplace @ 0x140747448 (PoStartPartitionReplace.c)
 *     PoInitializeBroadcast @ 0x140A3C114 (PoInitializeBroadcast.c)
 *     PoBlockConsoleSwitch @ 0x140AAF508 (PoBlockConsoleSwitch.c)
 *     PnprGetMillisecondCounter @ 0x140B43B94 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 */

__int64 __fastcall PnprQuiesceDevices(int *a1)
{
  int started; // edi
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax

  *(_DWORD *)(PnprContext + 33328) = PnprGetMillisecondCounter(0);
  memset_0(a1, 0, 0x50uLL);
  a1[15] = 2;
  *a1 = -2013265920;
  a1[17] = -2013265920;
  a1[16] = 5;
  a1[8] = PoBlockConsoleSwitch((__int64)(a1 + 10));
  started = PoStartPowerStateTasks((__int64)(a1 + 10));
  if ( started >= 0 )
  {
    PoStartPartitionReplace((__int64)(a1 + 10), a1[8]);
    a1[2] = 5;
    a1[4] = 1;
    a1[1] = 1;
    a1[6] = *a1;
    a1[3] = 5;
    a1[5] = 2;
    started = PoInitializeBroadcast();
    if ( started >= 0 )
    {
      *((_BYTE *)a1 + 30) = 3;
      PoBroadcastSystemState(a1 + 1);
      *((_BYTE *)a1 + 30) = 2;
      started = PoBroadcastSystemState(a1 + 1);
      if ( started >= 0 )
        goto LABEL_16;
      v6 = 2005;
    }
    else
    {
      v6 = 1987;
    }
    v7 = PnprContext;
    v8 = *(_DWORD *)(PnprContext + 33288);
    if ( !v8 )
      v8 = v6;
    *(_DWORD *)(PnprContext + 33288) = v8;
    v9 = *(_DWORD *)(v7 + 33292);
    if ( !v9 )
      v9 = 7;
    *(_DWORD *)(v7 + 33292) = v9;
  }
  else
  {
    v3 = PnprContext;
    v4 = *(_DWORD *)(PnprContext + 33288);
    if ( !v4 )
      v4 = 1964;
    v5 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v4;
    if ( !v5 )
      v5 = 7;
    *(_DWORD *)(v3 + 33292) = v5;
  }
LABEL_16:
  *(_DWORD *)(PnprContext + 33332) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}
