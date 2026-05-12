/*
 * XREFs of RaidAdapterDeleteAsyncCallbacks @ 0x140042E9C
 * Callers:
 *     RaidAdapterStopDeviceIrp @ 0x140183020 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterReleaseResources @ 0x1401BD580 (RaidAdapterReleaseResources.c)
 * Callees:
 *     RaidAdapterCancelPauseTimer @ 0x14003C0D0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDisConnectMSIInterrupt @ 0x140181144 (RaidAdapterDisConnectMSIInterrupt.c)
 *     RaidAdapterDisConnectNonMSIInterrupt @ 0x140181F34 (RaidAdapterDisConnectNonMSIInterrupt.c)
 */

void __fastcall RaidAdapterDeleteAsyncCallbacks(__int64 a1)
{
  KIRQL v2; // bl
  void *v3; // rcx
  unsigned int i; // ebx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  char v8; // al
  __int64 v9; // rbx

  KeCancelTimer((PKTIMER)(a1 + 1584));
  if ( *(_DWORD *)(a1 + 5536) )
    KeCancelTimer((PKTIMER)(a1 + 5400));
  v2 = KfRaiseIrql(2u);
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 1776));
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 4136));
  KeLowerIrql(v2);
  if ( *(_DWORD *)(a1 + 968) > 1u )
    KeCancelTimer((PKTIMER)(a1 + 5792));
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4369) )
  {
    RaidAdapterDisConnectMSIInterrupt(a1);
    *(_BYTE *)(a1 + 4369) = 0;
    *(_QWORD *)(a1 + 4352) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 848) )
  {
    RaidAdapterDisConnectNonMSIInterrupt(a1);
  }
  v3 = *(void **)(a1 + 4968);
  if ( v3 )
  {
    PoUnregisterPowerSettingCallback(v3);
    *(_QWORD *)(a1 + 4968) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 4984) )
  {
    PoUnregisterCoalescingCallback();
    *(_QWORD *)(a1 + 4984) = 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4800); ++i )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4816) + 8LL * i));
  v5 = *(void **)(a1 + 4808);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x45416152u);
    *(_DWORD *)(a1 + 4800) = 0;
    *(_QWORD *)(a1 + 4808) = 0LL;
    *(_QWORD *)(a1 + 4816) = 0LL;
  }
  v6 = *(void **)(a1 + 4992);
  if ( v6 )
  {
    PoUnregisterPowerSettingCallback(v6);
    *(_QWORD *)(a1 + 4992) = 0LL;
  }
  v7 = *(void **)(a1 + 6040);
  if ( v7 )
  {
    PoUnregisterPowerSettingCallback(v7);
    *(_QWORD *)(a1 + 6040) = 0LL;
  }
  v8 = *(_BYTE *)(a1 + 108);
  if ( (v8 & 0x10) != 0 )
  {
    *(_BYTE *)(a1 + 108) = v8 & 0xEF;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5000), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5000));
  }
  v9 = *(_QWORD *)(a1 + 6224);
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 64) )
    {
      PoUnregisterFromEffectivePowerModeNotifications();
      *(_QWORD *)(v9 + 64) = 0LL;
    }
  }
}
