/*
 * XREFs of StorPortUnitPowerRequiredStep1 @ 0x14002E610
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaidUnitReenablePendingTimer @ 0x14002E7B0 (RaidUnitReenablePendingTimer.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x14002E8AC (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x14002E9DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x1400763D8 (McTemplateK0pquuutx_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPowerRequiredStep1(char *Context)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdx
  char *v6; // r9
  unsigned __int64 v7; // rcx

  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    return;
  v2 = Context + 2152;
  if ( *((_QWORD *)Context + 269) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 0x20) != 0 )
    {
      v6 = Context + 2152;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) == 0 )
      {
LABEL_19:
        *v2 = 0LL;
        goto LABEL_3;
      }
      v6 = Context + 2152;
    }
    v7 = MEMORY[0xFFFFF78000000008] - *v2;
    *((_QWORD *)Context + 270) += v7 / 0x2710;
    if ( v7 / 0x2710 >= 0x2710 )
    {
      ++*((_DWORD *)Context + 550);
      v2 = v6;
    }
    if ( !*((_QWORD *)Context + 266) )
      *((_QWORD *)Context + 266) = *(_QWORD *)(*((_QWORD *)Context + 3) + 5216LL);
    goto LABEL_19;
  }
LABEL_3:
  ++*((_DWORD *)Context + 548);
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pquuutx_EtwWriteTransfer(
      *((_QWORD *)Context + 3),
      (unsigned int)&EventUnitPowerRequiredStart,
      (_DWORD)v2,
      **((_QWORD **)Context + 234),
      *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
      Context[104],
      Context[105],
      Context[106]);
  RaidUnitReenablePendingTimer(Context, 0LL);
  *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) |= 8u;
  v3 = *((_QWORD *)Context + 234);
  v4 = *(_DWORD *)(v3 + 32);
  if ( (v4 & 0x10) != 0 )
    *(_DWORD *)(v3 + 32) = v4 & 0xFFFFFFEF;
  else
    *((_DWORD *)Context + 234) = 1;
  if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 4) != 0 )
  {
    if ( RaidIsUnitControlSupported((__int64)Context, 5) )
    {
      LOBYTE(v5) = 1;
      RaidUnitSendPoFxPowerRequiredToMiniport(Context, v5);
    }
  }
  StorPortUnitPowerRequiredStep2(Context);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
}
