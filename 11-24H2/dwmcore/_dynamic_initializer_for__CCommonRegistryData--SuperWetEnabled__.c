/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::SuperWetEnabled__ @ 0x180221B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool dynamic_initializer_for__CCommonRegistryData::SuperWetEnabled__()
{
  bool result; // al
  int v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( (unsigned int)GetPersistedRegistryValueW(
                       L"DWMSwitches",
                       L"Software\\Microsoft\\Windows\\Dwm",
                       L"SuperWetEnabled",
                       16LL,
                       0LL,
                       &v1,
                       4,
                       0LL) )
    result = 1;
  else
    result = v1 != 0;
  CCommonRegistryData::SuperWetEnabled = result;
  return result;
}
