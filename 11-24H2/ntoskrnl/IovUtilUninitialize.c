/*
 * XREFs of IovUtilUninitialize @ 0x140B92D5C
 * Callers:
 *     ViIovPluginUnload @ 0x1406A4090 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}
