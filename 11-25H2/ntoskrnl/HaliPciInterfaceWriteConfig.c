/*
 * XREFs of HaliPciInterfaceWriteConfig @ 0x140281430
 * Callers:
 *     HaliHandlePCIConfigSpaceAccess @ 0x14055F1E0 (HaliHandlePCIConfigSpaceAccess.c)
 *     HalpKdWritePCIConfig @ 0x14056A200 (HalpKdWritePCIConfig.c)
 * Callees:
 *     HalpPCIConfig @ 0x140282B20 (HalpPCIConfig.c)
 */

__int64 __fastcall HaliPciInterfaceWriteConfig(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  HalpPCIConfig(a2 >> 8);
  return a6;
}
