/*
 * XREFs of PiDevCfgGetDriverConfigurationKeyScope @ 0x1405A6C08
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072AC78 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140A7E6CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     _wcsicmp @ 0x1404FE3B0 (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetDriverConfigurationKeyScope(wchar_t *Str2)
{
  unsigned int v1; // ebx
  unsigned int i; // edi

  v1 = 0;
  for ( i = 0; i < 0xB; ++i )
  {
    if ( !wcsicmp((&off_140B3CF50)[2 * i], Str2) )
      return *((unsigned int *)&off_140B3CF50 + 4 * i + 2);
  }
  return v1;
}
