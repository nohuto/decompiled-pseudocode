/*
 * XREFs of ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014D0F4
 * Callers:
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14014BC38 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x14014BE40 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@PEAW4ProcessingDecision@1@@Z @ 0x14014DB80 (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     IsImmersiveBand @ 0x14014E660 (IsImmersiveBand.c)
 *     ?RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ @ 0x1401CB768 (-RestoreStateSettingEnabled@DesktopRecalcSettings@@YA_NXZ.c)
 */

bool __fastcall CRecalcState::ShouldStoreAfterProcessing(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // r8
  DesktopRecalcSettings *v3; // rcx
  __int64 v4; // r8

  if ( *((_DWORD *)this + 6) == 2
    || (unsigned int)IsImmersiveBand(a2)
    || !*(_QWORD *)(v2 + 72)
    || IsRectEmptyInl((const struct tagRECT *)(v2 + 28)) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v4 + 64) == 1 )
    return 1;
  return DesktopRecalcSettings::RestoreStateSettingEnabled(v3);
}
