/*
 * XREFs of HaliPciInterfaceWriteConfig @ 0x1403AA320
 * Callers:
 *     HaliHandlePCIConfigSpaceAccess @ 0x14055F710 (HaliHandlePCIConfigSpaceAccess.c)
 *     HalpKdWritePCIConfig @ 0x14056A990 (HalpKdWritePCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x1403AA980 (HalpPCIConfig.c)
 */

__int64 __fastcall HaliPciInterfaceWriteConfig(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  HalpPCIConfig((unsigned int)a2 >> 8, a2, a3, a4, a5, a6, 1);
  return a6;
}
