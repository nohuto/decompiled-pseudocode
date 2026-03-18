/*
 * XREFs of MiIsSoftwareEnclave @ 0x14044F474
 * Callers:
 *     MmQueryVirtualMemory @ 0x1409D0670 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsSoftwareEnclave(__int64 a1)
{
  return (*(_DWORD *)(a1 + 48) & 0xC200000) == 0x8200000 && (*(_DWORD *)(a1 + 64) & 1) == 0;
}
