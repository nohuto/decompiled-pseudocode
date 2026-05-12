/*
 * XREFs of StorPortAdapterDirectedPowerDown @ 0x140079880
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140075FD0 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x140077988 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerDownRequestD3 @ 0x1400799C0 (StorPortAdapterDirectedPowerDownRequestD3.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerDown(__int64 Context, __int64 a2, int a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
  {
    v5 = *(_DWORD *)(Context + 56);
    McTemplateK0pqtq_EtwWriteTransfer(
      Context,
      &EventAdapterDirectedPowerDownStart,
      a3,
      **(_QWORD **)(Context + 4960),
      v5);
  }
  *(_DWORD *)(*(_QWORD *)(Context + 4960) + 20LL) &= ~2u;
  if ( RaidIsAdapterControlSupported(Context + 376, 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context);
  return StorPortAdapterDirectedPowerDownRequestD3((PVOID)Context);
}
