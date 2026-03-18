/*
 * XREFs of IopGetRegistryBoolValue @ 0x140597DBC
 * Callers:
 *     IopLiveDumpInitRegistrySettings @ 0x14059B7E4 (IopLiveDumpInitRegistrySettings.c)
 * Callees:
 *     IopGetRegistryULongValue @ 0x140597DDC (IopGetRegistryULongValue.c)
 */

_BOOL8 IopGetRegistryBoolValue()
{
  return (unsigned int)IopGetRegistryULongValue() != 0;
}
