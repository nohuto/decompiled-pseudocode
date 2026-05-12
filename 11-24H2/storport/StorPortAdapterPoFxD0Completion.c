/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x140038A30
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140053FF0 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     RaidAdapterCancelWaitWakeIrp @ 0x1400777E4 (RaidAdapterCancelWaitWakeIrp.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        __int64 PowerState,
        _BYTE *Context)
{
  __int64 v4; // rdx
  int v6; // ecx
  int v7; // r8d

  Context[107] &= ~2u;
  v4 = *((_QWORD *)Context + 620);
  if ( (*(_DWORD *)(v4 + 20) & 0x80u) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    RaidAdapterCancelWaitWakeIrp(Context, v4, PowerState);
  }
  PoFxReportDevicePoweredOn(**((_QWORD **)Context + 620));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_140171462 & 0x10) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(
        v6,
        (unsigned int)&EventAdapterPowerRequiredStop,
        v7,
        **((_QWORD **)Context + 620),
        *((_DWORD *)Context + 14),
        1);
  }
}
