/*
 * XREFs of sub_18001B0C4 @ 0x18001B0C4
 * Callers:
 *     sub_180010080 @ 0x180010080 (sub_180010080.c)
 *     sub_180014644 @ 0x180014644 (sub_180014644.c)
 *     sub_180016018 @ 0x180016018 (sub_180016018.c)
 *     sub_18001613C @ 0x18001613C (sub_18001613C.c)
 *     sub_180016260 @ 0x180016260 (sub_180016260.c)
 *     sub_180016350 @ 0x180016350 (sub_180016350.c)
 *     sub_18001641C @ 0x18001641C (sub_18001641C.c)
 *     sub_1800164E8 @ 0x1800164E8 (sub_1800164E8.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180037818 @ 0x180037818 (sub_180037818.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_18001B0C4(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
