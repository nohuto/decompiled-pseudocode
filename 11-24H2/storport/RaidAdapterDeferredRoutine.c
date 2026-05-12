/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x140001040
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPauseUnit @ 0x14000125C (RaidAdapterPauseUnit.c)
 *     RaidAdapterRequestTimer @ 0x140001350 (RaidAdapterRequestTimer.c)
 *     StorSetIoGatewayBusy @ 0x1400013B4 (StorSetIoGatewayBusy.c)
 *     RaidAdapterResumeUnit @ 0x14000189C (RaidAdapterResumeUnit.c)
 *     RaidResumeAdapterQueue @ 0x14000FA30 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRestartQueues @ 0x14000FD00 (RaidAdapterRestartQueues.c)
 *     RaidAdapterCancelPauseTimer @ 0x14003C0D0 (RaidAdapterCancelPauseTimer.c)
 *     RaidFreeDeferredItem @ 0x14003D314 (RaidFreeDeferredItem.c)
 *     StorSetIoGatewayNotBusy @ 0x1400516EC (StorSetIoGatewayNotBusy.c)
 *     RaidAdapterDeviceBusy @ 0x140059C04 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x140059CF8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x14005B05C (RaidAdapterLogIoError.c)
 *     RaidAdapterSetPauseTimer @ 0x14006179C (RaidAdapterSetPauseTimer.c)
 *     RaidUnitProcessAsyncNotification @ 0x14009FB50 (RaidUnitProcessAsyncNotification.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  __int64 v3; // rbx
  LARGE_INTEGER *v5; // rdi
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rdx

  v3 = *(_QWORD *)(a1 + 64);
  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4120));
  LowPart = a2[4].LowPart;
  if ( LowPart == 7 )
  {
    StorSetIoGatewayBusy(*(PKSPIN_LOCK *)(v3 + 960));
    goto LABEL_9;
  }
  if ( LowPart > 7 )
  {
    v12 = LowPart - 8;
    if ( !v12 )
    {
      LOBYTE(a2) = 1;
      StorSetIoGatewayNotBusy(*(_QWORD *)(v3 + 960), a2);
      goto LABEL_33;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 == 1 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidUnitProcessAsyncNotification)(
              v3,
              (unsigned int)a2[4].HighPart,
              (LARGE_INTEGER)a2[5].QuadPart);
        }
        else
        {
          KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        RaidAdapterDeviceReady(v3, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      RaidAdapterDeviceBusy(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else
  {
    v7 = LowPart - 1;
    if ( !v7 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
        v3,
        (LARGE_INTEGER)a2[5].QuadPart,
        a2[6].LowPart);
      goto LABEL_9;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_9;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            RaidAdapterResumeUnit(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          RaidAdapterPauseUnit(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
        }
      }
      else
      {
        RaidFreeDeferredItem(v3 + 1008);
        v5 = 0LL;
        if ( !*(_DWORD *)(v3 + 1380) )
          RaidAdapterCancelPauseTimer(v3, v3 + 1776);
      }
      goto LABEL_9;
    }
    RaidFreeDeferredItem(v3 + 1008);
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 1380) == 1 )
    {
      RaidAdapterSetPauseTimer(v3, v3 + 1776, v3 + 1648, *(unsigned int *)(v3 + 1376));
      goto LABEL_9;
    }
    LOBYTE(v16) = a3;
    if ( !(unsigned int)RaidResumeAdapterQueue(v3, 0LL, v16) )
    {
LABEL_33:
      LOBYTE(v17) = a3;
      RaidAdapterRestartQueues(v3, v17);
    }
  }
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4120));
  if ( v5 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)&v5[2], 134684677, 134684676) != 134684676 )
    {
      v5[2].LowPart = 134684675;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v3 + 1088), (PSLIST_ENTRY)v5);
    }
  }
}
