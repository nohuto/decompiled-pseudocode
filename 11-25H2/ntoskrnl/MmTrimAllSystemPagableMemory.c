/*
 * XREFs of MmTrimAllSystemPagableMemory @ 0x14066D5F0
 * Callers:
 *     <none>
 * Callees:
 *     MiTrimAllSystemPagableMemory @ 0x14066D43C (MiTrimAllSystemPagableMemory.c)
 */

__int64 __fastcall MmTrimAllSystemPagableMemory(int a1)
{
  return MiTrimAllSystemPagableMemory(a1);
}
