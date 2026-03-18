/*
 * XREFs of MiFillPteHierarchy @ 0x14038B8B0
 * Callers:
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MiCreateSystemPageTable @ 0x1402D0110 (MiCreateSystemPageTable.c)
 *     MmFreeContiguousMemory @ 0x14038B3D0 (MmFreeContiguousMemory.c)
 *     MiKcsanPopulateHierarchy @ 0x14066E114 (MiKcsanPopulateHierarchy.c)
 *     MiDbgCopyMemoryTarget @ 0x1406730E0 (MiDbgCopyMemoryTarget.c)
 *     MiMapProcessExecutable @ 0x1409051BC (MiMapProcessExecutable.c)
 *     MiUpdateForkMaps @ 0x140A6EA7C (MiUpdateForkMaps.c)
 *     MxMapVa @ 0x140C41F14 (MxMapVa.c)
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
