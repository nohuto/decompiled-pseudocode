/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1404684E4
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x140750D6C (PopPreallocateHibernateMemory.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1408F61E0 (PfpCopyUserPfnPrioRequest.c)
 *     PopEnableHiberFile @ 0x140AAE8C0 (PopEnableHiberFile.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     PopBuildMemoryImageHeader @ 0x140B66A30 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E300C8 + a1) + 18504LL);
}
