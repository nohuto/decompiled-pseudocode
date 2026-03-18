/*
 * XREFs of ViDeadlockPluginUnload @ 0x140613FC0
 * Callers:
 *     <none>
 * Callees:
 *     ViDeadlockDetectionApplySettings @ 0x140B99188 (ViDeadlockDetectionApplySettings.c)
 */

void __noreturn ViDeadlockPluginUnload()
{
  ViDeadlockDetectionApplySettings(0LL);
}
