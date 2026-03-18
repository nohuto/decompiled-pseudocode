/*
 * XREFs of ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUSuperWetStroke@1@@Z @ 0x1801AB74C
 * Callers:
 *     ?OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801AB63C (-OnUpdatedLocalInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801009B4 (McTemplateU0xx_EventWriteTransfer.c)
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x180175B90 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 *     ?TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z @ 0x1801ACFF4 (-TryLookupDataForSource@CSuperWetInkManager@@AEAAPEAUSuperWetStroke@1@PEAVCSuperWetSource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::SetActiveSource(struct CSuperWetSource **this, struct IMonitorTarget **a2)
{
  struct CSuperWetSource *v4; // rdx
  struct IMonitorTarget *v5; // rcx
  struct IMonitorTarget *v6; // rdx

  v4 = *this;
  if ( *a2 != *this )
  {
    if ( v4 )
    {
      v6 = (struct IMonitorTarget *)*((_QWORD *)CSuperWetInkManager::TryLookupDataForSource(
                                                  (CSuperWetInkManager *)this,
                                                  v4)
                                    + 1);
      if ( v6 )
      {
        if ( v6 != a2[1] )
          CSuperWetInkManager::TurnOffScribblingForTarget((CSuperWetInkManager *)this, v6);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xx_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_SOURCEACTIVE, *a2, *this);
    v5 = *a2;
    *this = *a2;
    (*(void (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)v5 + 336LL))(v5);
  }
}
