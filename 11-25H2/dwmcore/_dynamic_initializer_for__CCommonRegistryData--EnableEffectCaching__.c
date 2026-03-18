/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::EnableEffectCaching__ @ 0x180005BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool dynamic_initializer_for__CCommonRegistryData::EnableEffectCaching__()
{
  bool result; // al
  int v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( (unsigned int)GetPersistedRegistryValueW(
                       L"DWMSwitches",
                       L"Software\\Microsoft\\Windows\\Dwm",
                       L"EnableEffectCaching",
                       16LL,
                       0LL,
                       &v1,
                       4,
                       0LL) )
    result = 1;
  else
    result = v1 != 0;
  CCommonRegistryData::EnableEffectCaching = result;
  return result;
}
