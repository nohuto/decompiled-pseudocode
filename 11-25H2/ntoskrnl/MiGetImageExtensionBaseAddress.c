/*
 * XREFs of MiGetImageExtensionBaseAddress @ 0x140A2BA60
 * Callers:
 *     MiMapImageScpCfgPages @ 0x1402A69D0 (MiMapImageScpCfgPages.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiQueryImageExtensionInformation @ 0x140479334 (MiQueryImageExtensionInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetImageExtensionBaseAddress(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(***(_QWORD ***)(a1 + 72) + 8LL) << 12)
       + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
}
