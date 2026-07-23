/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x1405A3BF8
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x140728A48 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1409C7B64 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int i; // edi

  v1 = 0;
  for ( i = 0; i < 0xB; ++i )
  {
    if ( !wcsicmp((&off_140B3ED30)[2 * i], Str2) )
      return *((unsigned int *)&off_140B3ED30 + 4 * i + 2);
  }
  return v1;
}
