/*
 * XREFs of IovUtilUninitialize @ 0x140B94D5C
 * Callers:
 *     ViIovPluginUnload @ 0x1406A5090 (ViIovPluginUnload.c)
 * Callees:
 *     <none>
 */

void IovUtilUninitialize()
{
  IovUtilVerifierEnabled = 0;
}
