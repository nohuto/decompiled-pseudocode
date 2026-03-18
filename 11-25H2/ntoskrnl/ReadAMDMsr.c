/*
 * XREFs of ReadAMDMsr @ 0x1406A7F20
 * Callers:
 *     KiDisableCacheErrataSource @ 0x1405BF748 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
