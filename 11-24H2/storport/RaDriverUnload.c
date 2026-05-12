/*
 * XREFs of RaDriverUnload @ 0x14003F3B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     RaDeleteDriver @ 0x140181190 (RaDeleteDriver.c)
 *     WppCleanupKm @ 0x14018431C (WppCleanupKm.c)
 */

__int64 __fastcall RaDriverUnload(PDRIVER_OBJECT DriverObject)
{
  PVOID DriverObjectExtension; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_ce0a347073b43ea6ed7ab85136c3e909_Traceguids, DriverObject);
  }
  DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
  RaDeleteDriver(DriverObjectExtension);
  if ( _InterlockedExchangeAdd(&InitializeCount, 0xFFFFFFFF) == 1 )
  {
    if ( StorpControl )
    {
      RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\StorportControl");
      IoDeleteSymbolicLink(&DestinationString);
      IoDeleteDevice(StorpControl);
      StorpControl = 0LL;
    }
    if ( IsWppInitialized )
    {
      WppCleanupKm(v4, v3);
      IsWppInitialized = 0;
    }
    if ( SpPerfUnitReadCounterSet )
    {
      PcwUnregister(SpPerfUnitReadCounterSet);
      SpPerfUnitReadCounterSet = 0LL;
    }
    if ( SpPerfUnitWriteCounterSet )
    {
      PcwUnregister(SpPerfUnitWriteCounterSet);
      SpPerfUnitWriteCounterSet = 0LL;
    }
    if ( SpPerfUnitTransferCounterSet )
    {
      PcwUnregister(SpPerfUnitTransferCounterSet);
      SpPerfUnitTransferCounterSet = 0LL;
    }
    if ( SpPerfUnitQueueCounterSet )
    {
      PcwUnregister(SpPerfUnitQueueCounterSet);
      SpPerfUnitQueueCounterSet = 0LL;
    }
  }
  return 0LL;
}
