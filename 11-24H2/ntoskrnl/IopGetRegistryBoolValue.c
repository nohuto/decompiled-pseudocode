/*
 * XREFs of IopGetRegistryBoolValue @ 0x140594D38
 * Callers:
 *     IopLiveDumpInitRegistrySettings @ 0x140598764 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     IopGetRegistryULongValue @ 0x140594D58 (IopGetRegistryULongValue.c)
 */

_BOOL8 IopGetRegistryBoolValue()
{
  return (unsigned int)IopGetRegistryULongValue() != 0;
}
