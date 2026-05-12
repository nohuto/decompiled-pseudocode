/*
 * XREFs of RaidDeleteUnit @ 0x1400381B0
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x14000E8A0 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x140091490 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1400927F4 (RaUnitDeleteDeviceIrp.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x14000ED44 (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x140038334 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x14005A178 (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1400BD65C (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rcx

  RaidUnitSavePowerCycleCount();
  if ( (*(_BYTE *)(a1 + 506) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 && a1 == *(_QWORD *)(v2 + 5016) )
    *(_QWORD *)(v2 + 5016) = 0LL;
  if ( *(_QWORD *)(a1 + 24)
    && *(_BYTE *)(a1 + 3368)
    && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3400), 0, 1) == 1 )
  {
    RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1968) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1960));
  if ( *(_QWORD *)(a1 + 3544) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 3536));
  if ( *(_QWORD *)(a1 + 2088) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2080));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}
