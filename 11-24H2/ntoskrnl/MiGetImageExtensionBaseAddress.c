/*
 * XREFs of MiGetImageExtensionBaseAddress @ 0x140A1FFB0
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiMapImageScpCfgPages @ 0x140294080 (MiMapImageScpCfgPages.c)
 *     MiQueryImageExtensionInformation @ 0x140470764 (MiQueryImageExtensionInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetImageExtensionBaseAddress(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(***(_QWORD ***)(a1 + 72) + 8LL) << 12)
       + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
}
