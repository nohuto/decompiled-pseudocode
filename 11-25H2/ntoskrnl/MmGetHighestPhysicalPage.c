/*
 * XREFs of MmGetHighestPhysicalPage @ 0x14046F044
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x14074697C (PopPreallocateHibernateMemory.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140933290 (PfpCopyUserPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 *     PopBuildMemoryImageHeader @ 0x140B54810 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + a1) + 18504LL);
}
