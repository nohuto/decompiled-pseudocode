/*
 * XREFs of IovUtilUninitialize @ 0x140B82D7C
 * Callers:
 *     ViIovPluginUnload @ 0x140698E60 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}
