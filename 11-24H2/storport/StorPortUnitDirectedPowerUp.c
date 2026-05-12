/*
 * XREFs of StorPortUnitDirectedPowerUp @ 0x14007A540
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaidUnitReenablePendingTimer @ 0x14002E7B0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x14002E9DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x1400763D8 (McTemplateK0pquuutx_EtwWriteTransfer.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x14007A718 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     RaidNotifyPoAboutAdaptiveD3Engagement @ 0x1400BE1FC (RaidNotifyPoAboutAdaptiveD3Engagement.c)
 */

void __fastcall StorPortUnitDirectedPowerUp(char *Context)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // r9
  int v4; // ecx
  _QWORD *v5; // r8
  char *v6; // r9
  unsigned __int64 v7; // rcx

  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    return;
  v2 = (_QWORD **)(Context + 1872);
  v3 = (_QWORD *)*((_QWORD *)Context + 234);
  v4 = *((_DWORD *)v3 + 8);
  if ( (v4 & 0x300) == 0x300 )
  {
    if ( (Context[507] & 4) == 0 )
      RaidNotifyPoAboutAdaptiveD3Engagement(Context);
    PoFxReportDevicePoweredOn(**v2);
    return;
  }
  v5 = Context + 2216;
  if ( *((_QWORD *)Context + 277) )
  {
    if ( (v4 & 0x80u) != 0 )
    {
      v6 = Context + 2216;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) == 0 )
      {
LABEL_15:
        *v5 = 0LL;
        v3 = *v2;
        goto LABEL_16;
      }
      v6 = Context + 2216;
      v2 = (_QWORD **)(Context + 1872);
    }
    v7 = MEMORY[0xFFFFF78000000008] - *v5;
    *((_QWORD *)Context + 278) += v7 / 0x2710;
    if ( v7 / 0x2710 >= 0x2710 )
    {
      ++*((_DWORD *)Context + 550);
      v5 = v6;
    }
    if ( !*((_QWORD *)Context + 276) )
      *((_QWORD *)Context + 276) = *(_QWORD *)(*((_QWORD *)Context + 3) + 5216LL);
    goto LABEL_15;
  }
LABEL_16:
  ++*((_DWORD *)Context + 548);
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pquuutx_EtwWriteTransfer(
      *((_QWORD *)Context + 3),
      &EventUnitDirectedPowerUpStart,
      (_DWORD)v5,
      *v3,
      *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
      Context[104],
      Context[105],
      Context[106]);
  RaidUnitReenablePendingTimer((__int64)Context, 0);
  *((_DWORD *)*v2 + 8) |= 8u;
  if ( RaidIsUnitControlSupported((__int64)Context, 5) )
    RaidUnitSendPoFxPowerRequiredToMiniport((__int64)Context);
  StorPortUnitDirectedPowerUpRequestD0(Context);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
}
