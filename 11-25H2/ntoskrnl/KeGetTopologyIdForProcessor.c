/*
 * XREFs of KeGetTopologyIdForProcessor @ 0x1405B6B2C
 * Callers:
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetTopologyIdForProcessor(__int64 a1, int a2)
{
  return *(unsigned int *)(a1 + 4LL * a2 + 36376);
}
