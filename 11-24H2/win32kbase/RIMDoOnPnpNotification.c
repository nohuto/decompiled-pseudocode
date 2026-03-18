/*
 * XREFs of RIMDoOnPnpNotification @ 0x1401127D0
 * Callers:
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1401120C4 (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EC448 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDiscoverSpecificDevice @ 0x1401ED4D0 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     rimOnPnpRemoveComplete @ 0x140055BD4 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x14005B4D0 (rimDoRimDevChange.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x1400C6FC8 (rimOnPnpRemoveCompleteInUserCrit.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x14012EC64 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     RIMFreeDev @ 0x1401D1DE0 (RIMFreeDev.c)
 *     rimOnPnpQueryRemove @ 0x1401E9B44 (rimOnPnpQueryRemove.c)
 *     rimOnPnpRemoveCancelled @ 0x1401E9DCC (rimOnPnpRemoveCancelled.c)
 */

__int64 __fastcall RIMDoOnPnpNotification(struct RawInputManagerObject *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  int v7; // esi
  struct RawInputManagerObject *v8; // rcx

  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1063LL);
  if ( *((_QWORD *)a1 + 4) != PsGetCurrentProcess(a1, a2, a3, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1064LL);
  v6 = *(_DWORD *)(a2 + 168);
  v7 = 0;
  if ( (v6 & 1) != 0 )
  {
    v7 = rimOnPnpArrived(a1, a2, -1LL);
    if ( v7 >= 0 )
    {
      v8 = a1;
      if ( (*(_DWORD *)(a2 + 168) & 0x40) != 0 )
      {
        rimDoRimDevChange((__int64)a1, a2, 2u);
        return (unsigned int)v7;
      }
LABEL_17:
      rimQueueRimDevChangeAsyncWorkItem(v8);
    }
  }
  else
  {
    if ( (v6 & 2) != 0 )
    {
      rimOnPnpQueryRemove(a1, a2);
      if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() )
        rimQueueRimDevChangeAsyncWorkItem(a1);
    }
    if ( (*(_DWORD *)(a2 + 168) & 4) != 0 )
    {
      rimOnPnpRemoveCancelled(a1, a2);
      *(_DWORD *)(a2 + 168) |= 1u;
      rimOnPnpArrived(a1, a2, -1LL);
    }
    if ( (*(_DWORD *)(a2 + 168) & 8) != 0 )
    {
      v7 = rimOnPnpRemoveComplete((char)a1, a2);
      if ( v7 >= 0 )
      {
        v8 = a1;
        if ( (*(_DWORD *)(a2 + 168) & 0x40) == 0 )
          goto LABEL_17;
        if ( (unsigned int)rimOnPnpRemoveCompleteInUserCrit(a1, a2) )
        {
          rimDoRimDevChange((__int64)a1, a2, 3u);
          RIMFreeDev(a1, (struct RIMDEV *)a2);
        }
      }
    }
  }
  return (unsigned int)v7;
}
