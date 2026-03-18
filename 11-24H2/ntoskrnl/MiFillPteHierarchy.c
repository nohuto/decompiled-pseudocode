/*
 * XREFs of MiFillPteHierarchy @ 0x1403A9BF0
 * Callers:
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MiCreateSystemPageTable @ 0x140395350 (MiCreateSystemPageTable.c)
 *     MmFreeContiguousMemory @ 0x1403A93D0 (MmFreeContiguousMemory.c)
 *     MiKcsanPopulateHierarchy @ 0x1406799C0 (MiKcsanPopulateHierarchy.c)
 *     MiDbgCopyMemoryTarget @ 0x14067E900 (MiDbgCopyMemoryTarget.c)
 *     MiMapProcessExecutable @ 0x1408F8C84 (MiMapProcessExecutable.c)
 *     MiUpdateForkMaps @ 0x140A6680C (MiUpdateForkMaps.c)
 *     MxMapVa @ 0x140C53144 (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillPteHierarchy(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a2 = v2;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[1] = v3;
  result = 0xFFFFF68000000000uLL;
  v5 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  a2[2] = v5;
  a2[3] = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
