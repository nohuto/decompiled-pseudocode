/*
 * XREFs of PopDirectedDripsUmTestDeviceAllocate @ 0x140764470
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsUmTestDeviceAllocate(_RTL_AVL_TABLE *a1, unsigned int a2)
{
  return ExAllocatePool2(0x100uLL, a2, 0x4D554444u);
}
