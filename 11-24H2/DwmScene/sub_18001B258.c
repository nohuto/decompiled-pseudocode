/*
 * XREFs of sub_18001B258 @ 0x18001B258
 * Callers:
 *     sub_18001B218 @ 0x18001B218 (sub_18001B218.c)
 *     sub_1800246B0 @ 0x1800246B0 (sub_1800246B0.c)
 *     sub_180025A2C @ 0x180025A2C (sub_180025A2C.c)
 *     sub_180037978 @ 0x180037978 (sub_180037978.c)
 *     sub_180039000 @ 0x180039000 (sub_180039000.c)
 *     sub_1800BADC0 @ 0x1800BADC0 (sub_1800BADC0.c)
 *     sub_1800CAE70 @ 0x1800CAE70 (sub_1800CAE70.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001B258(LPVOID lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
