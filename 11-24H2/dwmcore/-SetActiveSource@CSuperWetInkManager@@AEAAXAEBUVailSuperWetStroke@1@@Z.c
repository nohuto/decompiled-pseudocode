/*
 * XREFs of ?SetActiveSource@CSuperWetInkManager@@AEAAXAEBUVailSuperWetStroke@1@@Z @ 0x18024DAD4
 * Callers:
 *     ?OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x1801A0EE0 (-OnUpdatedVailInkReceived@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 * Callees:
 *     McTemplateU0xx_EventWriteTransfer @ 0x1801A6D58 (McTemplateU0xx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkManager::SetActiveSource(
        CSuperWetInkManager *this,
        const struct CSuperWetInkManager::VailSuperWetStroke *a2)
{
  __int64 v4; // rcx

  if ( *(_QWORD *)a2 != *(_QWORD *)this )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      McTemplateU0xx_EventWriteTransfer((__int64)this, &EVTDESC_COMPUTESCRIBBLE_SOURCEACTIVE, *(_QWORD *)a2);
    v4 = *(_QWORD *)a2;
    *(_QWORD *)this = *(_QWORD *)a2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 336LL))(v4);
  }
}
