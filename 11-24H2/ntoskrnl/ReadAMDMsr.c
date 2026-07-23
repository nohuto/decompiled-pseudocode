/*
 * XREFs of ReadAMDMsr @ 0x1406B4190
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1405C0DF8 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
