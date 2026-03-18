/*
 * XREFs of MmGetHighestPhysicalPage @ 0x14046DA3C
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x140752A4C (PopPreallocateHibernateMemory.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1409336C0 (PfpCopyUserPfnPrioRequest.c)
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     PopBuildMemoryImageHeader @ 0x140B64920 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FF88 + a1) + 18504LL);
}
