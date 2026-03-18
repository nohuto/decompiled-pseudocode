/*
 * XREFs of RIMDoOnPnpNotification @ 0x1C0199BB8
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01A1CEC (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A21F8 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01A28A4 (RIMVirtDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceRootPnpEndSyncAsyncWorkItem @ 0x1C01A2C4C (RIMVirtDeviceRootPnpEndSyncAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01A35D0 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimDoRimDevChange @ 0x1C0003BFC (rimDoRimDevChange.c)
 *     rimOnPnpArrived @ 0x1C0076A78 (rimOnPnpArrived.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C0076D60 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimOnPnpRemoveComplete @ 0x1C0078518 (rimOnPnpRemoveComplete.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C0170F30 (RIMFreeDev.c)
 *     rimOnPnpQueryRemove @ 0x1C019A940 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1C019AB58 (rimOnPnpRemoveCancelled.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x1C019AD98 (rimOnPnpRemoveCompleteInUserCrit.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // esi
  int v7; // r8d
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1061);
  if ( *(_QWORD *)(a1 + 32) != PsGetCurrentProcess(a1, a2, a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1062);
  v5 = *(_DWORD *)(a2 + 184);
  v6 = 0;
  if ( (v5 & 1) != 0 )
  {
    v6 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v6 >= 0 )
    {
      v7 = 2;
      v8 = a2;
      v9 = (_QWORD *)a1;
      if ( (*(_DWORD *)(a2 + 184) & 0x40) != 0 )
      {
        rimDoRimDevChange(a1, a2, 2u);
        return (unsigned int)v6;
      }
LABEL_17:
      rimQueueRimDevChangeAsyncWorkItem(v9, v8, v7);
    }
  }
  else
  {
    if ( (v5 & 2) != 0 )
      rimOnPnpQueryRemove(a1, a2);
    if ( (*(_DWORD *)(a2 + 184) & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 184) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
    }
    if ( (*(_DWORD *)(a2 + 184) & 8) != 0 )
    {
      v6 = rimOnPnpRemoveComplete(a1, a2);
      if ( v6 >= 0 )
      {
        v8 = a2;
        v9 = (_QWORD *)a1;
        if ( (*(_DWORD *)(a2 + 184) & 0x40) == 0 )
        {
          v7 = 3;
          goto LABEL_17;
        }
        if ( (unsigned int)rimOnPnpRemoveCompleteInUserCrit(a1, a2) )
        {
          rimDoRimDevChange(a1, a2, 3u);
          RIMFreeDev(a1, a2);
        }
      }
    }
  }
  return (unsigned int)v6;
}
