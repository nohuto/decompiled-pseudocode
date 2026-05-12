/*
 * XREFs of StorPortAdapterPowerNotRequiredStep1 @ 0x140037930
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerNotRequiredStep2 @ 0x1400379B8 (StorPortAdapterPowerNotRequiredStep2.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140075FD0 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x140077988 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerNotRequiredStep1(_QWORD **Context, __int64 a2, int a3)
{
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pqtq_EtwWriteTransfer(
      (_DWORD)Context,
      (unsigned int)&EventAdapterPowerNotRequiredStart,
      a3,
      *Context[620],
      *((_DWORD *)Context + 14));
  *((_DWORD *)Context[620] + 5) &= ~2u;
  if ( RaidIsAdapterControlSupported((__int64)(Context + 47), 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport(Context, 0LL);
  return StorPortAdapterPowerNotRequiredStep2(Context);
}
