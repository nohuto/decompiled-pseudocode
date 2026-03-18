/*
 * XREFs of ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180212F40
 * Callers:
 *     _dynamic_initializer_for__CCommonRegistryData::GameAreaScreenRatio__ @ 0x180007830 (_dynamic_initializer_for__CCommonRegistryData--GameAreaScreenRatio__.c)
 *     ?Load@?$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z @ 0x180212F10 (-Load@-$CRegistryKeyLoader@K@details@@SAKPEBGKW4DwmRegistrySubkey@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegGetDwmDwordHelper(__int64 a1, __int64 a2, int a3)
{
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rcx
  int v8; // r8d

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v5 = L"Software\\Microsoft\\Windows\\Dwm\\Scene";
    }
    else
    {
      if ( a3 == 2 )
      {
        v5 = L"Software\\Microsoft\\Windows\\Dwm\\GpuAccelInkTiming";
        goto LABEL_12;
      }
      v5 = 0LL;
      v8 = a3 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          v6 = 0LL;
          return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
        }
LABEL_12:
        v6 = L"SuperWetTiming";
        return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
      }
    }
    v6 = L"DWMSceneSwitches";
    return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
  }
  v5 = L"Software\\Microsoft\\Windows\\Dwm";
  v6 = L"DWMSwitches";
  return (unsigned int)GetPersistedRegistryValueW(v6, v5, a1, 16LL, 0LL, a2, 4, 0LL) == 0;
}
