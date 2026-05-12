/*
 * XREFs of StorPortUnitPowerNotRequiredStep1 @ 0x14002E520
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaidUnitReenablePendingTimer @ 0x14002E7B0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x14002E9DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x14002EA68 (StorPortUnitPowerNotRequiredStep2.c)
 *     McTemplateK0pquuutq_EtwWriteTransfer @ 0x140076310 (McTemplateK0pquuutq_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep1(__int64 Context)
{
  int v2; // edx
  int v3; // r8d

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
      McTemplateK0pquuutq_EtwWriteTransfer(
        *(_QWORD *)(Context + 24),
        v2,
        v3,
        **(_QWORD **)(Context + 1872),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 104),
        *(_BYTE *)(Context + 105),
        *(_BYTE *)(Context + 106));
    RaidUnitReenablePendingTimer(Context, 0LL);
    *(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 936) = 0;
    if ( *(_DWORD *)(Context + 1040) && (*(_BYTE *)(Context + 505) & 0x40) != 0 )
      *(_BYTE *)(Context + 1862) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context, 0LL);
    }
    StorPortUnitPowerNotRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
  }
}
