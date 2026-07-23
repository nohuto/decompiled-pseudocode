/*
 * XREFs of HalpKdReadPCIConfig @ 0x14056A960
 * Callers:
 *     <none>
 * Callees:
 *     HaliPciInterfaceReadConfig @ 0x1403AA360 (HaliPciInterfaceReadConfig.c)
 */

__int64 __fastcall HalpKdReadPCIConfig(unsigned int a1, unsigned int a2, _WORD *a3, int a4, int a5)
{
  ULONG_PTR v6; // [rsp+20h] [rbp-18h]
  size_t v7; // [rsp+28h] [rbp-10h]

  LODWORD(v7) = a5;
  LODWORD(v6) = a4;
  return HaliPciInterfaceReadConfig(0LL, (ULONG_PTR *)a1, a2, a3, v6, v7);
}
