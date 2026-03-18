/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140B99188
 * Callers:
 *     ViDeadlockPluginUnload @ 0x140613FC0 (ViDeadlockPluginUnload.c)
 *     VfDeadlockInitialize @ 0x140B97DEC (VfDeadlockInitialize.c)
 *     VfDeadlockPluginEntry @ 0x140B98240 (VfDeadlockPluginEntry.c)
 *     VfSettingsCheckForChanges @ 0x140B9B260 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x140614268 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406142A0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140B991D4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140B9920C (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x140B9923C (ViDeadlockEmptyDatabase.c)
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
