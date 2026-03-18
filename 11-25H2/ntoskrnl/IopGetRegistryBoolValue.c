/*
 * XREFs of IopGetRegistryBoolValue @ 0x1405946AC
 * Callers:
 *     IopLiveDumpInitRegistrySettings @ 0x1405980D4 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     IopGetRegistryULongValue @ 0x1405946CC (IopGetRegistryULongValue.c)
 */

_BOOL8 IopGetRegistryBoolValue()
{
  return (unsigned int)IopGetRegistryULongValue() != 0;
}
