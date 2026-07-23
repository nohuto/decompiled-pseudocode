/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140B9B188
 * Callers:
 *     ViDeadlockPluginUnload @ 0x140612580 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140B99DEC (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140B9A240 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140B9D260 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x140612828 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140612860 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140B9B1D4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140B9B20C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140B9B23C (ViDeadlockEmptyDatabase.c)
 */

__int64 __fastcall ViDeadlockDetectionApplySettings(int a1)
{
  unsigned __int8 v1; // bl

  if ( !a1 )
    return ViDeadlockEmptyDatabase();
  v1 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v1);
}
