/*
 * XREFs of ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802BD18C
 * Callers:
 *     ?ClearShape@CCursorState@@UEAAXXZ @ 0x1802BBD60 (-ClearShape@CCursorState@@UEAAXXZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802BC708 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     ?SetCrosshairProperties@CCursorState@@UEAAXK@Z @ 0x1802BD1C0 (-SetCrosshairProperties@CCursorState@@UEAAXK@Z.c)
 *     ?SetIsCrosshairEnabled@CCursorState@@UEAAX_N@Z @ 0x1802BD220 (-SetIsCrosshairEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetIsShadowEnabled@CCursorState@@UEAAX_N@Z @ 0x1802BD280 (-SetIsShadowEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z @ 0x1802BD2E0 (-SetIsTrailEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetPositionInternal@CCursorState@@AEAAXMM_N@Z @ 0x1802BD3BC (-SetPositionInternal@CCursorState@@AEAAXMM_N@Z.c)
 *     ?SetRotationAngle@CCursorState@@UEAAXM@Z @ 0x1802BD4E0 (-SetRotationAngle@CCursorState@@UEAAXM@Z.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x1802BD560 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 *     ?SetTrailLength@CCursorState@@UEAAJH@Z @ 0x1802BD870 (-SetTrailLength@CCursorState@@UEAAJH@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

void __fastcall CCursorState::ScheduleCompositionPass(CCursorState *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
    CComposition::ScheduleCompositionPass(v1, 0, 0x200000u);
}
