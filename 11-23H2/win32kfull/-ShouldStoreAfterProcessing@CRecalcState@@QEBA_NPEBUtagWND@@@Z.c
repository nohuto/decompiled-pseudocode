/*
 * XREFs of ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C005BD10
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C005DA2C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C0060238 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x1C0225A2C (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     ?ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ @ 0x1C005B534 (-ShouldSaveAndRestorePreviousRecalcInfos@DesktopRecalcSettings@@YA_NXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsNonImmersiveBand @ 0x1C00AD39C (IsNonImmersiveBand.c)
 */

bool __fastcall CRecalcState::ShouldStoreAfterProcessing(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // r8
  DesktopRecalcSettings *v3; // rcx
  __int64 v4; // r8

  if ( *((_DWORD *)this + 6) == 2
    || !(unsigned int)IsNonImmersiveBand(a2, a2, this)
    || !*(_QWORD *)(v2 + 72)
    || (unsigned int)IsRectEmptyInl((const struct tagRECT *)(v2 + 28)) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v4 + 64) == 1 )
    return 1;
  return DesktopRecalcSettings::ShouldSaveAndRestorePreviousRecalcInfos(v3);
}
