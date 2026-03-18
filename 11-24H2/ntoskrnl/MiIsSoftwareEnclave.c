/*
 * XREFs of MiIsSoftwareEnclave @ 0x140451BA8
 * Callers:
 *     MmQueryVirtualMemory @ 0x140986420 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  return (v1 & 0x200000) != 0 && (v1 & 0xC000000) == 0x8000000 && (*(_DWORD *)(a1 + 64) & 1) == 0;
}
