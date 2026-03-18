/*
 * XREFs of ?ScheduleCompositionPass@CCursorState@@AEAAXXZ @ 0x1802B3C48
 * Callers:
 *     ?ClearShape@CCursorState@@UEAAXXZ @ 0x1802B2320 (-ClearShape@CCursorState@@UEAAXXZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAA_N_K@Z @ 0x1802B30A8 (-ProcessStateChanges@CCursorState@@QEAA_N_K@Z.c)
 *     ?SetCrosshairProperties@CCursorState@@UEAAXK@Z @ 0x1802B3C70 (-SetCrosshairProperties@CCursorState@@UEAAXK@Z.c)
 *     ?SetIsCrosshairEnabled@CCursorState@@UEAAX_N@Z @ 0x1802B4070 (-SetIsCrosshairEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetIsShadowEnabled@CCursorState@@UEAAX_N@Z @ 0x1802B40D0 (-SetIsShadowEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetIsTrailEnabled@CCursorState@@UEAAX_N@Z @ 0x1802B4130 (-SetIsTrailEnabled@CCursorState@@UEAAX_N@Z.c)
 *     ?SetPosition@CCursorState@@UEAAXMM@Z @ 0x1802B41A0 (-SetPosition@CCursorState@@UEAAXMM@Z.c)
 *     ?SetRotationAngle@CCursorState@@UEAAXM@Z @ 0x1802B4300 (-SetRotationAngle@CCursorState@@UEAAXM@Z.c)
 *     ?SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z @ 0x1802B4380 (-SetShape@CCursorState@@UEAAJPEAXIIII_NM@Z.c)
 *     ?SetTrailLength@CCursorState@@UEAAJH@Z @ 0x1802B4700 (-SetTrailLength@CCursorState@@UEAAJH@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

void __fastcall CCursorState::ScheduleCompositionPass(CCursorState *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
    CComposition::ScheduleCompositionPass(v1, 0, 0x200000u);
}
