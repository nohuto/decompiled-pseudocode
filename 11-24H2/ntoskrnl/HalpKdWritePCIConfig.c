/*
 * XREFs of HalpKdWritePCIConfig @ 0x14056A990
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceWriteConfig @ 0x1403AA320 (HaliPciInterfaceWriteConfig.c)
 */

__int64 __fastcall HalpKdWritePCIConfig(unsigned int a1, unsigned int a2, __int64 a3, int a4, unsigned int a5)
{
  return HaliPciInterfaceWriteConfig(0LL, a1, a2, a3, a4, a5);
}
