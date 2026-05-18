/*
 * XREFs of sub_18001B0F8 @ 0x18001B0F8
 * Callers:
 *     sub_18001B0B8 @ 0x18001B0B8 (sub_18001B0B8.c)
 *     sub_180024550 @ 0x180024550 (sub_180024550.c)
 *     sub_1800258CC @ 0x1800258CC (sub_1800258CC.c)
 *     sub_180037818 @ 0x180037818 (sub_180037818.c)
 *     sub_180038EA0 @ 0x180038EA0 (sub_180038EA0.c)
 *     sub_1800BAC60 @ 0x1800BAC60 (sub_1800BAC60.c)
 *     sub_1800CAD10 @ 0x1800CAD10 (sub_1800CAD10.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001B0F8(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
